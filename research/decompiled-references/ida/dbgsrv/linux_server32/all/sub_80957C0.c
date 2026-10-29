/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80957C0
// Address: 0x080957C0

//----- (080957C0) --------------------------------------------------------
int __cdecl sub_80957C0(int a1, int *a2)
{
  int v2; // esi
  int (__cdecl *v3)(_DWORD, _DWORD, int, char *); // edx
  int v4; // eax
  char *v5; // ecx
  int v6; // eax
  unsigned int v7; // edi
  unsigned __int8 *v8; // ecx
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // dl
  int result; // eax
  char *v12; // edx
  int v13; // eax
  char *v14; // eax
  char *v15; // eax
  size_t v16; // edx
  size_t v17; // ecx
  void *v18; // eax
  int v19; // ecx
  unsigned __int8 *v20; // eax
  char *v21; // eax
  int v22; // edi
  char *v23; // edi
  int v24; // eax
  char v25; // al
  char v26; // dl
  int v27; // ebx
  int v28; // ebx
  int v29; // eax
  int v30; // edx
  _BYTE *v31; // eax
  _BYTE *v32; // edx
  char *v33; // eax
  int v34; // ecx
  const char *v35; // edi
  int (__cdecl *v36)(_DWORD, const char *, __int64 *, __int64 *); // eax
  int v37; // eax
  int (__cdecl *v38)(_DWORD, _DWORD, _DWORD, _DWORD); // eax
  const char *v39; // edi
  int v40; // edi
  const char *v41; // ecx
  const char *v42; // esi
  const char *v43; // eax
  void *v44; // edi
  int v45; // eax
  int v46; // eax
  __m128i v47; // xmm0
  int v48; // eax
  char *v49; // eax
  char *v50; // ebx
  int v51; // edx
  void (__cdecl *v52)(_DWORD, char *, int, int); // eax
  unsigned __int8 v53; // bl
  unsigned int v54; // eax
  unsigned int v55; // edi
  int v56; // eax
  int v57; // edx
  int (__cdecl *v58)(_DWORD, char *, _DWORD, unsigned int, _DWORD, _DWORD, int, int); // eax
  int v59; // eax
  size_t v60; // [esp-38h] [ebp-48h]
  size_t v61; // [esp-34h] [ebp-44h]
  size_t v62; // [esp-34h] [ebp-44h]
  int v63; // [esp-2Ch] [ebp-3Ch]
  int v64; // [esp-28h] [ebp-38h]
  int v65; // [esp-20h] [ebp-30h]
  unsigned int v66; // [esp-20h] [ebp-30h]
  unsigned int v67; // [esp-20h] [ebp-30h]
  unsigned int v68; // [esp-20h] [ebp-30h]
  unsigned __int8 v69; // [esp-20h] [ebp-30h]
  size_t v70; // [esp-20h] [ebp-30h]
  int v71; // [esp-20h] [ebp-30h]
  char *v72; // [esp-20h] [ebp-30h]
  int v73; // [esp-1Ch] [ebp-2Ch] BYREF
  __int64 v74; // [esp-18h] [ebp-28h]
  unsigned int v75; // [esp-10h] [ebp-20h]

  v2 = a1;
  v75 = __readgsdword(0x14u);
  v64 = a1 + 160;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
LABEL_2:
              if ( (*(int (__cdecl **)(int, _DWORD))(v2 + 112))(v64, *(_DWORD *)(v2 + 116)) < 0 )
              {
                if ( *(_DWORD *)(v2 + 140) )
                {
                  sub_8091B10(v2);
                  continue;
                }
                if ( !*(_DWORD *)(v2 + 184) )
                {
                  *a2 = 34;
                  result = 0;
                  goto LABEL_15;
                }
                *a2 = 37;
                goto LABEL_62;
              }
              v3 = *(int (__cdecl **)(_DWORD, _DWORD, int, char *))(v2 + 88);
              v4 = *(_DWORD *)(v2 + 156) + 1;
              *(_DWORD *)(v2 + 156) = v4;
              if ( v3 )
              {
                v5 = (char *)&qword_811CFF4 - 258076;
                if ( *(_DWORD *)(v2 + 164) )
                  v5 = *(char **)(v2 + 160);
                v6 = v3(*(_DWORD *)(v2 + 108), *(_DWORD *)(v2 + 152), v4, v5);
                if ( v6 )
                  goto LABEL_95;
              }
              v7 = *(_DWORD *)(v2 + 164);
              if ( !v7 )
                continue;
              if ( v7 - 1 <= 1 )
                break;
              v65 = v7 - 2;
LABEL_20:
              if ( v7 )
              {
LABEL_44:
                v12 = *(char **)(v2 + 160);
                if ( v12[v65] != 92 )
                {
LABEL_69:
                  v21 = v12;
                  if ( v12[v65] == 92 && v12[v65 - 1] == 92 )
                  {
                    v68 = v7 - 1;
                    if ( (int)(v7 - 1) <= 1 )
                    {
                      if ( v12 )
                      {
LABEL_59:
                        *(_DWORD *)(v2 + 164) = 0;
                        sub_80CF780(v21);
                        v7 = *(_DWORD *)(v2 + 164);
                        *(_DWORD *)(v2 + 160) = 0;
                        *(_DWORD *)(v2 + 168) = 0;
                      }
                    }
                    else
                    {
                      if ( *(_DWORD *)(v2 + 168) < v68 )
                      {
                        v21 = (char *)sub_80CF920(v64, v12, v68, 1u);
                        *(_DWORD *)(v2 + 160) = v21;
                      }
                      *(_DWORD *)(v2 + 164) = v68;
                      v21[v7 - 2] = 0;
                      v7 = *(_DWORD *)(v2 + 164);
                    }
                  }
                  break;
                }
                v13 = v65 - 1;
LABEL_24:
                v14 = &v12[v13];
                goto LABEL_25;
              }
              if ( !v65 )
              {
                if ( byte_811E601 != 92 )
                  goto LABEL_77;
                v12 = *(char **)(v2 + 160);
                v13 = -1;
                goto LABEL_24;
              }
              v19 = v65;
              while ( 1 )
              {
                v12 = *(char **)(v2 + 160);
                if ( v12[v19] != 92 )
                {
                  v65 = v19;
                  goto LABEL_55;
                }
                v65 = 1;
                v14 = &byte_811E601;
                v7 = v19 - 1;
                if ( v19 != 1 )
                {
                  v13 = v19 - 1;
                  v65 = v19;
                  v7 = 0;
                  goto LABEL_24;
                }
LABEL_25:
                if ( *v14 == 92 )
                  goto LABEL_67;
                v73 = 0;
                v74 = 0;
                if ( (*(int (__cdecl **)(int *, _DWORD))(v2 + 112))(&v73, *(_DWORD *)(v2 + 116)) < 0 )
                  break;
                v7 = *(_DWORD *)(v2 + 164);
                ++*(_DWORD *)(v2 + 156);
                v66 = v7 - 1;
                v15 = *(char **)(v2 + 160);
                if ( (int)(v7 - 1) <= 1 )
                {
                  if ( v15 )
                  {
                    *(_DWORD *)(v2 + 164) = 0;
                    sub_80CF780(v15);
                    v7 = *(_DWORD *)(v2 + 164);
                    *(_DWORD *)(v2 + 160) = 0;
                    *(_DWORD *)(v2 + 168) = 0;
                  }
                }
                else
                {
                  if ( *(_DWORD *)(v2 + 168) < v66 )
                  {
                    v15 = (char *)sub_80CF920(v64, v15, v66, 1u);
                    *(_DWORD *)(v2 + 160) = v15;
                  }
                  *(_DWORD *)(v2 + 164) = v66;
                  v15[v7 - 2] = 0;
                  v7 = *(_DWORD *)(v2 + 164);
                }
                v67 = v74;
                if ( (_DWORD)v74 )
                {
                  v16 = v74 - 1;
                  if ( (_DWORD)v74 != 1 )
                  {
                    v17 = v74 - 1;
                    if ( v7 )
                    {
                      --v7;
                      v17 = v16 + v7;
                      v67 = v74 + v7;
                    }
                    v18 = *(void **)(v2 + 160);
                    if ( *(_DWORD *)(v2 + 168) < v67 )
                    {
                      v60 = v74 - 1;
                      v61 = v17;
                      v18 = sub_80CF920(v64, v18, v67, 1u);
                      v16 = v60;
                      v17 = v61;
                      *(_DWORD *)(v2 + 160) = v18;
                    }
                    *(_DWORD *)(v2 + 164) = v67;
                    *((_BYTE *)v18 + v17) = 0;
                    memcpy((void *)(*(_DWORD *)(v2 + 160) + v7), (const void *)v73, v16);
                    v7 = *(_DWORD *)(v2 + 164);
                  }
                }
                if ( v7 )
                {
                  v65 = v7 - 2;
                  if ( !v73 )
                    goto LABEL_44;
                  LODWORD(v74) = 0;
                  sub_80CF780((void *)v73);
                  v7 = *(_DWORD *)(v2 + 164);
                  goto LABEL_20;
                }
                if ( !v73 )
                {
                  v12 = *(char **)(v2 + 160);
                  v65 = -1;
                  v13 = -2;
                  if ( *(v12 - 1) == 92 )
                    goto LABEL_24;
                  goto LABEL_55;
                }
                LODWORD(v74) = 0;
                sub_80CF780((void *)v73);
                v7 = *(_DWORD *)(v2 + 164);
                v65 = -1;
                v19 = -1;
                if ( v7 )
                  goto LABEL_44;
              }
              if ( v73 )
              {
                LODWORD(v74) = 0;
                sub_80CF780((void *)v73);
              }
              v7 = *(_DWORD *)(v2 + 164);
LABEL_67:
              if ( v7 )
              {
                v12 = *(char **)(v2 + 160);
                goto LABEL_69;
              }
              if ( v65 )
              {
                v12 = *(char **)(v2 + 160);
LABEL_55:
                v21 = v12;
                if ( v12[v65] == 92 )
                {
                  v22 = v65 - 1;
                  if ( v65 != 1 )
                    goto LABEL_79;
                  if ( *((_BYTE *)&qword_811CFF4 + 5645) == 92 )
                    goto LABEL_58;
                }
                continue;
              }
LABEL_77:
              if ( byte_811E601 == 92 )
              {
                v21 = *(char **)(v2 + 160);
                v22 = -1;
LABEL_79:
                if ( v21[v22] == 92 )
                {
LABEL_58:
                  if ( v21 )
                    goto LABEL_59;
                }
              }
            }
            if ( v7 <= 1 )
              goto LABEL_2;
            v8 = *(unsigned __int8 **)(v2 + 160);
            *(_DWORD *)(v2 + 4) = v8;
            v9 = *v8;
            if ( (unsigned __int8)(*v8 - 9) <= 4u || v9 == 32 )
            {
              v20 = v8 + 1;
              do
              {
                do
                {
                  *(_DWORD *)(v2 + 4) = v20;
                  v9 = *v20;
                  v8 = v20++;
                }
                while ( (unsigned __int8)(v9 - 9) <= 4u );
              }
              while ( v9 == 32 );
            }
            v10 = (*(_BYTE *)(v2 + 76) ^ 1) & (v9 == 35);
            if ( !v10 )
            {
              if ( *(_DWORD *)(v2 + 176) )
              {
                sub_8092AE0(v2, v8);
                goto LABEL_2;
              }
              *a2 = 0;
              result = *(_DWORD *)(v2 + 4);
              goto LABEL_15;
            }
            v69 = v10;
            *(_DWORD *)(v2 + 4) = v8 + 1;
            v23 = sub_8092E00(v2);
            sub_8092AE0(v2, *(unsigned __int8 **)(v2 + 4));
            if ( strcmp(v23, (const char *)&qword_811CFF4 - 278765) )
              break;
            if ( !*(_DWORD *)(v2 + 184) )
              goto LABEL_102;
            if ( !*(_DWORD *)(v2 + 180) )
            {
              v24 = *(_DWORD *)(v2 + 176);
              if ( v24 <= 1 )
                *(_DWORD *)(v2 + 176) = v24 == 0;
            }
          }
          if ( !strcmp(v23, (const char *)&qword_811CFF4 - 278760) )
          {
            if ( !*(_DWORD *)(v2 + 184) )
            {
LABEL_102:
              *a2 = 35;
              result = 0;
              goto LABEL_15;
            }
            if ( *(_DWORD *)(v2 + 180) )
              goto LABEL_2;
            if ( (*(_BYTE *)(v2 + 176) & 1) == 0 )
            {
              *(_DWORD *)(v2 + 176) = 2;
              goto LABEL_2;
            }
LABEL_110:
            v31 = *(_BYTE **)(v2 + 4);
            do
            {
              v32 = v31--;
              *(_DWORD *)(v2 + 4) = v31;
            }
            while ( *v31 );
            *(v32 - 1) = *(_BYTE *)(v2 + 368);
            v73 = 1;
            v74 = 0;
            if ( !sub_80998D0(v2, (int)&v73) )
            {
              *(_DWORD *)(v2 + 176) = v74 == 0;
              goto LABEL_2;
            }
            *a2 = sub_80C7850();
            result = 0;
            goto LABEL_15;
          }
          if ( *v23 == 105 && v23[1] == 102 && !v23[2] )
          {
            v27 = *(_DWORD *)(v2 + 176);
            ++*(_DWORD *)(v2 + 184);
            if ( v27 )
            {
LABEL_100:
              ++*(_DWORD *)(v2 + 180);
              goto LABEL_2;
            }
            goto LABEL_110;
          }
          if ( strcmp(v23, (const char *)&qword_811CFF4 - 278755) )
            break;
          v28 = 1;
