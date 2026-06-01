/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: parse_command_line
// Address: 0x0000000100064D50

//----- (0000000100064D50) ----------------------------------------------------
__int64 __fastcall parse_command_line(_QWORD *a1, __int64 a2, char *a3, unsigned int a4)
{
  char *v5; // x27
  char *v8; // x0
  __int64 v9; // x25
  __int64 v10; // x26
  int v11; // w24
  char *v12; // x22
  __int64 v13; // x8
  _QWORD *v15; // x1
  __int64 v16; // x8
  _QWORD *v17; // x8
  _QWORD *v18; // x9
  __int128 v19; // q0
  _QWORD *v20; // x1
  __int64 v21; // x20
  _QWORD *v22; // x1
  __int64 v23; // x8
  _QWORD *v24; // x8
  _QWORD *v25; // x9
  __int128 v26; // q0
  _QWORD *v27; // x1
  __int64 v28; // x20
  _BOOL4 v30; // w8
  unsigned __int64 v31; // x26
  int v32; // w8
  int v33; // w9
  char *v34; // x0
  char *v35; // x0
  int v36; // w24
  int v37; // w20
  char *v38; // x27
  int v39; // t1
  void *v40; // x1
  __int64 v41; // x28
  __int64 v42; // x8
  char *v43; // x23
  int v44; // t1
  size_t v45; // x24
  void *v46; // x0
  char *v47; // x28
  void *v48; // x20
  size_t v49; // x27
  __int64 v50; // x24
  char *v51; // x0
  int v52; // w24
  char *v53; // x23
  void *v54; // x0
  __int64 v55; // x20
  void *v56; // x8
  __int128 v57; // q0
  _QWORD *v58; // x0
  __int64 v59; // x19
  _QWORD *v60; // x1
  __int64 v61; // x8
  _QWORD *v62; // x8
  __int64 v63; // x9
  char *__src; // [xsp+0h] [xbp-B0h]
  char *__srca; // [xsp+0h] [xbp-B0h]
  int v67; // [xsp+Ch] [xbp-A4h]
  _QWORD *v68; // [xsp+10h] [xbp-A0h] BYREF
  __int128 v69; // [xsp+18h] [xbp-98h]
  void *v70; // [xsp+28h] [xbp-88h] BYREF
  size_t v71; // [xsp+30h] [xbp-80h]
  __int64 v72; // [xsp+38h] [xbp-78h]
  void *v73; // [xsp+40h] [xbp-70h] BYREF
  __int128 v74; // [xsp+48h] [xbp-68h]

  if ( !a3 )
    return 0;
  v5 = a3;
  v68 = nullptr;
  v69 = 0u;
  v8 = skip_spaces(a3);
  v9 = (unsigned __int8)*v8;
  if ( *v8 )
  {
    v10 = 0;
    v11 = (a4 >> 2) & 1;
    while ( 1 )
    {
      v12 = v8 + 1;
      if ( (_DWORD)v9 != 39 && (_DWORD)v9 != 34 )
        break;
      if ( (_DWORD)v10 == (_DWORD)v9 )
      {
        v13 = *v12;
        if ( (v13 & 0x8000000000000000LL) == 0 && (!*v12 || (_DefaultRuneLocale.__runetype[v13] & 0x4000) != 0) )
        {
          v15 = (_QWORD *)*a1;
          v16 = a1[1];
          if ( a1[2] < (unsigned __int64)(v16 + 1) )
          {
            v15 = qvector_reserve(a1, v15, v16 + 1, 0x18u);
            *a1 = v15;
            v16 = a1[1];
          }
          v11 = 0;
          v17 = &v15[3 * v16];
          *v17 = 0;
          v17[1] = 0;
          v17[2] = 0;
          ++a1[1];
          v18 = (_QWORD *)*v17;
          *v17 = v68;
          v19 = *(_OWORD *)(v17 + 1);
          *(_OWORD *)(v17 + 1) = v69;
          v68 = v18;
          v69 = v19;
        }
        v12 = skip_spaces(v12);
        v9 = 0;
      }
      else if ( (_DWORD)v10 )
      {
        goto LABEL_37;
      }
LABEL_5:
      v10 = v9;
      v9 = (unsigned __int8)*v12;
      v8 = v12;
      if ( !*v12 )
        goto LABEL_120;
    }
    if ( !(_DWORD)v10 )
    {
      if ( (v9 & 0x80) != 0 )
        goto LABEL_37;
      if ( (_DefaultRuneLocale.__runetype[(unsigned int)v9] & 0x4000) != 0 )
      {
        v22 = (_QWORD *)*a1;
        v23 = a1[1];
        if ( a1[2] < (unsigned __int64)(v23 + 1) )
        {
          v22 = qvector_reserve(a1, v22, v23 + 1, 0x18u);
          *a1 = v22;
          v23 = a1[1];
        }
        v24 = &v22[3 * v23];
        *v24 = 0;
        v24[1] = 0;
        v24[2] = 0;
        ++a1[1];
        v25 = (_QWORD *)*v24;
        *v24 = v68;
        v26 = *(_OWORD *)(v24 + 1);
        *(_OWORD *)(v24 + 1) = v69;
        v68 = v25;
        v69 = v26;
        v12 = skip_spaces(v12);
        goto LABEL_55;
      }
    }
    if ( (_DWORD)v9 == 92 && (_DWORD)v10 != 39 )
    {
      v12 = v8 + 2;
      LODWORD(v9) = (unsigned __int8)v8[1];
      if ( (_DWORD)v9 != 34 && (_DWORD)v9 != 92 )
      {
        v20 = v68;
        if ( (_QWORD)v69 )
          v21 = v69 - 1;
        else
          v21 = 0;
        if ( *((_QWORD *)&v69 + 1) < (unsigned __int64)(v21 + 2) )
        {
          v20 = qvector_reserve(&v68, v68, v21 + 2, 1u);
          v68 = v20;
        }
        *(_QWORD *)&v69 = v21 + 2;
        *((_BYTE *)v20 + v21) = 92;
        *((_BYTE *)v68 + v21 + 1) = 0;
        if ( !(_DWORD)v9 )
          goto LABEL_120;
      }
    }
LABEL_37:
    v27 = v68;
    if ( (_QWORD)v69 )
      v28 = v69 - 1;
    else
      v28 = 0;
    if ( *((_QWORD *)&v69 + 1) < (unsigned __int64)(v28 + 2) )
    {
      v27 = qvector_reserve(&v68, v68, v28 + 2, 1u);
      v68 = v27;
    }
    *(_QWORD *)&v69 = v28 + 2;
    *((_BYTE *)v27 + v28) = v9;
    *((_BYTE *)v68 + v28 + 1) = 0;
    v30 = (v9 & 0xFD) != 0x3C || (_DWORD)v10 != 0;
    if ( ((v30 | v11) & 1) != 0 )
    {
      v9 = v10;
      goto LABEL_5;
    }
    v9 = 0;
    if ( (_QWORD)v69 )
      v31 = v69 - 1;
    else
      v31 = 0;
    if ( a2 && v31 <= 2 )
    {
      if ( (unsigned __int64)v69 < 2 )
        goto LABEL_55;
      v32 = *((unsigned __int8 *)v68 + v69 - 2);
      if ( v32 == 62 )
      {
        if ( (_DWORD)v31 == 2 )
        {
          v42 = *(char *)v68;
          if ( v42 < 0 || (_DefaultRuneLocale.__runetype[v42] & 0x400) == 0 )
            goto LABEL_55;
          LODWORD(v9) = v42 - 48;
          v33 = *v12 == 62 ? 6 : 2;
          v34 = *v12 == 62 ? v12 + 1 : v12;
          if ( (_DWORD)v42 == 47 )
            goto LABEL_55;
        }
        else
        {
          if ( (_DWORD)v31 != 1 )
            goto LABEL_55;
          if ( *v12 == 62 )
            v33 = 6;
          else
            v33 = 2;
          if ( *v12 == 62 )
            v34 = v12 + 1;
          else
            v34 = v12;
          LODWORD(v9) = 1;
        }
LABEL_69:
        v67 = v33;
        v73 = nullptr;
        v74 = 0u;
        v35 = skip_spaces(v34);
        v36 = (unsigned __int8)*v35;
        if ( *v35 )
        {
          if ( v36 == 39 || v36 == 34 )
          {
            __src = v5;
            while ( 1 )
            {
              v38 = v35 + 1;
              v37 = (unsigned __int8)v35[1];
              if ( v37 == 92 )
              {
                v39 = (unsigned __int8)v35[2];
                v51 = v35 + 2;
                LOBYTE(v37) = v39;
                v38 = v51;
                if ( !v39 )
                  goto LABEL_108;
              }
              else
              {
                if ( !v35[1] )
                {
                  v51 = v35 + 1;
LABEL_108:
                  *(_QWORD *)&v74 = 0;
LABEL_109:
                  v5 = __src;
                  v52 = v67 | 8;
                  v43 = v51;
LABEL_113:
                  if ( (unsigned __int64)v74 >= 2 )
                  {
                    sub_100065A60((char **)a2, *(_QWORD *)(a2 + 8) + 1LL);
                    v55 = *(_QWORD *)a2 + 48LL * *(_QWORD *)(a2 + 8);
                    *(_QWORD *)(v55 + 8) = 0;
                    *(_QWORD *)(v55 + 16) = 0;
                    *(_QWORD *)(v55 + 24) = 0;
                    ++*(_QWORD *)(a2 + 8);
                    v56 = *(void **)(v55 + 8);
                    *(_QWORD *)(v55 + 8) = v73;
                    v57 = *(_OWORD *)(v55 + 16);
                    *(_OWORD *)(v55 + 16) = v74;
                    v73 = v56;
                    v74 = v57;
                    *(_DWORD *)(v55 + 32) = v52;
                    *(_DWORD *)v55 = v9;
                    v53 = skip_spaces(v43);
                    *(_DWORD *)(v55 + 36) = (_DWORD)v12 - v31 - (_DWORD)v5;
                    *(_DWORD *)(v55 + 40) = (_DWORD)v53 - ((_DWORD)v12 - v31);
                    v54 = v73;
                    if ( !v73 )
                      goto LABEL_118;
                  }
                  else
                  {
                    v53 = nullptr;
                    v54 = v73;
                    if ( !v73 )
                    {
LABEL_118:
                      if ( v53 )
                      {
                        v9 = 0;
                        v11 = 0;
                        *(_QWORD *)&v69 = 0;
                        v12 = v53;
                        goto LABEL_5;
                      }
LABEL_55:
                      v9 = 0;
                      v11 = 0;
                      goto LABEL_5;
                    }
                  }
                  *(_QWORD *)&v74 = 0;
                  qfree(v54);
                  goto LABEL_118;
                }
                if ( v37 == v36 )
                {
                  v51 = v35 + 2;
                  goto LABEL_109;
                }
              }
              v40 = v73;
              if ( (_QWORD)v74 )
                v41 = v74 - 1;
              else
                v41 = 0;
              if ( *((_QWORD *)&v74 + 1) < (unsigned __int64)(v41 + 2) )
              {
                v40 = qvector_reserve(&v73, v73, v41 + 2, 1u);
                v73 = v40;
              }
              *(_QWORD *)&v74 = v41 + 2;
              *((_BYTE *)v40 + v41) = v37;
              *((_BYTE *)v73 + v41 + 1) = 0;
              v35 = v38;
            }
          }
          v43 = v35;
          do
          {
            if ( (v36 & 0x80) == 0 && ((v36 & 0x7D) == 0x3C || (_DefaultRuneLocale.__runetype[v36] & 0x4000) != 0) )
              break;
            v44 = (unsigned __int8)*++v43;
            v36 = v44;
          }
          while ( v44 );
          v45 = v43 - v35;
          if ( v43 > v35 )
          {
            __srca = v35;
            v46 = nullptr;
            v70 = nullptr;
            v71 = 0;
            v72 = 0;
            if ( v45 != -1 )
            {
              v46 = qvector_reserve(&v70, nullptr, v45 + 1, 1u);
              v70 = v46;
            }
            v47 = v5;
            v71 = v45 + 1;
            memmove(v46, __srca, v45);
            *((_BYTE *)v70 + v45) = 0;
            v48 = v70;
            v49 = v71;
            v50 = v72;
            v70 = nullptr;
            v71 = 0;
            v72 = 0;
            if ( v73 )
            {
              *(_QWORD *)&v74 = 0;
              qfree(v73);
              v73 = v48;
              *(_QWORD *)&v74 = v49;
              *((_QWORD *)&v74 + 1) = v50;
              if ( v70 )
              {
                v71 = 0;
                qfree(v70);
              }
            }
            else
            {
              v73 = v48;
              *(_QWORD *)&v74 = v49;
              *((_QWORD *)&v74 + 1) = v50;
            }
            v5 = v47;
          }
        }
        else
        {
          v43 = v35;
        }
        v52 = v67;
        goto LABEL_113;
      }
      v9 = 0;
      if ( v31 == 1 && v32 == 60 )
      {
        v33 = 1;
        v34 = v12;
        goto LABEL_69;
      }
    }
    v11 = 0;
    goto LABEL_5;
  }
LABEL_120:
  if ( (unsigned __int64)v69 < 2 )
  {
    v58 = v68;
    v59 = a1[1];
    if ( !v68 )
      return v59;
    goto LABEL_127;
  }
  v60 = (_QWORD *)*a1;
  v61 = a1[1];
  if ( a1[2] < (unsigned __int64)(v61 + 1) )
  {
    v60 = qvector_reserve(a1, v60, v61 + 1, 0x18u);
    *a1 = v60;
    v61 = a1[1];
  }
  v62 = &v60[3 * v61];
  *v62 = 0;
  v62[1] = 0;
  v62[2] = 0;
  ++a1[1];
  v58 = (_QWORD *)*v62;
  v63 = v62[2];
  *v62 = v68;
  *(_OWORD *)(v62 + 1) = v69;
  v68 = v58;
  *((_QWORD *)&v69 + 1) = v63;
  v59 = a1[1];
  if ( v58 )
  {
LABEL_127:
    *(_QWORD *)&v69 = 0;
    qfree(v58);
  }
  return v59;
}
// 10006527C: conditional instruction was optimized away because w24.4 is in (==22|==27)
