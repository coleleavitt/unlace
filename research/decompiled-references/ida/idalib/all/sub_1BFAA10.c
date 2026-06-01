unsigned __int64 __fastcall sub_1BFAA10(
        __int64 a1,
        unsigned __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 *v7; // r14
  __int64 v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // [rsp-10h] [rbp-68h]
  __int64 v18; // [rsp+8h] [rbp-50h]
  unsigned __int64 v19; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+18h] [rbp-40h]

  v7 = a3;
  v10 = *a3;
  v11 = *(_QWORD *)(a1 + 248);
  LODWORD(a3) = 0;
  v20 = 0;
  v19 = 0;
  v12 = *(_QWORD *)&byte_8[*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v12 & 8) != 0 )
    a3 = *(__int64 **)((char *)&qword_18 + (v12 & 0xFFFFFFFFFFFFFFF0LL));
  v13 = sub_A70E70(v11, a2, (unsigned int)a3 >> 9);
  v20 = a2;
  v19 = sub_A73030(v11, v13, 1u);
  sub_1BFA6B0(a1, (__int64)&v19, (__int64)v7, a4, a5, 1, a6, a7, 0);
  result = a2 & 7;
  if ( !(a2 & 4 | *(_DWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 4) )
  {
    v18 = *(_QWORD *)(a1 + 248);
    v15 = sub_1BC70F0(v18, result | 4 | a2 & 0xFFFFFFFFFFFFFFF8LL, *v7);
    v16 = sub_A73030(v18, v15, 1u);
    v20 = a2;
    v19 = v16;
    sub_1BFA6B0(a1, (__int64)&v19, (__int64)v7, a4, a5, 1, a6, a7, 0);
    return v17;
  }
  return result;
}
