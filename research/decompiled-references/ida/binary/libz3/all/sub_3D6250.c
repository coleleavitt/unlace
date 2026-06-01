__int64 __fastcall sub_3D6250(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v4; // r13d
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rax
  __int64 v8; // r14
  int *v9; // rax
  void *v10; // rbx
  unsigned int v11; // r12d
  int v12; // edx
  __int64 v13; // rdx
  char v14; // cl
  __int64 v15; // rax
  __int64 v16; // r12
  _DWORD *v17; // rax
  _DWORD *v18; // rax
  _DWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // r12
  int v26; // eax
  _DWORD *v27; // rdx
  int v28; // eax
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // r8
  __int64 v34; // rsi
  __int64 v35; // rax
  int v36; // eax
  _DWORD *v37; // rdx
  __int64 v38; // rax
  int v39; // [rsp+0h] [rbp-1A0h]
  __int64 *v40; // [rsp+8h] [rbp-198h]
  _BYTE *v41; // [rsp+10h] [rbp-190h]
  int *v42; // [rsp+18h] [rbp-188h]
  __int64 *v43; // [rsp+20h] [rbp-180h]
  int *v44; // [rsp+28h] [rbp-178h]
  _QWORD *i; // [rsp+30h] [rbp-170h]
  __int64 v46; // [rsp+38h] [rbp-168h]
  int v47; // [rsp+40h] [rbp-160h]
  int v48; // [rsp+44h] [rbp-15Ch]
  _QWORD *v49; // [rsp+48h] [rbp-158h]
  void *v50; // [rsp+48h] [rbp-158h]
  void *v51; // [rsp+48h] [rbp-158h]
  void *v52; // [rsp+48h] [rbp-158h]
  __int64 *v53; // [rsp+50h] [rbp-150h]
  __int64 v54; // [rsp+60h] [rbp-140h]
  __int64 v55; // [rsp+60h] [rbp-140h]
  __int64 v56; // [rsp+78h] [rbp-128h]
  unsigned int v57; // [rsp+78h] [rbp-128h]
  unsigned int v58; // [rsp+8Ch] [rbp-114h] BYREF
  __int64 v59; // [rsp+90h] [rbp-110h] BYREF
  __int64 v60; // [rsp+98h] [rbp-108h] BYREF
  __int64 v61; // [rsp+A0h] [rbp-100h] BYREF
  __int64 v62; // [rsp+A8h] [rbp-F8h] BYREF
  int v63[4]; // [rsp+B0h] [rbp-F0h] BYREF
  int v64[2]; // [rsp+C0h] [rbp-E0h] BYREF
  char v65; // [rsp+C8h] [rbp-D8h]
  _BYTE v66[32]; // [rsp+D0h] [rbp-D0h] BYREF
  int v67[8]; // [rsp+F0h] [rbp-B0h] BYREF
  __int64 v68; // [rsp+110h] [rbp-90h] BYREF
  __int64 v69; // [rsp+118h] [rbp-88h]
  __int64 v70; // [rsp+120h] [rbp-80h] BYREF
  __int64 v71; // [rsp+128h] [rbp-78h]
  _QWORD v72[2]; // [rsp+130h] [rbp-70h] BYREF
  _QWORD v73[2]; // [rsp+140h] [rbp-60h] BYREF
  int v74[4]; // [rsp+150h] [rbp-50h] BYREF
  int v75; // [rsp+160h] [rbp-40h] BYREF
  char v76; // [rsp+164h] [rbp-3Ch]
  __int64 v77; // [rsp+168h] [rbp-38h]

  result = *(_QWORD *)(a2 + 8);
  if ( result && *(_DWORD *)(result - 4) )
  {
    v4 = 0;
    sub_16669D0(v63, a1);
    v41 = v66;
    sub_15F01E0(v66, a1);
    v42 = v67;
    sub_16744A0(v67, a1);
    v7 = *(_QWORD *)(a2 + 8);
    v68 = 0;
    v69 = 0;
    v70 = 1;
    v71 = 0;
    for ( i = (_QWORD *)(a2 + 8); v7; ++v4 )
    {
      if ( v4 >= *(_DWORD *)(v7 - 4) )
        break;
      v8 = *(_QWORD *)(v7 + 8LL * v4);
      if ( !*(_WORD *)(v8 + 4) )
      {
        v9 = *(int **)(*(_QWORD *)(v8 + 16) + 24LL);
        if ( v9 )
        {
          if ( !*v9 )
          {
            if ( v9[1] != 2 || *(_DWORD *)(v8 + 24) != 2 )
              goto LABEL_96;
            v16 = *(_QWORD *)(v8 + 40);
            v56 = *(_QWORD *)(v8 + 32);
            v17 = *(_DWORD **)(sub_15D1F10(v56) + 24);
            if ( v17 )
            {
              if ( *v17 == 5
                && (*(_WORD *)(v56 + 4)
                 || (v18 = *(_DWORD **)(*(_QWORD *)(v56 + 16) + 24LL)) == nullptr
                 || *v18 != 5
                 || v18[1] != 16)
                && (*(_WORD *)(v16 + 4)
                 || (v19 = *(_DWORD **)(*(_QWORD *)(v16 + 16) + 24LL)) == nullptr
                 || *v19 != 5
                 || v19[1] != 16) )
              {
                v20 = sub_15E1B70(v63[0]);
                *(__m128 *)v74 = _mm_loadh_ps((const double *)a2);
                sub_3D2CF0((__int64 **)v74, v20);
                v21 = *(_QWORD *)(a2 + 8);
                ++v4;
                if ( v21 && v4 == *(_DWORD *)(v21 - 4) )
                {
                  v38 = sub_15E1B70(v63[0]);
                  v59 = v38;
                  if ( v38 )
                    ++*(_DWORD *)(v38 + 8);
                  sub_3D5DC0((_QWORD *)(a2 + 8), &v59);
                }
                else
                {
                  v22 = *(_QWORD *)(v21 + 8LL * v4);
                  v60 = v22;
                  if ( v22 )
                    ++*(_DWORD *)(v22 + 8);
                  sub_3D5DC0((_QWORD *)(a2 + 8), &v60);
                  v23 = sub_15E1B70(v63[0]);
                  *(__m128 *)v74 = _mm_loadh_ps((const double *)a2);
                  sub_3D2CF0((__int64 **)v74, v23);
                }
                goto LABEL_8;
              }
            }
            if ( !*(_WORD *)(v8 + 4) )
            {
              v9 = *(int **)(*(_QWORD *)(v8 + 16) + 24LL);
              if ( v9 )
              {
                if ( !*v9 )
                {
LABEL_96:
                  if ( v9[1] != 2 )
                    goto LABEL_94;
                  if ( *(_DWORD *)(v8 + 24) != 2 )
                    goto LABEL_94;
                  v24 = *(_QWORD *)(v8 + 40);
                  if ( *(_WORD *)(v24 + 4) )
                    goto LABEL_94;
                  v25 = *(_QWORD *)(v8 + 32);
                  v26 = sub_15F0200(v41);
                  if ( !*(_WORD *)(v24 + 4) )
                  {
                    v27 = *(_DWORD **)(*(_QWORD *)(v24 + 16) + 24LL);
                    v55 = *(_QWORD *)(v24 + 16);
                    if ( v27 )
                    {
                      if ( v26 == *v27 && !v27[1] )
                      {
LABEL_57:
                        v28 = sub_15F0A30(v41, v55);
                        *(_QWORD *)v64 = v25;
                        v31 = sub_15DC610(
                                a1,
                                v28,
                                1,
                                (int)v64,
                                v29,
                                v30,
                                v39,
                                (int)v40,
                                (int)v41,
                                (int)v42,
                                (int)v43,
                                (char)v44,
                                (int)i,
                                v46,
                                v47,
                                v49);
                        *(__m128 *)v74 = _mm_loadh_ps((const double *)a2);
                        sub_3D2CF0((__int64 **)v74, v31);
                        v53 = (__int64 *)sub_15FB1F0(v41, v55);
                        v32 = *v53;
                        if ( *v53 )
                        {
                          v57 = 0;
                          v49 = v72;
                          do
                          {
                            if ( v57 >= *(_DWORD *)(v32 - 4) )
                              break;
                            v33 = *(_QWORD *)(v24 + 8 * (v57 + 4LL));
                            if ( *(_WORD *)(v25 + 4) || v55 != *(_QWORD *)(v25 + 16) )
                            {
                              v34 = *(_QWORD *)(v32 + 8LL * v57);
                              *(_QWORD *)v74 = v25;
                              sub_15DC610(
                                a1,
                                v34,
                                1,
                                (int)v74,
                                v33,
                                v6,
                                v39,
                                (int)v40,
                                (int)v41,
                                (int)v42,
                                (int)v43,
                                (char)v44,
                                (int)i,
                                v46,
                                v47,
                                v49);
                            }
                            v35 = sub_15E1B70(a1);
                            v72[0] = v35;
                            if ( v35 )
                              ++*(_DWORD *)(v35 + 8);
                            sub_3D5DC0((_QWORD *)(a2 + 8), v49);
                            ++v57;
                            v32 = *v53;
                          }
                          while ( *v53 );
                        }
                        goto LABEL_8;
                      }
                    }
                  }
                  if ( !*(_WORD *)(v8 + 4) )
                  {
                    v9 = *(int **)(*(_QWORD *)(v8 + 16) + 24LL);
                    if ( v9 )
                    {
                      if ( !*v9 )
                      {
LABEL_94:
                        if ( v9[1] != 2 )
                          goto LABEL_82;
                        if ( *(_DWORD *)(v8 + 24) != 2 )
                          goto LABEL_82;
                        v24 = *(_QWORD *)(v8 + 32);
                        if ( *(_WORD *)(v24 + 4) )
                          goto LABEL_82;
                        v25 = *(_QWORD *)(v8 + 40);
                        v36 = sub_15F0200(v41);
                        if ( !*(_WORD *)(v24 + 4) )
                        {
                          v37 = *(_DWORD **)(*(_QWORD *)(v24 + 16) + 24LL);
                          v55 = *(_QWORD *)(v24 + 16);
                          if ( v37 )
                          {
                            if ( v36 == *v37 )
                            {
                              v6 = v37[1];
                              if ( !v6 )
                                goto LABEL_57;
                            }
                          }
                        }
                        if ( !*(_WORD *)(v8 + 4) )
                        {
                          v9 = *(int **)(*(_QWORD *)(v8 + 16) + 24LL);
                          if ( v9 )
                          {
                            if ( !*v9 )
                            {
LABEL_82:
                              if ( v9[1] != 2 || *(_DWORD *)(v8 + 24) != 2 )
                                goto LABEL_95;
                              v46 = *(_QWORD *)(v8 + 32);
                              if ( (unsigned __int8)sub_1673B50(
                                                      (_DWORD)v42,
                                                      *(_QWORD *)(v8 + 40),
                                                      (unsigned int)&v68,
                                                      (unsigned int)&v58,
                                                      v5,
                                                      v6) )
                                goto LABEL_18;
                              if ( !*(_WORD *)(v8 + 4) )
                              {
                                v9 = *(int **)(*(_QWORD *)(v8 + 16) + 24LL);
                                if ( v9 )
                                {
                                  v5 = *v9;
                                  if ( !*v9 )
                                  {
LABEL_95:
                                    if ( v9[1] == 2 && *(_DWORD *)(v8 + 24) == 2 )
                                    {
                                      v46 = *(_QWORD *)(v8 + 40);
                                      if ( (unsigned __int8)sub_1673B50(
                                                              (_DWORD)v42,
                                                              *(_QWORD *)(v8 + 32),
                                                              (unsigned int)&v68,
                                                              (unsigned int)&v58,
                                                              v5,
                                                              v6) )
                                      {
LABEL_18:
                                        v72[0] = 2;
                                        v72[1] = 0;
                                        v73[0] = 1;
                                        v73[1] = 0;
                                        sub_182CBA0(qword_1C7F2C0, v73);
                                        BYTE4(v73[0]) &= ~1u;
                                        LODWORD(v73[0]) = 1;
                                        if ( v58 )
                                        {
                                          v11 = 0;
                                          v44 = v64;
                                          v43 = &v62;
                                          v40 = &v61;
                                          do
                                          {
                                            v74[0] = v11;
                                            LOBYTE(v74[2]) = 0;
                                            v64[0] = v11;
                                            v65 = 0;
                                            v62 = v46;
                                            v75 = v11;
                                            LOBYTE(v77) = 0;
                                            sub_15DCAD0(v67[2], (int)&v62, 0);
                                            sub_15D0DF0(&v75);
                                            sub_15D0DF0(v74);
                                            sub_15DCAD0(a1, 0, 0);
                                            v54 = sub_15E1B70(a1);
                                            LOBYTE(v74[1]) &= 0xFCu;
                                            v76 &= 0xFCu;
                                            v74[0] = 0;
                                            *(_QWORD *)&v74[2] = 0;
                                            v75 = 1;
                                            v77 = 0;
                                            v50 = qword_1C7F2C0;
                                            sub_1831270(qword_1C7F2C0, &v68, v72, v74);
                                            sub_182CBA0(v50, &v75);
                                            v75 = 1;
                                            v76 &= ~1u;
                                            v48 = v74[0];
                                            v51 = qword_1C7F2C0;
                                            sub_182CBA0(qword_1C7F2C0, v74);
                                            sub_182CBA0(v51, &v75);
                                            if ( !v48 )
                                              v54 = sub_15E1A70(a1);
                                            v74[0] = 0;
                                            LOBYTE(v74[1]) &= 0xFCu;
                                            v76 &= 0xFCu;
                                            *(_QWORD *)&v74[2] = 0;
                                            v75 = 1;
                                            v77 = 0;
                                            v52 = qword_1C7F2C0;
                                            sub_1833EB0(qword_1C7F2C0, &v68, v72, v74);
                                            sub_182CBA0(v52, &v75);
                                            v12 = v74[0];
                                            v74[0] = v68;
                                            LODWORD(v68) = v12;
                                            v13 = *(_QWORD *)&v74[2];
                                            *(_QWORD *)&v74[2] = v69;
                                            v69 = v13;
                                            v14 = v74[1] & 1;
                                            LOBYTE(v13) = BYTE4(v68) & 0xFC | v74[1] & 2;
                                            v49 = qword_1C7F2C0;
                                            LOBYTE(v74[1]) = BYTE4(v68) & 1 | v74[1] & 0xFC | BYTE4(v68) & 2;
                                            BYTE4(v68) = v14 | v13;
                                            v75 = v70;
                                            v15 = v71;
                                            v71 = v77;
                                            v77 = v15;
                                            LODWORD(v70) = 1;
                                            LOBYTE(v15) = BYTE4(v70) & 1 | BYTE4(v70) & 2 | v76 & 0xFC;
                                            BYTE4(v70) = BYTE4(v70) & 0xFC | v76 & 2;
                                            v76 = v15;
                                            sub_182CBA0(qword_1C7F2C0, v74);
                                            sub_182CBA0(v49, &v75);
                                            if ( v11 )
                                            {
                                              v61 = v54;
                                              if ( v54 )
                                                ++*(_DWORD *)(v54 + 8);
                                              sub_3D5DC0(i, &v61);
                                            }
                                            else
                                            {
                                              *(__m128 *)v74 = _mm_loadh_ps((const double *)a2);
                                              sub_3D2CF0((__int64 **)v74, v54);
                                            }
                                            ++v11;
                                            sub_15D0DF0(v64);
                                          }
                                          while ( v11 < v58 );
                                        }
                                        sub_25A130((char *)v72);
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_8:
      v7 = *(_QWORD *)(a2 + 8);
    }
    v10 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v68);
    return sub_182CBA0(v10, &v70);
  }
  return result;
}

