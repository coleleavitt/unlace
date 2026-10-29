/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D2140
// Address: 0x080D2140

//----- (080D2140) --------------------------------------------------------
void *__cdecl sub_80D2140(int a1, char **a2)
{
  void *v2; // edi
  int v3; // eax
  char *v5; // eax
  char *v6; // ecx
  __int64 v7; // xmm2_8
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int v11; // eax
  char *v12; // esi
  int v13; // esi
  char *v14; // edx
  int v15; // esi
  char *v16; // edi
  int v17; // edx
  int v18; // edx
  int v19; // esi
  char *v20; // edi
  unsigned int v21; // ecx
  void *v22; // eax
  int *v23; // eax
  void *v24; // eax
  char *v25; // eax
  char *v26; // ecx
  __int64 v27; // xmm1_8
  _DWORD *v28; // eax
  size_t v29; // eax
  size_t v30; // edi
  size_t v31; // esi
  int v32; // esi
  __int64 v33; // kr00_8
  int v34; // eax
  _DWORD *v35; // edi
  char *v36; // ecx
  int v37; // edi
  int v38; // esi
  char *v39; // edx
  void *v40; // eax
  int v41; // edi
  const char *v42; // ebx
  int v43; // eax
  int *v44; // esi
  int v45; // edx
  int v46; // eax
  int v47; // ecx
  int *v48; // edi
  void *v49; // eax
  char *v50; // ecx
  void *v51; // edx
  __int64 *v52; // eax
  char *v53; // eax
  int v54; // esi
  _DWORD *v55; // eax
  int v56; // edx
  __gid_t v57; // eax
  int v58; // eax
  int *v59; // eax
  int *v60; // eax
  __m128i v61; // xmm0
  char *v62; // eax
  void *v63; // esi
  unsigned int v64; // ecx
  int v65; // edx
  char *v66; // eax
  int v67; // eax
  char *v68; // ebx
  unsigned int v69; // esi
  __int64 v70; // xmm5_8
  char *v71; // ecx
  char *v72; // eax
  size_t v73; // esi
  unsigned int v74; // edx
  int v75; // edx
  char *v76; // eax
  unsigned int v77; // esi
  __int64 v78; // xmm7_8
  int v79; // edi
  char *v80; // eax
  char *v81; // eax
  int v82; // edx
  __int64 v83; // xmm3_8
  char *v84; // eax
  int *v85; // eax
  void *v86; // eax
  int *v87; // esi
  void *v88; // eax
  int *v89; // edi
  int v90; // [esp-14h] [ebp-94h]
  int v91; // [esp-14h] [ebp-94h]
  int v92; // [esp-10h] [ebp-90h]
  int v93; // [esp-Ch] [ebp-8Ch]
  char *s; // [esp+0h] [ebp-80h]
  char *const *argv; // [esp+8h] [ebp-78h]
  char v96; // [esp+13h] [ebp-6Dh]
  char *file; // [esp+14h] [ebp-6Ch]
  char *filea; // [esp+14h] [ebp-6Ch]
  char *fileb; // [esp+14h] [ebp-6Ch]
  int n; // [esp+18h] [ebp-68h]
  int nb; // [esp+18h] [ebp-68h]
  unsigned int na; // [esp+18h] [ebp-68h]
  size_t nc; // [esp+18h] [ebp-68h]
  void *ptr; // [esp+28h] [ebp-58h] BYREF
  size_t size; // [esp+2Ch] [ebp-54h]
  unsigned int v106; // [esp+30h] [ebp-50h]
  void *v107; // [esp+38h] [ebp-48h] BYREF
  unsigned int v108; // [esp+3Ch] [ebp-44h]
  int v109; // [esp+40h] [ebp-40h]
  void *src; // [esp+48h] [ebp-38h] BYREF
  int v111; // [esp+4Ch] [ebp-34h]
  unsigned int v112; // [esp+50h] [ebp-30h]
  _BYTE rlimits[12]; // [esp+58h] [ebp-28h] BYREF
  unsigned int v114; // [esp+64h] [ebp-1Ch]

  v114 = __readgsdword(0x14u);
  if ( (dword_811F8A4 & 0x4000000) != 0 )
  {
    v92 = *(_DWORD *)(a1 + 12);
    v90 = *(_DWORD *)(a1 + 8);
    sub_80BE360();
    if ( *((_DWORD *)&qword_811CFF4 + 2612) )
      goto LABEL_3;
  }
  else if ( *((_DWORD *)&qword_811CFF4 + 2612) )
  {
    goto LABEL_3;
  }
  *((_DWORD *)&qword_811CFF4 + 2612) = sub_80D0B70();
  *((_DWORD *)&qword_811CFF4 + 2613) = sub_80D1320();
LABEL_3:
  ptr = nullptr;
  size = 0;
  v106 = 0;
  if ( (*(_BYTE *)(a1 + 4) & 8) != 0 )
  {
    if ( !(unsigned __int8)sub_80D2000((char *)&qword_811CFF4 - 271402, &ptr) )
    {
      v28 = ptr;
      if ( v106 <= 7 )
      {
        v28 = sub_80CF920((int)&ptr, ptr, 8u, 1u);
        ptr = v28;
      }
      size = 8;
      *v28 = 1852400175;
      *(_DWORD *)((char *)v28 + 3) = 1752379246;
      *((_BYTE *)ptr + 7) = 0;
    }
  }
  else if ( (unsigned __int8)sub_80CE7D0(*(_BYTE **)(a1 + 8)) && !(unsigned __int8)sub_80CED40(*(_DWORD *)(a1 + 8)) )
  {
    memset(rlimits, 0, sizeof(rlimits));
    sub_805ED10(rlimits, "%s: file does not exist", *(_DWORD *)(a1 + 8));
    if ( (dword_811F8A4 & 0x4000000) != 0 )
      sub_80BE360();
    v5 = *(char **)rlimits;
    if ( a2 )
    {
      v5 = *a2;
      v6 = a2[2];
      *a2 = *(char **)rlimits;
      v7 = *(_QWORD *)&rlimits[4];
      *(_DWORD *)rlimits = v5;
      *(_DWORD *)&rlimits[8] = v6;
      *(_QWORD *)(a2 + 1) = v7;
    }
    if ( v5 )
    {
      *(_DWORD *)&rlimits[4] = 0;
      sub_80CF780(v5);
    }
    goto LABEL_23;
  }
  v2 = (void *)fork();
  if ( v2 == (void *)-1 )
  {
    memset(rlimits, 0, sizeof(rlimits));
    v23 = __errno_location();
    v24 = sub_80D0500(*v23);
    sub_805ED10(rlimits, "fork() failed: %s", v24);
    if ( (dword_811F8A4 & 0x4000000) != 0 )
      sub_80BE360();
    v25 = *(char **)rlimits;
    if ( a2 )
    {
      v25 = *a2;
      v26 = a2[2];
      *a2 = *(char **)rlimits;
      v27 = *(_QWORD *)&rlimits[4];
      *(_DWORD *)rlimits = v25;
      *(_DWORD *)&rlimits[8] = v26;
      *(_QWORD *)(a2 + 1) = v27;
    }
    if ( v25 )
    {
      *(_DWORD *)&rlimits[4] = 0;
      v2 = nullptr;
      sub_80CF780(v25);
      goto LABEL_11;
    }
LABEL_23:
    v2 = nullptr;
    goto LABEL_11;
  }
  v3 = *(_DWORD *)(a1 + 4);
  if ( !v2 )
  {
    if ( (v3 & 0x40) != 0 )
    {
      personality(0x40000u);
      if ( (*(_DWORD *)(a1 + 4) & 0x80u) == 0 )
        goto LABEL_26;
    }
    else if ( (v3 & 0x80u) == 0 )
    {
LABEL_26:
      v8 = *(_DWORD *)(a1 + 16);
      if ( (unsigned int)(v8 + 1) > 1 && dup2(v8, 0) )
      {
        if ( !byte_811F8A1 )
        {
          if ( v114 == __readgsdword(0x14u) )
            sub_80CFF40(11, v90, v92, v93);
          sub_80D7AB0();
        }
        goto LABEL_193;
      }
      v9 = *(_DWORD *)(a1 + 20);
      if ( ((v9 + 1) & 0xFFFFFFFD) != 0 && dup2(v9, 1) != 1 )
      {
        if ( !byte_811F8A1 )
        {
          if ( v114 == __readgsdword(0x14u) )
            sub_80CFF40(12, v90, v92, v93);
          sub_80D7AB0();
        }
        goto LABEL_193;
      }
      v10 = *(_DWORD *)(a1 + 24);
      if ( v10 != -1 && v10 != 2 && dup2(v10, 2) != 2 )
      {
        if ( !byte_811F8A1 )
        {
          if ( v114 == __readgsdword(0x14u) )
            sub_80CFF40(13, v90, v92, v93);
          sub_80D7AB0();
        }
        goto LABEL_193;
      }
      v11 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 > 0x1Cu )
      {
        v12 = *(char **)(a1 + 28);
        if ( v12 && *v12 )
        {
          do
          {
            putenv(v12);
            v12 += strlen(v12) + 1;
          }
          while ( *v12 );
          v11 = *(_DWORD *)a1;
        }
        if ( v11 > 0x20 )
        {
          v13 = *(_DWORD *)(a1 + 32);
          if ( v13 )
          {
            if ( sub_80CE840(*(char **)(a1 + 32)) == -1 )
            {
              v89 = __errno_location();
              sub_80D0500(*v89);
              sub_80C7820((char *)&qword_811CFF4 - 271336, v13);
              if ( v114 == __readgsdword(0x14u) )
                _exit(-*v89);
              sub_80D7AB0();
            }
          }
        }
      }
      v107 = nullptr;
      v108 = 0;
      v14 = *(char **)(a1 + 8);
      v15 = *(_DWORD *)(a1 + 4);
      v109 = 0;
      src = nullptr;
      v16 = *(char **)(a1 + 12);
      s = v14;
      v111 = 0;
      v112 = 0;
      if ( (v15 & 8) == 0 )
      {
        if ( v16 )
          sub_80C46E0((char **)&src, (size_t *)&v107, v16, v15);
        if ( (v15 & 4) != 0 )
        {
          v17 = v111;
          goto LABEL_43;
        }
        memset(rlimits, 0, sizeof(rlimits));
        if ( s )
        {
          v29 = strlen(s);
          v30 = v29 + 1;
          v31 = v29;
          *(_DWORD *)rlimits = sub_80CF920((int)rlimits, nullptr, v29 + 1, 1u);
          *(_DWORD *)&rlimits[4] = v30;
          memmove(*(void **)rlimits, s, v31);
          *(_BYTE *)(*(_DWORD *)rlimits + v31) = 0;
          v32 = *(_DWORD *)rlimits;
          v33 = *(_QWORD *)&rlimits[4];
        }
        else
        {
          v32 = 0;
          v33 = 0;
        }
        v34 = v111;
        memset(rlimits, 0, sizeof(rlimits));
        v35 = src;
        if ( v112 < v111 + 1 )
        {
          v35 = sub_80CF920((int)&src, src, v111 + 1, 0xCu);
          src = v35;
          v34 = v111;
        }
        memmove(v35 + 3, v35, 12 * v34);
        *v35 = v32;
        *(_QWORD *)(v35 + 1) = v33;
        v17 = ++v111;
        if ( *(_DWORD *)rlimits )
          goto LABEL_76;
        goto LABEL_43;
      }
      v61 = _mm_cvtsi32_si128(size);
      if ( _mm_cvtsi128_si32(v61) )
      {
        nc = _mm_cvtsi128_si32(v61);
        v63 = sub_80CF8B0(nc);
        memcpy(v63, ptr, _mm_cvtsi128_si32(_mm_cvtsi32_si128(nc)));
        v65 = v111;
        v62 = (char *)src;
        v61 = _mm_cvtsi32_si128(nc);
        v64 = v111 + 1;
        if ( v112 >= v111 + 1 )
          goto LABEL_140;
      }
      else
      {
        v62 = nullptr;
        v63 = nullptr;
        v64 = 1;
      }
      v62 = (char *)sub_80CF920((int)&src, v62, v64, 0xCu);
      v65 = v111;
      v61 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v61));
      src = v62;
