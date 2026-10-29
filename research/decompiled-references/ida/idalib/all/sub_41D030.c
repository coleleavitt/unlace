__int64 __fastcall sub_41D030(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 (__fastcall *v6)(__int64, __int64, unsigned __int64); // rax
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+8h] [rbp-40h]
  __int64 v12; // [rsp+18h] [rbp-30h]
  __int64 v13; // [rsp+20h] [rbp-28h]
  unsigned __int64 v14; // [rsp+28h] [rbp-20h]

  v4 = *(_QWORD *)a1;
  v14 = __readfsqword(0x28u);
  v6 = *(unsigned __int64 (__fastcall **)(__int64, __int64, unsigned __int64))(v4 + 80);
  if ( v6 != sub_41CF90 )
    return v6(a1, a2, a3);
  v7 = *(_QWORD *)(switch_dbctx(*(int *)(a2 + 8)) + 1672);
  v10 = 0;
  v12 = 0;
  v13 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  if ( (unsigned __int8)sub_41B800(v7, (__m128i *)&v10, a3) )
  {
    v9 = switch_dbctx(*(int *)(a1 + 8));
    sub_41CDC0(*(_QWORD **)(v9 + 1672), a3, (unsigned __int16 *)&v10);
  }
  return v14 - __readfsqword(0x28u);
}
