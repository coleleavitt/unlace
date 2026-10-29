_QWORD *__fastcall sub_A033B0(__int64 a1, __int64 a2)
{
  void *v2; // rax
  int v3; // esi
  unsigned int v4; // ebp
  unsigned int v5; // eax
  char *v6; // rax
  int v7; // r12d
  char *v8; // r13
  int v9; // eax
  __int16 v10; // si
  __int64 *v11; // rdi
  __int64 i; // r13
  unsigned __int64 *v13; // r14
  unsigned __int64 *v14; // r15
  unsigned __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rax
  int v18; // r12d
  unsigned __int64 v19; // r15
  unsigned int v20; // ebp
  __int64 v21; // rax
  char *v22; // r15
  __int64 v23; // rdi
  char *v24; // rbx
  char *v25; // rsi
  __int64 v26; // rax
  unsigned int v27; // ecx
  __int64 v28; // r13
  unsigned __int64 v29; // r12
  unsigned __int64 v30; // r13
  void *v31; // rdi
  __int128 *v32; // r12
  __int128 *v33; // rbx
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // rbp
  void *v36; // rdi
  __int64 v37; // r15
  __int64 v38; // rbx
  int v39; // eax
  void **v40; // rbx
  __int64 v42; // r15
  unsigned __int64 v43; // r14
  __int64 v44; // rax
  unsigned int *v45; // rax
  unsigned __int64 v46; // rbp
  __int64 *v47; // r12
  unsigned __int64 v48; // r13
  unsigned int v49; // eax
  int v50; // ecx
  unsigned int v51; // eax
  char *v52; // rax
  __int64 v53; // r14
  unsigned int v54; // r13d
  char *v55; // rax
  __int64 v56; // r10
  _QWORD *v57; // rdi
  __int64 v58; // rsi
  int v59; // r9d
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdi
  char *v63; // rcx
  char *v64; // rax
  __int64 v65; // r10
  _QWORD *v66; // rdi
  __int64 v67; // r8
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rsi
  char *v71; // rdx
  unsigned int *v72; // [rsp+0h] [rbp-1158h] BYREF
  unsigned __int64 v73; // [rsp+8h] [rbp-1150h]
  __int64 v74; // [rsp+10h] [rbp-1148h]
  void **v75; // [rsp+18h] [rbp-1140h]
  __int64 v76; // [rsp+20h] [rbp-1138h]
  __int64 *v77; // [rsp+28h] [rbp-1130h]
  int v78; // [rsp+3Ch] [rbp-111Ch] BYREF
  __m128 *v79; // [rsp+40h] [rbp-1118h] BYREF
  int v80; // [rsp+48h] [rbp-1110h]
  __m128 v81; // [rsp+50h] [rbp-1108h] BYREF
  __int128 v82; // [rsp+60h] [rbp-10F8h]
  __int64 v83; // [rsp+70h] [rbp-10E8h]
  char v84; // [rsp+78h] [rbp-10E0h]
  int v85; // [rsp+7Ch] [rbp-10DCh]
  void **v86; // [rsp+80h] [rbp-10D8h]
  __int64 v87; // [rsp+90h] [rbp-10C8h] BYREF
  __int128 v88; // [rsp+98h] [rbp-10C0h]
  char *v89; // [rsp+A8h] [rbp-10B0h]
  __int64 v90; // [rsp+B0h] [rbp-10A8h]
  char v91; // [rsp+B8h] [rbp-10A0h] BYREF
  __int128 *v92; // [rsp+D8h] [rbp-1080h]
  __int64 v93; // [rsp+E0h] [rbp-1078h]
  __int128 v94; // [rsp+E8h] [rbp-1070h] BYREF
  void *ptr; // [rsp+F8h] [rbp-1060h]
  void *v96; // [rsp+100h] [rbp-1058h] BYREF
  __m128i si128; // [rsp+108h] [rbp-1050h]
  char v98; // [rsp+118h] [rbp-1040h] BYREF

  v76 = a1;
  v75 = &v96;
  v96 = &v98;
  v89 = &v91;
  v74 = a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D50);
  v90 = 0x400000000LL;
  v77 = &v87;
  v88 = 0;
  v92 = &v94;
  v93 = 0;
  v94 = 0;
  v87 = 64;
  v2 = sub_9FB8B0();
  v3 = *(_DWORD *)(a1 + 768);
  ptr = v2;
  if ( v3 )
  {
    v42 = v76;
    v72 = (unsigned int *)(*(_QWORD *)(v76 + 760) + 48LL * *(unsigned int *)(v76 + 776));
    v81 = _mm_loadh_ps((const double *)&v72);
    sub_9FD880((unsigned int **)&v81);
    v43 = v81.m128_u64[0];
    v44 = *(unsigned int *)(v42 + 776);
    v73 = v81.m128_u64[0];
    v45 = (unsigned int *)(48 * v44 + *(_QWORD *)(v42 + 760));
    v81 = _mm_loadh_ps((const double *)&v81.m128_u64[1]);
    v72 = v45;
    if ( (unsigned int *)v73 != v45 )
    {
      v46 = v43;
      v47 = v77;
      do
      {
        v53 = *(_QWORD *)(v46 + 40);
        v54 = 2 * v87;
        ++HIDWORD(v87);
        if ( 4 * HIDWORD(v87) >= (unsigned int)(3 * v87) )
        {
          v73 = v54;
          v55 = (char *)sub_9FB640(v54);
          v56 = (unsigned int)v87;
          v57 = ptr;
          if ( (_DWORD)v87 )
          {
            v58 = 0;
            v59 = v73 - 1;
            do
            {
              v60 = v57[2 * v58 + 1];
              if ( v60 )
              {
                do
                {
                  v61 = *(_DWORD *)(v60 + 56) & (unsigned int)v59;
                  v62 = *(_QWORD *)(v60 + 48);
                  *(_QWORD *)(v60 + 48) = 0;
                  v63 = &v55[16 * v61];
                  *(_QWORD *)(v60 + 48) = *((_QWORD *)v63 + 1);
                  *((_QWORD *)v63 + 1) = v60;
                  v60 = v62;
                  ++*((_DWORD *)v63 + 1);
                }
                while ( v62 );
                v57 = ptr;
              }
              ++v58;
            }
            while ( v58 != v56 );
          }
          v73 = (unsigned __int64)v55;
          free(v57);
          LODWORD(v87) = v54;
          ptr = (void *)v73;
        }
        v48 = sub_A03370(v47 + 1, 64, 3u);
        v49 = *(_DWORD *)v46;
        *(_QWORD *)(v48 + 16) = 0x200000000LL;
        *(_DWORD *)v48 = v49;
        v50 = *(_DWORD *)(v46 + 16);
        *(_QWORD *)(v48 + 8) = v48 + 24;
        if ( v50 )
          sub_9EEAD0((__int64 *)(v48 + 8), (__int64 *)(v46 + 8));
        *(_QWORD *)(v48 + 40) = v53;
        *(_QWORD *)(v48 + 48) = 0;
        v51 = sub_9FF690((unsigned int *)v46);
        *(_DWORD *)(v48 + 56) = v51;
        v52 = (char *)ptr + 16 * (((_DWORD)v87 - 1) & v51);
        *(_QWORD *)(v48 + 48) = *((_QWORD *)v52 + 1);
        ++*((_DWORD *)v52 + 1);
        *((_QWORD *)v52 + 1) = v48;
        v81.m128_u64[0] += 48LL;
        sub_9FD880((unsigned int **)&v81);
        v46 = v81.m128_u64[0];
      }
      while ( (unsigned int *)v81.m128_u64[0] != v72 );
    }
  }
  v81.m128_i32[2] = 2;
  v82 = 0;
  v4 = 1;
  v84 = 0;
  v81.m128_u64[0] = (unsigned __int64)&off_2BC1F40;
  v85 = 1;
  v86 = v75;
  v83 = 0;
  sub_9FB9C0(&v81);
  LODWORD(v79) = 0;
  v72 = (unsigned int *)&v79;
  sub_22581D0(&v81, &v79, 4);
  v79 = &v81;
  v80 = 1;
  if ( HIDWORD(v87) > 2 )
  {
    v4 = 1;
    if ( (unsigned int)(4 * HIDWORD(v87)) > 2 )
    {
      _BitScanReverse(&v5, 4 * HIDWORD(v87) / 3u);
      v4 = 1 << (32 - (v5 ^ 0x1F));
    }
  }
  if ( (_DWORD)v87 == v4 )
  {
    v6 = (char *)ptr;
  }
  else
  {
    v64 = (char *)sub_9FB640(v4);
    v65 = (unsigned int)v87;
    v66 = ptr;
    if ( (_DWORD)v87 )
    {
      v67 = 0;
      do
      {
        v68 = v66[2 * v67 + 1];
        if ( v68 )
        {
          do
          {
            v69 = *(_DWORD *)(v68 + 56) & (v4 - 1);
            v70 = *(_QWORD *)(v68 + 48);
            *(_QWORD *)(v68 + 48) = 0;
            v71 = &v64[16 * v69];
            *(_QWORD *)(v68 + 48) = *((_QWORD *)v71 + 1);
            *((_QWORD *)v71 + 1) = v68;
            v68 = v70;
            ++*((_DWORD *)v71 + 1);
          }
          while ( v70 );
          v66 = ptr;
        }
        ++v67;
      }
      while ( v67 != v65 );
    }
    v73 = (unsigned __int64)v64;
    free(v66);
    v6 = (char *)v73;
    LODWORD(v87) = v4;
    ptr = (void *)v73;
  }
  v7 = 0;
  while ( 1 )
  {
    v8 = &v6[16 * v7];
    if ( *((_QWORD *)v8 + 1) )
    {
      v9 = sub_22571A0(&v81);
      v10 = *((_WORD *)v8 + 2);
      v11 = (__int64 *)v72;
      *(_DWORD *)v8 = v9 + v83 - v82;
      sub_9FCB20(v11, v10);
      for ( i = *((_QWORD *)v8 + 1); i; i = *(_QWORD *)(i + 48) )
      {
        sub_9FCAC0((__int64)v79, *(_DWORD *)(i + 56), v80);
        LOWORD(v78) = 4 * *(_WORD *)(i + 16) + 2;
        sub_22581D0(&v81, &v78, 2);
        LOWORD(v78) = 4;
        sub_22581D0(&v81, &v78, 2);
        LOWORD(v78) = *(_DWORD *)i;
        sub_22581D0(&v81, &v78, 2);
        v13 = *(unsigned __int64 **)(i + 8);
        v14 = &v13[*(unsigned int *)(i + 16)];
        while ( v14 != v13 )
        {
          v15 = *v13++;
          v78 = v15 >> 33;
          sub_22581D0(&v81, &v78, 4);
        }
        v78 = *(_QWORD *)(i + 40) >> 33;
        sub_22581D0(&v81, &v78, 4);
      }
    }
    if ( (unsigned int)v87 <= ++v7 )
      break;
    v6 = (char *)ptr;
  }
  v16 = sub_22571A0(&v81);
  v17 = (unsigned int)(v16 + v83 - v82);
  v18 = (v17 + 3) & 0xFFFFFFFC;
  v19 = ((v17 + 3) & 0xFFFFFFFFFFFFFFFCLL) - v17 - 1;
  if ( ((v17 + 3) & 0xFFFFFFFFFFFFFFFCLL) != v17 )
  {
    do
    {
      --v19;
      LOBYTE(v78) = 0;
      sub_22581D0(v79, &v78, 1);
    }
    while ( v19 != -1 );
  }
  sub_9FCAC0((__int64)v79, v87, v80);
  sub_9FCAC0((__int64)v79, HIDWORD(v87), v80);
  if ( (_DWORD)v87 )
  {
    v20 = 0;
    do
    {
      v21 = v20++;
      sub_9FCAC0((__int64)v79, *((_DWORD *)ptr + 4 * v21), v80);
    }
    while ( (unsigned int)v87 > v20 );
  }
  LODWORD(v79) = v18;
  v81.m128_u64[0] = (unsigned __int64)&unk_2C4C288;
  sub_2257A60(&v81);
  free(ptr);
  v22 = v89;
  v23 = (unsigned int)v90;
  v24 = &v89[8 * (unsigned int)v90];
  if ( v89 != v24 )
  {
    v25 = v89;
    while ( 1 )
    {
      v26 = *(_QWORD *)v22;
      v27 = (unsigned int)((v22 - v25) >> 3) >> 7;
      v28 = 4096LL << v27;
      if ( v27 >= 0x1E )
        v28 = 0x40000000000LL;
      v29 = (*(_QWORD *)v22 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
      v30 = v26 + v28;
      if ( v26 == *(_QWORD *)&v25[8 * v23 - 8] )
        v30 = v88;
      while ( 1 )
      {
        v29 += 64LL;
        if ( v30 < v29 )
          break;
        while ( 1 )
        {
          v31 = *(void **)(v29 - 56);
          if ( v31 == (void *)(v29 - 40) )
            break;
          free(v31);
          v29 += 64LL;
          if ( v30 < v29 )
            goto LABEL_29;
        }
      }
LABEL_29:
      v22 += 8;
      if ( v24 == v22 )
        break;
      v25 = v89;
      v23 = (unsigned int)v90;
    }
  }
  v32 = v92;
  v33 = &v92[(unsigned int)v93];
  if ( v92 != v33 )
  {
    do
    {
      v34 = *(_QWORD *)v32 + *((_QWORD *)v32 + 1);
      v35 = (*(_QWORD *)v32 + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
      while ( 1 )
      {
        v35 += 64LL;
        if ( v34 < v35 )
          break;
        while ( 1 )
        {
          v36 = *(void **)(v35 - 56);
          if ( v36 == (void *)(v35 - 40) )
            break;
          free(v36);
          v35 += 64LL;
          if ( v35 > v34 )
            goto LABEL_36;
        }
      }
LABEL_36:
      ++v32;
    }
    while ( v33 != v32 );
  }
  v37 = (__int64)v77;
  v38 = (__int64)(v77 + 1);
  sub_A00DD0((__m128 *)(v77 + 1));
  sub_993350(v38);
  v87 = v74;
  v39 = sub_A00970(v74);
  v40 = v75;
  LODWORD(v88) = v39;
  sub_A02CF0(v37, v76 + 40, v72, (__int64)v75);
  if ( v96 != v40 + 3 )
    free(v96);
  return sub_A01810(v74);
}

