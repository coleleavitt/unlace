/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C7E0
// Address: 0x0006C7E0

//----- (0006C7E0) --------------------------------------------------------
int __cdecl sub_6C7E0(int a1, int *a2)
{
  int v2; // edi
  int (__cdecl *v3)(int, int, int, __int64 *); // eax
  int v4; // ecx
  int v5; // edx
  int v6; // esi
  __int64 *v7; // edi
  int v8; // ecx
  int v9; // edx
  int v10; // eax
  unsigned __int64 v11; // rdi
  int v12; // eax
  int v13; // esi
  unsigned int v14; // edi
  unsigned __int8 *v15; // eax
  char v16; // cl
  char *v17; // eax
  void *v18; // eax
  int v19; // ecx
  int v20; // esi
  int v21; // edi
  unsigned int v22; // edi
  char v23; // si
  unsigned __int8 *v24; // eax
  char *v25; // eax
  bool v26; // cf
  unsigned __int8 *i; // eax
  unsigned __int8 v28; // cl
  char *v29; // esi
  char *v30; // eax
  char *v31; // esi
  void (__cdecl *v32)(_DWORD, char *); // eax
  int v33; // eax
  _BYTE *v34; // eax
  int v36; // esi
  int v37; // esi
  char *v38; // eax
  int v39; // eax
  int v40; // ecx
  const char *v41; // esi
  int (__cdecl *v42)(_DWORD, const char *); // eax
  int v43; // eax
  int (__cdecl *v44)(_DWORD, _DWORD); // eax
  char v45; // al
  _DWORD *v46; // esi
  int v47; // edi
  char *v48; // eax
  char v49; // cl
  const char *v50; // eax
  char *v51; // eax
  char *v52; // esi
  signed int v53; // eax
  int v54; // eax
  char *v55; // ecx
  int (__cdecl *v56)(_DWORD, char *, _DWORD, signed int, bool, _DWORD); // eax
  int v57; // eax
  unsigned __int8 **v59; // [esp+4h] [ebp-38h]
  size_t v60; // [esp+8h] [ebp-34h]
  const char *v61; // [esp+8h] [ebp-34h]
  char v62; // [esp+8h] [ebp-34h]
  _DWORD *v63; // [esp+Ch] [ebp-30h]
  signed int v64; // [esp+Ch] [ebp-30h]
  int v65; // [esp+10h] [ebp-2Ch]
  int v66; // [esp+18h] [ebp-24h] BYREF
  __int64 v67; // [esp+1Ch] [ebp-20h]
  unsigned int v68; // [esp+28h] [ebp-14h]

  v2 = a1;
  v68 = __readgsdword(0x14u);
  v59 = (unsigned __int8 **)(a1 + 152);
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
            do
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
                        while ( 1 )
                        {
                          do
                          {
                            while ( (*(int (__cdecl **)(unsigned __int8 **, _DWORD))(v2 + 104))(
                                      v59,
                                      *(_DWORD *)(v2 + 108)) < 0 )
                            {
                              if ( !*(_DWORD *)(v2 + 132) )
                              {
                                v10 = 3 * (*(_DWORD *)(v2 + 176) != 0) + 34;
LABEL_153:
                                *a2 = v10;
                                return 0;
                              }
                              if ( *(_DWORD *)(v2 + 140) )
                                qfclose(*(FILE **)(v2 + 140));
                              qfree(*(void **)(v2 + 144));
                              *(_DWORD *)(v2 + 144) = 0;
                              v8 = *(_DWORD *)(v2 + 128);
                              v9 = *(_DWORD *)(v2 + 132);
                              *(_UNKNOWN **)((char *)&off_13AD64 + a1 - 1289432) = *(_UNKNOWN **)(v8 + 24 * (v9 - 1) + 4);
                              *(_UNKNOWN **)((char *)&off_13AD6C + a1 - 1289432) = *(_UNKNOWN **)(v8 + 24 * (v9 - 1) + 16);
                              *(_UNKNOWN **)((char *)&off_13AD68 + a1 - 1289432) = *(_UNKNOWN **)(v8 + 24 * (v9 - 1));
                              v2 = a1;
                              *(_BYTE *)(a1 + 68) = *(_BYTE *)(v8 + 24 * (v9 - 1) + 20);
                              *(_DWORD *)(a1 + 104) = *(_DWORD *)(v8 + 24 * (v9 - 1) + 8);
                              *(_DWORD *)(a1 + 108) = *(_DWORD *)(v8 + 24 * (v9 - 1) + 12);
                              if ( v9 )
                                *(_DWORD *)(a1 + 132) = v9 - 1;
                            }
                            v3 = *(int (__cdecl **)(int, int, int, __int64 *))(v2 + 80);
                            v4 = *(_DWORD *)(v2 + 148) + 1;
                            *(_DWORD *)(v2 + 148) = v4;
                            if ( v3 )
                            {
                              v5 = *(_DWORD *)(v2 + 100);
                              v6 = *(_DWORD *)(v2 + 144);
                              v7 = *(_DWORD *)(v2 + 156) ? (__int64 *)*v59 : (__int64 *)((char *)&qword_13ACD8 - 308323);
                              v10 = v3(v5, v6, v4, v7);
                              v2 = a1;
                              if ( v10 )
                                goto LABEL_153;
                            }
                            LODWORD(v11) = *(_DWORD *)(v2 + 156);
                            HIDWORD(v11) = v11 - 1;
                            if ( !(_DWORD)v11 )
                              v11 = 0;
                            if ( HIDWORD(v11) >= 2 )
                            {
                              --HIDWORD(v11);
                              do
                              {
                                v12 = HIDWORD(v11) | v11;
                                if ( v11 )
                                {
                                  if ( (*v59)[HIDWORD(v11)] != 92 )
                                    goto LABEL_44;
                                }
                                else if ( *((_BYTE *)&qword_13ACD8 + 4169) != 92 )
                                {
                                  goto LABEL_44;
                                }
                                if ( (HIDWORD(v11) - 1) | (unsigned int)v11 )
                                {
                                  if ( (*v59)[HIDWORD(v11) - 1] == 92 )
                                    goto LABEL_44;
                                }
                                else if ( *((_BYTE *)&qword_13ACD8 + 4169) == 92 )
                                {
                                  goto LABEL_44;
                                }
                                v66 = 0;
                                v67 = 0;
                                if ( (*(int (__cdecl **)(int *, _DWORD))(a1 + 104))(&v66, *(_DWORD *)(a1 + 108)) < 0 )
                                {
                                  v16 = 0;
                                  LODWORD(v11) = a1;
                                }
                                else
                                {
                                  ++*(_DWORD *)(a1 + 148);
                                  v13 = *(_DWORD *)(a1 + 156);
                                  v14 = v13 - 1;
                                  if ( v13 - 1 > 1 )
                                  {
                                    v17 = *(char **)(a1 + 152);
                                    if ( *(_DWORD *)(a1 + 160) < v14 )
                                    {
                                      v17 = (char *)qvector_reserve((int)v59, v17, v13 - 1, 1u);
                                      *v59 = (unsigned __int8 *)v17;
                                    }
                                    *(_DWORD *)(a1 + 156) = v14;
                                    v17[v13 - 2] = 0;
                                  }
                                  else
                                  {
                                    v15 = *v59;
                                    if ( *v59 )
                                    {
                                      *(_DWORD *)(a1 + 156) = 0;
                                      qfree(v15);
                                      *(_UNKNOWN **)((char *)&off_13AD70 + a1 - 1289432) = nullptr;
                                      *(_UNKNOWN **)((char *)&off_13AD78 + a1 - 1289432) = nullptr;
                                    }
                                  }
                                  if ( (unsigned int)v67 >= 2 )
                                  {
                                    v60 = v67 - 1;
                                    v18 = *(_UNKNOWN **)((char *)&off_13AD70 + a1 - 1289432);
                                    v19 = *(_DWORD *)(a1 + 156);
                                    v20 = v19 - 1;
                                    if ( !v19 )
                                      v20 = 0;
                                    v21 = v20 + v67;
                                    if ( *(_DWORD *)(a1 + 160) < (unsigned int)(v20 + v67) )
                                    {
                                      v18 = qvector_reserve((int)v59, v18, v20 + v67, 1u);
                                      *v59 = (unsigned __int8 *)v18;
                                    }
                                    *(_DWORD *)(a1 + 156) = v21;
                                    *((_BYTE *)v18 + v20 + v60) = 0;
                                    memcpy((void *)(*(_DWORD *)(a1 + 152) + v20), (const void *)v66, v60);
                                  }
                                  LODWORD(v11) = a1;
                                  HIDWORD(v11) = *(_DWORD *)(a1 + 156) == 0 ? -1 : *(_DWORD *)(a1 + 156) - 2;
                                  v16 = 1;
                                }
                                if ( v66 )
                                {
                                  v22 = HIDWORD(v11);
                                  v23 = v16;
                                  LODWORD(v67) = 0;
                                  qfree((void *)v66);
                                  v66 = 0;
                                  HIDWORD(v67) = 0;
                                  v16 = v23;
                                  v11 = __PAIR64__(v22, a1);
                                }
                                LODWORD(v11) = *(_DWORD *)(v11 + 156);
                              }
                              while ( v16 );
                              v12 = HIDWORD(v11) | v11;
LABEL_44:
                              if ( v12 )
                              {
                                if ( (*v59)[HIDWORD(v11)] != 92 )
                                  goto LABEL_58;
                              }
                              else if ( *((_BYTE *)&qword_13ACD8 + 4169) != 92 )
                              {
                                goto LABEL_58;
                              }
                              --HIDWORD(v11);
                              if ( v11 )
                              {
                                if ( (*v59)[HIDWORD(v11)] != 92 )
                                  goto LABEL_58;
LABEL_52:
                                HIDWORD(v11) = v11 - 1;
                                if ( (int)v11 - 1 > 1 )
                                {
                                  v25 = *(char **)((char *)&off_13AD70 + a1 - 1289432);
                                  if ( *(_DWORD *)(a1 + 160) < HIDWORD(v11) )
                                  {
                                    v25 = (char *)qvector_reserve((int)v59, v25, v11 - 1, 1u);
                                    *v59 = (unsigned __int8 *)v25;
                                  }
                                  *(_DWORD *)(a1 + 156) = HIDWORD(v11);
                                  v25[(_DWORD)v11 - 2] = 0;
                                }
                                else
                                {
                                  v24 = *v59;
                                  if ( *v59 )
                                  {
                                    *(_DWORD *)(a1 + 156) = 0;
                                    qfree(v24);
                                    *(_DWORD *)(a1 + 152) = 0;
                                    *(_DWORD *)(a1 + 160) = 0;
                                  }
                                }
                                goto LABEL_58;
                              }
                              if ( *((_BYTE *)&qword_13ACD8 + 4169) == 92 )
                                goto LABEL_52;
LABEL_58:
                              LODWORD(v11) = *(_UNKNOWN **)((char *)&off_13AD74 + a1 - 1289432);
                            }
                            v26 = (unsigned int)v11 < 2;
                            v2 = a1;
                          }
                          while ( v26 );
                          for ( i = *v59; ; ++i )
                          {
                            *(_DWORD *)(a1 + 4) = i;
                            v28 = *i;
                            if ( (unsigned __int8)(*i - 9) >= 5u && v28 != 32 )
                              break;
                          }
                          if ( v28 == 35 && !*(_BYTE *)(a1 + 68) )
                            break;
                          if ( !*(_DWORD *)(a1 + 168) )
                          {
                            *a2 = 0;
                            return *(_DWORD *)(a1 + 4);
                          }
                          sub_70600(a1, i);
                        }
                        *(_DWORD *)(a1 + 4) = i + 1;
                        v29 = sub_707F0(a1);
                        sub_70600(a1, *(unsigned __int8 **)(a1 + 4));
                        if ( strcmp(v29, (const char *)&qword_13ACD8 - 329237) )
                          break;
                        if ( !*(_DWORD *)(a1 + 176) )
                          goto LABEL_156;
                        if ( !*(_DWORD *)(a1 + 172) )
                        {
                          v33 = *(_DWORD *)(a1 + 168);
                          if ( v33 <= 1 )
                            *(_DWORD *)(a1 + 168) = v33 == 0;
                        }
                      }
                      if ( strcmp(v29, (const char *)&qword_13ACD8 - 329232) )
                        break;
                      if ( !*(_DWORD *)(a1 + 176) )
                      {
LABEL_156:
                        *a2 = 35;
                        return 0;
                      }
                      if ( !*(_DWORD *)(a1 + 172) )
                      {
                        if ( (*(_BYTE *)(a1 + 168) & 1) != 0 )
                          goto LABEL_96;
                        *(_DWORD *)(a1 + 168) = 2;
                      }
                    }
                    if ( strcmp(v29, (const char *)&qword_13ACD8 - 330170) )
                      break;
                    ++*(_DWORD *)(a1 + 176);
                    if ( *(_DWORD *)(a1 + 168) )
                    {
                      ++*(_DWORD *)(a1 + 172);
                    }
                    else
                    {
LABEL_96:
                      v34 = (_BYTE *)(*(_DWORD *)(a1 + 4) - 1);
                      do
                        *(_DWORD *)(a1 + 4) = v34;
                      while ( *v34-- != 0 );
                      v34[1] = *(_BYTE *)(a1 + 244);
                      LOBYTE(v66) = 1;
                      v67 = 0;
                      if ( !sub_73CF0(a1, (int)&v66) )
                      {
                        *(_DWORD *)(a1 + 168) = v67 == 0;
LABEL_108:
                        v36 = 2;
                        goto LABEL_109;
                      }
                      *a2 = get_qerrno();
                      v36 = 1;
LABEL_109:
                      if ( v36 == 1 )
                        return 0;
                    }
                  }
                  if ( !strcmp(v29, (const char *)&qword_13ACD8 - 329227) )
                  {
                    v37 = 1;
                    goto LABEL_102;
                  }
                  if ( strcmp(v29, (const char *)&qword_13ACD8 - 329221) )
                    break;
                  v37 = 0;
