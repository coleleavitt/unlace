__int64 __fastcall sub_CA56C0(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5,
        __int64 *a6)
{
  __int64 *v9; // rbx
  unsigned int v12; // [rsp+Ch] [rbp-4Ch] BYREF
  unsigned __int8 v13; // [rsp+17h] [rbp-41h] BYREF
  _QWORD v14[8]; // [rsp+18h] [rbp-40h] BYREF

  v9 = (__int64 *)(a1 + 440);
  v12 = a2;
  v13 = 1;
  sub_C9FC00((__int64 *)(a1 + 440), &v12, &v13);
  if ( (*a6 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
    v14[0] = *(_QWORD *)(a1 + 448) - *(_QWORD *)(a1 + 440);
    sub_C9FE10(a1 + 464, v14, a6);
  }
  sub_C9FB80(v9, a3, &v13);
  sub_C9FB80(v9, a4, &v13);
  sub_C9FB80(v9, a5, &v13);
  return v13;
}
