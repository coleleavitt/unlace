/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4567F8
// Address: 0x00000000004567F8

//----- (00000000004567F8) ----------------------------------------------------
__int64 __fastcall sub_4567F8(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  int v7; // w1
  unsigned __int8 *i; // x0
  unsigned __int8 *v9; // x21
  int v10; // w20
  bool v11; // zf
  unsigned __int8 *v12; // x21
  int v13; // w24
  unsigned int v14; // w3
  unsigned __int8 *v15; // x26
  _BOOL4 v16; // w28
  _BYTE *v17; // x0
  int v18; // w1
  int v19; // w1
  int v20; // w0
  char v21; // w2
  __int64 v22; // x1
  _QWORD *v23; // x0
  unsigned __int8 *v24; // x21
  __int64 v25; // x2
  char *v26; // x1
  int v27; // w0
  int v28; // w0
  __int64 v29; // x0
  unsigned __int8 v30; // w20
  unsigned __int64 v31; // x0
  unsigned __int8 v32; // w20
  int v34; // w0
  int v35; // w20
  _BYTE *v36; // x0
  int v37; // w0
  _BYTE *v38; // x0
  __int64 v39; // x0
  _BYTE *v40; // x1
  __int16 v41; // w0
  __int64 v42; // x1
  __int64 v43; // x0
  unsigned __int64 v44; // x0
  char *j; // x20
  int v46; // w0
  __int64 v47; // x21
  __int64 v48; // x24
  __int64 v49; // x25
  unsigned __int64 v50; // x21
  _BYTE *v51; // x0
  __int64 v52; // x21
  char v53; // w24
  __int64 v54; // x25
  unsigned __int64 v55; // x20
  _BYTE *v56; // x0
  char v57; // w0
  __int64 v58; // x20
  char v59; // w25
  __int64 v60; // x24
  unsigned __int64 v61; // x21
  _BYTE *v62; // x0
  int v63; // w1
  bool v64; // zf
  bool v65; // zf
  int v66; // w27
  int v67; // w0
  unsigned __int8 *v68; // x22
  int v69; // w25
  int v70; // w1
  unsigned __int8 *v71; // x2
  int v72; // w0
  unsigned __int8 *v73; // x20
  int v74; // w21
  _BOOL4 v75; // w0
  int v78; // w20
  _BOOL4 v79; // w0
  unsigned __int8 *v81; // x20
  unsigned int v82; // w22
  int v83; // w0
  bool v85; // zf
  bool v86; // zf
  __int64 v87; // x20
  size_t v88; // x20
  unsigned __int64 v89; // x20
  int v90; // w25
  unsigned __int8 *v91; // x21
  bool v92; // zf
  bool v93; // zf
  bool v94; // zf
  char v95; // w0
  _BOOL4 v96; // w25
  int v97; // w21
  char v98; // w3
  __int64 v99; // x1
  unsigned int v100; // w0
  unsigned __int8 *v101; // x22
  int v102; // w21
  unsigned __int8 *v103; // x24
  int v105; // w0
  int v106; // w21
  unsigned __int8 *v107; // x1
  int v109; // w0
  char v111; // [xsp+60h] [xbp-10h]
  unsigned int v112; // [xsp+6Ch] [xbp-4h]

  v7 = *(unsigned __int8 *)(a1 + 144);
  i = *(unsigned __int8 **)(a1 + 8);
  *(_QWORD *)(a1 + 16) = i;
  *(_QWORD *)(a1 + 24) = 0;
  if ( !v7 )
    goto LABEL_2;
  while ( 2 )
  {
    v18 = *i;
    if ( v18 == 42 )
    {
      while ( 1 )
      {
        *(_QWORD *)(a1 + 8) = i + 1;
        v19 = i[1];
        if ( v19 != 47 )
          break;
        if ( (*(_DWORD *)(a1 + 764) & 1) != 0 )
          goto LABEL_31;
        i = *(unsigned __int8 **)(a1 + 8);
LABEL_27:
        v18 = *i;
        if ( v18 != 42 )
          goto LABEL_24;
      }
      if ( v19 == 41 && (*(_DWORD *)(a1 + 764) & 2) != 0 )
      {
LABEL_31:
        i += 2;
        *(_BYTE *)(a1 + 144) = 0;
        goto LABEL_2;
      }
LABEL_26:
      i = *(unsigned __int8 **)(a1 + 8);
      goto LABEL_27;
    }
LABEL_24:
    if ( v18 )
    {
      *(_QWORD *)(a1 + 8) = i + 1;
      goto LABEL_26;
    }
LABEL_62:
    while ( 2 )
    {
      if ( *(_QWORD *)(a1 + 64) == a3 )
      {
        v43 = *(_QWORD *)(a1 + 8);
        if ( !*(_BYTE *)(v43 - 1) )
          *(_QWORD *)(a1 + 8) = v43 - 1;
        *(_WORD *)(a2 + 24) = 1;
        return 0;
      }
      sub_450E98(a1);
      for ( i = *(unsigned __int8 **)(a1 + 8); ; i = v24 )
      {
LABEL_2:
        while ( 1 )
        {
          v9 = i + 1;
          *(_QWORD *)(a1 + 8) = i + 1;
          v10 = *i;
          v11 = v10 == 32 || v10 == 9;
          if ( !v11 && !sub_450428(v10) )
            break;
LABEL_40:
          i = v9;
        }
        if ( a4 )
          *a4 = *(_DWORD *)(a1 + 304);
        if ( !v10 )
          goto LABEL_62;
        if ( v10 == 47 )
        {
          v12 = *(unsigned __int8 **)(a1 + 8);
          if ( *v12 == 47 && (*(_DWORD *)(a1 + 764) & 4) != 0 )
            goto LABEL_62;
          v15 = v12 - 1;
          v13 = 47;
          *(_QWORD *)(a1 + 24) = v12 - 1;
          goto LABEL_35;
        }
        if ( v10 == 59 )
          break;
        v21 = v10 + 0x80;
        if ( (unsigned __int8)(v10 + 0x80) > 0x7Eu )
          goto LABEL_13;
        v22 = *(_QWORD *)(a1 + 64);
        if ( !v22 )
          goto LABEL_82;
        v23 = *(_QWORD **)(a1 + 56);
        if ( v23[7 * *(int *)(a1 + 80) + 1] <= (unsigned __int64)v21 )
          goto LABEL_39;
        v24 = *(unsigned __int8 **)(v23[7 * *(int *)(a1 + 80)] + 24LL * v21);
        if ( !v24 || !*v24 )
          goto LABEL_39;
        if ( (unsigned __int64)(v22 + 1) > *(_QWORD *)(a1 + 72) )
        {
          v23 = sub_491288(a1 + 56, *(void **)(a1 + 56), v22 + 1, 0x38u);
          v22 = *(_QWORD *)(a1 + 64);
          *(_QWORD *)(a1 + 56) = v23;
        }
        v25 = 7 * v22;
        v26 = (char *)&v23[7 * v22];
        v23[v25] = 0;
        *((_QWORD *)v26 + 1) = 0;
        *((_QWORD *)v26 + 2) = 0;
        ++*(_QWORD *)(a1 + 64);
        *((_QWORD *)v26 + 3) = *(_QWORD *)a1;
        *((_QWORD *)v26 + 4) = *(_QWORD *)(a1 + 8);
        v27 = *(_DWORD *)(a1 + 80);
        *((_QWORD *)v26 + 5) = 0;
        *((_DWORD *)v26 + 12) = v27;
        v28 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 56LL * *(int *)(a1 + 80) + 48);
        *(_QWORD *)a1 = v24;
        *(_QWORD *)(a1 + 8) = v24;
        *(_DWORD *)(a1 + 80) = v28;
      }
      if ( (*(_DWORD *)(a1 + 764) & 8) != 0 )
        continue;
      break;
    }
LABEL_13:
    v12 = *(unsigned __int8 **)(a1 + 8);
    v13 = v10;
    v14 = v10 & 0xFFFFFF80;
    v15 = v12 - 1;
    *(_QWORD *)(a1 + 24) = v12 - 1;
    if ( (v10 & 0x80) == 0 )
    {
LABEL_35:
      v14 = isalpha(v13);
      if ( !v14 )
        goto LABEL_14;
LABEL_36:
      if ( v10 == 76 )
      {
        v34 = *v12;
        if ( v34 == 34 )
        {
          *(_QWORD *)(a1 + 8) = v12 + 1;
          *(_BYTE *)(a2 + 40) = 1;
          goto LABEL_88;
        }
        if ( v34 == 39 )
        {
          *(_QWORD *)(a1 + 8) = v12 + 1;
          *(_BYTE *)(a2 + 40) = 1;
LABEL_67:
          v35 = 0;
          *(_WORD *)(a2 + 24) = 5;
          *(_QWORD *)(a2 + 32) = 0;
          do
          {
            v36 = *(_BYTE **)(a1 + 8);
            if ( *v36 == 39 )
            {
              if ( v35 )
              {
                *(_QWORD *)(a1 + 8) = v36 + 1;
                if ( v35 == 1 )
                  *(_QWORD *)(a2 + 32) = *(unsigned __int8 *)(a2 + 32);
                return 0;
              }
LABEL_74:
              v39 = 26;
              return sub_4869C8(v39);
            }
            ++v35;
            if ( !*v36 )
              goto LABEL_74;
            *(_QWORD *)(a1 + 8) = v36 + 1;
            v37 = (unsigned __int8)*v36;
            if ( v37 == 92 )
              LOBYTE(v37) = sub_47F168((unsigned __int8 **)(a1 + 8));
            *(_QWORD *)(a2 + 32) = (unsigned __int8)v37 | (*(_QWORD *)(a2 + 32) << 8);
          }
          while ( v35 != 4 );
          v38 = *(_BYTE **)(a1 + 8);
          if ( *v38 != 39 )
            goto LABEL_74;
          goto LABEL_81;
        }
      }
      v20 = sub_456668(a1, 0, a2);
      if ( v20 == -1 )
        return sub_4869A0();
      if ( v20 != 1 )
        return 0;
LABEL_39:
      v9 = *(unsigned __int8 **)(a1 + 8);
      goto LABEL_40;
    }
LABEL_14:
    v112 = v14;
    v16 = v10 == 95;
    if ( v10 == 36 )
      v16 = 1;
    if ( v16 )
      goto LABEL_36;
    if ( !strchr("?(),.[\\]`{};~@", v13) )
    {
      if ( !strchr("!%&*+-/<=>^|:", v13) )
      {
        if ( v112 || (unsigned int)(v10 - 48) > 9 )
        {
          if ( v10 != 34 )
          {
            if ( v10 != 39 )
            {
              if ( v10 == 35 && (unsigned __int8)(*v12 + 0x80) <= 0x7Eu )
              {
                v29 = *(_QWORD *)(a1 + 64);
                if ( v29 )
                {
                  *(_QWORD *)(a1 + 8) = v12 + 1;
                  v30 = *v12;
                  v31 = *(_QWORD *)(a2 + 16);
                  *(_QWORD *)(a2 + 8) = 0;
                  *(_WORD *)(a2 + 24) = 4;
                  v32 = v30 + 0x80;
                  *(_BYTE *)(a2 + 40) = 0;
                  if ( v31 <= 0x3FF )
                    *(_QWORD *)a2 = sub_491288(a2, *(void **)a2, 0x400u, 1u);
                  sub_451270((_QWORD *)a1, a2, v32, *(_DWORD *)(a1 + 80));
                  return 0;
                }
                v42 = *v12;
              }
              else
              {
LABEL_82:
                v42 = (unsigned __int8)v10;
                LODWORD(v29) = 0;
              }
              sub_486A08(v29, v42);
              v39 = 27;
              return sub_4869C8(v39);
            }
            goto LABEL_67;
          }
          *(_BYTE *)(a2 + 40) = 0;
LABEL_88:
          v44 = *(_QWORD *)(a2 + 16);
          *(_QWORD *)(a2 + 8) = 0;
          *(_WORD *)(a2 + 24) = 4;
          if ( v44 <= 0x3FF )
            *(_QWORD *)a2 = sub_491288(a2, *(void **)a2, 0x400u, 1u);
          for ( j = *(char **)(a1 + 8); ; j = *(char **)(a1 + 8) )
          {
LABEL_91:
            v46 = (unsigned __int8)*j;
            if ( v46 == 34 )
            {
LABEL_101:
              *(_QWORD *)(a1 + 8) = j + 1;
              return 0;
            }
            while ( 1 )
            {
              if ( !v46 )
              {
LABEL_131:
                v39 = 24;
                return sub_4869C8(v39);
              }
              if ( v46 != 92 )
              {
                *(_QWORD *)(a1 + 8) = j + 1;
                v52 = *(_QWORD *)(a2 + 8);
                v53 = *j;
                if ( v52 )
                {
                  v54 = v52 - 1;
                  v55 = v52 + 1;
                }
                else
                {
                  v52 = 1;
                  v55 = 2;
                  v54 = 0;
                }
                v56 = *(_BYTE **)a2;
                if ( *(_QWORD *)(a2 + 16) < v55 )
                {
                  v56 = sub_491288(a2, *(void **)a2, v55, 1u);
                  *(_QWORD *)a2 = v56;
                }
                *(_QWORD *)(a2 + 8) = v55;
                v56[v54] = v53;
                *(_BYTE *)(*(_QWORD *)a2 + v52) = 0;
                j = *(char **)(a1 + 8);
                goto LABEL_91;
              }
              if ( (*(_DWORD *)(a1 + 356) & 0x10) == 0 )
                break;
              if ( !j[1] )
                goto LABEL_131;
              v47 = *(_QWORD *)(a2 + 8);
              if ( v47 )
              {
                v48 = v47 - 1;
                v49 = v47 + 1;
                v50 = v47 + 2;
              }
              else
              {
                v50 = 3;
                v49 = 2;
                v48 = 0;
              }
              v51 = *(_BYTE **)a2;
              if ( *(_QWORD *)(a2 + 16) < v50 )
              {
                v51 = sub_491288(a2, *(void **)a2, v50, 1u);
                *(_QWORD *)a2 = v51;
              }
              *(_QWORD *)(a2 + 8) = v50;
              v51[v49] = 0;
              *(_WORD *)(*(_QWORD *)a2 + v48) = *(_WORD *)j;
              j = (char *)(*(_QWORD *)(a1 + 8) + 2LL);
              *(_QWORD *)(a1 + 8) = j;
              v46 = (unsigned __int8)*j;
              if ( v46 == 34 )
                goto LABEL_101;
            }
            *(_QWORD *)(a1 + 8) = j + 1;
            v57 = sub_47F168((unsigned __int8 **)(a1 + 8));
            v58 = *(_QWORD *)(a2 + 8);
            v59 = v57;
            if ( v58 )
            {
              v60 = v58 - 1;
              v61 = v58 + 1;
            }
            else
            {
              v58 = 1;
              v61 = 2;
              v60 = 0;
            }
            v62 = *(_BYTE **)a2;
            if ( *(_QWORD *)(a2 + 16) < v61 )
            {
              v62 = sub_491288(a2, *(void **)a2, v61, 1u);
              *(_QWORD *)a2 = v62;
            }
            *(_QWORD *)(a2 + 8) = v61;
            v62[v60] = v59;
            *(_BYTE *)(*(_QWORD *)a2 + v58) = 0;
          }
        }
        v66 = *(_DWORD *)(a1 + 356);
        if ( (v66 & 1) != 0 )
          goto LABEL_144;
LABEL_193:
        v11 = v10 == 48;
        v89 = v13 - 48;
        if ( !v11 )
        {
          v90 = 10;
LABEL_195:
          while ( 1 )
          {
            v82 = *v12;
            if ( (v82 & 0x80) != 0 )
              break;
            v91 = v12 + 1;
            if ( !isxdigit(v82) )
              break;
            *(_QWORD *)(a1 + 8) = v91;
            v92 = v82 > 0x39 && v90 == 10;
            if ( v92
              || (v82 > 0x37 ? (v93 = v90 == 8) : (v93 = 0), v93 || (v82 > 0x31 ? (v94 = v90 == 2) : (v94 = 0), v94)) )
            {
              sub_486A08(0, (unsigned __int8)v82);
              v39 = 20;
              return sub_4869C8(v39);
            }
            if ( v82 > 0x39 )
            {
              if ( v82 > 0x60 )
                LOBYTE(v82) = v82 - 32;
              v82 = (unsigned __int8)(v82 - 7);
            }
            v12 = *(unsigned __int8 **)(a1 + 8);
            v89 = (int)(v82 - 48) + v90 * v89;
          }
          v95 = v82 & 0xDF;
          v96 = v90 != 10;
          v97 = 0;
          v98 = 1;
          while ( 1 )
          {
            while ( v95 == 85 )
            {
              v98 = 0;
              v96 = 1;
              v107 = (unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 1LL);
              *(_QWORD *)(a1 + 8) = v107;
              v82 = *v107;
              v95 = v82 & 0xDF;
            }
            if ( v95 != 76 )
              break;
            if ( v97 )
              goto LABEL_187;
            v99 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v99 + 1;
            v82 = *(unsigned __int8 *)(v99 + 1);
            v95 = v82 & 0xDF;
            if ( (v82 & 0xFFFFFFDF) == 0x4C )
            {
              *(_QWORD *)(a1 + 8) = v99 + 2;
              v97 = 1;
              v82 = *(unsigned __int8 *)(v99 + 2);
              v95 = v82 & 0xDF;
            }
          }
          v103 = *(unsigned __int8 **)(a1 + 8);
          v111 = v98;
          if ( tolower(*v103) == 105 )
          {
            v105 = v103[1];
            if ( v105 == 51 )
            {
              if ( v103[2] != 50 )
                goto LABEL_235;
              v106 = 1;
            }
            else
            {
              if ( v105 != 54 || v103[2] != 52 )
                goto LABEL_235;
              v106 = 0;
            }
            *(_QWORD *)(a1 + 8) = v103 + 3;
            v97 = v106 ^ 1;
            v82 = v103[3];
          }
LABEL_235:
          if ( (v66 & 8) != 0 )
          {
            if ( v97 )
              goto LABEL_243;
            v97 = (unsigned __int8)v111 & (v89 <= 0x7FFFFFFF);
            if ( ((unsigned __int8)v111 & (v89 <= 0x7FFFFFFF)) != 0 )
            {
              v97 = 0;
              v109 = -1;
            }
            else
            {
              if ( v96 && v89 <= 0xFFFFFFFF )
              {
                v109 = 1;
                goto LABEL_245;
              }
LABEL_243:
              v97 = (unsigned __int8)v111 & ((v89 & 0x8000000000000000LL) == 0LL);
              if ( v97 )
              {
                v109 = -1;
              }
              else
              {
                v109 = v96;
                v97 = 1;
              }
            }
LABEL_245:
            LOBYTE(v16) = v109 != -1;
          }
          *(_BYTE *)(a2 + 40) = v16;
          if ( v97 )
          {
            *(_WORD *)(a2 + 24) = 8;
            *(_QWORD *)(a2 + 48) = v89;
          }
          else
          {
            *(_WORD *)(a2 + 24) = 3;
            *(_QWORD *)(a2 + 32) = v89;
          }
          goto LABEL_177;
        }
        v100 = *v12;
        if ( v100 == 88 )
        {
LABEL_225:
          v101 = v12 + 1;
          *(_QWORD *)(a1 + 8) = v12 + 1;
          v102 = v12[1];
          if ( (v102 & 0x80) == 0 && isxdigit(v102) )
          {
            v90 = 16;
            v12 = v101;
            goto LABEL_195;
          }
          sub_486A08(0, (unsigned __int8)v102);
          v39 = 20;
          ++*(_QWORD *)(a1 + 8);
        }
        else
        {
          if ( v100 <= 0x58 )
          {
            if ( v100 != 66 )
              goto LABEL_229;
          }
          else if ( v100 != 98 )
          {
            if ( v100 == 120 )
              goto LABEL_225;
LABEL_229:
            v90 = 8;
            goto LABEL_195;
          }
          *(_QWORD *)(a1 + 8) = v12 + 1;
          if ( (unsigned __int8)(v12[1] - 48) <= 1u )
          {
            ++v12;
            v90 = 2;
            goto LABEL_195;
          }
          sub_486A08(0, v12[1]);
          v39 = 20;
        }
        return sub_4869C8(v39);
      }
      *(_WORD *)(a2 + 24) = v10;
      v17 = *(_BYTE **)(a1 + 8);
      v63 = (unsigned __int8)*v17;
      if ( v63 == 61 )
      {
        v41 = (_WORD)v13 << 8;
        goto LABEL_80;
      }
      if ( (v10 & 0xFFFFFFFD) == 0x3C )
      {
        if ( v63 != v10 )
        {
LABEL_259:
          if ( v10 == 45 && v63 == 62 )
          {
            *(_WORD *)(a2 + 24) = 11582;
            ++*(_QWORD *)(a1 + 8);
          }
          return 0;
        }
        *(_WORD *)(a2 + 24) = v10 + ((_WORD)v13 << 8);
        v40 = (_BYTE *)(*(_QWORD *)(a1 + 8) + 1LL);
        *(_QWORD *)(a1 + 8) = v40;
        if ( *v40 != 61 )
          return 0;
        v41 = *(_WORD *)(a2 + 24);
LABEL_80:
        *(_WORD *)(a2 + 24) = v41 + 61;
        v38 = *(_BYTE **)(a1 + 8);
LABEL_81:
        *(_QWORD *)(a1 + 8) = v38 + 1;
        return 0;
      }
      v64 = v10 == 38 || v10 == 124;
      if ( v64 || (((_BYTE)v10 - 43) & 0xFD) == 0 || v10 == 58 )
      {
        if ( v63 == v10 )
        {
          *(_WORD *)(a2 + 24) = v63 + ((_WORD)v13 << 8);
          ++*(_QWORD *)(a1 + 8);
          return 0;
        }
        goto LABEL_259;
      }
      v65 = v10 == 47 && v63 == 42;
      if ( !v65 || (*(_DWORD *)(a1 + 764) & 1) == 0 )
        return 0;
LABEL_22:
      i = v17 + 1;
      *(_QWORD *)(a1 + 8) = i;
      *(_QWORD *)(a1 + 16) = i;
      *(_QWORD *)(a1 + 24) = 0;
      *(_BYTE *)(a1 + 144) = 1;
      continue;
    }
    break;
  }
  *(_WORD *)(a2 + 24) = v10;
  if ( v10 != 46 )
  {
    if ( v10 != 40 )
      return 0;
    v17 = *(_BYTE **)(a1 + 8);
    if ( *v17 != 42 || (*(_DWORD *)(a1 + 764) & 2) == 0 )
      return 0;
    goto LABEL_22;
  }
  v66 = *(_DWORD *)(a1 + 356);
  v12 = *(unsigned __int8 **)(a1 + 8);
  if ( (v66 & 1) == 0
    || (v67 = *v12, (v67 & 0x80) != 0)
    || (unsigned int)(v67 - 48) > 9
    || (v15 = v12 - 1, (unsigned __int64)(v12 - 1) > *(_QWORD *)a1) && sub_450D98(*(v12 - 2)) )
  {
    if ( *v12 == 46 && v12[1] == 46 )
    {
      *(_QWORD *)(a1 + 8) = v12 + 2;
      *(_WORD *)(a2 + 24) = 11868;
    }
    return 0;
  }
  v13 = 46;
