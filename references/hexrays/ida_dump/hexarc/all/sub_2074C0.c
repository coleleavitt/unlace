__int64 __fastcall sub_2074C0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdx
  __int64 *v8; // rsi
  unsigned __int16 v9; // ax
  unsigned __int64 v10; // r11
  bool v11; // r14
  bool v12; // r12
  int utf8_char; // r15d
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rdx
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rdx
  int v20; // eax
  int v21; // eax
  unsigned __int64 v22; // r11
  __int64 v23; // rcx
  unsigned __int64 v24; // r15
  __int64 v25; // rsi
  int v26; // edx
  int v27; // eax
  __int64 v28; // r8
  char *v29; // r9
  char v30; // al
  char v31; // dl
  int v32; // eax
  int v33; // r10d
  void *v34; // r9
  _BYTE *v35; // rax
  __int64 v36; // r10
  __int64 v37; // rax
  __m128 v38; // xmm0
  int v39; // eax
  int v40; // eax
  int v41; // eax
  __int64 v42; // r10
  unsigned __int64 v43; // rdx
  __int64 v44; // rsi
  unsigned __int64 v45; // r8
  __int64 v46; // r14
  unsigned int v47; // r12d
  int v48; // eax
  unsigned int v49; // eax
  int v50; // eax
  _BYTE *v51; // rcx
  unsigned __int64 v52; // rax
  char *v53; // rdx
  unsigned __int64 v54; // r15
  char v55; // al
  _BYTE *v56; // rcx
  int v57; // eax
  unsigned int v58; // eax
  int v59; // eax
  unsigned __int64 v60; // r15
  int dest; // [rsp+0h] [rbp-C8h]
  char destd; // [rsp+0h] [rbp-C8h]
  _BYTE *desta; // [rsp+0h] [rbp-C8h]
  void *destb; // [rsp+0h] [rbp-C8h]
  char *destc; // [rsp+0h] [rbp-C8h]
  void *destg; // [rsp+0h] [rbp-C8h]
  void *destf; // [rsp+0h] [rbp-C8h]
  char *deste; // [rsp+0h] [rbp-C8h]
  char c; // [rsp+8h] [rbp-C0h]
  int cd; // [rsp+8h] [rbp-C0h]
  int ca[2]; // [rsp+8h] [rbp-C0h]
  int cb; // [rsp+8h] [rbp-C0h]
  int cc[2]; // [rsp+8h] [rbp-C0h]
  int cf[2]; // [rsp+8h] [rbp-C0h]
  int ce[2]; // [rsp+8h] [rbp-C0h]
  char v76; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v77; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v78; // [rsp+10h] [rbp-B8h]
  __int64 v79; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v80; // [rsp+10h] [rbp-B8h]
  __int64 v81; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v82; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v83; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v84; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v85; // [rsp+10h] [rbp-B8h]
  __int64 v86; // [rsp+10h] [rbp-B8h]
  _BYTE *v87; // [rsp+10h] [rbp-B8h]
  _BYTE *v88; // [rsp+10h] [rbp-B8h]
  unsigned __int64 v89; // [rsp+10h] [rbp-B8h]
  __int64 v90; // [rsp+18h] [rbp-B0h]
  __int64 v91; // [rsp+18h] [rbp-B0h]
  __int64 v92; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v93; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v94; // [rsp+18h] [rbp-B0h]
  __int64 v95; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v96; // [rsp+18h] [rbp-B0h]
  unsigned __int64 v97; // [rsp+18h] [rbp-B0h]
  char *v98; // [rsp+20h] [rbp-A8h]
  __int64 v99; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v100; // [rsp+20h] [rbp-A8h]
  unsigned __int64 v101; // [rsp+28h] [rbp-A0h]
  int v102; // [rsp+30h] [rbp-98h]
  unsigned __int64 v103; // [rsp+30h] [rbp-98h]
  __int64 v104; // [rsp+38h] [rbp-90h]
  __int64 v105; // [rsp+48h] [rbp-80h] BYREF
  __int64 v106; // [rsp+50h] [rbp-78h] BYREF
  __int128 v107; // [rsp+58h] [rbp-70h]
  _QWORD *v108; // [rsp+70h] [rbp-58h] BYREF
  __int128 v109; // [rsp+78h] [rbp-50h] BYREF
  unsigned __int64 v110; // [rsp+88h] [rbp-40h]

  v110 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a3 + 8) != 64 )
    return 0;
  v3 = sub_25A720(a2, *(_QWORD *)(a3 + 24), 0);
  if ( !(_BYTE)v3 )
    return 0;
  v7 = *(_QWORD *)(a3 + 24);
  v8 = &v106;
  v107 = 0;
  v106 = 0;
  if ( (unsigned int)sub_25A870(a2, &v106, v7, 0, 0, 0) && (unsigned __int64)v107 > 1 )
  {
    v108 = nullptr;
    v109 = 0;
    v105 = v106;
    v9 = getinf(34);
    v10 = v109;
    v11 = 0;
    v12 = 0;
    v102 = 2 * v9;
    if ( (_QWORD)v109 )
LABEL_8:
      --v10;
    if ( v10 < v102 )
    {
      while ( 1 )
      {
        utf8_char = get_utf8_char(&v105);
        if ( (unsigned int)(utf8_char - 1) > 0xFE )
          goto LABEL_25;
        v10 = v109;
        v14 = v109;
        if ( (unsigned __int64)v109 > 1 )
          break;
        if ( !(unsigned __int8)sub_326FC0((unsigned int)(char)utf8_char, v8, v109) )
        {
          v42 = v109;
          v43 = 2;
          if ( (_QWORD)v109 )
          {
            v43 = v109 + 1;
            v42 = v109 - 1;
          }
          v44 = (__int64)v108;
          if ( *((_QWORD *)&v109 + 1) < v43 )
          {
            v95 = v42;
            v84 = v43;
            v108 = (_QWORD *)qvector_reserve(&v108, v108, v43, 1);
            v42 = v95;
            v44 = (__int64)v108;
            v43 = v84;
          }
          *(_QWORD *)&v109 = v43;
          *(_BYTE *)(v44 + v42) = 95;
          *((_BYTE *)v108 + v42 + 1) = 0;
        }
        v10 = v109;
        v8 = v108;
        v18 = v109;
        v15 = (__int64)v108;
        if ( (_QWORD)v109 )
        {
          if ( (_QWORD)v109 == 1 )
          {
            if ( (unsigned int)(char)utf8_char <= 0x7F )
            {
              v92 = (__int64)v108;
              v81 = (__int64)v108;
              v100 = v109;
              v40 = isalnum((char)utf8_char);
              v15 = v81;
              v8 = (__int64 *)v92;
              if ( v40 )
              {
                v17 = 1;
                goto LABEL_16;
              }
              v18 = v100;
            }
            goto LABEL_64;
          }
          v14 = v109;
LABEL_13:
          v15 = (__int64)v8;
          if ( (unsigned int)(char)utf8_char > 0x7F )
          {
            if ( *((_BYTE *)v8 + v10 - 2) == 95 )
              goto LABEL_23;
          }
          else
          {
            v101 = v10;
            v76 = *((_BYTE *)v8 + v10 - 2);
            v104 = v14;
            v16 = isalnum((char)utf8_char);
            v15 = (__int64)v8;
            v10 = v101;
            if ( v16 )
            {
              v17 = v104;
LABEL_16:
              v18 = v17 - 1;
              v19 = v17 + 1;
LABEL_17:
              if ( *((_QWORD *)&v109 + 1) < v19 )
              {
                v93 = v18;
                v82 = v19;
                v108 = (_QWORD *)qvector_reserve(&v108, v8, v19, 1);
                v18 = v93;
                v15 = (__int64)v108;
                v19 = v82;
              }
              *(_QWORD *)&v109 = v19;
              *(_BYTE *)(v15 + v18) = utf8_char;
              *((_BYTE *)v108 + v18 + 1) = 0;
              if ( !v12 )
                goto LABEL_20;
              goto LABEL_55;
            }
            if ( v76 == 95 )
            {
              if ( v12 )
              {
                v12 = v11;
                if ( v11 )
                  goto LABEL_23;
LABEL_57:
                v12 = v3;
LABEL_22:
                v78 = v10;
                v21 = islower(utf8_char);
                v10 = v78;
                v11 = v21 != 0;
                goto LABEL_23;
              }
LABEL_21:
              v77 = v10;
              v20 = isupper(utf8_char);
              v10 = v77;
              v12 = v20 != 0;
              if ( !v11 )
                goto LABEL_22;
              goto LABEL_23;
            }
          }
          v18 = v10;
LABEL_64:
          v19 = v18-- + 1;
          goto LABEL_52;
        }
        if ( (unsigned int)(char)utf8_char > 0x7F )
        {
          v19 = 2;
        }
        else
        {
          v99 = (__int64)v108;
          v91 = (__int64)v108;
          v80 = v109;
          v39 = isalnum((char)utf8_char);
          v18 = v80;
          v15 = v91;
          v19 = 2;
          v8 = (__int64 *)v99;
          if ( v39 )
            goto LABEL_17;
        }
LABEL_52:
        if ( *((_QWORD *)&v109 + 1) < v19 )
        {
          v94 = v18;
          v83 = v19;
          v108 = (_QWORD *)qvector_reserve(&v108, v8, v19, 1);
          v18 = v94;
          v15 = (__int64)v108;
          v19 = v83;
        }
        *(_QWORD *)&v109 = v19;
        *(_BYTE *)(v15 + v18) = 95;
        *((_BYTE *)v108 + v18 + 1) = 0;
        if ( !v12 )
        {
LABEL_20:
          v10 = v109;
          if ( (unsigned int)(char)utf8_char > 0x7F )
            goto LABEL_23;
          goto LABEL_21;
        }
LABEL_55:
        if ( v11 )
        {
          v10 = v109;
          v12 = v11;
          goto LABEL_23;
        }
        v10 = v109;
        if ( (unsigned int)(char)utf8_char <= 0x7F )
          goto LABEL_57;
LABEL_23:
        if ( v10 )
          goto LABEL_8;
      }
      v8 = v108;
      goto LABEL_13;
    }
LABEL_25:
    sub_2056D0((__int64 *)&v108);
    v22 = v109;
    v23 = (__int64)v108;
    v24 = v109;
    v25 = (__int64)v108;
    if ( !(_QWORD)v109 || (v26 = v109 - 1, (unsigned __int64)(v109 - 1) <= 1) )
    {
      v3 = 0;
LABEL_68:
      if ( v23 )
      {
        *(_QWORD *)&v109 = 0;
        qfree(v23);
      }
      goto LABEL_46;
    }
    if ( !a1 )
      goto LABEL_68;
    if ( v102 > v26 || (v27 = v109 - 2, (int)v109 - 2 <= 1) )
    {
      if ( v12 && v11 )
        goto LABEL_91;
      goto LABEL_74;
    }
    v28 = v27;
    v29 = (char *)v108 + (int)v109 - 3 - (__int64)v27;
    while ( 1 )
    {
      v30 = v29[v28];
      if ( v30 != 95 )
      {
        v31 = *(_BYTE *)(v25 + v28);
        if ( v31 == 95 )
          goto LABEL_37;
        if ( (unsigned int)v30 > 0x7F )
        {
LABEL_70:
          if ( (unsigned __int8)(v31 - 48) <= 9u )
            goto LABEL_37;
          goto LABEL_71;
        }
        v103 = v22;
        v98 = v29;
        v90 = v23;
        v79 = v28;
        c = *(_BYTE *)(v25 + v28);
        dest = v30;
        v32 = islower(v30);
        v33 = dest;
        v31 = c;
        v28 = v79;
        v23 = v90;
        v29 = v98;
        v22 = v103;
        if ( v32 )
        {
          if ( (unsigned int)c > 0x7F )
          {
            if ( (unsigned int)(dest - 48) <= 9 )
              goto LABEL_37;
            goto LABEL_71;
          }
          cd = dest;
          destd = v31;
          v41 = isupper(v31);
          v31 = destd;
          v33 = cd;
          v28 = v79;
          v23 = v90;
          v29 = v98;
          v22 = v103;
          if ( v41 )
            goto LABEL_37;
        }
        if ( (unsigned int)(v33 - 48) > 9 )
          goto LABEL_70;
        if ( (unsigned __int8)(v31 - 48) > 9u )
        {
LABEL_37:
          v34 = (void *)(v28 + 1);
          if ( v22 < v28 + 1 )
          {
            if ( *((_QWORD *)&v109 + 1) < (unsigned __int64)v34 )
            {
              *(_QWORD *)ce = v28;
              destf = (void *)(v28 + 1);
              v108 = (_QWORD *)qvector_reserve(&v108, v25, v28 + 1, 1);
              v24 = v109;
              v23 = (__int64)v108;
              v28 = *(_QWORD *)ce;
              v34 = destf;
            }
            destg = v34;
            *(_QWORD *)cf = v28;
            memset((void *)(v23 + v24), 0, (size_t)v34 - v24);
            v35 = (char *)v108 + *(_QWORD *)cf;
            *(_QWORD *)&v109 = destg;
          }
          else
          {
            if ( v22 != v28 + 1 )
              *(_QWORD *)&v109 = v28 + 1;
            v35 = (_BYTE *)(v25 + v28);
          }
          *v35 = 0;
          v25 = (__int64)v108;
          v36 = (__int64)v108;
          if ( v12 && v11 )
          {
            v24 = v109;
            if ( !(_QWORD)v109 )
              goto LABEL_44;
LABEL_122:
            v26 = v24 - 1;
LABEL_91:
            v45 = (unsigned int)(v26 - 2);
            v36 = v25;
            if ( v26 - 2 <= 0 )
              goto LABEL_44;
            v46 = v26 - 3;
            while ( 2 )
            {
              if ( *(_BYTE *)(v36 + v45) == 95 )
              {
                if ( v24 || (_DWORD)v46 )
                {
                  v47 = *(char *)(v36 + v46);
                  desta = (_BYTE *)(v36 + v45);
                  if ( v47 <= 0x7F )
                  {
                    v85 = v45;
                    *(_QWORD *)ca = v36;
                    v48 = isalpha(v47);
                    v36 = *(_QWORD *)ca;
                    v45 = v85;
                    if ( v48 )
                    {
                      v49 = *(char *)(*(_QWORD *)ca + (int)v85 + 1);
                      if ( v49 <= 0x7F )
                      {
                        v96 = v85;
                        v86 = *(_QWORD *)ca;
                        cb = v49;
                        v50 = isalpha(v49);
                        v36 = v86;
                        v45 = v96;
                        if ( v50 )
                        {
                          v51 = desta;
                          if ( v24 )
                          {
                            v52 = v24 - 1;
                            if ( v96 < v24 - 1 )
                            {
                              v53 = (char *)(v96 + 1);
                              v54 = v96;
                              if ( v96 + 1 < v52 )
                              {
                                v60 = v52 - (_QWORD)v53;
                                memmove(desta, &v53[v86], v52 - (_QWORD)v53);
                                v45 = v96;
                                v36 = (__int64)v108;
                                v54 = v96 + v60;
                                v53 = (char *)(v54 + 1);
                              }
                              if ( *((_QWORD *)&v109 + 1) < (unsigned __int64)v53 )
                              {
                                v89 = v45;
                                deste = v53;
                                v108 = (_QWORD *)qvector_reserve(&v108, v36, v53, 1);
                                v45 = v89;
                                v36 = (__int64)v108;
                                v53 = deste;
                              }
                              *(_QWORD *)&v109 = v53;
                              *(_BYTE *)(v36 + v54) = 0;
                              v51 = (char *)v108 + v45;
                            }
                          }
                          goto LABEL_108;
                        }
                      }
                    }
                  }
                }
                else
                {
                  v47 = byte_4BA9B0;
                  if ( (unsigned int)byte_4BA9B0 > 0x7F )
                    goto LABEL_44;
                  destc = (char *)v36;
                  v88 = (_BYTE *)(v36 + v45);
                  *(_QWORD *)cc = v45;
                  v57 = isalpha(byte_4BA9B0);
                  v36 = (__int64)destc;
                  if ( !v57 )
                    goto LABEL_44;
                  v58 = destc[2];
                  v24 = 0;
                  v45 = *(_QWORD *)cc;
                  if ( v58 <= 0x7F )
                  {
                    v97 = *(_QWORD *)cc;
                    cb = destc[2];
                    v59 = isalpha(v58);
                    v36 = (__int64)destc;
                    v45 = v97;
                    v51 = v88;
                    if ( v59 )
                    {
LABEL_108:
                      v87 = v51;
                      destb = (void *)v45;
                      if ( isupper(v47) )
                      {
                        v55 = tolower(cb);
                        v56 = v87;
                        v45 = (unsigned __int64)destb;
                      }
                      else
                      {
                        v55 = toupper(cb);
                        v45 = (unsigned __int64)destb;
                        v56 = v87;
                      }
                      *v56 = v55;
                      v36 = (__int64)v108;
                      v24 = v109;
                    }
                  }
                }
              }
              --v46;
              if ( !--v45 )
                goto LABEL_44;
              continue;
            }
          }
LABEL_74:
          qstrlwr(v25);
          v36 = (__int64)v108;
LABEL_44:
          v23 = *(_QWORD *)a1;
          v37 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)a1 = v36;
          v38 = _mm_loadh_ps((const double *)&v109 + 1);
          v108 = (_QWORD *)v23;
          *((_QWORD *)&v109 + 1) = v37;
          *(__m128 *)(a1 + 8) = v38;
          goto LABEL_68;
        }
      }
LABEL_71:
      if ( (int)--v28 <= 1 )
      {
        if ( v12 && v11 )
        {
          v24 = v22;
          goto LABEL_122;
        }
        goto LABEL_74;
      }
    }
  }
  v3 = 0;
LABEL_46:
  if ( v106 )
  {
    *(_QWORD *)&v107 = 0;
    qfree(v106);
  }
  return v3;
}
