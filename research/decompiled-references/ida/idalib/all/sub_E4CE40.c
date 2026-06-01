void __fastcall sub_E4CE40(__int64 a1, __int64 a2, __int64 a3)
{
  __m128 v3; // xmm0
  __int64 *v4; // rdi
  double v5[2]; // [rsp+0h] [rbp-138h] BYREF
  __m128 v6; // [rsp+10h] [rbp-128h] BYREF
  __int16 v7; // [rsp+20h] [rbp-118h]
  char v8; // [rsp+22h] [rbp-116h]
  __int64 v9; // [rsp+28h] [rbp-110h]
  __int128 v10; // [rsp+30h] [rbp-108h]
  void **v11; // [rsp+40h] [rbp-F8h] BYREF
  void *v12; // [rsp+48h] [rbp-F0h] BYREF
  __int64 v13; // [rsp+50h] [rbp-E8h]
  _BYTE v14[64]; // [rsp+58h] [rbp-E0h] BYREF
  void *ptr; // [rsp+98h] [rbp-A0h]
  __int64 v16; // [rsp+A0h] [rbp-98h]
  _BYTE v17[64]; // [rsp+A8h] [rbp-90h] BYREF
  void ***v18; // [rsp+E8h] [rbp-50h]
  __int64 *v19; // [rsp+F0h] [rbp-48h]
  __int64 v20; // [rsp+F8h] [rbp-40h]
  __int64 v21; // [rsp+100h] [rbp-38h]
  unsigned int v22; // [rsp+108h] [rbp-30h]
  __int64 v23; // [rsp+110h] [rbp-28h]
  __int64 v24; // [rsp+118h] [rbp-20h]
  unsigned int v25; // [rsp+120h] [rbp-18h]

  *(_QWORD *)&v5[0] = a3;
  *(_QWORD *)&v5[1] = a1;
  v7 = 0;
  v12 = v14;
  v3 = _mm_loadh_ps(v5);
  v13 = 0x400000000LL;
  v16 = 0x400000000LL;
  v6 = v3;
  v18 = &v11;
  v10 = 0;
  ptr = v17;
  v11 = &v12;
  v8 = 0;
  v9 = 0;
  v19 = nullptr;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  sub_E4CD40(&v6, a2);
  operator delete(v23, 24LL * v25, 8);
  operator delete(v20, 16LL * v22, 8);
  v4 = v19;
  if ( v19 )
  {
    sub_E3ABF0(
      v19,
      (char *)(*v19 + 16LL * *((unsigned int *)v19 + 2)),
      (char *)v12,
      (char *)v12 + 16 * (unsigned int)v13);
    sub_E3ABF0(
      v19 + 10,
      (char *)(v19[10] + 16LL * *((unsigned int *)v19 + 22)),
      (char *)ptr,
      (char *)ptr + 16 * (unsigned int)v16);
    v4 = v19;
  }
  *v18 = (void **)v4;
  if ( ptr != v17 )
    free(ptr);
  if ( v12 != v14 )
    free(v12);
}
