__int64 __fastcall sub_1DC3A70(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // r14d
  _QWORD *v10; // r13
  _QWORD *v11; // rax
  unsigned __int64 *v12; // rdx
  unsigned __int64 v13; // rax
  unsigned int v14; // r12d
  __m128 v15; // xmm0
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rax
  void **v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rdx
  void *v23; // rax
  __m128 v24; // xmm0
  __m128i v25; // xmm0
  int v26; // edx
  __int64 v27; // rax
  bool v28; // zf
  char *v29; // rdi
  __int64 v30; // r15
  __int64 v31; // rbp
  void **v32; // r13
  __m128i v34; // [rsp+0h] [rbp-1F8h] BYREF
  double v35[2]; // [rsp+18h] [rbp-1E0h] BYREF
  _QWORD *v36; // [rsp+28h] [rbp-1D0h]
  __int64 v37; // [rsp+30h] [rbp-1C8h]
  int v38; // [rsp+38h] [rbp-1C0h]
  int v39; // [rsp+3Ch] [rbp-1BCh]
  char v40[8]; // [rsp+40h] [rbp-1B8h] BYREF
  unsigned __int8 v41; // [rsp+48h] [rbp-1B0h]
  char v42; // [rsp+49h] [rbp-1AFh]
  __int64 v43; // [rsp+68h] [rbp-190h]
  _QWORD v44[2]; // [rsp+80h] [rbp-178h] BYREF
  __m128 v45; // [rsp+90h] [rbp-168h]
  int v46; // [rsp+A0h] [rbp-158h]
  const char *v47; // [rsp+A8h] [rbp-150h]
  __int64 v48; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-140h]
  int v50; // [rsp+C0h] [rbp-138h]
  __m128i v51; // [rsp+C8h] [rbp-130h]
  __int128 v52; // [rsp+D8h] [rbp-120h]
  char v53; // [rsp+E8h] [rbp-110h]
  void *v54; // [rsp+F0h] [rbp-108h]
  __int64 v55; // [rsp+F8h] [rbp-100h]
  _BYTE v56[16]; // [rsp+100h] [rbp-F8h] BYREF
  void *ptr; // [rsp+110h] [rbp-E8h]
  __int64 v58; // [rsp+118h] [rbp-E0h]
  _BYTE v59[16]; // [rsp+120h] [rbp-D8h] BYREF
  __int64 v60; // [rsp+130h] [rbp-C8h] BYREF
  __int64 v61; // [rsp+138h] [rbp-C0h]
  __int64 v62; // [rsp+140h] [rbp-B8h] BYREF
  unsigned int v63; // [rsp+148h] [rbp-B0h]
  void *v64; // [rsp+180h] [rbp-78h] BYREF
  __int64 v65; // [rsp+188h] [rbp-70h]
  __int64 v66; // [rsp+198h] [rbp-60h]
  __int16 v67; // [rsp+1A0h] [rbp-58h]
  char v68; // [rsp+1A2h] [rbp-56h]
  __int64 v69; // [rsp+1A8h] [rbp-50h]

  v7 = a6;
  v34.m128i_i64[0] = a5;
  v10 = sub_B7E870(a4, a2, a3, a4, a5, a6);
  v11 = sub_B78820(a3);
  if ( (unsigned __int8)sub_1CCCE10(a1, a2, a3, v11 != nullptr, a4, (__int64)v10, v7, 1, nullptr) )
    return 1;
  v12 = *(unsigned __int64 **)(a3 + 144);
  if ( v12 )
  {
    v13 = *v12;
    *((_DWORD *)v12 + 2) = a2;
    *v12 = (2LL * (unsigned int)(v7 - 1)) | v13 & 0xFFFFFFFFFFFFFFF9LL;
  }
  sub_1DC3470((__int64)v40, a1, 0, a2, 0, a3, 0, 0, 0, 0);
  v14 = v41;
  if ( v41 )
  {
    return 1;
  }
  else
  {
    if ( v42 )
      goto LABEL_30;
    v36 = v44;
    sub_2233820(v44);
    *(_QWORD *)&v35[0] = a3;
    v46 = 0;
    v44[0] = &off_2B4A628;
    v15 = _mm_loadh_ps(v35);
    v47 = "instantiating enum definition";
    v16 = *(_QWORD *)(a3 + 8);
    v45 = v15;
    if ( (v16 & 6) != 0 )
      *(_QWORD *)(a3 + 8) = v16 & 0xFFFFFFFFFFFFFFF8LL | 1;
    v17 = *(_QWORD *)(a1 + 544);
    *(_QWORD *)&v35[1] = a3 + 64;
    v18 = *(_QWORD *)(a1 + 512);
    *(_QWORD *)(a1 + 512) = 0;
    v37 = v18;
    v19 = *(_QWORD *)(a1 + 9944);
    *(_QWORD *)(a1 + 9944) = 0;
    v43 = v19;
    v38 = *(_DWORD *)(a1 + 80);
    v39 = *(_DWORD *)(a1 + 2632);
    *(_QWORD *)(a1 + 544) = a3 + 64;
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
    sub_18C74E0(a1, 6, 0, 4);
    v60 = a1;
    *(_QWORD *)&v35[0] = &v60;
    v20 = (void **)&v62;
    v61 = 1;
    do
    {
      *v20 = (void *)-4096LL;
      v20 += 2;
    }
    while ( v20 != &v64 );
    v21 = v34.m128i_i64[0];
    v22 = *(_QWORD *)(a1 + 11280);
    v68 = 0;
    v23 = (void *)(*(_QWORD *)&v35[0] + 96LL);
    *(double *)(a1 + 11280) = v35[0];
    v64 = v23;
    v24 = _mm_loadh_ps((const double *)v34.m128i_i64);
    v65 = 0x100000000LL;
    v66 = v22;
    v67 = 256;
    v69 = 0;
    sub_1E40A90(a1, v21, v10, a3, 0, 0, v24.m128_u64[0], v24.m128_u64[1]);
    v25 = _mm_load_si128(&v34);
    v26 = *(_DWORD *)(a1 + 12632);
    v48 = a1;
    v51 = v25;
    v50 = v26;
    v54 = v56;
    ptr = v59;
    v49 = a1;
    v52 = 0;
    v53 = 1;
    v55 = 0x100000000LL;
    v58 = 0x100000000LL;
    sub_1E43120(&v48, a3, v10);
    if ( v17 )
    {
      v27 = v37;
      *(_QWORD *)(a1 + 544) = v17;
      *(_QWORD *)(a1 + 512) = v27;
      *(_QWORD *)(a1 + 9944) = v43;
      *(_DWORD *)(a1 + 80) = v38;
      *(_DWORD *)(a1 + 2632) = v39;
    }
    v14 = *(_BYTE *)(a3 + 28) >> 7;
    if ( ptr != v59 )
      free(ptr);
    if ( v54 != v56 )
      free(v54);
    v28 = (_BYTE)v67 == 0;
    v29 = (char *)v64;
    *(_DWORD *)(v49 + 12632) = v50;
    if ( v28 )
    {
      if ( (_DWORD)v65 )
      {
        v30 = 0;
        v31 = 8LL * (unsigned int)(v65 - 1) + 8;
        do
        {
          v32 = *(void ***)&v29[v30];
          if ( v32 )
          {
            if ( *v32 != v32 + 2 )
              free(*v32);
            operator delete(v32, 0x30u);
            v29 = (char *)v64;
          }
          v30 += 8;
        }
        while ( v31 != v30 );
      }
      LOBYTE(v67) = 1;
      *(_QWORD *)(v60 + 11280) = v66;
    }
    if ( v29 != (char *)(*(_QWORD *)&v35[0] + 96LL) )
      free(v29);
    if ( (v61 & 1) == 0 )
      operator delete(v62, 16LL * v63, 8);
    sub_190D5E0(a1, (__m128)0LL);
    v44[0] = &off_2B4A628;
    sub_22338A0(v36);
    if ( !v41 )
LABEL_30:
      sub_1DBAC30(v40);
  }
  return v14;
}
