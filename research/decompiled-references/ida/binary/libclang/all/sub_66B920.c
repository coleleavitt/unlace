void __fastcall sub_66B920(_QWORD *a1, __int64 a2, double a3, double a4, double a5, __m128 a6)
{
  __int64 v6; // rdx
  const char *v7; // rcx
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __m128i si128; // xmm0
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // r13
  __int64 v17; // rax
  __m128 v18; // xmm5
  __m128 v19; // xmm1
  unsigned __int64 v20; // r12
  int v21; // esi
  bool v22; // al
  int v23; // eax
  _QWORD *v24; // rdi
  __int64 v25; // rax
  __m128i v26; // xmm2
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 *v34; // rdx
  __int64 *v35; // rax
  void **v36; // rbp
  void **v37; // rbx
  void **v38; // rdi
  void **v39; // rbp
  void **v40; // rbx
  void **v41; // rdi
  __int64 i; // rbx
  unsigned int *v43; // rcx
  __int64 v44; // rax
  char v45; // al
  unsigned __int64 v46; // rax
  __int64 v47; // r15
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  _QWORD *v50; // rax
  _QWORD *v51; // rcx
  __int64 v52; // rdi
  _DWORD *v53; // rax
  __int64 v54; // rdi
  int v55; // edx
  __int64 v56; // rax
  void *v57[2]; // [rsp+0h] [rbp-268h] BYREF
  const char *v58; // [rsp+10h] [rbp-258h]
  __int64 v59; // [rsp+18h] [rbp-250h]
  _QWORD *v60; // [rsp+20h] [rbp-248h]
  _BYTE *v61; // [rsp+28h] [rbp-240h]
  __int64 *v62; // [rsp+30h] [rbp-238h]
  __int64 *v63; // [rsp+38h] [rbp-230h]
  _BYTE *v64; // [rsp+40h] [rbp-228h]
  __m128i *v65; // [rsp+48h] [rbp-220h]
  bool v66; // [rsp+5Fh] [rbp-209h] BYREF
  _BYTE v67[32]; // [rsp+60h] [rbp-208h] BYREF
  __m128i v68; // [rsp+80h] [rbp-1E8h] BYREF
  __int64 v69; // [rsp+90h] [rbp-1D8h]
  void *v70; // [rsp+A0h] [rbp-1C8h] BYREF
  void **v71; // [rsp+A8h] [rbp-1C0h]
  __int64 v72; // [rsp+B0h] [rbp-1B8h]
  void *v73; // [rsp+C0h] [rbp-1A8h] BYREF
  void **v74; // [rsp+C8h] [rbp-1A0h]
  __int64 v75; // [rsp+D0h] [rbp-198h]
  __m128i v76; // [rsp+E0h] [rbp-188h] BYREF
  __int128 v77; // [rsp+F0h] [rbp-178h]
  __int128 v78; // [rsp+100h] [rbp-168h]
  __int64 v79; // [rsp+110h] [rbp-158h]
  void *ptr[2]; // [rsp+120h] [rbp-148h] BYREF
  __int64 v81; // [rsp+130h] [rbp-138h]
  char v82; // [rsp+138h] [rbp-130h] BYREF
  void *v83; // [rsp+190h] [rbp-D8h] BYREF
  __m128i v84; // [rsp+198h] [rbp-D0h]
  _BYTE v85[192]; // [rsp+1A8h] [rbp-C0h] BYREF

  v6 = 0;
  v7 = &byte_3B9466E;
  v10 = *(_QWORD *)(a2 + 40);
  if ( (v10 & 7) == 0 )
  {
    v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
    v6 = v11;
    if ( v11 )
    {
      v43 = *(unsigned int **)(v11 + 16);
      v6 = *v43;
      v7 = (const char *)(v43 + 4);
    }
  }
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  v58 = v7;
  v59 = v6;
  v84 = si128;
  v64 = v85;
  v83 = v85;
  sub_11240B0(a2, &v83);
  v13 = *(unsigned int *)(a2 + 24);
  v14 = *(_QWORD *)(*a1 + 2152LL);
  v61 = v67;
  sub_CAE550(v67, v14, v13, 1);
  v15 = a2;
  v16 = sub_6B37C0(*a1);
  if ( v16
    || (*(_BYTE *)(a2 + 28) & 0x7Fu) - 32 <= 0x11
    && (v44 = sub_B0D8A0(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL)), (v15 = v44) != 0)
    && (v45 = *(_BYTE *)(v44 + 74), (v45 & 4) != 0)
    && (v45 & 1) != 0
    && (v16 = sub_6B37C0(*a1)) != 0
    || (v15 = a2, (v16 = sub_6F4910(*a1, a2, 0)) != 0) )
  {
    v17 = sub_6BB140(*a1, v15);
    v65 = &v76;
    sub_AA92F0(&v76, v16, *(_QWORD *)(*a1 + 2152LL), v17);
    si128.m128i_i64[0] = 0;
    a6 = (__m128)_mm_load_si128(&v76);
    v16 = v77;
    *(_OWORD *)ptr = 0;
    v81 = 0;
    *(_QWORD *)&v77 = 0;
    *(__m128 *)v57 = a6;
    v76 = 0;
    sub_646A80((__int64 *)ptr);
    sub_646A80(v76.m128i_i64);
  }
  else
  {
    v65 = &v76;
    *(_OWORD *)v57 = 0;
  }
  v19 = (__m128)_mm_load_si128((const __m128i *)v57);
  v62 = (__int64 *)&v70;
  v20 = _mm_movehl_ps(v18, v19).m128_u64[0];
  sub_FD8690(&v70, a2);
  v63 = (__int64 *)&v73;
  sub_FCD270(&v73, a2);
  v21 = *(_DWORD *)(a2 + 24);
  v60 = (_QWORD *)a1[1];
  v22 = 0;
  if ( v21 )
  {
    v23 = sub_CAE830(*(_QWORD *)(*a1 + 2152LL));
    v22 = v23 != 3 && v23 != 0;
  }
  v66 = v22;
  sub_766420(ptr, a2);
  v24 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v24 = (_QWORD *)*v24;
  if ( v24 && (v25 = sub_79A2E0(v24)) != 0 && (*(_BYTE *)(v25 + 28) & 0x7F) != 0 )
  {
    sub_63E460((__int64)v65, (__int64)a1, v25);
  }
  else
  {
    v79 = 0;
    si128.m128i_i64[0] = 0;
    v76 = 0;
    v77 = 0;
    v78 = 0;
  }
  v69 = v16;
  v26 = _mm_load_si128((const __m128i *)v57);
  v68 = v26;
  v57[0] = (void *)sub_64FFB0(
                     v60,
                     (__int64)v83,
                     v84.m128i_i64[0],
                     (__int64)v58,
                     v59,
                     v65->m128i_i64,
                     (__int64)v61,
                     (__int64)ptr,
                     v68.m128i_i64,
                     v62,
                     v63,
                     (char *)&v66);
  if ( ptr[0] != &v82 )
    free(ptr[0]);
  v27 = sub_79C190(a2 + 48);
  if ( v27 )
  {
    while ( (*(_BYTE *)(v27 + 28) & 0x7F) != 0x10 )
    {
      v28 = *(_QWORD *)(v27 + 8);
      v27 = v28 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v28 <= 7 )
      {
        v27 = 0;
        break;
      }
    }
  }
  sub_6696E0(a1, v27, *(double *)si128.m128i_i64, *(double *)v19.m128_u64, v26, a6);
  v29 = sub_79C190(a2 + 48);
  if ( v29 )
  {
    while ( (*(_BYTE *)(v29 + 28) & 0x7F) != 0x49 )
    {
      v30 = *(_QWORD *)(v29 + 8);
      v29 = v30 & 0xFFFFFFFFFFFFFFF8LL;
      if ( v30 <= 7 )
      {
        v29 = 0;
        break;
      }
    }
  }
  sub_667A20(a1, v29);
  v31 = *(_QWORD *)(a2 + 104);
  v32 = v31;
  if ( v31 )
  {
    if ( v31 > 7 )
    {
LABEL_26:
      v33 = v31 & 0xFFFFFFFFFFFFFFF8LL;
      v34 = *(__int64 **)(v33 + 8);
      v35 = &v34[*(unsigned int *)(v33 + 16)];
      goto LABEL_27;
    }
    goto LABEL_65;
  }
  v47 = *(_QWORD *)(a2 + 96);
  v48 = *(_QWORD *)(v47 + 88);
  v49 = v48 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v48 & 1) != 0 )
  {
    if ( !v49 )
      goto LABEL_64;
  }
  else
  {
    if ( v49 <= 3 )
    {
      if ( !v49 )
        goto LABEL_64;
      goto LABEL_79;
    }
    if ( (v48 & 2) == 0 )
      goto LABEL_64;
    v50 = (_QWORD *)(v48 & 0xFFFFFFFFFFFFFFFCLL);
    v51 = (_QWORD *)v50[2275];
    if ( !v51 )
    {
      *(_QWORD *)(v47 + 88) = v47 & 0xFFFFFFFFFFFFFFFALL | 1;
      if ( (v47 & 0xFFFFFFFFFFFFFFFALL) == 0 )
      {
LABEL_84:
        v31 = *(_QWORD *)(a2 + 104);
        goto LABEL_80;
      }
      goto LABEL_78;
    }
    v52 = v50[274];
    v50[284] += 24LL;
    v49 = (v52 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v50[275] >= v49 + 24 && v52 )
    {
      v50[274] = v49 + 24;
    }
    else
    {
      v60 = v51;
      v56 = sub_63DCB0((__int64)(v50 + 274), 24, 3);
      v51 = v60;
      v49 = v56;
    }
    *(_QWORD *)v49 = v51;
    *(_DWORD *)(v49 + 8) = 0;
    v48 = v49 | 5;
    *(_QWORD *)(v49 + 16) = v47;
    *(_QWORD *)(v47 + 88) = v49 | 5;
    LOBYTE(v49) = v49 & 0xFA | 4;
  }
  if ( (v49 & 4) != 0 )
  {
    v53 = (_DWORD *)(v48 & 0xFFFFFFFFFFFFFFF8LL);
    if ( v53 )
    {
      v54 = *(_QWORD *)v53;
      v55 = *(_DWORD *)(*(_QWORD *)v53 + 12LL);
      if ( v53[2] != v55 )
      {
        v53[2] = v55;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v54 + 144LL))(v54, v47);
        goto LABEL_84;
      }
    }
  }
