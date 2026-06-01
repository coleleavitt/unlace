/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000186D0
// Address: 0x00000001000186D0

//----- (00000001000186D0) ----------------------------------------------------
__int64 __fastcall sub_1000186D0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // r12
  __int64 v10; // rbx
  unsigned __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // r15
  const char *v14; // rdi
  const char *v15; // rdi
  char *v16; // rcx
  char *v17; // r15
  __int64 v18; // r12
  __int64 v19; // rax
  int v20; // ebx
  void *v21; // rdi
  int v22; // eax
  __int64 v23; // r13
  char *v24; // r14
  __int128 *v25; // rbx
  void *v26; // rdi
  char *v27; // rdi
  unsigned __int64 v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rsi
  int v32; // eax
  char *v33; // r13
  __int64 v34; // r8
  bool v35; // al
  const char *v36; // rdi
  unsigned __int64 v37; // r13
  unsigned __int64 v38; // r15
  unsigned __int64 v39; // rbx
  __int64 v40; // r13
  __int64 v41; // r14
  _WORD *v42; // rax
  __int64 v43; // rbx
  unsigned __int64 v44; // r12
  __int64 v45; // r14
  unsigned __int64 v46; // r15
  __int64 v47; // rax
  __int64 v48; // rcx
  char *v49; // rdi
  __int64 v50; // rax
  int v51; // edx
  _Unwind_Exception *v52; // rax
  int v53; // edx
  __int64 v54; // [rsp+0h] [rbp-E0h]
  __int64 v55; // [rsp+8h] [rbp-D8h]
  __int64 v56; // [rsp+10h] [rbp-D0h]
  __int64 v57; // [rsp+18h] [rbp-C8h]
  unsigned int v58; // [rsp+20h] [rbp-C0h]
  __int64 v59; // [rsp+20h] [rbp-C0h]
  int v61; // [rsp+30h] [rbp-B0h]
  __int64 v62; // [rsp+30h] [rbp-B0h]
  unsigned __int64 v63; // [rsp+38h] [rbp-A8h]
  unsigned __int64 v64; // [rsp+38h] [rbp-A8h]
  _OWORD v65[2]; // [rsp+40h] [rbp-A0h] BYREF
  int v66; // [rsp+60h] [rbp-80h]
  char *__s1[2]; // [rsp+70h] [rbp-70h] BYREF
  __int128 *v68; // [rsp+80h] [rbp-60h]
  __int16 v69; // [rsp+88h] [rbp-58h]
  __int128 v70; // [rsp+90h] [rbp-50h] BYREF
  __int64 v71; // [rsp+A0h] [rbp-40h]

  v6 = a1;
  if ( !(unsigned __int8)sub_10000FA10(a1) )
  {
LABEL_69:
    LODWORD(v17) = 0;
    return (unsigned int)v17;
  }
  v7 = *(_QWORD *)(a1 + 80);
  if ( v7 )
  {
LABEL_3:
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 72) + v8) == a4 )
      {
        if ( (unsigned __int8)sub_100010140(a1, v9, 0, 0) && *(_DWORD *)(a1 + 168) == a4 )
          goto LABEL_12;
        v7 = *(_QWORD *)(a1 + 80);
      }
      ++v9;
      v8 += 20;
      if ( v9 >= v7 )
        goto LABEL_69;
    }
  }
  if ( !(unsigned __int8)sub_100010140(a1, 0, 0, 0) || *(_DWORD *)(a1 + 168) != a4 )
  {
    v7 = *(_QWORD *)(a1 + 80);
    if ( v7 )
      goto LABEL_3;
    goto LABEL_69;
  }
