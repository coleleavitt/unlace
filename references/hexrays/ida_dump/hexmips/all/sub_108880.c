__int64 __fastcall sub_108880(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __m128i *v6; // rdi
  __int64 v7; // rax
  __m128i *v8; // rdi
  const __m128i *v10; // [rsp+8h] [rbp-50h] BYREF
  __int64 v11; // [rsp+10h] [rbp-48h] BYREF
  char v12; // [rsp+18h] [rbp-40h]
  unsigned __int64 v13; // [rsp+28h] [rbp-30h]

  v13 = __readfsqword(0x28u);
  if ( *((_BYTE *)a2 + 8) != 5 )
    sub_FDB30(a1, a2, a3, a4);
  v6 = *(__m128i **)(a1 + 8);
  v11 = *a2;
  v4 = v11;
  v12 = 5;
  v10 = (const __m128i *)&v11;
  sub_1078A0(v6, (__int64)&v11, &v10);
  v7 = *((int *)a2 + 3);
  v8 = *(__m128i **)(a1 + 8);
  v12 = 5;
  v10 = (const __m128i *)&v11;
  v11 = v4 + v7;
  sub_1078A0(v8, (__int64)&v11, &v10);
  return 0;
}
