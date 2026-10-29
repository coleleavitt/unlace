/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000173A0
// Address: 0x00000001000173A0

//----- (00000001000173A0) ----------------------------------------------------
__int64 __fastcall sub_1000173A0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 result; // x0
  unsigned __int64 v9; // x8
  __int64 v10; // x19
  unsigned __int64 v11; // x23
  __int64 v12; // x19
  unsigned __int64 v13; // x25
  unsigned __int64 v14; // x23
  __int64 v15; // x26
  __int64 v16; // x28
  __int64 v17; // x22
  void **v18; // x27
  __int64 v19; // x24
  bool v20; // zf
  const char *v22; // x8
  __int64 v23; // x0
  const char *v24; // x0
  int v25; // t1
  char *v26; // x9
  _QWORD *v27; // x0
  void *v28; // x8
  int v29; // w8
  void *v30; // x19
  __int64 v31; // x23
  void **v32; // x22
  void *v33; // x0
  void *v34; // x0
  __int64 v35; // x10
  __int64 v36; // x24
  int v37; // w8
  __int64 v38; // x21
  __int64 v39; // x19
  __int64 v40; // x23
  __int64 v41; // x22
  const char *v42; // x0
  _BOOL8 v43; // x5
  int v44; // w23
  bool v45; // zf
  unsigned __int64 v46; // x19
  unsigned __int64 v47; // x21
  __int64 v48; // x22
  _WORD *v49; // x0
  int v50; // w23
  __int64 v51; // x22
  unsigned __int64 v52; // x26
  unsigned __int64 v53; // x23
  _OWORD *v54; // x19
  void *v55; // x0
  _DWORD *v56; // x8
  __int64 v57; // x9
  int v58; // w10
  __int64 v59; // x19
  _Unwind_Exception *v60; // x0
  int v61; // w1
  __int64 v62; // [xsp+0h] [xbp-E0h]
  __int64 v63; // [xsp+10h] [xbp-D0h]
  __int64 v64; // [xsp+18h] [xbp-C8h]
  __int64 v65; // [xsp+18h] [xbp-C8h]
  void *v66[2]; // [xsp+20h] [xbp-C0h] BYREF
  __int128 v67; // [xsp+30h] [xbp-B0h]
  int v68; // [xsp+40h] [xbp-A0h]
  void *v69; // [xsp+50h] [xbp-90h] BYREF
  __int64 v70; // [xsp+58h] [xbp-88h]
  void **v71; // [xsp+60h] [xbp-80h]
  __int16 v72; // [xsp+68h] [xbp-78h]
  void *v73[2]; // [xsp+70h] [xbp-70h] BYREF
  __int64 v74; // [xsp+80h] [xbp-60h]

  result = sub_10000EE5C(a1);
  if ( (_DWORD)result )
  {
    v63 = a2;
    v9 = *(_QWORD *)(a1 + 80);
    if ( v9 )
    {
LABEL_3:
      v10 = 0;
      v11 = 0;
      while ( 1 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(a1 + 72) + v10) == a4 )
        {
          if ( (unsigned int)sub_10000F5B0(a1, v11, 0, 0) && *(_DWORD *)(a1 + 168) == a4 )
            goto LABEL_12;
          v9 = *(_QWORD *)(a1 + 80);
        }
        ++v11;
        v10 += 20;
        if ( v11 >= v9 )
          return 0;
      }
    }
    if ( (unsigned int)sub_10000F5B0(a1, 0, 0, 0) && *(_DWORD *)(a1 + 168) == a4 )
    {
LABEL_12:
      if ( *(_QWORD *)(a1 + 120) == -1 )
      {
        if ( under_debugger == 1 )
          __break(1u);
        interr(20005);
        if ( v61 )
          sub_10000150C(v60);
        _Unwind_Resume(v60);
      }
      v12 = v63;
      *(_DWORD *)(v63 + 12) = a4;
      *(_DWORD *)(v63 + 16) = *(_DWORD *)(a1 + 172);
      *(_DWORD *)(v63 + 20) = *(_DWORD *)(a1 + 176);
      *(_OWORD *)v66 = 0u;
      v67 = 0u;
      v68 = -1;
      sub_100011848(a1);
      if ( !*(_QWORD *)(a1 + 232) )
        goto LABEL_69;
      v64 = a3;
      v13 = 0;
      v14 = -1;
      v15 = 60;
      do
      {
        v16 = *(_QWORD *)(a1 + 224);
        v17 = v16 + v15;
        v18 = (void **)(v16 + v15 - 36);
        v19 = *(_QWORD *)(v16 + v15 - 20);
        if ( *v18 )
          v20 = 0;
        else
          v20 = v19 == 0;
        if ( !v20 || *(_DWORD *)(v16 + v15) != 0 )
        {
          v22 = (const char *)(v16 + 72 * v13);
          if ( *(_BYTE *)(v17 - 52) == 95 )
          {
            if ( *(_BYTE *)(v16 + v15 - 51) == 95 )
            {
              if ( *(_BYTE *)(v16 + v15 - 50) == 95 )
              {
                if ( *(_BYTE *)(v16 + v15 - 49) == 95 )
                {
                  if ( *(_BYTE *)(v16 + v15 - 48) == 95 )
                  {
                    if ( *(_BYTE *)(v16 + v15 - 47) == 95 )
                    {
                      if ( *(_BYTE *)(v16 + v15 - 46) == 95 )
                      {
                        if ( *(_BYTE *)(v16 + v15 - 45) == 95 )
                        {
                          if ( *(_BYTE *)(v16 + v15 - 44) == 95 )
                          {
                            if ( *(_BYTE *)(v16 + v15 - 43) == 95 )
                            {
                              if ( *(_BYTE *)(v16 + v15 - 42) == 95 )
                              {
                                if ( *(_BYTE *)(v16 + v15 - 41) == 95 )
                                {
                                  if ( *(_BYTE *)(v16 + v15 - 40) == 95 )
                                  {
                                    v23 = v16 + v15;
                                    if ( *(_BYTE *)(v16 + v15 - 39) == 95 )
                                    {
                                      v25 = *(unsigned __int8 *)(v23 - 38);
                                      v24 = (const char *)(v23 - 38);
                                      if ( v25 == 95 )
                                      {
                                        if ( *(_BYTE *)(v16 + v15 - 37) == 95 )
                                          v24 = (const char *)(v16 + v15 - 36);
                                        else
                                          v24 = (const char *)(v16 + v15 - 37);
                                      }
                                    }
                                    else
                                    {
                                      v24 = v22 + 21;
                                    }
                                  }
                                  else
                                  {
                                    v24 = v22 + 20;
                                  }
                                }
                                else
                                {
                                  v24 = v22 + 19;
                                }
                              }
                              else
                              {
                                v24 = v22 + 18;
                              }
                            }
                            else
                            {
                              v24 = v22 + 17;
                            }
                          }
                          else
                          {
                            v24 = v22 + 16;
                          }
                        }
                        else
                        {
                          v24 = v22 + 15;
                        }
                      }
                      else
                      {
                        v24 = v22 + 14;
                      }
                    }
                    else
                    {
                      v24 = v22 + 13;
                    }
                  }
                  else
                  {
                    v24 = v22 + 12;
                  }
                }
                else
                {
                  v24 = v22 + 11;
                }
              }
              else
              {
                v24 = v22 + 10;
              }
            }
            else
            {
              v24 = v22 + 9;
            }
          }
          else
          {
            v24 = v22 + 8;
          }
          if ( !strncasecmp(v24, "TEXT", 4u) )
          {
            *(_DWORD *)(v63 + 32) = v19;
            if ( v14 == -1 )
              v14 = (unsigned __int64)*v18;
          }
        }
        if ( *(_QWORD *)(v17 - 12) )
        {
          v26 = (char *)*v18 + *(_QWORD *)(v16 + v15 - 28);
          v69 = *v18;
          v70 = (__int64)v26;
          rangeset_t_add((__int64)v66, (__int64)&v69);
        }
        ++v13;
        v15 += 72;
      }
      while ( v13 < *(_QWORD *)(a1 + 232) );
      if ( v14 == -1 )
      {
LABEL_69:
        result = 0;
        v28 = v66[0];
        if ( !v66[0] )
          return result;
        goto LABEL_126;
      }
      if ( v64 != -1 )
        *(_QWORD *)(v63 + 40) = v64 - v14;
      v27 = (_QWORD *)rangeset_t_lower_bound((__int64 *)v66, v14);
      v28 = v66[0];
      if ( v27 == (_QWORD *)((char *)v66[0] + 16 * (__int64)v66[1]) )
      {
        result = 0;
        if ( !v66[0] )
          return result;
        goto LABEL_126;
      }
      *(_QWORD *)(v63 + 24) = v27[1] - v14;
      v29 = *(_DWORD *)(v63 + 8);
      if ( (v29 & 1) != 0 )
      {
        v69 = off_10009D188;
        v70 = (__int64)v73;
        LOBYTE(v71) = 0;
        sub_1000100B4(a1, (__int64)&v69);
        if ( (unsigned __int8)v71 == 1 )
        {
          v69 = nullptr;
          v70 = 0;
          v71 = nullptr;
          v69 = qvector_reserve(&v69, nullptr, 0x10u, 1u);
          bzero((char *)v69 + v70, 16 - v70);
          v70 = 16;
          *(_OWORD *)v69 = *(_OWORD *)v73;
          v30 = v69;
          v31 = v70;
          v32 = v71;
          v69 = nullptr;
          v70 = 0;
          v71 = nullptr;
          v33 = *(void **)(v63 + 48);
          if ( v33 )
          {
            *(_QWORD *)(v63 + 56) = 0;
            qfree(v33);
            v34 = v69;
            *(_QWORD *)(v63 + 48) = v30;
            *(_QWORD *)(v63 + 56) = v31;
            *(_QWORD *)(v63 + 64) = v32;
            v12 = v63;
            if ( v34 )
            {
              v70 = 0;
              qfree(v34);
            }
          }
          else
          {
            *(_QWORD *)(v63 + 48) = v30;
            *(_QWORD *)(v63 + 56) = v31;
            *(_QWORD *)(v63 + 64) = v32;
            v12 = v63;
          }
        }
        v29 = *(_DWORD *)(v12 + 8);
      }
      if ( (v29 & 2) != 0 )
      {
        v69 = off_10009D860;
        v70 = v12;
        LODWORD(v71) = a4;
        sub_100012FA8(a1, (__int64)&v69);
        v29 = *(_DWORD *)(v12 + 8);
      }
      if ( (v29 & 0x18) != 0 )
      {
        sub_100011848(a1);
        sub_100011848(a1);
        v62 = *(_QWORD *)(a1 + 232);
        if ( v62 )
        {
          v35 = 0;
          while ( 1 )
          {
            v36 = *(_QWORD *)(a1 + 224) + 72 * v35;
            if ( *(_QWORD *)(v36 + 32) )
              break;
LABEL_83:
            if ( ++v35 == v62 )
              goto LABEL_115;
          }
          v65 = v35;
          v69 = nullptr;
          v70 = 0;
          v71 = nullptr;
          v69 = qvector_reserve(&v69, nullptr, 0x11u, 1u);
          v70 = 17;
          *(_OWORD *)v69 = *(_OWORD *)(v36 + 8);
          *((_BYTE *)v69 + 16) = 0;
          v37 = *(_DWORD *)(v12 + 8);
          if ( (v37 & 8) != 0 )
          {
            v35 = v65;
            if ( !*(_QWORD *)(v36 + 48) )
              goto LABEL_95;
            v38 = *(_QWORD *)(v12 + 40);
            v40 = *(_QWORD *)(v36 + 24);
            v39 = *(_QWORD *)(v36 + 32);
            v41 = *(unsigned int *)(v36 + 64);
            if ( (*(_BYTE *)(v36 + 68) & 4) != 0 )
            {
              v43 = 1;
            }
            else
            {
              if ( v70 )
                v42 = (const char *)v69;
              else
                v42 = &byte_10007AE40;
              v43 = strcmp(v42, "__TEXT") == 0;
            }
            (*(void (__fastcall **)(__int64, __int64, __int64, void **, __int64, _BOOL8))(*(_QWORD *)v63 + 16LL))(
              v63,
              v38 + v40,
              v38 + v40 + v39,
              &v69,
              v41,
              v43);
            v37 = *(_DWORD *)(v63 + 8);
          }
          v35 = v65;
LABEL_95:
          if ( (v37 & 0x10) == 0 )
          {
LABEL_96:
            if ( v69 )
            {
              v70 = 0;
              qfree(v69);
              v35 = v65;
            }
            v12 = v63;
            goto LABEL_83;
          }
          v44 = *(_DWORD *)(v36 + 64);
          if ( v44 )
            v45 = *(_QWORD *)(a1 + 256) == 0;
          else
            v45 = 1;
          if ( v45 )
          {
            if ( !v44 )
              goto LABEL_96;
          }
          else if ( !strncmp((const char *)(v36 + 8), "__TEXT", 6u) )
          {
            v46 = *(_QWORD *)(v36 + 24);
            v47 = *(_QWORD *)(*(_QWORD *)(a1 + 248) + 32LL);
            v35 = v65;
            if ( v46 < v47 )
            {
              v48 = *(_QWORD *)(v63 + 40);
              v73[0] = nullptr;
              v73[1] = nullptr;
              v74 = 0;
              v49 = qvector_reserve(v73, nullptr, 7u, 1u);
              v73[0] = v49;
              v73[1] = (void *)7;
              v49[2] = 21061;
              *(_DWORD *)v49 = 1145128264;
              *((_BYTE *)v73[0] + 6) = 0;
              (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64, void **, void **, _QWORD))(*(_QWORD *)v63 + 24LL))(
                v63,
                v48 + v46,
                v48 + v47,
                v73,
                &v69,
                0);
              if ( v73[0] )
              {
                v73[1] = nullptr;
                qfree(v73[0]);
              }
              v50 = *(_DWORD *)(v36 + 64);
              v35 = v65;
              if ( !v50 )
                goto LABEL_96;
            }
          }
          else
          {
            v35 = v65;
          }
          v51 = 0;
          v52 = 0;
          do
          {
            v54 = (_OWORD *)(*(_QWORD *)(a1 + 248) + 80LL * *(int *)(*(_QWORD *)(a1 + 272) + 4 * v35) + v51);
            v73[0] = nullptr;
            v73[1] = nullptr;
            v74 = 0;
            v73[0] = qvector_reserve(v73, nullptr, 0x11u, 1u);
            v73[1] = (void *)17;
            *(_OWORD *)v73[0] = *v54;
            *((_BYTE *)v73[0] + 16) = 0;
            (*(void (**)(void))(*(_QWORD *)v63 + 24LL))();
            if ( v73[0] )
            {
              v73[1] = nullptr;
              qfree(v73[0]);
            }
            ++v52;
            v53 = *(unsigned int *)(v36 + 64);
            v51 += 80;
            v35 = v65;
          }
          while ( v52 < v53 );
          goto LABEL_96;
        }
      }