LABEL_102:
                  v38 = sub_707F0(a1);
                  if ( !*v38 )
                    goto LABEL_159;
                  ++*(_DWORD *)(a1 + 176);
                  if ( *(_DWORD *)(a1 + 168) )
                  {
                    ++*(_DWORD *)(a1 + 172);
                  }
                  else if ( v37 != (sub_6AB50(a1, v38) != 0) )
                  {
                    *(_DWORD *)(a1 + 168) = 1;
                  }
                }
                if ( strcmp(v29, (const char *)&qword_13ACD8 - 329214) )
                  break;
                v39 = *(_DWORD *)(a1 + 176);
                if ( !v39 )
                {
                  *a2 = 36;
                  return 0;
                }
                v40 = *(_DWORD *)(a1 + 172);
                if ( v40 )
                  *(_DWORD *)(a1 + 172) = v40 - 1;
                else
                  *(_DWORD *)(a1 + 168) = 0;
                *(_DWORD *)(a1 + 176) = v39 - 1;
              }
            }
            while ( *(_DWORD *)(a1 + 168) );
            if ( strcmp(v29, (const char *)&qword_13ACD8 - 329208) )
              break;
            v41 = *(const char **)(a1 + 4);
            if ( !strcmp(v41, (const char *)&qword_13ACD8 - 329201) )
            {
              sub_1B530((int)&v66, *(char **)(a1 + 144));
              v46 = *(_DWORD **)(a1 + 116);
              v47 = 12 * *(_DWORD *)(a1 + 120);
              v63 = v46;
              if ( v47 )
              {
                if ( (_DWORD)v67 )
                  v48 = (char *)v66;
                else
                  v48 = byte_EF875;
                v61 = v48;
                v65 = 12 * *(_DWORD *)(a1 + 120);
                while ( 1 )
                {
                  v50 = v46[1] ? (const char *)*v46 : (char *)&qword_13ACD8 - 308323;
                  if ( !strcmp(v61, v50) )
                    break;
                  v46 += 3;
                  v47 -= 12;
                  if ( !v47 )
                    goto LABEL_142;
                }
                v47 = v65;
              }
              if ( v46 == (_DWORD *)((char *)v63 + v47) )
LABEL_142:
                sub_2AC80(a1 + 116, (int)&v66);
              v2 = a1;
              if ( v66 )
              {
                LODWORD(v67) = 0;
                qfree((void *)v66);
                v66 = 0;
                HIDWORD(v67) = 0;
              }
            }
            else
            {
              v42 = *(int (__cdecl **)(_DWORD, const char *))(a1 + 84);
              if ( v42 )
              {
                v43 = v42(*(_DWORD *)(a1 + 100), v41);
LABEL_121:
                *a2 = v43;
                if ( v43 )
                  return 0;
              }
            }
          }
          if ( strcmp(v29, (const char *)&qword_13ACD8 - 329196) )
            break;
          v44 = *(int (__cdecl **)(_DWORD, _DWORD))(a1 + 88);
          if ( v44 )
          {
            v43 = v44(*(_DWORD *)(a1 + 100), *(_DWORD *)(a1 + 4));
            goto LABEL_121;
          }
        }
        if ( strcmp(v29, (const char *)&qword_13ACD8 - 329188) )
          break;
        v45 = 1;