LABEL_140:
      v66 = &v62[12 * v65];
      *(_DWORD *)v66 = v63;
      *(_QWORD *)(v66 + 4) = _mm_unpacklo_epi32(v61, v61).m128i_u64[0];
      v17 = ++v111;
      if ( !v16 || !*v16 )
        goto LABEL_43;
      memset(rlimits, 0, sizeof(rlimits));
      *(_DWORD *)rlimits = sub_80CF920((int)rlimits, nullptr, 3u, 1u);
      *(_DWORD *)&rlimits[4] = 3;
      strcpy(*(char **)rlimits, "-c");
      v67 = v111;
      v68 = (char *)src;
      v69 = v111 + 1;
      if ( rlimits < src || rlimits >= (char *)src + 12 * v112 )
      {
        if ( v112 < v69 )
        {
          v68 = (char *)sub_80CF920((int)&src, src, v111 + 1, 0xCu);
          src = v68;
          v67 = v111;
        }
        v83 = *(_QWORD *)&rlimits[4];
        v84 = &v68[12 * v67];
        *(_DWORD *)v84 = *(_DWORD *)rlimits;
        *(_QWORD *)(v84 + 4) = v83;
        ++v111;
      }
      else
      {
        v70 = *(_QWORD *)&rlimits[4];
        v71 = *(char **)rlimits;
        memset(rlimits, 0, sizeof(rlimits));
        filea = v71;
        if ( v112 < v69 )
        {
          v68 = (char *)sub_80CF920((int)&src, src, v111 + 1, 0xCu);
          src = v68;
          v67 = v111;
        }
        v72 = &v68[12 * v67];
        *(_DWORD *)v72 = filea;
        *(_QWORD *)(v72 + 4) = v70;
        ++v111;
        if ( *(_DWORD *)rlimits )
        {
          *(_DWORD *)&rlimits[4] = 0;
          sub_80CF780(*(void **)rlimits);
          memset(rlimits, 0, sizeof(rlimits));
          v73 = strlen(v16);
          v74 = v73 + 1;
LABEL_148:
          fileb = (char *)v74;
          *(_DWORD *)rlimits = sub_80CF920((int)rlimits, nullptr, v74, 1u);
          *(_DWORD *)&rlimits[4] = fileb;
          memmove(*(void **)rlimits, v16, v73);
          *(_BYTE *)(*(_DWORD *)rlimits + v73) = 0;
          v75 = v111;
          v76 = (char *)src;
          v77 = v111 + 1;
          if ( rlimits < src || rlimits >= (char *)src + 12 * v112 )
          {
            if ( v112 < v77 )
            {
              v76 = (char *)sub_80CF920((int)&src, src, v111 + 1, 0xCu);
              v75 = v111;
              src = v76;
            }
            v81 = &v76[12 * v75];
            v82 = *(_DWORD *)rlimits;
            *(_QWORD *)(v81 + 4) = *(_QWORD *)&rlimits[4];
            *(_DWORD *)v81 = v82;
            v17 = ++v111;
          }
          else
          {
            v78 = *(_QWORD *)&rlimits[4];
            v79 = *(_DWORD *)rlimits;
            memset(rlimits, 0, sizeof(rlimits));
            if ( v112 < v77 )
            {
              v76 = (char *)sub_80CF920((int)&src, src, v111 + 1, 0xCu);
              v75 = v111;
              src = v76;
            }
            v80 = &v76[12 * v75];
            *(_DWORD *)v80 = v79;
            *(_QWORD *)(v80 + 4) = v78;
            v17 = ++v111;
            if ( *(_DWORD *)rlimits )
            {
LABEL_76:
              *(_DWORD *)&rlimits[4] = 0;
              sub_80CF780(*(void **)rlimits);
              v17 = v111;
            }
          }
LABEL_43:
          n = v17;
          file = (char *)(4 * v17 + 4);
          argv = (char *const *)sub_80CF710((int)file);
          if ( !argv )
          {
            if ( v114 == __readgsdword(0x14u) )
              sub_807ECA0((int)&qword_811CFF4 - 271354, v90);
            sub_80D7AB0();
          }
          v18 = n;
          v19 = 0;
          if ( n )
          {
            do
            {
              v20 = (char *)src + 12 * v19;
              v21 = *((_DWORD *)v20 + 1);
              v22 = *(void **)v20;
              if ( v21 < *((_DWORD *)v20 + 2) )
              {
                if ( v21 )
                {
                  if ( v22 )
                  {
                    nb = v18;
                    v22 = sub_80CF7A0(v22, v21);
                    v18 = nb;
                    if ( !v22 )
                      v22 = *(void **)v20;
                  }
                }
              }
              *((_DWORD *)v20 + 1) = 0;
              *((_DWORD *)v20 + 2) = 0;
              *(_DWORD *)v20 = 0;
              argv[v19++] = (char *const)v22;
            }
            while ( v19 != v18 );
          }
          *(_DWORD *)&file[(_DWORD)argv - 4] = 0;
          v36 = (char *)src;
          if ( src )
          {
            v37 = v111;
            if ( v111 )
            {
              v38 = 0;
              do
              {
                v39 = &v36[12 * v38];
                v40 = *(void **)v39;
                if ( *(_DWORD *)v39 )
                {
                  *((_DWORD *)v39 + 1) = 0;
                  sub_80CF780(v40);
                  v36 = (char *)src;
                }
                ++v38;
              }
              while ( v37 != v38 );
            }
            v111 = 0;
            sub_80CF780(v36);
          }
          if ( (*(_BYTE *)(a1 + 4) & 8) != 0 )
            s = *argv;
          na = 0;
          v41 = 0;
          if ( !v108 )
          {
LABEL_112:
            if ( !getrlimit(7, (struct rlimit *)rlimits) && *(_DWORD *)rlimits > 1u )
            {
              v54 = *(_DWORD *)rlimits - 1;
              if ( (unsigned int)(*(_DWORD *)rlimits - 1) > 2 )
              {
                do
                {
                  for ( ; v54 > 9; --v54 )
                    close(v54);
                  if ( v108 )
                  {
                    v55 = v107;
                    v56 = 0;
                    while ( v54 != *v55 )
                    {
                      ++v56;
                      v55 += 7;
                      if ( v56 == v108 )
                        goto LABEL_174;
                    }
                  }
                  else
                  {
LABEL_174:
                    close(v54);
                  }
                  --v54;
                }
                while ( v54 != 2 );
              }
            }
            setpgid(0, 0);
            v57 = getgid();
            if ( !setgid(v57) )
            {
              v58 = *(_DWORD *)(a1 + 4);
              if ( (v58 & 2) != 0 )
              {
                if ( ptrace(PTRACE_TRACEME, 0, 0, 0) == -1 )
                {
                  v85 = __errno_location();
                  v86 = sub_80D0500(*v85);
                  sub_80C7820((char *)&qword_811CFF4 - 271310, (int)v86);
                  if ( v114 == __readgsdword(0x14u) )
                    _exit(-1);
                  sub_80D7AB0();
                }
                v58 = *(_DWORD *)(a1 + 4);
              }
              if ( (v58 & 0x202) != 0 )
              {
                execv(s, argv);
                v59 = __errno_location();
                sub_80D0500(*v59);
                sub_80C7820((char *)&qword_811CFF4 - 271298, (int)&qword_811CFF4 - 281405);
              }
              execvp(s, argv);
              v60 = __errno_location();
              sub_80D0500(*v60);
              sub_80C7820((char *)&qword_811CFF4 - 271298, (int)&qword_811CFF4 - 281021);
              if ( v114 == __readgsdword(0x14u) )
                _exit(1);
              sub_80D7AB0();
            }
            v87 = __errno_location();
            v88 = sub_80D0500(*v87);
            sub_80C7820((char *)&qword_811CFF4 - 271322, (int)v88);
            if ( v114 == __readgsdword(0x14u) )
              _exit(-*v87);
            sub_80D7AB0();
          }
          while ( 1 )
          {
            v44 = (int *)((char *)v107 + v41);
            v45 = *(_DWORD *)((char *)v107 + v41 + 16);
            v46 = *(_DWORD *)((char *)v107 + v41 + 8);
            v47 = v45 & 8;
            if ( (v45 & 8) != 0 )
              break;
            if ( !v46 )
            {
              v42 = (char *)&qword_811CFF4 - 258076;
              if ( (v45 & 1) == 0 )
              {
                if ( (v45 & 4) != 0 )
                  v47 = 1089;
                else
                  v47 = 577;
                v42 = (char *)&qword_811CFF4 - 258076;
              }
              goto LABEL_100;
            }
            v42 = (const char *)v44[1];
            if ( *v42 != 38 || (v96 = v42[1], (unsigned __int8)(v96 - 48) > 9u) )
            {
              if ( (v45 & 1) == 0 )
                v47 = (v45 & 4) == 0 ? 577 : 1089;
              goto LABEL_100;
            }
            v43 = v96 - 48;
LABEL_92:
            if ( v43 == *v44 )
            {
              fcntl(v43, 2, 0);
              v41 += 28;
              if ( ++na >= v108 )
                goto LABEL_112;
            }
            else
            {
              if ( dup2(v43, *v44) != *v44 )
              {
                if ( !byte_811F8A1 )
                {
                  if ( v114 == __readgsdword(0x14u) )
                    sub_80CFF40(575, v91, v92, v93);
                  sub_80D7AB0();
                }
LABEL_193:
                BUG();
              }
              ++na;
              v41 += 28;
              if ( na >= v108 )
                goto LABEL_112;
            }
          }
          v47 = 0;
          if ( (v45 & 1) == 0 )
            v47 = (v45 & 4) == 0 ? 577 : 1089;
          v42 = (char *)&qword_811CFF4 - 258076;
          if ( v46 )
            v42 = (const char *)v44[1];
LABEL_100:
          v43 = open(v42, v47, 420);
          if ( v43 == -1 )
          {
            v48 = __errno_location();
            if ( a2 )
            {
              v49 = sub_80D0500(*v48);
              v50 = (char *)&qword_811CFF4 - 258076;
              v51 = v49;
              if ( v44[2] )
                v50 = (char *)v44[1];
              v52 = &qword_811CFF4 - 35282;
              if ( (v44[4] & 1) != 0 )
                v52 = (__int64 *)((char *)&qword_811CFF4 - 271407);
              sub_805ED10(a2, (char *)&qword_811CFF4 - 258268, *v44, v52, v50, v51);
              v53 = (char *)&qword_811CFF4 - 258076;
              if ( a2[1] )
                v53 = *a2;
              sub_80C7820((char *)&qword_811CFF4 - 271737, (int)v53);
            }
            if ( v114 == __readgsdword(0x14u) )
              _exit(-*v48);
            sub_80D7AB0();
          }
          goto LABEL_92;
        }
      }
      memset(rlimits, 0, sizeof(rlimits));
      v73 = strlen(v16);
      v74 = v73 + 1;
      goto LABEL_148;
    }
    sub_80D0A70();
    goto LABEL_26;
  }
  if ( (v3 & 0x80u) != 0 )
  {
    sub_80D0B00();
    v3 = *(_DWORD *)(a1 + 4);
  }
  if ( (v3 & 0x400) != 0 )
    sub_80D1500((void *(*)(void *))((char *)&qword_811CFF4 - 307412), v2);
LABEL_11:
  if ( ptr )
  {
    size = 0;
    sub_80CF780(ptr);
  }
  if ( v114 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v2;
}
// 80D2663: variable 'v90' is possibly undefined
// 80D2663: variable 'v92' is possibly undefined
// 80D2663: variable 'v93' is possibly undefined
// 80D305E: variable 'v91' is possibly undefined
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811F8A1: using guessed type char byte_811F8A1;
// 811F8A4: using guessed type int dword_811F8A4;