LABEL_78:
  v32 = *(_QWORD *)(a2 + 104);
LABEL_79:
  v31 = v32;
LABEL_80:
  if ( v31 > 7 )
    goto LABEL_26;
  if ( v31 )
    goto LABEL_65;
  v47 = *(_QWORD *)(a2 + 96);
LABEL_64:
  sub_63E640((__int64 *)(v47 + 88), v47);
  v46 = *(_QWORD *)(a2 + 104);
  if ( v46 <= 7 )
  {
LABEL_65:
    v35 = nullptr;
    v34 = nullptr;
    goto LABEL_27;
  }
  v34 = *(__int64 **)((v46 & 0xFFFFFFFFFFFFFFF8LL) + 8);
  v35 = nullptr;
LABEL_27:
  sub_63E860((__int64)a1, (__int64)v57[0], v34, v35);
  v36 = v74;
  v37 = (void **)v73;
  if ( v74 != v73 )
  {
    do
    {
      v38 = (void **)v37[5];
      if ( v38 != v37 + 7 )
        operator delete(v38, (unsigned __int64)v37[7] + 1);
      if ( *v37 != v37 + 2 )
        operator delete(*v37, (unsigned __int64)v37[2] + 1);
      v37 += 10;
    }
    while ( v36 != v37 );
    v37 = (void **)v73;
  }
  if ( v37 )
    operator delete(v37, v75 - (_QWORD)v37);
  v39 = v71;
  v40 = (void **)v70;
  if ( v71 != v70 )
  {
    do
    {
      v41 = (void **)v40[5];
      if ( v41 != v40 + 7 )
        operator delete(v41, (unsigned __int64)v40[7] + 1);
      if ( *v40 != v40 + 2 )
        operator delete(*v40, (unsigned __int64)v40[2] + 1);
      v40 += 10;
    }
    while ( v39 != v40 );
    v40 = (void **)v70;
  }
  if ( v40 )
    operator delete(v40, v72 - (_QWORD)v40);
  for ( i = v19.m128_u64[0]; i != v20; i += 80 )
  {
    if ( *(_QWORD *)i != i + 16 )
      operator delete(*(void **)i, *(_QWORD *)(i + 16) + 1LL);
  }
  if ( v19.m128_u64[0] )
    operator delete((void *)v19.m128_u64[0], v16 - v19.m128_u64[0]);
  if ( v83 != v64 )
    free(v83);
}

