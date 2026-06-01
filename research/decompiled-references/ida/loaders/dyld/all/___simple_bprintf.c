__int64 __fastcall __simple_bprintf(__int64 result, __int64 (__fastcall *a2)(__int64), char *__s, int *a4)
{
  char *v4; // x22
  __int64 v6; // x20
  __int64 v7; // x23
  __int64 v8; // x25
  __int64 v9; // x24
  unsigned int v10; // t1
  char v11; // w24
  unsigned __int8 *v12; // x26
  _BYTE *v13; // x8
  int v14; // t1
  _BYTE *v15; // x8
  bool v16; // cc
  const char *v17; // x22
  char v18; // w22
  unsigned __int8 *v19; // x24
  _BYTE *v20; // x8
  int v21; // t1
  int v22; // w28
  __int64 v23; // x24
  __int64 v24; // x23
  int v25; // w8
  int v26; // w25
  int v27; // w8
  int v28; // t1
  int v29; // t1
  _BYTE *v30; // x8
  int *v31; // x8
  int v32; // w24
  unsigned __int8 *v33; // x25
  __int64 v34; // x23
  unsigned int v35; // t1
  char v36; // w23
  unsigned __int8 *v37; // x26
  _BYTE *v38; // x8
  int v39; // t1
  _BYTE *v40; // x8
  std::ios_base *v41; // x0
  __int64 v42; // x24
  char v43; // w28
  unsigned __int8 *v44; // x26
  _BYTE *v45; // x8
  int v46; // t1
  _BYTE *v47; // x8
  int *v48; // x8
  int v49; // w21
  char v50; // w23
  unsigned __int8 *v51; // x21
  _BYTE *v52; // x8
  int v53; // t1
  const char **v54; // x8
  const char *v55; // x8
  const char *v56; // x25
  int v57; // w28
  __int64 v58; // x23
  char v59; // w26
  unsigned __int8 *v60; // x21
  _BYTE *v61; // x8
  int v62; // t1
  _BYTE *v63; // x8
  char v64; // w23
  unsigned __int8 *v65; // x21
  _BYTE *v66; // x8
  int v67; // t1
  char *v68; // x8
  char v69; // w23
  int *v70; // x8
  __int64 v71; // x2
  int *v72; // x8
  __int64 v73; // x2
  char v74; // w23
  unsigned __int8 *v75; // x21
  _BYTE *v76; // x8
  int v77; // t1
  _BYTE *v78; // x8
  _BYTE *v79; // x8
  char v80; // w21
  unsigned __int8 *v81; // x23
  _BYTE *v82; // x8
  int v83; // t1
  char *v84; // x8
  char v85; // w21

  if ( !*__s )
    return result;
  v4 = __s;
  v6 = result;
  do
  {
    result = (__int64)_platform_strchr(v4, 37);
    if ( !result )
    {
      while ( 1 )
      {
        v85 = *v4;
        if ( !*v4 )
          break;
        if ( a2 && (result = a2((unsigned __int8)*v4)) != 0 )
        {
          v80 = *(_BYTE *)result;
          if ( *(_BYTE *)result )
          {
            v81 = (unsigned __int8 *)(result + 1);
            do
            {
              v82 = *(_BYTE **)(v6 + 8);
              if ( (unsigned __int64)v82 >= *(_QWORD *)(v6 + 16) )
              {
                result = (*(__int64 (__fastcall **)(__int64))(v6 + 32))(v6);
                v82 = *(_BYTE **)(v6 + 8);
              }
              *(_QWORD *)(v6 + 8) = v82 + 1;
              *v82 = v80;
              v83 = *v81++;
              v80 = v83;
            }
            while ( v83 );
          }
        }
        else
        {
          v84 = *(char **)(v6 + 8);
          if ( (unsigned __int64)v84 >= *(_QWORD *)(v6 + 16) )
          {
            result = (*(__int64 (__fastcall **)(__int64))(v6 + 32))(v6);
            v84 = *(char **)(v6 + 8);
          }
          *(_QWORD *)(v6 + 8) = v84 + 1;
          *v84 = v85;
        }
        ++v4;
      }
      return result;
    }
    v7 = result;
    v8 = result - (_QWORD)v4;
    if ( result - (__int64)v4 >= 1 )
    {
      do
      {
        v10 = (unsigned __int8)*v4++;
        v9 = v10;
        if ( a2 && (result = a2(v9)) != 0 )
        {
          v11 = *(_BYTE *)result;
          if ( *(_BYTE *)result )
          {
            v12 = (unsigned __int8 *)(result + 1);
            do
            {
              v13 = *(_BYTE **)(v6 + 8);
              if ( (unsigned __int64)v13 >= *(_QWORD *)(v6 + 16) )
              {
                result = (*(__int64 (__fastcall **)(__int64))(v6 + 32))(v6);
                v13 = *(_BYTE **)(v6 + 8);
              }
              *(_QWORD *)(v6 + 8) = v13 + 1;
              *v13 = v11;
              v14 = *v12++;
              v11 = v14;
            }
            while ( v14 );
          }
        }
        else
        {
          v15 = *(_BYTE **)(v6 + 8);
          if ( (unsigned __int64)v15 >= *(_QWORD *)(v6 + 16) )
          {
            result = (*(__int64 (__fastcall **)(__int64))(v6 + 32))(v6);
            v15 = *(_BYTE **)(v6 + 8);
          }
          *(_QWORD *)(v6 + 8) = v15 + 1;
          *v15 = v9;
        }
        v16 = v8-- <= 1;
      }
      while ( !v16 );
    }
    v17 = (const char *)(v7 + 1);
    if ( *(_BYTE *)(v7 + 1) == 37 )
    {
      if ( a2 && (result = a2(37)) != 0 )
      {
        v18 = *(_BYTE *)result;
        if ( *(_BYTE *)result )
        {
          v19 = (unsigned __int8 *)(result + 1);
          do
          {
            v20 = *(_BYTE **)(v6 + 8);
            if ( (unsigned __int64)v20 >= *(_QWORD *)(v6 + 16) )
            {
              result = (*(__int64 (__fastcall **)(__int64))(v6 + 32))(v6);
              v20 = *(_BYTE **)(v6 + 8);
            }
            *(_QWORD *)(v6 + 8) = v20 + 1;
            *v20 = v18;
            v21 = *v19++;
            v18 = v21;
          }
          while ( v21 );
        }
      }
      else
      {
        v30 = *(_BYTE **)(v6 + 8);
        if ( (unsigned __int64)v30 >= *(_QWORD *)(v6 + 16) )
        {
          result = (*(__int64 (__fastcall **)(__int64))(v6 + 32))(v6);
          v30 = *(_BYTE **)(v6 + 8);
        }
        *(_QWORD *)(v6 + 8) = v30 + 1;
        *v30 = 37;
      }
      v4 = (char *)(v7 + 2);
      continue;
    }
    result = _platform_strncmp((const char *)(v7 + 1), ".*s", 3u);
    if ( !(_DWORD)result )
    {
LABEL_45:
      v31 = a4;
      v32 = *a4;
      a4 += 4;
      if ( v32 >= 1 )
      {
        v33 = *((unsigned __int8 **)v31 + 1);
        do
        {
          v35 = *v33++;
          v34 = v35;
          if ( a2 && (result = a2(v34)) != 0 )
          {
            v36 = *(_BYTE *)result;
            if ( *(_BYTE *)result )
            {
              v37 = (unsigned __int8 *)(result + 1);
              do
              {
                v38 = *(_BYTE **)(v6 + 8);
                if ( (unsigned __int64)v38 >= *(_QWORD *)(v6 + 16) )
                {
                  result = (*(__int64 (__fastcall **)(__int64))(v6 + 32))(v6);
                  v38 = *(_BYTE **)(v6 + 8);
                }
                *(_QWORD *)(v6 + 8) = v38 + 1;
                *v38 = v36;
                v39 = *v37++;
                v36 = v39;
              }
              while ( v39 );
            }
          }
          else
          {
            v40 = *(_BYTE **)(v6 + 8);
            if ( (unsigned __int64)v40 >= *(_QWORD *)(v6 + 16) )
            {
              result = (*(__int64 (__fastcall **)(__int64))(v6 + 32))(v6);
              v40 = *(_BYTE **)(v6 + 8);
            }
            *(_QWORD *)(v6 + 8) = v40 + 1;
            *v40 = v34;
          }
          v16 = v32-- <= 1;
        }
        while ( !v16 );
      }
      v17 += 2;
      goto LABEL_149;
    }
    v22 = 0;
    v23 = 0;
    v24 = 0;
    while ( 1 )
    {
      v25 = *v17;
      v26 = *(unsigned __int8 *)v17;
      if ( v25 > 98 )
      {
        if ( (unsigned int)(v25 - 99) <= 0x16 )
        {
          switch ( *v17 )
          {
            case 'c':
              if ( (int)v24 >= 2 )
              {
                if ( (_DWORD)v23 )
                  v42 = 48;
                else
                  v42 = 32;
                do
                {
                  if ( a2 && (result = a2(v42)) != 0 )
                  {
                    v43 = *(_BYTE *)result;
                    if ( *(_BYTE *)result )
                    {
                      v44 = (unsigned __int8 *)(result + 1);
                      do
                      {
                        v45 = *(_BYTE **)(v6 + 8);
                        if ( (unsigned __int64)v45 >= *(_QWORD *)(v6 + 16) )
                        {
                          result = (*(__int64 (__fastcall **)(__int64))(v6 + 32))(v6);
                          v45 = *(_BYTE **)(v6 + 8);
                        }
                        *(_QWORD *)(v6 + 8) = v45 + 1;
                        *v45 = v43;
                        v46 = *v44++;
                        v43 = v46;
                      }
                      while ( v46 );
                    }
                  }
                  else
                  {
                    v47 = *(_BYTE **)(v6 + 8);
                    if ( (unsigned __int64)v47 >= *(_QWORD *)(v6 + 16) )
                    {
                      result = (*(__int64 (__fastcall **)(__int64))(v6 + 32))(v6);
                      v47 = *(_BYTE **)(v6 + 8);
                    }
                    *(_QWORD *)(v6 + 8) = v47 + 1;
                    *v47 = v42;
                  }
                  v16 = (int)v24 <= 2;
                  LODWORD(v24) = v24 - 1;
                }
                while ( !v16 );
              }
              v48 = a4;
              a4 += 2;
              v49 = *v48;
              if ( a2 && (result = a2((unsigned __int8)*v48)) != 0 )
              {
                v50 = *(_BYTE *)result;
                if ( *(_BYTE *)result )
                {
                  v51 = (unsigned __int8 *)(result + 1);
                  do
                  {
                    v52 = *(_BYTE **)(v6 + 8);
                    if ( (unsigned __int64)v52 >= *(_QWORD *)(v6 + 16) )
                    {
                      result = (*(__int64 (__fastcall **)(__int64))(v6 + 32))(v6);
                      v52 = *(_BYTE **)(v6 + 8);
                    }
                    *(_QWORD *)(v6 + 8) = v52 + 1;
                    *v52 = v50;
                    v53 = *v51++;
                    v50 = v53;
                  }
                  while ( v53 );
                }
              }
              else
              {
                v78 = *(_BYTE **)(v6 + 8);
                if ( (unsigned __int64)v78 >= *(_QWORD *)(v6 + 16) )
                {
                  result = (*(__int64 (__fastcall **)(__int64))(v6 + 32))(v6);
                  v78 = *(_BYTE **)(v6 + 8);
                }
                *(_QWORD *)(v6 + 8) = v78 + 1;
                *v78 = v49;
              }
              break;
            case 'd':
            case 'i':
              a4 += 2;
              result = (__int64)dec((std::ios_base *)v6);
              break;
            case 'l':
              ++v22;
              ++v17;
              goto LABEL_33;
            case 'o':
              a4 += 2;
              result = (__int64)oct((std::ios_base *)v6);
              break;
            case 'p':
              a4 += 2;
              v41 = (std::ios_base *)v6;
              goto LABEL_91;
            case 's':
              v54 = (const char **)a4;
              a4 += 2;
              v55 = *v54;
              if ( v55 )
                v56 = v55;
              else
                v56 = "(null)";
              result = _platform_strlen(v56);
              v57 = v24 - result;
              if ( (int)v24 - (int)result >= 1 )
              {
                if ( (_DWORD)v23 )
                  v58 = 48;
                else
                  v58 = 32;
                do
                {
                  if ( a2 && (result = a2(v58)) != 0 )
                  {
                    v59 = *(_BYTE *)result;
                    if ( *(_BYTE *)result )
                    {
                      v60 = (unsigned __int8 *)(result + 1);
                      do
                      {
                        v61 = *(_BYTE **)(v6 + 8);
                        if ( (unsigned __int64)v61 >= *(_QWORD *)(v6 + 16) )
                        {
                          result = (*(__int64 (__fastcall **)(__int64))(v6 + 32))(v6);
                          v61 = *(_BYTE **)(v6 + 8);
                        }
                        *(_QWORD *)(v6 + 8) = v61 + 1;
                        *v61 = v59;
                        v62 = *v60++;
                        v59 = v62;
                      }
                      while ( v62 );
                    }
                  }
                  else
                  {
                    v63 = *(_BYTE **)(v6 + 8);
                    if ( (unsigned __int64)v63 >= *(_QWORD *)(v6 + 16) )
                    {
                      result = (*(__int64 (__fastcall **)(__int64))(v6 + 32))(v6);
                      v63 = *(_BYTE **)(v6 + 8);
                    }
                    *(_QWORD *)(v6 + 8) = v63 + 1;
                    *v63 = v58;
                  }
                  v16 = v57-- <= 1;
                }
                while ( !v16 );
              }
              while ( 1 )
              {
                v69 = *v56;
                if ( !*v56 )
                  break;
                if ( a2 && (result = a2(*(unsigned __int8 *)v56)) != 0 )
                {
                  v64 = *(_BYTE *)result;
                  if ( *(_BYTE *)result )
                  {
                    v65 = (unsigned __int8 *)(result + 1);
                    do
                    {
                      v66 = *(_BYTE **)(v6 + 8);
                      if ( (unsigned __int64)v66 >= *(_QWORD *)(v6 + 16) )
                      {
                        result = (*(__int64 (__fastcall **)(__int64))(v6 + 32))(v6);
                        v66 = *(_BYTE **)(v6 + 8);
                      }
                      *(_QWORD *)(v6 + 8) = v66 + 1;
                      *v66 = v64;
                      v67 = *v65++;
                      v64 = v67;
                    }
                    while ( v67 );
                  }
                }
                else
                {
                  v68 = *(char **)(v6 + 8);
                  if ( (unsigned __int64)v68 >= *(_QWORD *)(v6 + 16) )
                  {
                    result = (*(__int64 (__fastcall **)(__int64))(v6 + 32))(v6);
                    v68 = *(char **)(v6 + 8);
                  }
                  *(_QWORD *)(v6 + 8) = v68 + 1;
                  *v68 = v69;
                }
                ++v56;
              }
              break;
            case 'u':
              v70 = a4;
              a4 += 2;
              if ( v22 )
                v71 = *(_QWORD *)v70;
              else
                v71 = (unsigned int)*v70;
              result = udec(v6, a2, v71, v24, v23);
              break;
            case 'x':
              goto LABEL_63;
            case 'y':
              v72 = a4;
              a4 += 2;
              if ( v22 )
                v73 = *(_QWORD *)v72;
              else
                v73 = (unsigned int)*v72;
              result = ydec(v6, a2, v73, v24, v23);
              break;
            default:
              goto LABEL_131;
          }
          goto LABEL_149;
        }
LABEL_131:
        if ( a2 && (result = a2(*(unsigned __int8 *)v17)) != 0 )
        {
          v74 = *(_BYTE *)result;
          if ( *(_BYTE *)result )
          {
            v75 = (unsigned __int8 *)(result + 1);
            do
            {
              v76 = *(_BYTE **)(v6 + 8);
              if ( (unsigned __int64)v76 >= *(_QWORD *)(v6 + 16) )
              {
                result = (*(__int64 (__fastcall **)(__int64))(v6 + 32))(v6);
                v76 = *(_BYTE **)(v6 + 8);
              }
              *(_QWORD *)(v6 + 8) = v76 + 1;
              *v76 = v74;
              v77 = *v75++;
              v74 = v77;
            }
            while ( v77 );
          }
        }
        else
        {
          v79 = *(_BYTE **)(v6 + 8);
          if ( (unsigned __int64)v79 >= *(_QWORD *)(v6 + 16) )
          {
            result = (*(__int64 (__fastcall **)(__int64))(v6 + 32))(v6);
            v79 = *(_BYTE **)(v6 + 8);
          }
          *(_QWORD *)(v6 + 8) = v79 + 1;
          *v79 = v26;
        }
        goto LABEL_149;
      }
      if ( (unsigned int)(v25 - 49) >= 9 )
        break;
LABEL_36:
      if ( (unsigned int)(v26 - 48) <= 9 )
      {
        do
        {
          v27 = 10 * v24 + (unsigned __int8)v26;
          v28 = *(unsigned __int8 *)++v17;
          LOBYTE(v26) = v28;
          v24 = (unsigned int)(v27 - 48);
        }
        while ( (unsigned int)(v28 - 48) < 0xA );
      }
LABEL_33:
      result = _platform_strncmp(v17, ".*s", 3u);
      if ( !(_DWORD)result )
        goto LABEL_45;
    }
    if ( v25 == 48 )
    {
      v23 = (unsigned int)(v23 + 1);
      v29 = *(unsigned __int8 *)++v17;
      v26 = v29;
      goto LABEL_36;
    }
    if ( v25 != 88 )
      goto LABEL_131;
LABEL_63:
    a4 += 2;
    v41 = (std::ios_base *)v6;
LABEL_91:
    result = (__int64)hex(v41);
LABEL_149:
    v4 = (char *)(v17 + 1);
  }
  while ( *v4 );
  return result;
}
