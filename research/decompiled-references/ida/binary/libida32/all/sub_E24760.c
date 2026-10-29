void __fastcall sub_E24760(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __m128 v6; // xmm0
  _DWORD *v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  __int64 *v10; // rdi
  __int64 v11; // [rsp+8h] [rbp-140h] BYREF
  __m128 v12; // [rsp+10h] [rbp-138h] BYREF
  __int16 v13; // [rsp+20h] [rbp-128h]
  char v14; // [rsp+22h] [rbp-126h]
  __int64 v15; // [rsp+28h] [rbp-120h]
  __int128 v16; // [rsp+30h] [rbp-118h]
  void **v17; // [rsp+40h] [rbp-108h] BYREF
  void *v18; // [rsp+48h] [rbp-100h] BYREF
  __int64 v19; // [rsp+50h] [rbp-F8h]
  _BYTE v20[64]; // [rsp+58h] [rbp-F0h] BYREF
  void *ptr; // [rsp+98h] [rbp-B0h]
  __int64 v22; // [rsp+A0h] [rbp-A8h]
  _BYTE v23[64]; // [rsp+A8h] [rbp-A0h] BYREF
  void ***v24; // [rsp+E8h] [rbp-60h]
  __int64 *v25; // [rsp+F0h] [rbp-58h]
  __int64 v26; // [rsp+F8h] [rbp-50h]
  __int64 v27; // [rsp+100h] [rbp-48h]
  int v28; // [rsp+108h] [rbp-40h]
  __int64 v29; // [rsp+110h] [rbp-38h]
  __int64 v30; // [rsp+118h] [rbp-30h]
  int v31; // [rsp+120h] [rbp-28h]

  v11 = a3;
  v13 = 0;
  v18 = v20;
  v19 = 0x400000000LL;
  v6 = _mm_loadh_ps((const double *)&v11);
  v22 = 0x400000000LL;
  v24 = &v17;
  ptr = v23;
  v7 = *(_DWORD **)(a3 + 32);
  v17 = &v18;
  v8 = *(_QWORD *)(a3 + 24);
  v12 = v6;
  v9 = v8 - (_QWORD)v7;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v25 = nullptr;
  v26 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  if ( v9 > 3 )
  {
    *v7 = 1230264927;
    *(_QWORD *)(a3 + 32) += 4LL;
  }
  else
  {
    sub_22581D0(a3, "_ZTI", 4);
  }
  sub_E1BE40((__int64)&v12, a2, v9, (__int64)v7, a5);
  operator delete();
  operator delete();
  v10 = v25;
  if ( v25 )
  {
    sub_E16EB0(
      v25,
      (char *)(*v25 + 16LL * *((unsigned int *)v25 + 2)),
      (char *)v18,
      (char *)v18 + 16 * (unsigned int)v19);
    sub_E16EB0(
      v25 + 10,
      (char *)(v25[10] + 16LL * *((unsigned int *)v25 + 22)),
      (char *)ptr,
      (char *)ptr + 16 * (unsigned int)v22);
    v10 = v25;
  }
  *v24 = (void **)v10;
  if ( ptr != v23 )
    free(ptr);
  if ( v18 != v20 )
    free(v18);
}

