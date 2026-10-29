void __fastcall sub_E56C50(__int64 a1, __int64 a2, __int64 a3)
{
  __m128 v4; // xmm0
  _DWORD *v5; // rcx
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 v8; // [rsp+8h] [rbp-140h] BYREF
  __m128 v9; // [rsp+10h] [rbp-138h] BYREF
  __int16 v10; // [rsp+20h] [rbp-128h]
  char v11; // [rsp+22h] [rbp-126h]
  __int64 v12; // [rsp+28h] [rbp-120h]
  __int128 v13; // [rsp+30h] [rbp-118h]
  void **v14; // [rsp+40h] [rbp-108h] BYREF
  void *v15; // [rsp+48h] [rbp-100h] BYREF
  __int64 v16; // [rsp+50h] [rbp-F8h]
  _BYTE v17[64]; // [rsp+58h] [rbp-F0h] BYREF
  void *ptr; // [rsp+98h] [rbp-B0h]
  __int64 v19; // [rsp+A0h] [rbp-A8h]
  _BYTE v20[64]; // [rsp+A8h] [rbp-A0h] BYREF
  void ***v21; // [rsp+E8h] [rbp-60h]
  __int64 *v22; // [rsp+F0h] [rbp-58h]
  __int64 v23; // [rsp+F8h] [rbp-50h]
  __int64 v24; // [rsp+100h] [rbp-48h]
  unsigned int v25; // [rsp+108h] [rbp-40h]
  __int64 v26; // [rsp+110h] [rbp-38h]
  __int64 v27; // [rsp+118h] [rbp-30h]
  unsigned int v28; // [rsp+120h] [rbp-28h]

  v8 = a3;
  v10 = 0;
  v15 = v17;
  v16 = 0x400000000LL;
  v4 = _mm_loadh_ps((const double *)&v8);
  v19 = 0x400000000LL;
  v21 = &v14;
  ptr = v20;
  v5 = *(_DWORD **)(a3 + 32);
  v14 = &v15;
  v6 = *(_QWORD *)(a3 + 24);
  v9 = v4;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v22 = nullptr;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  if ( (unsigned __int64)(v6 - (_QWORD)v5) > 3 )
  {
    *v5 = 1213487711;
    *(_QWORD *)(a3 + 32) += 4LL;
  }
  else
  {
    sub_227BF10(a3, "_ZTH", 4);
  }
  sub_E51920((__int64)&v9, a2, 0, (__m128)0LL);
  operator delete(v26, 24LL * v28, 8);
  operator delete(v23, 16LL * v25, 8);
  v7 = v22;
  if ( v22 )
  {
    sub_E3ABF0(
      v22,
      (char *)(*v22 + 16LL * *((unsigned int *)v22 + 2)),
      (char *)v15,
      (char *)v15 + 16 * (unsigned int)v16);
    sub_E3ABF0(
      v22 + 10,
      (char *)(v22[10] + 16LL * *((unsigned int *)v22 + 22)),
      (char *)ptr,
      (char *)ptr + 16 * (unsigned int)v19);
    v7 = v22;
  }
  *v21 = (void **)v7;
  if ( ptr != v20 )
    free(ptr);
  if ( v15 != v17 )
    free(v15);
}
