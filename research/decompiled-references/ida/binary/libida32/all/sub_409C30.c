__int64 __fastcall sub_409C30(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rax
  unsigned __int64 (__fastcall *v5)(__int64, __int64, unsigned int); // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v10; // rax
  __m128i v11; // [rsp+0h] [rbp-38h] BYREF
  __int64 v12; // [rsp+10h] [rbp-28h]
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v3 = *a1;
  v13 = __readfsqword(0x28u);
  v5 = *(unsigned __int64 (__fastcall **)(__int64, __int64, unsigned int))(v3 + 80);
  if ( v5 != sub_409B90 )
    return ((__int64 (__fastcall *)(__int64 *))v5)(a1);
  v7 = switch_dbctx(*(int *)(a2 + 8));
  v11.m128i_i64[0] = 0;
  v12 = 0;
  v8 = *(_QWORD *)(v7 + 1480);
  v11.m128i_i64[1] = 0xFFFFFFFF00000000LL;
  if ( (unsigned __int8)sub_408580(v8, &v11, a3) )
  {
    v10 = switch_dbctx(*((int *)a1 + 2));
    sub_4099C0(*(_QWORD **)(v10 + 1480), a3, (unsigned __int16 *)&v11);
  }
  return v13 - __readfsqword(0x28u);
}

