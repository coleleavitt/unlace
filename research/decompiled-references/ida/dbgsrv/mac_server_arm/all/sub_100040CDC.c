/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100040CDC
// Address: 0x0000000100040CDC

//----- (0000000100040CDC) ----------------------------------------------------
__int64 __fastcall sub_100040CDC(__int64 a1, int16x4_t *a2, int a3, _DWORD *a4)
{
  unsigned __int8 *v7; // x8
  _BYTE **v8; // x20
  __int64 v9; // x28
  char v10; // w9
  int v11; // w10
  unsigned __int8 *v12; // x9
  int v13; // w8
  int v14; // w10
  __int64 result; // x0
  char *v16; // x8
  __int64 v17; // x23
  char *v18; // x24
  int v19; // w8
  __int64 v20; // x8
  _QWORD *v21; // x1
  _QWORD *v22; // x10
  _BYTE *v23; // x23
  _QWORD *v24; // x8
  __int64 v25; // x8
  __int64 v26; // x8
  char *v27; // x8
  int v28; // w9
  char v29; // w8
  _WORD *v30; // x23
  int v31; // w8
  char v32; // w23
  _QWORD *v33; // x1
  int16x4_t v34; // x8
  __int64 v35; // x8
  __int64 v36; // x24
  _BYTE *v37; // x8
  char v38; // w22
  _QWORD *v39; // x1
  int16x4_t v40; // x8
  __int64 v41; // x8
  _QWORD *v42; // x1
  int16x4_t v43; // x8
  __int64 v44; // x8
  __int64 v45; // x24
  char *v46; // x8
  int v47; // w0
  char *v48; // x8
  int v49; // w0
  char *v50; // x8
  int v51; // w0
  int v52; // w0
  _BYTE *v53; // x8
  __int16 v54; // w8
  unsigned __int8 *v55; // x8
  __int64 v56; // x9
  _BYTE *v57; // x25
  char *v58; // x22
  __int64 v59; // x10
  int v60; // w0
  int v61; // w28
  int v62; // w8
  _BYTE *v63; // x9
  __int64 v64; // x26
  int v65; // w9
  bool v66; // w16
  __int64 v67; // x8
  char v68; // w10
  bool v69; // w9
  unsigned __int8 v70; // w20
  unsigned int v71; // w11
  bool v72; // cc
  __int64 v73; // x11
  __int64 v75; // x11
  __int64 v76; // x1
  char *v77; // x11
  bool v78; // cf
  int v79; // w13
  bool v80; // w14
  char v81; // w15
  char v82; // w14
  char v83; // w14
  unsigned __int8 v84; // w13
  int v85; // t1
  bool v86; // w25
  char v87; // w23
  char *v88; // x9
  bool v89; // w24
  char *v90; // x8
  int v91; // w9
  __int16 v92; // w8
  char v93; // w8
  bool v94; // w8
  int v95; // [xsp+8h] [xbp-58h]
  _BYTE *v96; // [xsp+8h] [xbp-58h]

  v8 = (_BYTE **)(a1 + 8);
  v7 = *(unsigned __int8 **)(a1 + 8);
  v9 = a3;
  v10 = *(_BYTE *)(a1 + 128);
  *(_QWORD *)(a1 + 16) = v7;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (v10 & 1) == 0 )
    goto LABEL_13;
  while ( 2 )
  {
    while ( 1 )
    {
      v12 = v7;
      v13 = *v7;
      if ( v13 != 42 )
        break;
      v7 = v12 + 1;
      *v8 = v12 + 1;
      v14 = v12[1];
      if ( v14 == 47 )
      {
        v11 = 1;
      }
      else
      {
        if ( v14 != 41 )
          continue;
        v11 = 2;
      }
      if ( (*(_DWORD *)(a1 + 612) & v11) == 0 )
        continue;
      *(_QWORD *)(a1 + 8) = v12 + 2;
      *(_BYTE *)(a1 + 128) = 0;
      while ( 1 )
      {
        while ( 1 )
        {
LABEL_13:
          v16 = *v8;
          do
          {
            do
            {
              *v8 = ++v16;
              v17 = (unsigned __int8)*(v16 - 1);
            }
            while ( (unsigned int)(v17 - 9) < 5 );
          }
          while ( (_DWORD)v17 == 32 );
          if ( a4 )
            *a4 = *(_DWORD *)(a1 + 288);
          switch ( (_DWORD)v17 )
          {
            case 0:
              goto LABEL_45;
            case 0x2F:
              v18 = *v8;
              if ( **v8 == 47 && (*(_BYTE *)(a1 + 612) & 4) != 0 )
                goto LABEL_45;
              goto LABEL_26;
            case 0x3B:
              if ( (*(_BYTE *)(a1 + 612) & 8) != 0 )
                goto LABEL_45;
              v18 = *v8;
LABEL_26:
              *(_QWORD *)(a1 + 24) = v18 - 1;
              goto LABEL_27;
          }
          if ( (char)v17 > -2 )
            break;
          v20 = *(_QWORD *)(a1 + 64);
          if ( !v20 )
            goto LABEL_159;
          v21 = *(_QWORD **)(a1 + 56);
          v22 = &v21[7 * *(int *)(a1 + 80)];
          if ( v22[1] > (unsigned __int64)(v17 & 0x7F) )
          {
            v23 = *(_BYTE **)(*v22 + 24 * (v17 & 0x7F));
            if ( v23 )
            {
              if ( *v23 )
              {
                if ( *(_QWORD *)(a1 + 72) < (unsigned __int64)(v20 + 1) )
                {
                  v21 = qvector_reserve(v8 + 6, v21, v20 + 1, 0x38u);
                  *(_QWORD *)(a1 + 56) = v21;
                  v20 = *(_QWORD *)(a1 + 64);
                }
                v24 = &v21[7 * v20];
                *v24 = 0;
                v24[1] = 0;
                v24[2] = 0;
                ++*(_QWORD *)(a1 + 64);
                v24[3] = *(_QWORD *)a1;
                v24[4] = *(_QWORD *)(a1 + 8);
                *((_DWORD *)v24 + 12) = *(_DWORD *)(a1 + 80);
                v24[5] = 0;
                *(_DWORD *)(a1 + 80) = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 56LL * *(int *)(a1 + 80) + 48);
                *(_QWORD *)a1 = v23;
                *(_QWORD *)(a1 + 8) = v23;
              }
            }
          }
        }
        v18 = *(char **)(a1 + 8);
        *(_QWORD *)(a1 + 24) = v18 - 1;
        if ( (v17 & 0x80) != 0 )
          break;
LABEL_27:
        if ( (_DefaultRuneLocale.__runetype[v17] & 0x100) != 0 )
        {
          if ( (_DWORD)v17 == 76 )
          {
            v19 = (unsigned __int8)*v18;
            if ( v19 == 39 )
            {
              *v8 = v18 + 1;
              a2[5].i8[0] = 1;
              goto LABEL_91;
            }
            if ( v19 == 34 )
            {
              *v8 = v18 + 1;
              v29 = 1;
LABEL_64:
              a2[5].i8[0] = v29;
              a2[3].i16[0] = 4;
              a2[1] = 0;
              if ( *(_QWORD *)&a2[2] <= 0x3FFu )
                *a2 = (int16x4_t)qvector_reserve(a2, *a2, 0x400u, 1u);
              while ( 1 )
              {
                v30 = *v8;
                v31 = (unsigned __int8)**v8;
                if ( v31 != 92 )
                  break;
                v37 = (char *)v30 + 1;
                if ( (*(_BYTE *)(a1 + 340) & 0x10) == 0 )
                {
                  *v8 = v37;
                  v38 = back_char(v8);
                  v39 = (_QWORD *)*a2;
                  v40 = a2[1];
                  v78 = *(_QWORD *)&v40 != 0;
                  v41 = *(_QWORD *)&v40 - 1LL;
                  if ( v78 )
                    v36 = v41;
                  else
                    v36 = 0;
                  if ( *(_QWORD *)&a2[2] < (unsigned __int64)(v36 + 2) )
                  {
                    v39 = qvector_reserve(a2, v39, v36 + 2, 1u);
                    *a2 = (int16x4_t)v39;
                  }
                  a2[1] = (int16x4_t)(v36 + 2);
                  *((_BYTE *)v39 + v36) = v38;
LABEL_67:
                  *(_BYTE *)(*(_QWORD *)a2 + v36 + 1) = 0;
                  continue;
                }
                if ( !*v37 )
                  return set_qerrno();
                v42 = (_QWORD *)*a2;
                v43 = a2[1];
                v78 = *(_QWORD *)&v43 != 0;
                v44 = *(_QWORD *)&v43 - 1LL;
                if ( v78 )
                  v45 = v44;
                else
                  v45 = 0;
                if ( *(_QWORD *)&a2[2] < (unsigned __int64)(v45 + 3) )
                {
                  v42 = qvector_reserve(a2, v42, v45 + 3, 1u);
                  *a2 = (int16x4_t)v42;
                }
                a2[1] = (int16x4_t)(v45 + 3);
                *((_BYTE *)v42 + v45 + 2) = 0;
                *(_WORD *)(*(_QWORD *)a2 + v45) = *v30;
                *v8 += 2;
              }
              if ( v31 == 34 )
              {
                *v8 = (char *)v30 + 1;
                return 0;
              }
              if ( !**v8 )
                return set_qerrno();
              *v8 = (char *)v30 + 1;
              v32 = *(_BYTE *)v30;
              v33 = (_QWORD *)*a2;
              v34 = a2[1];
              v78 = *(_QWORD *)&v34 != 0;
              v35 = *(_QWORD *)&v34 - 1LL;
              if ( v78 )
                v36 = v35;
              else
                v36 = 0;
              if ( *(_QWORD *)&a2[2] < (unsigned __int64)(v36 + 2) )
              {
                v33 = qvector_reserve(a2, v33, v36 + 2, 1u);
                *a2 = (int16x4_t)v33;
              }
              a2[1] = (int16x4_t)(v36 + 2);
              *((_BYTE *)v33 + v36) = v32;
              goto LABEL_67;
            }
          }
        }
        else if ( (_DWORD)v17 != 36 && (_DWORD)v17 != 95 )
        {
          v95 = 1;
          goto LABEL_47;
        }
        result = sub_1000409FC(a1, 0, (void **)a2);
        if ( (_DWORD)result != 1 )
        {
          if ( (_DWORD)result )
            return get_qerrno();
          return result;
        }
      }
      v95 = 0;
LABEL_47:
      if ( !memchr("?(),.[\\]`{};~@", v17, 0xFu) )
      {
        if ( memchr("!%&*+-/<=>^|:", v17, 0xEu) )
        {
          a2[3].i16[0] = v17;
          v27 = *v8;
          v28 = (char)**v8;
          if ( v28 == 61 )
          {
            result = 0;
            v54 = ((_WORD)v17 << 8) | 0x3D;
          }
          else
          {
            if ( ((unsigned int)(char)v17 > 0x3E || ((1LL << v17) & 0x5400284000000000LL) == 0)
              && (unsigned __int8)v17 != 124 )
            {
              result = 0;
              if ( (char)v17 == 47 && v28 == 42 )
              {
                if ( (*(_BYTE *)(a1 + 612) & 1) == 0 )
                  return 0;
                goto LABEL_60;
              }
              return result;
            }
            if ( v28 == (_DWORD)v17 )
            {
              a2[3].i16[0] = v17 | ((_WORD)v17 << 8);
              v53 = *v8 + 1;
              *v8 = v53;
              if ( ((unsigned int)v17 | 2) == 0x3E && *v53 == 61 )
              {
                result = 0;
                v54 = a2[3].i16[0] + 61;
                goto LABEL_137;
              }
              return 0;
            }
            result = 0;
            if ( (char)v17 != 45 || v28 != 62 )
              return result;
            result = 0;
            v54 = 11582;
          }
LABEL_137:
          a2[3].i16[0] = v54;
          v50 = *v8;
LABEL_138:
          *v8 = v50 + 1;
          return result;
        }
        if ( !v95 || (_DefaultRuneLocale.__runetype[v17] & 0x400) == 0 )
        {
          if ( (_DWORD)v17 != 39 )
          {
            if ( (_DWORD)v17 == 35 )
            {
              if ( *v18 <= -2LL && *(_QWORD *)(a1 + 64) )
              {
                *v8 = v18 + 1;
                v70 = *v18 ^ 0x80;
                a2[3].i16[0] = 4;
                a2[5].i8[0] = 0;
                a2[1] = 0;
                if ( *(_QWORD *)&a2[2] <= 0x3FFu )
                  *a2 = (int16x4_t)qvector_reserve(a2, *a2, 0x400u, 1u);
                sub_1000408F0((_QWORD *)a1, a2, v70, *(_DWORD *)(a1 + 80));
                return 0;
              }
            }
            else if ( (_DWORD)v17 == 34 )
            {
              v29 = 0;
              goto LABEL_64;
            }
LABEL_159:
            set_error_data(0);
            return set_qerrno();
          }
LABEL_91:
          a2[3].i16[0] = 5;
          a2[4] = 0;
          v46 = *v8;
          if ( **v8 != 39 && **v8 )
          {
            *v8 = v46 + 1;
            v47 = (unsigned __int8)*v46;
            if ( v47 == 92 )
              LOBYTE(v47) = back_char(v8);
            a2[4] = (int16x4_t)((unsigned __int8)v47 | (*(_QWORD *)&a2[4] << 8));
            v48 = *v8;
            if ( **v8 )
            {
              if ( **v8 == 39 )
              {
                *v8 = v48 + 1;
                a2[4] = (int16x4_t)a2[4].i8[0];
                return 0;
              }
              *v8 = v48 + 1;
              v49 = (unsigned __int8)*v48;
              if ( v49 == 92 )
                LOBYTE(v49) = back_char(v8);
              a2[4] = (int16x4_t)((unsigned __int8)v49 | (*(_QWORD *)&a2[4] << 8));
              v50 = *v8;
              if ( **v8 )
              {
                if ( **v8 == 39 )
                  goto LABEL_114;
                *v8 = v50 + 1;
                v51 = (unsigned __int8)*v50;
                if ( v51 == 92 )
                  LOBYTE(v51) = back_char(v8);
                a2[4] = (int16x4_t)((unsigned __int8)v51 | (*(_QWORD *)&a2[4] << 8));
                v50 = *v8;
                if ( **v8 )
                {
                  if ( **v8 == 39 )
                    goto LABEL_114;
                  *v8 = v50 + 1;
                  v52 = (unsigned __int8)*v50;
                  if ( v52 == 92 )
                    LOBYTE(v52) = back_char(v8);
                  a2[4] = (int16x4_t)((unsigned __int8)v52 | (*(_QWORD *)&a2[4] << 8));
                  v50 = *v8;
                  if ( **v8 == 39 )
                  {
LABEL_114:
                    result = 0;
                    goto LABEL_138;
                  }
                }
              }
            }
          }
          return set_qerrno();
        }
        v57 = (_BYTE *)(a1 + 340);
        v58 = v18 - 1;
        if ( (*(_BYTE *)(a1 + 340) & 1) != 0 )
        {
LABEL_146:
          v60 = sub_1000419B4(v58);
          v18 = *v8;
          if ( v60 )
          {
            *v8 = v18 - 1;
            if ( v60 == -1 )
            {
              while ( 1 )
              {
                v75 = *(v18 - 1);
                if ( v75 < 0 || (_DefaultRuneLocale.__runetype[v75] & 0x500) == 0 )
                {
                  v71 = (unsigned __int8)*(v18 - 1) - 36;
                  v72 = v71 > 0x3B;
                  v73 = (1LL << v71) & 0x800000000000401LL;
                  if ( v72 || v73 == 0 )
                    break;
                }
                *v8 = v18++;
              }
              return set_qerrno();
            }
            if ( (unsigned int)asctoreal(v8, a2 + 6) != 1 )
              return set_qerrno();
            a2[3].i16[0] = 7;
            LOBYTE(v61) = **v8;
            v62 = (unsigned __int8)__toupper((unsigned __int8)v61);
            if ( v62 == 76 || v62 == 70 )
            {
              v63 = *v8 + 1;
              *v8 = v63;
              LOBYTE(v61) = *v63;
            }
LABEL_241:
            if ( (*v57 & 2) == 0 )
              goto LABEL_242;
            v94 = (v61 & 0x80) == 0 && (_DefaultRuneLocale.__runetype[(unsigned __int8)v61] & 0x500) != 0;
            if ( (unsigned __int8)v61 == 95 )
              v94 = 1;
            if ( (unsigned __int8)v61 == 36 )
              v94 = 1;
            if ( !v94 && ((unsigned __int8)v61 > 0x2Eu || ((1LL << v61) & 0x408400000000LL) == 0) )
            {
LABEL_242:
              *(_QWORD *)(a1 + 40) = 0;
              sub_1000405B8((_QWORD **)(a1 + 32), v58, *(_QWORD *)(a1 + 8) - (_QWORD)v58);
              return 0;
            }
            return set_qerrno();
          }
        }
        v64 = v17 - 48;
        v65 = (unsigned __int8)*v18;
        v66 = (_DWORD)v17 == 48;
        if ( (_DWORD)v17 != 48 )
        {
          v67 = 10;
          goto LABEL_161;
        }
        v67 = 8;
        if ( (unsigned __int8)*v18 > 0x61u )
        {
          if ( v65 != 98 )
          {
            if ( v65 != 120 )
              goto LABEL_161;
            goto LABEL_179;
          }
        }
        else if ( v65 != 66 )
        {
          if ( v65 != 88 )
          {
LABEL_161:
            LOBYTE(v61) = *v18;
            if ( ((char)v65 & 0x80000000) == 0 )
            {
              v68 = 0;
              v69 = (_DWORD)v17 == 48;
              goto LABEL_188;
            }
            v96 = v57;
LABEL_212:
            v86 = 0;
            v87 = 1;
            while ( 1 )
            {
              while ( 1 )
              {
                v88 = v18;
                if ( (v61 & 0xDF) != 0x4C )
                  break;
                if ( v86 )
                  return set_qerrno();
                ++v18;
                *v8 = v88 + 1;
                v61 = (unsigned __int8)v88[1];
                v86 = (v61 & 0xFFFFFFDF) == 76;
                if ( (v61 & 0xFFFFFFDF) == 0x4C )
                {
                  v18 = v88 + 2;
                  *v8 = v88 + 2;
                  LOBYTE(v61) = v88[2];
                }
              }
              if ( (v61 & 0xDF) != 0x55 )
                break;
              v87 = 0;
              ++v18;
              *v8 = v88 + 1;
              LOBYTE(v61) = v88[1];
              v66 = 1;
            }
            v89 = v66;
            if ( __tolower((unsigned __int8)v61) == 105 )
            {
              v90 = *v8;
              v91 = (unsigned __int8)(*v8)[1];
              if ( v91 == 54 )
              {
                if ( v90[2] == 52 )
                {
                  v86 = 1;
LABEL_227:
                  *v8 = v90 + 3;
                  LOBYTE(v61) = v90[3];
                }
              }
              else if ( v91 == 51 && v90[2] == 50 )
              {
                v86 = 0;
                goto LABEL_227;
              }
            }
            if ( (*v96 & 8) == 0 )
            {
              a2[5].i8[0] = 0;
              if ( !v86 )
              {
LABEL_239:
                a2[4] = (int16x4_t)v64;
                v92 = 3;
                goto LABEL_240;
              }
LABEL_233:
              a2[6] = (int16x4_t)v64;
              v92 = 8;
LABEL_240:
              a2[3].i16[0] = v92;
              v57 = v96;
              goto LABEL_241;
            }
            if ( v86 )
            {
LABEL_232:
              a2[5].i8[0] = v64 < 0 || (v87 & 1) == 0;
              goto LABEL_233;
            }
            if ( ((unsigned __int8)v87 & ((unsigned __int64)v64 >> 31 == 0)) != 0 )
            {
              v93 = 0;
            }
            else
            {
              if ( HIDWORD(v64) != 0 || !v89 )
                goto LABEL_232;
              v93 = 1;
            }
            a2[5].i8[0] = v93;
            goto LABEL_239;
          }
LABEL_179:
          *v8 = v18 + 1;
          v76 = v18[1];
          if ( v76 < 0 || (_DefaultRuneLocale.__runetype[v76] & 0x10000) == 0 )
          {
            set_error_data(0);
            ++*v8;
            return set_qerrno();
          }
          v68 = 0;
          v69 = 0;
          v67 = 16;
          ++v18;
          LOBYTE(v61) = v76;
LABEL_188:
          v77 = v18 + 1;
          do
          {
            if ( (_DefaultRuneLocale.__runetype[(unsigned __int8)v61] & 0x10000) == 0 )
              break;
            *v8 = v77;
            v78 = (_DWORD)v17 != 48 && (unsigned __int8)v61 >= 0x3Au;
            v79 = !v78;
            v80 = (unsigned __int8)v61 > 0x37u && v69;
            if ( (unsigned __int8)v61 > 0x31u )
              v81 = v68;
            else
              v81 = 0;
            if ( (v81 & 1) != 0 || v80 || !v79 )
              goto LABEL_159;
            v82 = v61 - 32;
            if ( (unsigned __int8)v61 <= 0x60u )
              v82 = v61;
            v83 = v82 - 7;
            v84 = (unsigned __int8)v61 >= 0x3Au ? v83 : v61;
            v64 = v64 * v67 + v84 - 48;
            v85 = *v77++;
            LOBYTE(v61) = v85;
          }
          while ( (v85 & 0x80000000) == 0 );
          v96 = v57;
          v18 = v77 - 1;
          goto LABEL_212;
        }
        *v8 = v18 + 1;
        if ( (v18[1] & 0xFFFFFFFE) != 0x30 )
          goto LABEL_159;
        v69 = 0;
        LOBYTE(v61) = v18[1];
        v68 = 1;
        v67 = 2;
        ++v18;
        goto LABEL_188;
      }
      a2[3].i16[0] = v17;
      if ( (_DWORD)v17 != 40 )
      {
        if ( (_DWORD)v17 != 46 )
          return 0;
        v55 = *(unsigned __int8 **)(a1 + 8);
        v56 = *v55;
        if ( (*(_BYTE *)(a1 + 340) & 1) == 0 )
          goto LABEL_125;
        if ( (v56 & 0x80) != 0 )
          return 0;
        if ( (_DefaultRuneLocale.__runetype[v56] & 0x400) == 0
          || (v57 = (_BYTE *)(a1 + 340), v58 = (char *)(v55 - 1), (unsigned __int64)(v55 - 1) > *(_QWORD *)a1)
          && ((v59 = (char)*(v55 - 2), (v59 & 0x8000000000000000LL) == 0)
           && (_DefaultRuneLocale.__runetype[v59] & 0x500) != 0
           || (_DWORD)v59 == 95
           || *(v55 - 2) == 36) )
        {
LABEL_125:
          if ( (_DWORD)v56 == 46 && v55[1] == 46 )
          {
            *v8 = v55 + 2;
            a2[3].i16[0] = 11868;
            return 0;
          }
          return 0;
        }
        goto LABEL_146;
      }
      v27 = *v8;
      if ( **v8 != 42 || (*(_BYTE *)(a1 + 612) & 2) == 0 )
        return 0;
LABEL_60:
      *(_BYTE *)(a1 + 128) = 1;
      v7 = (unsigned __int8 *)(v27 + 1);
      *(_QWORD *)(a1 + 8) = v7;
      *(_QWORD *)(a1 + 16) = v7;
      *(_QWORD *)(a1 + 24) = 0;
    }
    if ( v13 )
    {
      v7 = v12 + 1;
      *v8 = v12 + 1;
      continue;
    }
    break;
  }
LABEL_45:
  v25 = *(_QWORD *)(a1 + 64);
  if ( v25 != v9 )
  {
    v26 = *(_QWORD *)(a1 + 56) + 56 * v25;
    *(_QWORD *)a1 = *(_QWORD *)(v26 - 32);
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(v26 - 24);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(v26 - 8);
    sub_10003D524((__int64 *)v8 + 6);
    goto LABEL_13;
  }
  if ( !*(*v8 - 1) )
    --*v8;
  a2[3].i16[0] = 1;
  return 0;
}
