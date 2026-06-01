__int64 __fastcall sub_1496480(
        __int64 a1,
        _QWORD *a2,
        int a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6,
        __m128i a7,
        __m128 a8)
{
  int v10; // r14d
  __int64 v11; // rax
  char *v12; // rbx
  signed __int64 v13; // r8
  __int64 v14; // rsi
  char *v15; // r9
  unsigned __int64 v16; // r15
  signed __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  char *v19; // rbp
  char *v20; // r11
  __int64 v21; // r10
  unsigned int v22; // r15d
  __int64 v23; // rax
  unsigned __int64 v24; // rsi
  unsigned __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  char *v28; // rbp
  __int64 v29; // rax
  char *v30; // rbx
  __int64 v31; // rdx
  char *v32; // r12
  __int64 v33; // rbp
  __int64 v34; // rcx
  unsigned __int64 v35; // rdx
  __int64 *v36; // rbp
  __int64 *v37; // r14
  __int64 v38; // rax
  unsigned __int64 v39; // rcx
  __int64 v40; // rbx
  _QWORD *v41; // rax
  unsigned int v42; // r9d
  char *v43; // r10
  _QWORD *v44; // rax
  unsigned int v45; // r9d
  char *v46; // r10
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  __int64 v49; // rdi
  __int64 v50; // rbp
  char *v52; // rdi
  size_t v53; // r10
  size_t v54; // rax
  char *v55; // r15
  unsigned __int64 v56; // rdx
  __int64 i; // rax
  __int64 v62; // [rsp+28h] [rbp-C20h]
  signed __int64 v63; // [rsp+30h] [rbp-C18h]
  char *v64; // [rsp+30h] [rbp-C18h]
  __int64 v65; // [rsp+30h] [rbp-C18h]
  signed __int64 v66; // [rsp+30h] [rbp-C18h]
  char *v67; // [rsp+30h] [rbp-C18h]
  char *v68; // [rsp+38h] [rbp-C10h]
  __int64 v69; // [rsp+38h] [rbp-C10h]
  char *v70; // [rsp+38h] [rbp-C10h]
  char *v71; // [rsp+38h] [rbp-C10h]
  __int64 v72; // [rsp+38h] [rbp-C10h]
  char *v73; // [rsp+38h] [rbp-C10h]
  char *v74; // [rsp+40h] [rbp-C08h]
  signed __int64 v75; // [rsp+40h] [rbp-C08h]
  signed __int64 v76; // [rsp+40h] [rbp-C08h]
  __int64 v77; // [rsp+48h] [rbp-C00h]
  size_t v78; // [rsp+48h] [rbp-C00h]
  char *v79; // [rsp+48h] [rbp-C00h]
  size_t v80; // [rsp+50h] [rbp-BF8h]
  size_t v81; // [rsp+58h] [rbp-BF0h]
  __int64 v82[2]; // [rsp+60h] [rbp-BE8h] BYREF
  unsigned int v83; // [rsp+70h] [rbp-BD8h] BYREF
  __int64 v84; // [rsp+78h] [rbp-BD0h]
  void *src; // [rsp+98h] [rbp-BB0h] BYREF
  unsigned int v86; // [rsp+A0h] [rbp-BA8h]
  unsigned int v87; // [rsp+A4h] [rbp-BA4h]
  _BYTE v88[16]; // [rsp+A8h] [rbp-BA0h] BYREF
  __int64 v89; // [rsp+B8h] [rbp-B90h] BYREF
  void *v90; // [rsp+C0h] [rbp-B88h]
  unsigned int v91; // [rsp+C8h] [rbp-B80h]
  __int64 v92; // [rsp+D0h] [rbp-B78h] BYREF
  void *v93; // [rsp+F0h] [rbp-B58h]
  int v94; // [rsp+FCh] [rbp-B4Ch]
  __int64 v95; // [rsp+110h] [rbp-B38h]
  void *ptr; // [rsp+1A0h] [rbp-AA8h] BYREF
  __int64 v97; // [rsp+1A8h] [rbp-AA0h]
  __int128 v98; // [rsp+1B0h] [rbp-A98h] BYREF
  __int64 v99; // [rsp+1C0h] [rbp-A88h]
  __int64 v100; // [rsp+1C8h] [rbp-A80h]
  __int64 v101; // [rsp+1D0h] [rbp-A78h]
  int v102; // [rsp+1D8h] [rbp-A70h]
  __int64 v103; // [rsp+1E0h] [rbp-A68h]
  __int64 v104; // [rsp+1F0h] [rbp-A58h]
  __int64 v105; // [rsp+1F8h] [rbp-A50h]
  int v106; // [rsp+200h] [rbp-A48h]
  __int64 v107; // [rsp+208h] [rbp-A40h]
  __int64 v108; // [rsp+210h] [rbp-A38h]
  int v109; // [rsp+218h] [rbp-A30h]
  __int64 *v110; // [rsp+220h] [rbp-A28h]
  __int64 v111; // [rsp+228h] [rbp-A20h]
  __int64 v112; // [rsp+230h] [rbp-A18h] BYREF
  __int16 v113; // [rsp+470h] [rbp-7D8h]
  __int64 v114; // [rsp+478h] [rbp-7D0h]
  _QWORD *v115; // [rsp+480h] [rbp-7C8h]
  __int64 v116; // [rsp+488h] [rbp-7C0h]
  _QWORD v117[5]; // [rsp+490h] [rbp-7B8h] BYREF
  _QWORD v118[242]; // [rsp+4B8h] [rbp-790h] BYREF

  v10 = dword_2617040[a3];
  if ( v10 )
  {
    v62 = (1LL << v10) & 0x22DE;
  }
  else
  {
    v62 = 4;
    v10 = 2;
  }
  sub_147A4A0((__int64)&v83, a1 + 504);
  if ( a6 )
  {
    v11 = v86;
    v12 = *(char **)(a6 + 8);
    v13 = 8LL * *(unsigned int *)(a6 + 16);
    v14 = v86;
    v15 = &v12[v13];
    v16 = v13 >> 3;
    v17 = 8LL * v86;
    v18 = v86 + (v13 >> 3);
    if ( v17 )
    {
      if ( v18 > v87 )
      {
        v69 = 8LL * *(unsigned int *)(a6 + 16);
        v64 = &v12[v13];
        sub_2237220(&src, v88, v18, 8);
        v13 = v69;
        v15 = v64;
        v14 = v86;
        v19 = (char *)src;
        v17 = 8LL * v86;
      }
      else
      {
        v19 = (char *)src;
      }
      v20 = (char *)src + v17;
      v21 = v17 >> 3;
      if ( v17 >> 3 >= v16 )
      {
        v52 = (char *)src + v17;
        v53 = v17 - v13;
        v54 = v13;
        v55 = &v19[v17 - v13];
        v65 = v13 >> 3;
        v56 = (v13 >> 3) + v14;
        if ( v56 > v87 )
        {
          v81 = v13;
          v80 = v17 - v13;
          v79 = (char *)src + v17;
          v76 = v13;
          v73 = v15;
          sub_2237220(&src, v88, v56, 8);
          v54 = v81;
          v53 = v80;
          LODWORD(v14) = v86;
          v20 = v79;
          v13 = v76;
          v52 = (char *)src + 8 * v86;
          v15 = v73;
        }
        if ( v55 != v20 )
        {
          v78 = v53;
          v75 = v13;
          v70 = v15;
          memmove(v52, v55, v54);
          v53 = v78;
          v13 = v75;
          LODWORD(v14) = v86;
          v15 = v70;
        }
        v86 = v65 + v14;
        if ( v55 != v19 )
        {
          v71 = v15;
          v66 = v13;
          memmove(&v19[v13], v19, v53);
          v15 = v71;
          v13 = v66;
        }
        if ( v15 != v12 )
          memmove(v19, v12, v13);
      }
      else
      {
        v22 = v14 + v16;
        v86 = v22;
        if ( v19 != v20 )
        {
          v77 = v17 >> 3;
          v74 = (char *)src + v17;
          v68 = v15;
          v63 = v17;
          memcpy(&v19[8 * v22 - v17], v19, v17);
          v21 = v77;
          v20 = v74;
          v15 = v68;
          v17 = v63;
        }
        if ( v21 )
        {
          if ( (v19 >= v12 + 16 || v12 >= v19 + 16) && (unsigned __int64)(v21 - 1) > 3 )
          {
            v23 = 0;
            v24 = 0;
            v25 = ((unsigned __int64)(v21 - 2) >> 1) + 1;
            do
            {
              a8 = (__m128)_mm_loadu_si128((const __m128i *)&v12[v23]);
              ++v24;
              *(__m128 *)&v19[v23] = a8;
              v23 += 16;
            }
            while ( v24 < v25 );
            v26 = 2 * v25;
            v27 = 16 * v25;
            v28 = &v19[v27];
            if ( v21 != v26 )
              *(_QWORD *)v28 = *(_QWORD *)&v12[v27];
          }
          else
          {
            for ( i = 0; i != v21; ++i )
              *(_QWORD *)&v19[8 * i] = *(_QWORD *)&v12[8 * i];
          }
          v12 += v17;
        }
        if ( v15 != v12 )
          memcpy(v20, v12, v15 - v12);
      }
    }
    else
    {
      if ( v18 > v87 )
      {
        v72 = 8LL * *(unsigned int *)(a6 + 16);
        v67 = &v12[v13];
        sub_2237220(&src, v88, v18, 8);
        v13 = v72;
        v15 = v67;
        v11 = v86;
      }
      if ( v15 != v12 )
      {
        memcpy((char *)src + 8 * v11, v12, v13);
        LODWORD(v11) = v86;
      }
      v86 = v16 + v11;
    }
  }
  sub_148B330(a1, (__int64)&v83, v62 != 0, a4, v10, a7, a8);
  if ( a5 )
  {
    v29 = 0;
    if ( (v83 & 0x400000) != 0 )
      v29 = v84;
    *a5 = v29;
  }
  if ( !a6 || (v30 = (char *)src, v31 = 0, v97 = 0x100000000LL, ptr = &v98, v32 = (char *)src + 8 * v86, v32 == src) )
  {
    if ( (_BYTE)qword_2CD8AC8 )
      goto LABEL_47;
    goto LABEL_62;
  }
  do
  {
    while ( 1 )
    {
      v33 = *(_QWORD *)v30;
      v34 = v31;
      if ( (*(_BYTE *)(*(_QWORD *)v30 + 34LL) & 0xF) == 4 )
        break;
      v30 += 8;
      if ( v32 == v30 )
        goto LABEL_32;
    }
    v35 = v31 + 1;
    if ( v35 > HIDWORD(v97) )
    {
      sub_2237220(&ptr, &v98, v35, 8);
      v34 = (unsigned int)v97;
    }
    v30 += 8;
    *((_QWORD *)ptr + v34) = v33;
    v31 = (unsigned int)(v97 + 1);
    LODWORD(v97) = v97 + 1;
  }
  while ( v32 != v30 );
LABEL_32:
  v36 = (__int64 *)ptr;
  v37 = (__int64 *)((char *)ptr + 8 * v31);
  if ( ptr != v37 )
  {
    do
    {
      while ( 1 )
      {
        v40 = *v36;
        v82[0] = *v36;
        v41 = sub_1477FF0(v90, (__int64)v90 + 8 * v91, v82);
        if ( v43 != (char *)(v41 + 1) )
        {
          memmove(v41, v41 + 1, v43 - (char *)(v41 + 1));
          v42 = v91;
        }
        v82[0] = v40;
        v91 = v42 - 1;
        v44 = sub_1477FF0(src, (__int64)src + 8 * v86, v82);
        if ( v46 != (char *)(v44 + 1) )
        {
          memmove(v44, v44 + 1, v46 - (char *)(v44 + 1));
          v45 = v86;
        }
        v47 = *(unsigned int *)(a6 + 56);
        v48 = *(unsigned int *)(a6 + 60);
        v86 = v45 - 1;
        if ( v47 + 1 > v48 )
        {
          sub_2237220(a6 + 48, a6 + 64, v47 + 1, 8);
          v47 = *(unsigned int *)(a6 + 56);
        }
        *(_QWORD *)(*(_QWORD *)(a6 + 48) + 8 * v47) = v40;
        v38 = *(unsigned int *)(a6 + 16);
        v39 = *(unsigned int *)(a6 + 20);
        ++*(_DWORD *)(a6 + 56);
        if ( v38 + 1 > v39 )
          break;
        ++v36;
        *(_QWORD *)(*(_QWORD *)(a6 + 8) + 8 * v38) = v40;
        ++*(_DWORD *)(a6 + 16);
        if ( v37 == v36 )
          goto LABEL_43;
      }
      ++v36;
      sub_2237220(a6 + 8, a6 + 24, v38 + 1, 8);
      *(_QWORD *)(*(_QWORD *)(a6 + 8) + 8LL * (unsigned int)(*(_DWORD *)(a6 + 16))++) = v40;
    }
    while ( v37 != v36 );
LABEL_43:
    v37 = (__int64 *)ptr;
  }
  if ( v37 != (__int64 *)&v98 )
    free(v37);
  if ( !(_BYTE)qword_2CD8AC8 )
  {
LABEL_62:
    if ( __cxa_guard_acquire(&qword_2CD8AC8) )
    {
      qword_2CD8AE0[0] = 0;
      qword_2CD8AE0[1] = &qword_2CD8AE0[3];
      qword_2CD8AE0[2] = 0x200000000LL;
      __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
      __cxa_guard_release(&qword_2CD8AC8);
    }
  }
LABEL_47:
  v97 = 0;
  v98 = 0;
  ptr = &v83;
  v99 = 0;
  v105 = v95;
  v100 = 0;
  v106 = a3;
  v110 = &v112;
  v111 = 0x400000000LL;
  v101 = 0;
  v102 = 0;
  v103 = 0;
  v104 = 0;
  v107 = 0;
  v108 = 0;
  v109 = 0;
  LOBYTE(v113) = (((v83 >> 12) & 0x7F) == 69) | v113 & 0xFE;
  v115 = v117;
  v117[2] = v89;
  v116 = 0x200000000LL;
  v117[3] = v118;
  v117[4] = 0x200000000LL;
  v113 &= 0xFC01u;
  v114 = 0;
  v118[2] = qword_2CD8AE0;
  memset(&v118[3], 0, 40);
  v49 = *(_QWORD *)(a1 + 96);
  v118[232] = 0;
  v82[0] = (__int64)&ptr;
  v82[1] = a1;
  sub_15F0FC0(v49, (unsigned int)v95, sub_1498E10, v82);
  if ( a2 )
    *a2 = v105;
  if ( (v113 & 1) != 0 || ((*(_DWORD *)ptr >> 12) & 0x7F) == 0x45 )
    v50 = 0;
  else
    v50 = sub_1E85500(*(_QWORD *)(a1 + 96), &ptr);
  sub_147A7A0((char *)&ptr);
  if ( v94 )
    free(v93);
  sub_15DCED0(v89, &v89);
  if ( v90 != &v92 )
    free(v90);
  if ( src != v88 )
    free(src);
  return v50;
}
