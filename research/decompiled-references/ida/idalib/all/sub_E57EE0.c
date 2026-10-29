void __fastcall sub_E57EE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __m128 v7; // xmm0
  _DWORD *v8; // rdx
  __int64 v9; // rax
  _BYTE *v10; // rax
  __int64 *v11; // rdi
  __int64 v12; // [rsp+8h] [rbp-150h] BYREF
  __m128 v13; // [rsp+10h] [rbp-148h] BYREF
  __int16 v14; // [rsp+20h] [rbp-138h]
  char v15; // [rsp+22h] [rbp-136h]
  __int64 v16; // [rsp+28h] [rbp-130h]
  __int128 v17; // [rsp+30h] [rbp-128h]
  void **v18; // [rsp+40h] [rbp-118h] BYREF
  void *v19; // [rsp+48h] [rbp-110h] BYREF
  __int64 v20; // [rsp+50h] [rbp-108h]
  _BYTE v21[64]; // [rsp+58h] [rbp-100h] BYREF
  void *ptr; // [rsp+98h] [rbp-C0h]
  __int64 v23; // [rsp+A0h] [rbp-B8h]
  _BYTE v24[64]; // [rsp+A8h] [rbp-B0h] BYREF
  void ***v25; // [rsp+E8h] [rbp-70h]
  __int64 *v26; // [rsp+F0h] [rbp-68h]
  __int64 v27; // [rsp+F8h] [rbp-60h]
  __int64 v28; // [rsp+100h] [rbp-58h]
  unsigned int v29; // [rsp+108h] [rbp-50h]
  __int64 v30; // [rsp+110h] [rbp-48h]
  __int64 v31; // [rsp+118h] [rbp-40h]
  unsigned int v32; // [rsp+120h] [rbp-38h]

  v14 = 0;
  v19 = v21;
  v12 = a5;
  v20 = 0x400000000LL;
  v23 = 0x400000000LL;
  v25 = &v18;
  v7 = _mm_loadh_ps((const double *)&v12);
  ptr = v24;
  v8 = *(_DWORD **)(a5 + 32);
  v18 = &v19;
  v9 = *(_QWORD *)(a5 + 24);
  v13 = v7;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v26 = nullptr;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  if ( (unsigned __int64)(v9 - (_QWORD)v8) > 3 )
  {
    *v8 = 1129601631;
    *(_QWORD *)(a5 + 32) += 4LL;
  }
  else
  {
    sub_227BF10(a5, "_ZTC", 4);
  }
  sub_E3FAE0((__int64)&v13, a2, *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 2320LL) + 212LL) <= 0xBFu);
  sub_227B930(v13.m128_u64[1], a3);
  v10 = *(_BYTE **)(v13.m128_u64[1] + 32);
  if ( *(_QWORD *)(v13.m128_u64[1] + 24) <= (unsigned __int64)v10 )
  {
    sub_227BA10(v13.m128_u64[1], 95);
  }
  else
  {
    *(_QWORD *)(v13.m128_u64[1] + 32) = v10 + 1;
    *v10 = 95;
  }
  sub_E3FAE0((__int64)&v13, a4, 0);
  operator delete(v30, 24LL * v32, 8);
  operator delete(v27, 16LL * v29, 8);
  v11 = v26;
  if ( v26 )
  {
    sub_E3ABF0(
      v26,
      (char *)(*v26 + 16LL * *((unsigned int *)v26 + 2)),
      (char *)v19,
      (char *)v19 + 16 * (unsigned int)v20);
    sub_E3ABF0(
      v26 + 10,
      (char *)(v26[10] + 16LL * *((unsigned int *)v26 + 22)),
      (char *)ptr,
      (char *)ptr + 16 * (unsigned int)v23);
    v11 = v26;
  }
  *v25 = (void **)v11;
  if ( ptr != v24 )
    free(ptr);
  if ( v19 != v21 )
    free(v19);
}
