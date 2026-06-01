void __fastcall sub_E48280(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __m128 v5; // xmm0
  _DWORD *v6; // rcx
  __int64 v7; // rdx
  __int64 *v8; // rdi
  __int64 v9; // [rsp+8h] [rbp-140h] BYREF
  __m128 v10; // [rsp+10h] [rbp-138h] BYREF
  char v11; // [rsp+20h] [rbp-128h]
  __int16 v12; // [rsp+21h] [rbp-127h]
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
  unsigned int v26; // [rsp+108h] [rbp-40h]
  __int64 v27; // [rsp+110h] [rbp-38h]
  __int64 v28; // [rsp+118h] [rbp-30h]
  unsigned int v29; // [rsp+120h] [rbp-28h]

  v9 = a3;
  v12 = 0;
  v16 = v18;
  v17 = 0x400000000LL;
  v5 = _mm_loadh_ps((const double *)&v9);
  v20 = 0x400000000LL;
  v11 = a4;
  v22 = &v15;
  ptr = v21;
  v6 = *(_DWORD **)(a3 + 32);
  v15 = &v16;
  v7 = *(_QWORD *)(a3 + 24);
  v10 = v5;
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
    *v6 = 1398037087;
    *(_QWORD *)(a3 + 32) += 4LL;
  }
  else
  {
    sub_227BF10(a3, "_ZTS", 4);
  }
  sub_E3FB80(&v10, a2);
  operator delete(v27, 24LL * v29, 8);
  operator delete(v24, 16LL * v26, 8);
  v8 = v23;
  if ( v23 )
  {
    sub_E3ABF0(
      v23,
      (char *)(*v23 + 16LL * *((unsigned int *)v23 + 2)),
      (char *)v16,
      (char *)v16 + 16 * (unsigned int)v17);
    sub_E3ABF0(
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