LABEL_115:
          v33 = sub_8092E00(v2);
          if ( !*v33 )
            goto LABEL_135;
          v34 = *(_DWORD *)(v2 + 176);
          ++*(_DWORD *)(v2 + 184);
          if ( v34 )
            goto LABEL_100;
          if ( (sub_80940C0(v2, v33) != 0) != v28 )
            *(_DWORD *)(v2 + 176) = 1;
        }
        v28 = strcmp(v23, (const char *)&qword_811CFF4 - 278749);
        if ( !v28 )
          goto LABEL_115;
        if ( strcmp(v23, (const char *)&qword_811CFF4 - 278742) )
          break;
        v29 = *(_DWORD *)(v2 + 184);
        if ( !v29 )
        {
          *a2 = 36;
          result = 0;
          goto LABEL_15;
        }
        v30 = *(_DWORD *)(v2 + 180);
        if ( v30 )
          *(_DWORD *)(v2 + 180) = v30 - 1;
        else
          *(_DWORD *)(v2 + 176) = 0;
        *(_DWORD *)(v2 + 184) = v29 - 1;
      }
      if ( *(_DWORD *)(v2 + 176) )
        goto LABEL_2;
      if ( strcmp(v23, (const char *)&qword_811CFF4 - 277944) )
        break;
      v35 = *(const char **)(v2 + 4);
      if ( strcmp(v35, (const char *)&qword_811CFF4 - 278736) )
      {
        v36 = *(int (__cdecl **)(_DWORD, const char *, __int64 *, __int64 *))(v2 + 92);
        if ( !v36 )
          goto LABEL_2;
        v37 = v36(*(_DWORD *)(v2 + 108), v35, &qword_811CFF4, &qword_811CFF4);
LABEL_125:
        *a2 = v37;
        if ( !v37 )
          goto LABEL_2;
        result = 0;
        goto LABEL_15;
      }
      v39 = *(const char **)(v2 + 152);
      v73 = 0;
      v74 = 0;
      if ( v39 )
      {
        v70 = strlen(v39);
        v73 = (int)sub_80CF920((int)&v73, nullptr, v70 + 1, 1u);
        LODWORD(v74) = v70 + 1;
        memmove((void *)v73, v39, v70);
        *(_BYTE *)(v73 + v70) = 0;
      }
      v40 = *(_DWORD *)(v2 + 124);
      v63 = v2;
      v71 = v40 + 12 * *(_DWORD *)(v2 + 128);
      v41 = (char *)&qword_811CFF4 - 258076;
      if ( (_DWORD)v74 )
        v41 = (const char *)v73;
      v62 = v74;
      v42 = v41;
      while ( v71 != v40 )
      {
        v43 = (char *)&qword_811CFF4 - 258076;
        if ( *(_DWORD *)(v40 + 4) )
          v43 = *(const char **)v40;
        if ( !strcmp(v42, v43) )
        {
          v2 = v63;
          goto LABEL_151;
        }
        v40 += 12;
      }
      v2 = v63;
      v44 = nullptr;
      if ( v62 )
      {
        v44 = sub_80CF8B0(v62);
        memcpy(v44, (const void *)v73, v62);
      }
      v45 = *(_DWORD *)(v63 + 128);
      if ( *(_DWORD *)(v63 + 132) < (unsigned int)(v45 + 1) )
      {
        *(_DWORD *)(v63 + 124) = sub_80CF920(v63 + 124, *(void **)(v63 + 124), v45 + 1, 0xCu);
        v45 = *(_DWORD *)(v63 + 128);
      }
      v46 = *(_DWORD *)(v63 + 124) + 12 * v45;
      *(_DWORD *)v46 = v44;
      v47 = _mm_cvtsi32_si128(v62);
      *(_QWORD *)(v46 + 4) = _mm_unpacklo_epi32(v47, v47).m128i_u64[0];
      ++*(_DWORD *)(v63 + 128);