LABEL_128:
        v49 = 0;
LABEL_130:
        v10 = sub_74780(a1, v45, v49);
        if ( v10 )
          goto LABEL_153;
      }
      if ( !strcmp(v29, (const char *)&qword_13ACD8 - 329176) )
      {
        v49 = 1;
        v45 = 0;
        goto LABEL_130;
      }
      if ( !strcmp(v29, (const char *)&qword_13ACD8 - 329163) || !strcmp(v29, (const char *)&qword_13ACD8 - 329155) )
      {
        v45 = 0;
        goto LABEL_128;
      }
      if ( strcmp(v29, (const char *)&qword_13ACD8 - 329148) )
        break;
      v51 = sub_707F0(a1);
      if ( !*v51 )
        goto LABEL_159;
      v52 = v51;
      v62 = *(_BYTE *)(a1 + 244);
      v53 = sub_708E0(a1);
      if ( v53 != -2 )
      {
        if ( v53 < 0 )
          goto LABEL_159;
        v64 = v53;
        v54 = sub_6ADB0(a1, v52, *(char **)(a1 + 4), v53, v62 == 40, (bool *)&v66);
        *a2 = v54;
        v55 = v52;
        v36 = 1;
        if ( !v54 )
        {
          v56 = *(int (__cdecl **)(_DWORD, char *, _DWORD, signed int, bool, _DWORD))(a1 + 92);
          if ( !v56 )
            goto LABEL_108;
          v57 = v56(*(_DWORD *)(a1 + 100), v55, *(_DWORD *)(a1 + 4), v64, v62 == 40, (unsigned __int8)v66);
          *a2 = v57;
          if ( !v57 )
            goto LABEL_108;
        }
        goto LABEL_109;
      }
    }
    if ( strcmp(v29, (const char *)&qword_13ACD8 - 329141) )
      break;
    v30 = sub_707F0(a1);
    if ( !*v30 )
      goto LABEL_159;
    v31 = v30;
    sub_6C2D0(a1, v30);
    v32 = *(void (__cdecl **)(_DWORD, char *))(a1 + 96);
    if ( v32 )
      v32(*(_DWORD *)(a1 + 100), v31);
  }
  if ( strcmp(v29, (const char *)&qword_13ACD8 - 329135) )
  {
LABEL_159:
    *a2 = 29;
    return 0;
  }
  *a2 = 41;
  set_error_string(0, *(char **)(a1 + 4));
  return 0;
}
// 13ACD8: using guessed type __int64 qword_13ACD8;
// 13AD64: using guessed type _UNKNOWN *off_13AD64;
// 13AD68: using guessed type _UNKNOWN *off_13AD68;
// 13AD6C: using guessed type _UNKNOWN *off_13AD6C;
// 13AD70: using guessed type _UNKNOWN *off_13AD70;
// 13AD74: using guessed type _UNKNOWN *off_13AD74;
// 13AD78: using guessed type _UNKNOWN *off_13AD78;
