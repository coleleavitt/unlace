__int64 __fastcall sub_6326A0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // rax
  _QWORD *v8; // r14
  int v9; // eax
  __m128i v10; // xmm0
  int v11; // ebp
  int v12; // r12d
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // r12d
  int v17; // eax
  __int64 v18; // rax
  int v19; // eax
  __m128 v20; // xmm0
  unsigned int v21; // eax
  void ***v22; // rbx
  unsigned int v23; // r13d
  void ***v24; // r12
  void **v25; // rbp
  __int8 v27; // dl
  unsigned __int64 v28; // r12
  __int64 v29; // rax
  _QWORD *v30; // r13
  unsigned __int64 v31; // r15
  __int64 v32; // rax
  _QWORD *v33; // rbp
  __int8 v34; // dl
  __int64 *v35; // rdi
  __int64 v36; // rcx
  _DWORD *v37; // rax
  _DWORD *v38; // rcx
  __int64 *v39; // rdi
  __int64 v40; // rcx
  _DWORD *v41; // rax
  _DWORD *v42; // rcx
  __m128i v43; // [rsp+0h] [rbp-158h] BYREF
  __m128i v44; // [rsp+10h] [rbp-148h] BYREF
  __int64 v45; // [rsp+20h] [rbp-138h]
  __int64 v46; // [rsp+28h] [rbp-130h]
  __m128 v47; // [rsp+30h] [rbp-128h] BYREF
  int v48; // [rsp+40h] [rbp-118h]
  __int128 v49; // [rsp+48h] [rbp-110h]
  __int128 v50; // [rsp+58h] [rbp-100h]
  __int64 (__fastcall *v51)(int, int, int, int, int, int, __int128, __int128); // [rsp+68h] [rbp-F0h]
  __int64 v52; // [rsp+70h] [rbp-E8h]
  __m128i *v53; // [rsp+78h] [rbp-E0h]
  __int16 v54; // [rsp+80h] [rbp-D8h]
  int v55; // [rsp+84h] [rbp-D4h]
  int v56; // [rsp+88h] [rbp-D0h]
  char v57; // [rsp+8Ch] [rbp-CCh]
  __int128 v58; // [rsp+90h] [rbp-C8h]
  __int64 v59; // [rsp+A0h] [rbp-B8h]
  void *ptr; // [rsp+B0h] [rbp-A8h]
  __int64 v61; // [rsp+B8h] [rbp-A0h]
  _BYTE v62[40]; // [rsp+C0h] [rbp-98h] BYREF
  void ***v63; // [rsp+E8h] [rbp-70h]
  __int64 v64; // [rsp+F0h] [rbp-68h]
  _BYTE v65[96]; // [rsp+F8h] [rbp-60h] BYREF

  if ( !a1 )
    JUMPOUT(0x5353AB);
  v7 = *(_QWORD *)(a1 + 8);
  v8 = *(_QWORD **)(v7 + 32);
  v43 = _mm_unpacklo_epi64((__m128i)v7, (__m128i)a2);
  v9 = sub_CAB500(v8, a2);
  v10 = _mm_load_si128(&v43);
  v45 = a3;
  v11 = v9;
  v46 = a4;
  v12 = 0;
  v47.m128_i8[0] = 0;
  v44 = v10;
  if ( (unsigned int)(v9 + 1) <= 1 )
    goto LABEL_25;
  if ( v9 >= 0 )
  {
    v13 = v8[23];
    v14 = v9;
    v12 = 0;
    v15 = v13 + 24LL * v9;
    if ( *(char *)(v15 + 3) < 0 )
    {
LABEL_7:
      v18 = v13 + 24 * v14;
      goto LABEL_8;
    }
    goto LABEL_5;
  }
  v28 = (unsigned int)(-2 - v9);
  v29 = *(_QWORD *)(v8[32] + 8LL * ((unsigned int)(-2 - v9) >> 6));
  if ( _bittest64(&v29, v28) )
  {
    v30 = (_QWORD *)(v8[26] + 8 * ((unsigned __int64)(int)v28 >> 5));
    if ( *v30 )
    {
      v15 = *v30 + 24 * (v28 & 0x1F);
      if ( *(char *)(v15 + 3) < 0 )
      {
LABEL_29:
        v12 = 0;
        goto LABEL_30;
      }
      goto LABEL_5;
    }
    v35 = (__int64 *)(v8[28] & 0xFFFFFFFFFFFFFFF8LL);
    v36 = *v35;
    v35[10] += 768;
    v37 = (_DWORD *)((v36 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v35[1] >= (unsigned __int64)(v37 + 192) && v36 )
    {
      *v35 = (__int64)(v37 + 192);
      v34 = 0;
    }
    else
    {
      v37 = (_DWORD *)sub_632560((__int64)v35, 768, 3);
      v34 = v47.m128_i8[0];
    }
    *v30 = v37;
    v38 = v37 + 192;
    do
    {
      *v37 = 0;
      v37 += 6;
      *((_OWORD *)v37 - 1) = 0;
    }
    while ( v38 != v37 );
    v15 = *v30 + 24 * (v28 & 0x1F);
  }
  else
  {
    v15 = sub_CA9380(v8, (unsigned int)v28, &v47);
    v34 = v47.m128_i8[0];
  }
  if ( v34 || !v15 || *(char *)(v15 + 3) < 0 )
  {
    v47.m128_i8[0] = 0;
    goto LABEL_29;
  }
LABEL_5:
  v16 = *(_DWORD *)v15;
  v17 = sub_CACB30(v8, (unsigned int)v11);
  v47.m128_i8[0] = 0;
  v12 = v17 + (v16 & 0x7FFFFFFF);
  if ( v11 >= 0 )
  {
    v13 = v8[23];
    v14 = v11;
    goto LABEL_7;
  }
LABEL_30:
  v31 = (unsigned int)(-2 - v11);
  v32 = *(_QWORD *)(v8[32] + 8LL * ((unsigned int)(-2 - v11) >> 6));
  if ( !_bittest64(&v32, v31) )
  {
    v18 = sub_CA9380(v8, (unsigned int)v31, &v47);
    v27 = v47.m128_i8[0];
    goto LABEL_23;
  }
  v33 = (_QWORD *)(v8[26] + 8 * ((unsigned __int64)(int)v31 >> 5));
  if ( !*v33 )
  {
    v39 = (__int64 *)(v8[28] & 0xFFFFFFFFFFFFFFF8LL);
    v40 = *v39;
    v39[10] += 768;
    v41 = (_DWORD *)((v40 + 7) & 0xFFFFFFFFFFFFFFF8LL);
    if ( v39[1] >= (unsigned __int64)(v41 + 192) && v40 )
    {
      *v39 = (__int64)(v41 + 192);
      v27 = 0;
    }
    else
    {
      v41 = (_DWORD *)sub_632560((__int64)v39, 768, 3);
      v27 = v47.m128_i8[0];
    }
    *v33 = v41;
    v42 = v41 + 192;
    do
    {
      *v41 = 0;
      v41 += 6;
      *((_OWORD *)v41 - 1) = 0;
    }
    while ( v42 != v41 );
    v18 = *v33 + 24 * (v31 & 0x1F);
LABEL_23:
    if ( v27 || !v18 )
      goto LABEL_25;
    goto LABEL_8;
  }
  v18 = *v33 + 24 * (v31 & 0x1F);
LABEL_8:
  if ( *(char *)(v18 + 3) >= 0 )
  {
    v19 = *(_DWORD *)v18 & 0x7FFFFFFF;
    goto LABEL_10;
  }
LABEL_25:
  v19 = 0;
LABEL_10:
  v55 = v19;
  v20 = _mm_loadh_ps((const double *)(a1 + 8));
  v53 = &v44;
  v47 = v20;
  v51 = sub_633E40;
  v56 = v12;
  v52 = 0;
  v54 = 0;
  v57 = 0;
  v59 = 0;
  ptr = v62;
  v61 = 0x500000000LL;
  v63 = (void ***)v65;
  v64 = 0x500000000LL;
  v48 = 71;
  v58 = 0;
  v49 = 0;
  v50 = 0;
  v21 = sub_61A680((__int64)&v47);
  v22 = v63;
  v23 = v21;
  v24 = &v63[(unsigned int)v64];
  if ( v63 != v24 )
  {
    do
    {
      v25 = *v22;
      if ( *v22 )
      {
        if ( *v25 != v25 + 2 )
          free(*v25);
        operator delete(v25, 0x290u);
      }
      ++v22;
    }
    while ( v24 != v22 );
    v24 = v63;
  }
  if ( v24 != (void ***)v65 )
    free(v24);
  if ( ptr != v62 )
    free(ptr);
  return v23;
}