LABEL_12:
  if ( *(_QWORD *)(a1 + 120) == -1 )
  {
    if ( under_debugger == 1 )
      BUG();
    interr(0x4E25u);
    if ( v53 )
      sub_100001690(v52);
    _Unwind_Resume(v52);
  }
  *(_DWORD *)(a2 + 12) = a4;
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 172);
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 176);
  memset(v65, 0, sizeof(v65));
  v66 = -1;
  sub_100012510(a1);
  if ( !*(_QWORD *)(a1 + 232) )
    goto LABEL_65;
  v57 = a3;
  v61 = a4;
  v63 = -1;
  v10 = 0;
  v11 = 0;
  do
  {
    v12 = *(_QWORD *)(v6 + 224);
    v13 = *(_QWORD *)(v12 + v10 + 40);
    if ( *(_QWORD *)(v12 + v10 + 24) || v13 || *(_DWORD *)(v12 + v10 + 60) )
    {
      v14 = (const char *)(v12 + 72 * v11);
      if ( *(_BYTE *)(v12 + v10 + 8) == 95 )
      {
        if ( *(_BYTE *)(v12 + v10 + 9) == 95 )
        {
          if ( *(_BYTE *)(v12 + v10 + 10) == 95 )
          {
            if ( *(_BYTE *)(v12 + v10 + 11) == 95 )
            {
              if ( *(_BYTE *)(v12 + v10 + 12) == 95 )
              {
                if ( *(_BYTE *)(v12 + v10 + 13) == 95 )
                {
                  if ( *(_BYTE *)(v12 + v10 + 14) == 95 )
                  {
                    if ( *(_BYTE *)(v12 + v10 + 15) == 95 )
                    {
                      if ( *(_BYTE *)(v12 + v10 + 16) == 95 )
                      {
                        if ( *(_BYTE *)(v12 + v10 + 17) == 95 )
                        {
                          if ( *(_BYTE *)(v12 + v10 + 18) == 95 )
                          {
                            if ( *(_BYTE *)(v12 + v10 + 19) == 95 )
                            {
                              if ( *(_BYTE *)(v12 + v10 + 20) == 95 )
                              {
                                if ( *(_BYTE *)(v12 + v10 + 21) == 95 )
                                {
                                  if ( *(_BYTE *)(v12 + v10 + 22) == 95 )
                                  {
                                    v15 = (const char *)(v10 + v12 + 24);
                                    if ( *(_BYTE *)(v12 + v10 + 23) != 95 )
                                      v15 = (const char *)(v10 + v12 + 23);
                                  }
                                  else
                                  {
                                    v15 = (const char *)(v10 + v12 + 22);
                                  }
                                }
                                else
                                {
                                  v15 = v14 + 21;
                                }
                              }
                              else
                              {
                                v15 = v14 + 20;
                              }
                            }
                            else
                            {
                              v15 = v14 + 19;
                            }
                          }
                          else
                          {
                            v15 = v14 + 18;
                          }
                        }
                        else
                        {
                          v15 = v14 + 17;
                        }
                      }
                      else
                      {
                        v15 = v14 + 16;
                      }
                    }
                    else
                    {
                      v15 = v14 + 15;
                    }
                  }
                  else
                  {
                    v15 = v14 + 14;
                  }
                }
                else
                {
                  v15 = v14 + 13;
                }
              }
              else
              {
                v15 = v14 + 12;
              }
            }
            else
            {
              v15 = v14 + 11;
            }
          }
          else
          {
            v15 = v14 + 10;
          }
        }
        else
        {
          v15 = v14 + 9;
        }
      }
      else
      {
        v15 = v14 + 8;
      }
      if ( !strncasecmp(v15, "TEXT", 4u) )
      {
        *(_DWORD *)(a2 + 32) = v13;
        if ( v63 == -1 )
          v63 = *(_QWORD *)(v10 + v12 + 24);
      }
    }
    if ( *(_QWORD *)(v12 + v10 + 48) )
    {
      v16 = (char *)(*(_QWORD *)(v12 + v10 + 24) + *(_QWORD *)(v12 + v10 + 32));
      __s1[0] = *(char **)(v12 + v10 + 24);
      __s1[1] = v16;
      rangeset_t_add((__int64)v65, (__int64)__s1);
    }
    ++v11;
    v10 += 72;
  }
  while ( v11 < *(_QWORD *)(v6 + 232) );
  LODWORD(v17) = v63;
  v18 = a2;
  if ( v63 == -1 )
  {
LABEL_65:
    LODWORD(v17) = 0;
  }
  else
  {
    if ( v57 != -1 )
      *(_QWORD *)(a2 + 40) = v57 - v63;
    v19 = rangeset_t_lower_bound((__int64 *)v65, v63);
    v20 = v61;
    v21 = *(void **)&v65[0];
    if ( v19 == *(_QWORD *)&v65[0] + 16LL * *((_QWORD *)&v65[0] + 1) )
    {
      LODWORD(v17) = 0;
      if ( !*(_QWORD *)&v65[0] )
        return (unsigned int)v17;
      goto LABEL_67;
    }
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(v19 + 8) - v63;
    v22 = *(_DWORD *)(a2 + 8);
    if ( (v22 & 1) != 0 )
    {
      __s1[0] = (char *)off_1000A79F8;
      __s1[1] = (char *)&v70;
      LOBYTE(v68) = 0;
      sub_100010C80(v6, (__int64)__s1);
      if ( (_BYTE)v68 == 1 )
      {
        v23 = v6;
        *(_OWORD *)__s1 = 0;
        v68 = nullptr;
        __s1[0] = (char *)qvector_reserve((__int64)__s1, nullptr, 0x10u, 1u);
        __bzero(&__s1[1][(unsigned __int64)__s1[0]], 16 - (unsigned __int64)__s1[1]);
        __s1[1] = (char *)16;
        *(_OWORD *)__s1[0] = v70;
        v24 = __s1[0];
        v25 = v68;
        __s1[0] = nullptr;
        v17 = __s1[1];
        __s1[1] = nullptr;
        v68 = nullptr;
        v18 = a2;
        v26 = *(void **)(a2 + 48);
        if ( v26 )
        {
          *(_QWORD *)(a2 + 56) = 0;
          qfree(v26);
          v27 = __s1[0];
          *(_QWORD *)(a2 + 48) = v24;
          *(_QWORD *)(a2 + 56) = v17;
          *(_QWORD *)(a2 + 64) = v25;
          if ( v27 )
          {
            __s1[1] = nullptr;
            qfree(v27);
          }
        }
        else
        {
          *(_QWORD *)(a2 + 48) = v24;
          *(_QWORD *)(a2 + 56) = v17;
          *(_QWORD *)(a2 + 64) = v25;
        }
        v6 = v23;
        v20 = v61;
      }
      v22 = *(_DWORD *)(v18 + 8);
    }
    if ( (v22 & 2) != 0 )
    {
      __s1[0] = (char *)off_1000A80D0;
      __s1[1] = (char *)v18;
      LODWORD(v68) = v20;
      sub_100013BE0(v6, (__int64)__s1);
      v22 = *(_DWORD *)(v18 + 8);
    }
    if ( (v22 & 0x18) != 0 )
    {
      sub_100012510(v6);
      sub_100012510(v6);
      v56 = *(_QWORD *)(v6 + 232);
      if ( v56 )
      {
        v29 = 0;
        v54 = v6;
        while ( 1 )
        {
          v30 = *(_QWORD *)(v6 + 224);
          if ( *(_QWORD *)(v30 + 72 * v29 + 32) )
            break;
LABEL_82:
          if ( ++v29 == v56 )
            goto LABEL_118;
        }
        v55 = 9 * v29;
        v64 = v29;
        *(_OWORD *)__s1 = 0;
        v68 = nullptr;
        v31 = v30 + 72 * v29;
        __s1[0] = (char *)qvector_reserve((__int64)__s1, nullptr, 0x11u, 1u);
        __s1[1] = (char *)17;
        *(_OWORD *)__s1[0] = *(_OWORD *)(v31 + 8);
        __s1[0][16] = 0;
        v32 = *(_DWORD *)(v18 + 8);
        v62 = v31;
        if ( (v32 & 8) != 0 )
        {
          v29 = v64;
          if ( *(_QWORD *)(v31 + 48) )
          {
            v17 = (char *)(*(_QWORD *)(v31 + 24) + *(_QWORD *)(v18 + 40));
            v33 = &v17[*(_QWORD *)(v31 + 32)];
            v34 = *(unsigned int *)(v31 + 64);
            v35 = 1;
            if ( (*(_BYTE *)(v31 + 68) & 4) == 0 )
            {
              v58 = *(_DWORD *)(v31 + 64);
              v36 = _s1;
              if ( __s1[1] )
                v36 = __s1[0];
              v35 = strcmp(v36, "__TEXT") == 0;
              v34 = v58;
            }
            (*(void (__fastcall **)(__int64, char *, char *, char **, __int64, bool))(*(_QWORD *)v18 + 16LL))(
              v18,
              v17,
              v33,
              __s1,
              v34,
              v35);
            v32 = *(_DWORD *)(v18 + 8);
            v29 = v64;
          }
          if ( (v32 & 0x10) == 0 )
            goto LABEL_116;
        }
        else
        {
          v29 = v64;
          if ( (v32 & 0x10) == 0 )
            goto LABEL_116;
        }
        LODWORD(v37) = *(_DWORD *)(v31 + 64);
        if ( (_DWORD)v37 && *(_QWORD *)(v6 + 256) )
        {
          if ( strncmp((const char *)(v31 + 8), "__TEXT", 6u) )
          {
            v29 = v64;
            goto LABEL_103;
          }
          v38 = *(_QWORD *)(v31 + 24);
          v39 = *(_QWORD *)(*(_QWORD *)(v6 + 248) + 32LL);
          v29 = v64;
          if ( v38 >= v39 )
          {
LABEL_103:
            v43 = 64;
            v44 = 0;
            do
            {
              v45 = *(_QWORD *)(v6 + 248) + 80LL * *(int *)(*(_QWORD *)(v6 + 272) + 4 * v29);
              v46 = *(_QWORD *)(v43 + v45 - 32) + *(_QWORD *)(v43 + v45 - 24);
              v59 = *(_QWORD *)(v43 + v45 - 32);
              if ( v44 >= (unsigned int)(v37 - 1) )
              {
                if ( v29 < v56 - 1 )
                {
                  v47 = *(_QWORD *)(v54 + 224);
                  if ( *(_QWORD *)(v47 + 8 * v55 + 104) )
                  {
                    if ( *(_DWORD *)(v47 + 8 * v55 + 136) && *(_QWORD *)(v31 + 24) + *(_QWORD *)(v31 + 32) > v46 )
                      v46 = *(_QWORD *)(v31 + 24) + *(_QWORD *)(v31 + 32);
                  }
                }
              }
              else if ( *(_QWORD *)(v43 + v45 + 48) > v46 )
              {
                v46 = *(_QWORD *)(v43 + v45 + 48);
              }
              v70 = 0;
              v71 = 0;
              *(_QWORD *)&v70 = qvector_reserve((__int64)&v70, nullptr, 0x11u, 1u);
              *((_QWORD *)&v70 + 1) = 17;
              *(_OWORD *)v70 = *(_OWORD *)(v43 + v45 - 64);
              *(_BYTE *)(v70 + 16) = 0;
              v48 = *(_QWORD *)(a2 + 40);
              v17 = (char *)(v48 + v46);
              (*(void (__fastcall **)(__int64, __int64, char *, __int128 *, char **, bool))(*(_QWORD *)a2 + 24LL))(
                a2,
                v48 + v59,
                v17,
                &v70,
                __s1,
                (*(_DWORD *)(v43 + v45) & 0x80000400) != 0);
              v6 = v54;
              if ( (_QWORD)v70 )
              {
                *((_QWORD *)&v70 + 1) = 0;
                qfree((void *)v70);
              }
              ++v44;
              v31 = v62;
              v37 = *(unsigned int *)(v62 + 64);
              v43 += 80;
              v29 = v64;
            }
            while ( v44 < v37 );
            goto LABEL_116;
          }
          v40 = v6;
          v41 = *(_QWORD *)(a2 + 40);
          v70 = 0;
          v71 = 0;
          v42 = qvector_reserve((__int64)&v70, nullptr, 7u, 1u);
          *(_QWORD *)&v70 = v42;
          *((_QWORD *)&v70 + 1) = 7;
          v42[2] = 21061;
          *(_DWORD *)v42 = 1145128264;
          *(_BYTE *)(v70 + 6) = 0;
          v17 = (char *)(v41 + v38);
          (*(void (__fastcall **)(__int64, char *, unsigned __int64, __int128 *, char **, _QWORD))(*(_QWORD *)a2 + 24LL))(
            a2,
            v17,
            v41 + v39,
            &v70,
            __s1,
            0);
          v6 = v40;
          if ( (_QWORD)v70 )
          {
            *((_QWORD *)&v70 + 1) = 0;
            qfree((void *)v70);
          }
          LODWORD(v37) = *(_DWORD *)(v31 + 64);
          v29 = v64;
        }
        if ( (_DWORD)v37 )
          goto LABEL_103;
LABEL_116:
        if ( __s1[0] )
        {
          __s1[1] = nullptr;
          qfree(__s1[0]);
          v29 = v64;
        }
        v18 = a2;
        goto LABEL_82;
      }
    }
LABEL_118:
    LOBYTE(v17) = 1;
    if ( (*(_BYTE *)(v18 + 8) & 0x20) != 0 )
    {
      v70 = 0;
      v71 = 0;
      __s1[0] = (char *)off_1000A7B38;
      __s1[1] = (char *)v6;
      v68 = &v70;
      v69 = 0;
      sub_100010C80(v6, (__int64)__s1);
      v49 = (char *)v70;
      if ( (_BYTE)v69 == 1 && 16LL * *((_QWORD *)&v70 + 1) )
      {
        v50 = 0;
        while ( 1 )
        {
          v51 = *(_DWORD *)(v70 + v50);
          if ( v51 )
          {
            if ( *(_DWORD *)(v70 + v50 + 4) )
              break;
          }
          v50 += 16;
          if ( 16LL * *((_QWORD *)&v70 + 1) == v50 )
            goto LABEL_126;
        }
        *(_DWORD *)(v18 + 72) = v51;
        *(_DWORD *)(v18 + 76) = *(_DWORD *)&v49[v50 + 4];
        *(_DWORD *)(v18 + 80) = *(_DWORD *)&v49[v50 + 8];
        *(_DWORD *)(v18 + 84) = *(_DWORD *)&v49[v50 + 12];
      }
LABEL_126:
      if ( v49 )
      {
        *((_QWORD *)&v70 + 1) = 0;
        qfree(v49);
      }
    }
  }
  v21 = *(void **)&v65[0];
  if ( *(_QWORD *)&v65[0] )
  {
LABEL_67:
    *((_QWORD *)&v65[0] + 1) = 0;
    qfree(v21);
  }
  return (unsigned int)v17;
}
// 100019161: variable 'v53' is possibly undefined
// 100019166: variable 'v52' is possibly undefined
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
// 1000A79F8: using guessed type __int64 (__fastcall *off_1000A79F8[38])();
// 1000A7B38: using guessed type __int64 (__fastcall *off_1000A7B38[38])();
// 1000A80D0: using guessed type __int64 (__fastcall *off_1000A80D0[2])();
// 1000AE23D: using guessed type char under_debugger;