LABEL_144:
  v68 = v15;
  v69 = 0;
  while ( 2 )
  {
    v70 = *v68;
    v71 = v68 + 1;
    if ( (v70 & 0x80) == 0 && (unsigned int)(v70 - 48) <= 9 )
    {
LABEL_152:
      v68 = v71;
      continue;
    }
    break;
  }
  if ( v70 == 46 )
  {
    if ( v69 )
      goto LABEL_153;
    v69 = 1;
    goto LABEL_152;
  }
  v72 = (unsigned __int8)toupper(*v68);
  if ( v72 == 69 )
  {
    if ( (v69 & 2) != 0 )
      goto LABEL_153;
    v69 |= 2u;
    v71 = v68 + 1;
    if ( ((v68[1] - 43) & 0xFD) == 0 )
      v71 = v68 + 2;
    goto LABEL_152;
  }
  if ( !v69 )
    goto LABEL_193;
  if ( v72 == 76 || v72 == 70 )
  {
    v78 = v68[1];
    v79 = sub_450D98(v68[1]);
    if ( v78 == 46 || v79 )
    {
LABEL_153:
      for ( *(_QWORD *)(a1 + 8) = v15; ; *(_QWORD *)(a1 + 8) = v73 + 1 )
      {
        v73 = *(unsigned __int8 **)(a1 + 8);
        v74 = *v73;
        v75 = sub_450D98(*v73);
        if ( v74 != 46 && !v75 )
          break;
      }
      v39 = 21;
      return sub_4869C8(v39);
    }
  }
  *(_QWORD *)(a1 + 8) = v15;
  if ( (unsigned int)sub_488808((unsigned __int8 **)(a1 + 8), (_QWORD *)(a2 + 48)) != 1 )
  {
    v39 = 22;
    return sub_4869C8(v39);
  }
  *(_WORD *)(a2 + 24) = 7;
  v81 = *(unsigned __int8 **)(a1 + 8);
  v82 = *v81;
  v83 = (unsigned __int8)toupper(v82);
  if ( v83 == 70 || v83 == 76 )
  {
    *(_QWORD *)(a1 + 8) = v81 + 1;
    v82 = v81[1];
  }
LABEL_177:
  if ( (*(_DWORD *)(a1 + 356) & 2) != 0 )
  {
    if ( sub_450D98(v82) || (v82 != 34 ? (v85 = v82 == 39) : (v85 = 1), !v85 ? (v86 = v82 == 46) : (v86 = 1), v86) )
    {
LABEL_187:
      v39 = 23;
      return sub_4869C8(v39);
    }
  }
  v87 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 40) = 0;
  v88 = v87 - (_QWORD)v15;
  if ( v88 + 1 > *(_QWORD *)(a1 + 48) )
    *(_QWORD *)(a1 + 32) = sub_491288(a1 + 32, *(void **)(a1 + 32), v88 + 1, 1u);
  *(_QWORD *)(a1 + 40) = v88 + 1;
  *(_BYTE *)(*(_QWORD *)(a1 + 32) + v88) = 0;
  memmove(*(void **)(a1 + 32), v15, v88);
  return 0;
}
