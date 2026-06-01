__int64 __fastcall sub_10E6150(__int64 a1, char *a2, __int64 a3, _QWORD *a4, _BYTE *a5, __int64 a6)
{
  bool v7; // zf
  __int64 v8; // rax
  size_t v9; // rsi
  const char *v10; // r14
  __int64 v11; // r8
  void *v12; // rdx
  void *v13; // r15
  size_t v14; // rax
  unsigned int v15; // eax
  __int64 v16; // rdx
  char **v17; // r14
  char *v18; // rbx
  char *v19; // r13
  char *v20; // r12
  size_t v21; // rax
  __int64 v22; // rsi
  void **v23; // r14
  void *v24; // r12
  char *v25; // r15
  char *v26; // r13
  void *v27; // rax
  _QWORD *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // r13
  const __m128i *v31; // rdx
  const __m128i *v32; // rsi
  void *v33; // rdi
  int v34; // r8d
  int v35; // edx
  const char *v36; // rbp
  signed __int64 v37; // rcx
  unsigned __int64 v38; // r9
  int v39; // esi
  int v40; // eax
  unsigned int v41; // ebp
  __int64 v43; // rcx
  __int64 v44; // r14
  unsigned __int64 v45; // rdx
  __int64 v46; // r14
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  const void *v51; // r12
  signed __int64 v52; // r13
  _QWORD *v53; // rsi
  __int64 v54; // rbx
  __int64 v55; // rax
  int v56; // edx
  int v57; // esi
  const char *v58; // rbp
  signed __int64 v59; // rcx
  int v60; // eax
  _BYTE *v61; // rdi
  _QWORD *v62; // rcx
  __m128 v63; // xmm0
  __int64 v64; // rax
  size_t v65; // rdx
  _QWORD *v66; // rax
  __m128 v67; // xmm0
  __int64 v68; // [rsp+0h] [rbp-528h]
  __int64 v69; // [rsp+8h] [rbp-520h] BYREF
  __int64 v70; // [rsp+10h] [rbp-518h]
  _QWORD *v71; // [rsp+18h] [rbp-510h]
  _BYTE *v72; // [rsp+20h] [rbp-508h]
  char v73; // [rsp+2Fh] [rbp-4F9h]
  char *v74; // [rsp+30h] [rbp-4F8h]
  size_t v75; // [rsp+38h] [rbp-4F0h]
  __int128 v76; // [rsp+40h] [rbp-4E8h]
  __int64 v77; // [rsp+50h] [rbp-4D8h]
  void *v78[2]; // [rsp+60h] [rbp-4C8h] BYREF
  _QWORD v79[2]; // [rsp+70h] [rbp-4B8h] BYREF
  size_t n[2]; // [rsp+80h] [rbp-4A8h] BYREF
  _QWORD v81[2]; // [rsp+90h] [rbp-498h] BYREF
  void *v82[2]; // [rsp+A0h] [rbp-488h] BYREF
  __int128 v83; // [rsp+B0h] [rbp-478h]
  __int64 v84; // [rsp+C0h] [rbp-468h]
  char v85; // [rsp+C8h] [rbp-460h]
  int v86; // [rsp+CCh] [rbp-45Ch]
  void **v87; // [rsp+D0h] [rbp-458h]
  void *ptr; // [rsp+E0h] [rbp-448h] BYREF
  __int64 v89; // [rsp+E8h] [rbp-440h]
  _QWORD v90[135]; // [rsp+F0h] [rbp-438h] BYREF

  v74 = a2;
  v75 = a3;
  v71 = a4;
  v72 = a5;
  sub_10E28D0((_BYTE *)a1, a2, a3, (__int64)a4, (__int64)a5, a6, v68, v69, v70);
  v7 = *(_QWORD *)(a1 + 248) == 0;
  ptr = v90;
  v89 = 0x8000000000LL;
  if ( v7 )
  {
    LODWORD(v89) = 1;
    v90[0] = *(_QWORD *)(a1 + 40);
    v48 = *(_QWORD *)(a1 + 48);
    if ( v48 )
    {
      LODWORD(v89) = 2;
      v49 = 2;
      v90[1] = v48;
      v50 = 2;
    }
    else
    {
      v49 = 1;
      v50 = 1;
    }
    v51 = *(const void **)(a1 + 56);
    v52 = 8LL * *(unsigned int *)(a1 + 64);
    v53 = v90;
    v54 = v52 >> 3;
    if ( (unsigned __int64)((v52 >> 3) + v50) > 0x80 )
    {
      sub_22134E0(&ptr, v90, v54 + v50, 8);
      LODWORD(v50) = v89;
      v53 = ptr;
      v49 = (unsigned int)v89;
    }
    if ( v52 )
    {
      memcpy(&v53[v49], v51, v52);
      LODWORD(v50) = v89;
    }
    LODWORD(v89) = v54 + v50;
    v55 = (unsigned int)(v54 + v50);
    if ( v55 + 1 > (unsigned __int64)HIDWORD(v89) )
    {
      sub_22134E0(&ptr, v90, v55 + 1, 8);
      v55 = (unsigned int)v89;
    }
    *((_QWORD *)ptr + v55) = 0;
    LODWORD(v89) = v89 + 1;
    goto LABEL_11;
  }
  v78[1] = nullptr;
  v78[0] = v79;
  v82[0] = &off_2BC1EC8;
  v83 = 0;
  LOBYTE(v79[0]) = 0;
  LODWORD(v82[1]) = 0;
  v85 = 0;
  v86 = 1;
  v84 = 0;
  v87 = v78;
  sub_2257B70(v82, 0, 0, 0);
  sub_10E2690(a1, (__int64)v82);
  if ( *(_DWORD *)(a1 + 24) == 1 )
  {
    sub_10E4080(a1, (__int64)&ptr);
    v8 = (unsigned int)v89;
  }
  else
  {
    v43 = (unsigned int)v89;
    v44 = *(_QWORD *)(a1 + 40);
    v45 = (unsigned int)v89 + 1LL;
    if ( v45 > HIDWORD(v89) )
    {
      sub_22134E0(&ptr, v90, v45, 8);
      v43 = (unsigned int)v89;
    }
    *((_QWORD *)ptr + v43) = v44;
    v46 = *(_QWORD *)(a1 + 400);
    LODWORD(v89) = v89 + 1;
    v47 = (unsigned int)v89;
    if ( (unsigned __int64)(unsigned int)v89 + 1 > HIDWORD(v89) )
    {
      sub_22134E0(&ptr, v90, (unsigned int)v89 + 1LL, 8);
      v47 = (unsigned int)v89;
    }
    *((_QWORD *)ptr + v47) = v46;
    v8 = (unsigned int)(v89 + 1);
    LODWORD(v89) = v89 + 1;
  }
  if ( v8 + 1 > (unsigned __int64)HIDWORD(v89) )
  {
    sub_22134E0(&ptr, v90, v8 + 1, 8);
    v8 = (unsigned int)v89;
  }
  v9 = 0;
  *((_QWORD *)ptr + v8) = 0;
  v10 = *(const char **)(a1 + 248);
  LODWORD(v89) = v89 + 1;
  v11 = *(unsigned int *)(a1 + 28);
  v12 = v78[0];
  v13 = v78[1];
  if ( v10 )
  {
    v70 = (__int64)v78[0];
    LODWORD(v69) = v11;
    v14 = strlen(v10);
    v12 = (void *)v70;
    v11 = (unsigned int)v69;
    v9 = v14;
  }
  v15 = sub_22726E0(v10, v9, v12, v13, v11);
  if ( v15 )
  {
    if ( !v71 )
    {
LABEL_75:
      if ( v72 )
        *v72 = 1;
      v82[0] = &off_2BC1EC8;
      sub_2257A60(v82);
      if ( v78[0] != v79 )
        operator delete(v78[0]);
      v41 = -1;
      goto LABEL_43;
    }
    (*(void (__fastcall **)(size_t *, __int64, _QWORD))(*(_QWORD *)v16 + 32LL))(n, v16, v15);
    v61 = (_BYTE *)*v71;
    if ( (_QWORD *)n[0] == v81 )
    {
      v65 = n[1];
      if ( n[1] )
      {
        if ( n[1] == 1 )
          *v61 = v81[0];
        else
          memcpy(v61, (const void *)n[0], n[1]);
        v65 = n[1];
        v61 = (_BYTE *)*v71;
      }
      v71[1] = v65;
      v61[v65] = 0;
      v61 = (_BYTE *)n[0];
      goto LABEL_73;
    }
    v69 = v81[0];
    if ( v61 == (_BYTE *)(v71 + 2) )
    {
      v66 = v71;
      v67 = _mm_loadh_ps((const double *)&v69);
      *v71 = n[0];
      *(__m128 *)(v66 + 1) = v67;
    }
    else
    {
      v62 = v71;
      v63 = _mm_loadh_ps((const double *)&v69);
      v64 = v71[2];
      *v71 = n[0];
      *(__m128 *)(v62 + 1) = v63;
      if ( v61 )
      {
        n[0] = (size_t)v61;
        v81[0] = v64;
        goto LABEL_73;
      }
    }
    v61 = v81;
    n[0] = (size_t)v81;
LABEL_73:
    n[1] = 0;
    *v61 = 0;
    if ( (_QWORD *)n[0] != v81 )
      operator delete((void *)n[0]);
    goto LABEL_75;
  }
  v82[0] = &off_2BC1EC8;
  sub_2257A60(v82);
  if ( v78[0] != v79 )
    operator delete(v78[0]);
LABEL_11:
  v17 = *(char ***)(a1 + 432);
  v77 = 0;
  v76 = 0;
  if ( *(char ***)(a1 + 440) == v17 )
  {
    v18 = nullptr;
    v73 = 0;
  }
  else
  {
    v18 = *v17;
    *(_QWORD *)&v83 = 0;
    *(_OWORD *)v82 = 0;
    if ( v18 )
    {
      v19 = nullptr;
      v20 = nullptr;
      v69 = (__int64)v82;
      while ( 1 )
      {
        n[0] = (size_t)v18;
        ++v17;
        v21 = strlen(v18);
        n[1] = v21;
        if ( v20 == v19 )
        {
          sub_1052040(v69, v20, n);
          v18 = *v17;
          v20 = (char *)v82[1];
          if ( !*v17 )
          {
LABEL_18:
            v18 = (char *)v82[0];
            v22 = (v20 - (char *)v82[0]) >> 4;
            goto LABEL_19;
          }
        }
        else
        {
          *(_QWORD *)v20 = v18;
          v20 += 16;
          *((_QWORD *)v20 - 1) = v21;
          v18 = *v17;
          v82[1] = v20;
          if ( !v18 )
            goto LABEL_18;
        }
        v19 = (char *)v83;
      }
    }
    v22 = 0;
LABEL_19:
    *(_QWORD *)&v76 = v18;
    *((_QWORD *)&v76 + 1) = v22;
    v73 = 1;
  }
  v23 = (void **)ptr;
  v79[0] = 0;
  *(_OWORD *)v78 = 0;
  v24 = *(void **)ptr;
  if ( *(_QWORD *)ptr )
  {
    v25 = nullptr;
    v26 = nullptr;
    v69 = (__int64)v82;
    v70 = (__int64)v78;
    while ( 1 )
    {
      v82[0] = v24;
      ++v23;
      v27 = (void *)strlen((const char *)v24);
      v82[1] = v27;
      if ( v25 == v26 )
      {
        sub_1052040(v70, v25, (_QWORD *)v69);
        v24 = *v23;
        if ( !*v23 )
          break;
      }
      else
      {
        *(_QWORD *)v26 = v24;
        *((_QWORD *)v26 + 1) = v27;
        v24 = *v23;
        v78[1] = v26 + 16;
        if ( !v24 )
          break;
      }
      v26 = (char *)v78[1];
      v25 = (char *)v79[0];
    }
  }
  v28 = *(_QWORD **)(a1 + 464);
  v29 = *(_QWORD *)(a1 + 456);
  v30 = a1 + 480;
  if ( v28 != (_QWORD *)v29 )
  {
    v31 = nullptr;
    v32 = nullptr;
    *(_OWORD *)n = 0;
    v81[0] = 0;
    while ( !*(_BYTE *)(v29 + 32) )
    {
      LOBYTE(v83) = 0;
      if ( v32 == v31 )
      {
        v70 = v29;
        v69 = (__int64)v28;
        sub_10E3920((__int64)n, v32, (const __m128i *)v82);
        v29 = v70;
        v28 = (_QWORD *)v69;
        v32 = (const __m128i *)n[1];
        goto LABEL_30;
      }
      v32 = (const __m128i *)((char *)v32 + 24);
      v29 += 40;
      *(const __m128i *)((char *)&v32[-2] + 8) = _mm_load_si128((const __m128i *)v82);
      v32[-1].m128i_i64[1] = v83;
      n[1] = (size_t)v32;
      if ( v28 == (_QWORD *)v29 )
      {
LABEL_35:
        v34 = n[0];
        v35 = (int)v78[0];
        v36 = *(const char **)(a1 + 40);
        v37 = ((char *)v78[1] - (char *)v78[0]) >> 4;
        v38 = 0xAAAAAAAAAAAAAAABLL * ((__int64)((__int64)v32->m128i_i64 - n[0]) >> 3);
        v39 = 0;
        if ( v36 )
        {
          v75 = n[0];
          v74 = (char *)v78[0];
          v70 = ((char *)v78[1] - (char *)v78[0]) >> 4;
          v69 = v38;
          v40 = strlen(v36);
          v34 = v75;
          v35 = (int)v74;
          LODWORD(v37) = v70;
          LODWORD(v38) = v69;
          v39 = v40;
        }
        LOBYTE(v77) = v73;
        v41 = sub_22725F0(
                (_DWORD)v36,
                v39,
                v35,
                v37,
                v34,
                v38,
                v76,
                *((__int64 *)&v76 + 1),
                v77,
                0,
                0,
                (__int64)v71,
                (__int64)v72,
                v30);
        if ( n[0] )
          operator delete((void *)n[0]);
        goto LABEL_39;
      }
LABEL_31:
      v31 = (const __m128i *)v81[0];
    }
    v82[0] = *(void **)v29;
    v33 = *(void **)(v29 + 8);
    LOBYTE(v83) = 1;
    v82[1] = v33;
    if ( v32 == v31 )
    {
      v70 = v29;
      v69 = (__int64)v28;
      sub_10E3920((__int64)n, v32, (const __m128i *)v82);
      v28 = (_QWORD *)v69;
      v29 = v70;
      v32 = (const __m128i *)n[1];
    }
    else
    {
      v32 = (const __m128i *)((char *)v32 + 24);
      *(const __m128i *)((char *)&v32[-2] + 8) = _mm_load_si128((const __m128i *)v82);
      v32[-1].m128i_i64[1] = v83;
      n[1] = (size_t)v32;
    }
LABEL_30:
    v29 += 40;
    if ( v28 == (_QWORD *)v29 )
      goto LABEL_35;
    goto LABEL_31;
  }
  v56 = (int)v78[0];
  v57 = 0;
  v58 = *(const char **)(a1 + 40);
  v59 = ((char *)v78[1] - (char *)v78[0]) >> 4;
  if ( v58 )
  {
    v70 = (__int64)v78[0];
    v69 = ((char *)v78[1] - (char *)v78[0]) >> 4;
    v60 = strlen(v58);
    v56 = v70;
    LODWORD(v59) = v69;
    v57 = v60;
  }
  LOBYTE(v77) = v73;
  v41 = sub_22725F0(
          (_DWORD)v58,
          v57,
          v56,
          v59,
          (_DWORD)v74,
          v75,
          v76,
          *((__int64 *)&v76 + 1),
          v77,
          0,
          0,
          (__int64)v71,
          (__int64)v72,
          v30);
LABEL_39:
  if ( v78[0] )
    operator delete(v78[0]);
  if ( v18 )
    operator delete(v18);
LABEL_43:
  if ( ptr != v90 )
    free(ptr);
  return v41;
}