LABEL_115:
      if ( (*(_BYTE *)(v12 + 8) & 0x20) != 0 )
      {
        v73[0] = nullptr;
        v73[1] = nullptr;
        v74 = 0;
        v69 = off_10009D2C8;
        v70 = a1;
        v71 = v73;
        v72 = 0;
        sub_1000100B4(a1, (__int64)&v69);
        v55 = v73[0];
        if ( (unsigned __int8)v72 == 1 && ((unsigned __int64)v73[1] & 0xFFFFFFFFFFFFFFFLL) != 0 )
        {
          v56 = (char *)v73[0] + 8;
          v57 = 16 * (__int64)v73[1];
          while ( 1 )
          {
            v58 = *(v56 - 2);
            if ( v58 )
            {
              if ( *(v56 - 1) )
                break;
            }
            v56 += 4;
            v57 -= 16;
            if ( !v57 )
              goto LABEL_123;
          }
          *(_DWORD *)(v12 + 72) = v58;
          *(_DWORD *)(v12 + 76) = *(v56 - 1);
          *(_DWORD *)(v12 + 80) = *v56;
          *(_DWORD *)(v12 + 84) = v56[1];
        }
LABEL_123:
        if ( v55 )
        {
          v73[1] = nullptr;
          qfree(v55);
        }
      }
      result = 1;
      v28 = v66[0];
      if ( v66[0] )
      {
LABEL_126:
        v66[1] = nullptr;
        v59 = result;
        qfree(v28);
        return v59;
      }
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 80);
      if ( v9 )
        goto LABEL_3;
      return 0;
    }
  }
  return result;
}
// 100017D5C: variable 'v61' is possibly undefined
// 100017D64: variable 'v60' is possibly undefined
// 10007AE40: using guessed type char byte_10007AE40;
// 10009D188: using guessed type __int64 (__fastcall *off_10009D188[37])();
// 10009D2C8: using guessed type __int64 (__fastcall *off_10009D2C8[37])();
// 10009D860: using guessed type __int64 (__fastcall *off_10009D860[2])();
// 1000A590D: using guessed type char under_debugger;
