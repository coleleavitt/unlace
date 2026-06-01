unsigned __int64 __fastcall sub_41CF90(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  __m128i si128; // [rsp+8h] [rbp-40h]
  __int64 v11; // [rsp+18h] [rbp-30h]
  __int64 v12; // [rsp+20h] [rbp-28h]
  unsigned __int64 v13; // [rsp+28h] [rbp-20h]

  v4 = *(int *)(a2 + 8);
  v13 = __readfsqword(0x28u);
  v9 = 0;
  v11 = 0;
  v6 = *(_QWORD *)(switch_dbctx(v4) + 1672);
  v12 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  if ( (unsigned __int8)sub_41B800(v6, (__m128i *)&v9, a3) )
  {
    v7 = switch_dbctx(*(int *)(a1 + 8));
    sub_41CDC0(*(_QWORD **)(v7 + 1672), a3, (unsigned __int16 *)&v9);
  }
  return v13 - __readfsqword(0x28u);
}