LABEL_151:
      if ( v73 )
      {
        LODWORD(v74) = 0;
        sub_80CF780((void *)v73);
      }
    }
    if ( !strcmp(v23, (const char *)&qword_811CFF4 - 278731) )
    {
      v38 = *(int (__cdecl **)(_DWORD, _DWORD, _DWORD, _DWORD))(v2 + 96);
      if ( !v38 )
        goto LABEL_2;
      v37 = v38(*(_DWORD *)(v2 + 108), *(_DWORD *)(v2 + 4), v69, v69);
      goto LABEL_125;
    }
    v48 = strcmp(v23, (const char *)&qword_811CFF4 - 278723);
    v26 = v69;
    if ( !v48 )
      break;
    if ( !strcmp(v23, (const char *)&qword_811CFF4 - 278711) )
    {
      v25 = v69;
      v26 = 0;
      goto LABEL_94;
    }
    if ( !strcmp(v23, (const char *)&qword_811CFF4 - 278773) || !strcmp(v23, (const char *)&qword_811CFF4 - 278477) )
    {
      v25 = 0;
      v26 = 0;
      goto LABEL_94;
    }
    if ( !strcmp(v23, (const char *)&qword_811CFF4 - 278698) )
    {
      v72 = sub_8092E00(v2);
      if ( *v72 )
      {
        v53 = *(_BYTE *)(v2 + 368) == 40;
        v54 = sub_8092F40(v2);
        v55 = v54;
        if ( v54 == -2 )
          goto LABEL_2;
        if ( v54 != -1 )
        {
          v56 = sub_80953F0(v2, v72, *(_BYTE **)(v2 + 4), v54, v53, (bool *)&v73);
          *a2 = v56;
          if ( !v56 )
          {
            v58 = *(int (__cdecl **)(_DWORD, char *, _DWORD, unsigned int, _DWORD, _DWORD, int, int))(v2 + 100);
            if ( !v58 )
              goto LABEL_2;
            v59 = v58(*(_DWORD *)(v2 + 108), v72, *(_DWORD *)(v2 + 4), v55, v53, (unsigned __int8)v73, v57, v57);
            *a2 = v59;
            if ( !v59 )
              goto LABEL_2;
            result = 0;
            goto LABEL_15;
          }
LABEL_62:
          result = 0;
          goto LABEL_15;
        }
      }
LABEL_135:
      *a2 = 29;
      result = 0;
      goto LABEL_15;
    }
    if ( strcmp(v23, (const char *)&qword_811CFF4 - 278691) )
    {
      if ( !strcmp(v23, (const char *)&qword_811CFF4 - 282493) )
      {
        *a2 = 41;
        sub_80C7910(0, *(char **)(v2 + 4));
        result = 0;
        goto LABEL_15;
      }
      goto LABEL_135;
    }
    v49 = sub_8092E00(v2);
    v50 = v49;
    if ( !*v49 )
      goto LABEL_135;
    sub_8094B40(v2, v49);
    v52 = *(void (__cdecl **)(_DWORD, char *, int, int))(v2 + 104);
    if ( v52 )
      v52(*(_DWORD *)(v2 + 108), v50, v51, v51);
  }
  v25 = 0;
LABEL_94:
  v6 = sub_8099D40(v2, v26, v25);
  if ( !v6 )
    goto LABEL_2;
LABEL_95:
  *a2 = v6;
  result = 0;
LABEL_15:
  if ( v75 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 809635D: variable 'v51' is possibly undefined
// 8096429: variable 'v57' is possibly undefined
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811E601: using guessed type char byte_811E601;
