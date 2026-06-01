void __fastcall sub_E33330(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __m128 v5; // xmm0
  _DWORD *v6; // rdx
  __int64 v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // [rsp+8h] [rbp-140h] BYREF
  __m128 v10; // [rsp+10h] [rbp-138h] BYREF
  __int16 v11; // [rsp+20h] [rbp-128h]
  char v12; // [rsp+22h] [rbp-126h]
  __int64 v13; // [rsp+28h] [rbp-120h]
  __int128 v14; // [rsp+30h] [rbp-118h]
  void **v15; // [rsp+40h] [rbp-108h] BYREF
  void *v16; // [rsp+48h] [rbp-100h] BYREF
  __int64 v17; // [rsp+50h] [rbp-F8h]
  _BYTE v18[64]; // [rsp+58h] [rbp-F0h] BYREF
  void *ptr; // [rsp+98h] [rbp-B0h]
  __int64 v20; // [rsp+A0h] [rbp-A8h]
  _BYTE v21[64]; // [rsp+A8h] [rbp-A0h] BYREF
  void ***v22; // [rsp+E8h] [rbp-60h]
  __int64 *v23; // [rsp+F0h] [rbp-58h]
  __int64 v24; // [rsp+F8h] [rbp-50h]
  __int64 v25; // [rsp+100h] [rbp-48h]
  int v26; // [rsp+108h] [rbp-40h]
  __int64 v27; // [rsp+110h] [rbp-38h]
  __int64 v28; // [rsp+118h] [rbp-30h]
  int v29; // [rsp+120h] [rbp-28h]

  v11 = 0;
  v16 = v18;
  v9 = a4;
  v17 = 0x400000000LL;
  v20 = 0x400000000LL;
  v22 = &v15;
  v5 = _mm_loadh_ps((const double *)&v9);
  ptr = v21;
  v6 = *(_DWORD **)(a4 + 32);
  v15 = &v16;
  v7 = *(_QWORD *)(a4 + 24);
  v10 = v5;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v23 = nullptr;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  if ( (unsigned __int64)(v7 - (_QWORD)v6) > 3 )
  {
    *v6 = 1380407903;
    *(_QWORD *)(a4 + 32) += 4LL;
  }
  else
  {
    sub_22581D0(a4, "_ZGR", 4);
  }
  sub_E2DBE0((__int64)&v10, a2, 0, (__m128)0LL);
  sub_E14B10(&v10.m128_i64[1], a3 - 1);
  operator delete();
  operator delete();
  v8 = v23;
  if ( v23 )
  {
    sub_E16EB0(
      v23,
      (char *)(*v23 + 16LL * *((unsigned int *)v23 + 2)),
      (char *)v16,
      (char *)v16 + 16 * (unsigned int)v17);
    sub_E16EB0(
      v23 + 10,
      (char *)(v23[10] + 16LL * *((unsigned int *)v23 + 22)),
      (char *)ptr,
      (char *)ptr + 16 * (unsigned int)v20);
    v8 = v23;
  }
  *v22 = (void **)v8;
  if ( ptr != v21 )
    free(ptr);
  if ( v16 != v18 )
    free(v16);
}

