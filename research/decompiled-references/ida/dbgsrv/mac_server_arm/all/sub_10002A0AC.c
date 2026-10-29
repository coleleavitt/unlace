/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002A0AC
// Address: 0x000000010002A0AC

//----- (000000010002A0AC) ----------------------------------------------------
__int64 __fastcall sub_10002A0AC(
        int16x4_t *a1,
        int *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int8x16x2_t a9)
{
  int *v9; // x20
  char *v10; // x25
  int v11; // w21
  char *v12; // x19
  const char *i; // x24
  int v14; // w22
  unsigned __int64 v15; // x23
  int v16; // w22
  int v17; // w8
  unsigned __int64 v18; // x28
  int v19; // w8
  __int64 v20; // x27
  int v21; // w23
  int v22; // w8
  int v23; // t1
  const char *v24; // x8
  int v25; // t1
  unsigned int v26; // t1
  unsigned int v27; // t1
  const char *v28; // x26
  unsigned __int64 v29; // x19
  int v30; // w0
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v33; // x6
  __int64 v34; // x7
  bool v35; // zf
  int16x4_t *v36; // x0
  int v37; // w8
  unsigned int v38; // w11
  unsigned int v39; // w8
  char *j; // x8
  int v41; // w9
  char *v42; // x10
  signed __int64 v43; // x25
  __int64 v44; // x8
  int16x4_t v45; // x8
  int v46; // w0
  char *v47; // x8
  int16x4_t v48; // x2
  int16x4_t *v49; // x8
  __int64 v50; // x9
  unsigned __int64 v51; // x8
  char v52; // w9
  size_t v53; // x2
  char v54; // w12
  bool v55; // cc
  __int64 v56; // x19
  signed __int64 v57; // x0
  signed __int64 v58; // x8
  size_t v59; // x20
  int v60; // w19
  int v61; // w28
  __int64 v62; // x23
  char v63; // w22
  unsigned __int64 v64; // x20
  char v65; // w19
  unsigned __int64 v66; // x27
  char v67; // w22
  unsigned __int8 *v68; // x19
  int v69; // t1
  unsigned __int64 v70; // x27
  __int64 v71; // x19
  char v72; // w22
  char v73; // t1
  unsigned __int64 v74; // x27
  __int64 v75; // x19
  unsigned __int64 v76; // x22
  void *v77; // x0
  int *v79; // [xsp+10h] [xbp-4A0h]
  char *v80; // [xsp+18h] [xbp-498h]
  __int64 v81; // [xsp+20h] [xbp-490h]
  int v82; // [xsp+2Ch] [xbp-484h]
  int16x4_t *v83; // [xsp+30h] [xbp-480h]
  void *v84; // [xsp+38h] [xbp-478h] BYREF
  unsigned __int64 v85; // [xsp+40h] [xbp-470h]
  unsigned __int64 v86; // [xsp+48h] [xbp-468h]
  char __b[1024]; // [xsp+50h] [xbp-460h] BYREF
  _QWORD v88[2]; // [xsp+450h] [xbp-60h] BYREF
  int8x16x2_t v89; // 0:q0.32

  v9 = a2;
  v84 = nullptr;
  v85 = 0;
  v86 = 0;
  if ( a2[2] <= 0 )
  {
    *((_QWORD *)a2 + 1) = 0;
    goto LABEL_255;
  }
  v82 = a2[2];
  if ( a1[2] )
    v10 = (char *)a1[1];
  else
    v10 = &byte_100075A30;
  v83 = a1 + 4;
  v81 = 0;
  v11 = 0;
  while ( 2 )
  {
    v12 = v10 + 1;
    for ( i = v10 + 2; ; ++i )
    {
      v14 = (unsigned __int8)*(v12 - 1);
      if ( !*(v12 - 1) )
      {
        *((_QWORD *)v9 + 1) = v11;
        goto LABEL_255;
      }
      if ( v14 == 37 )
        break;
      a2 = (int *)v84;
      if ( v85 >= 0x401 )
      {
        sub_100000AA0();
        if ( v84 )
        {
          v85 = 0;
          qfree(v84);
          a2 = nullptr;
          v84 = nullptr;
          v86 = 0;
        }
        else
        {
          a2 = nullptr;
        }
      }
      if ( v85 )
        v15 = v85 - 1;
      else
        v15 = 0;
      if ( v86 < v15 + 2 )
      {
        a2 = (int *)qvector_reserve(&v84, a2, v15 + 2, 1u);
        v84 = a2;
      }
      v85 = v15 + 2;
      *((_BYTE *)a2 + v15) = v14;
      ++v12;
      *((_BYTE *)v84 + v15 + 1) = 0;
      ++v11;
    }
    v79 = v9;
    v16 = 0;
    while ( 1 )
    {
      v18 = *((unsigned __int8 *)i - 1);
      if ( v18 > 0x2A )
        break;
      if ( v18 == 32 )
      {
        v17 = 4;
        goto LABEL_22;
      }
      if ( v18 != 35 )
      {
        if ( v18 == 42 )
        {
          if ( --v82 < 1 )
          {
            v19 = v81;
            if ( (_DWORD)v81 )
              goto LABEL_255;
          }
          else
          {
            if ( (unsigned int)idcv_long((unsigned __int8 *)v83, a9, (__int64)a2, a3, a4, a5, a6, a7, a8) )
              goto LABEL_255;
            v19 = v83[1].i32[0];
            v83 += 4;
          }
          v81 = 0;
          if ( v19 >= 0 )
            v21 = v19;
          else
            v21 = -v19;
          v16 |= (unsigned int)v19 >> 31;
          v18 = *(unsigned __int8 *)i;
          goto LABEL_50;
        }
LABEL_38:
        --i;
        if ( (v18 & 0x80) == 0 )
          goto LABEL_39;
LABEL_37:
        v20 = -1;
        v21 = -1;
        goto LABEL_63;
      }
      v17 = 8;
LABEL_22:
      v16 |= v17;
      ++i;
    }
    if ( v18 == 43 )
    {
      v17 = 2;
      goto LABEL_22;
    }
    if ( v18 == 45 )
    {
      v17 = 1;
      goto LABEL_22;
    }
    if ( v18 != 48 )
      goto LABEL_38;
    LOBYTE(v16) = ~(16 * v16) & 0x10 | v16;
    v18 = *(unsigned __int8 *)i;
    if ( (v18 & 0x80) != 0 )
      goto LABEL_37;
LABEL_39:
    v21 = -1;
    while ( (_DefaultRuneLocale.__runetype[v18] & 0x400) != 0 )
    {
      v22 = 10 * v21 - 48;
      if ( v21 == -1 )
        v22 = -48;
      v21 = v22 + (unsigned __int8)v18;
      v23 = *++i;
      v18 = (unsigned __int8)v23;
      if ( v23 < 0 )
        goto LABEL_55;
    }
LABEL_50:
    if ( v18 != 46 )
    {
LABEL_55:
      v20 = -1;
      goto LABEL_63;
    }
    v24 = i + 1;
    v18 = *((unsigned __int8 *)i + 1);
    if ( (_DWORD)v18 != 42 )
    {
      v20 = 0;
      if ( (v18 & 0x80) == 0 )
      {
        do
        {
          if ( (_DefaultRuneLocale.__runetype[v18] & 0x400) == 0 )
            break;
          v20 = v18 + 10 * v20 - 48;
          v25 = *++v24;
          v18 = (unsigned __int8)v25;
        }
        while ( (v25 & 0x80000000) == 0 );
      }
      i = v24;
      goto LABEL_63;
    }
    if ( --v82 < 1 )
    {
      if ( (_DWORD)v81 )
        goto LABEL_255;
      v20 = 0;
LABEL_62:
      v81 = 0;
      v26 = *((unsigned __int8 *)i + 2);
      i += 2;
      v18 = v26;
LABEL_63:
      if ( v18 - 70 <= 0x26 && ((1LL << ((unsigned __int8)v18 - 70)) & 0x4400000141LL) != 0 )
      {
        v27 = *(unsigned __int8 *)++i;
        v18 = v27;
      }
      v28 = &byte_10008E2F5;
      v29 = 10;
      v80 = (char *)(i + 1);
      switch ( v18 )
      {
        case '%':
          __b[0] = 37;
          goto LABEL_165;
        case 'E':
        case 'G':
        case 'e':
        case 'f':
        case 'g':
          --v82;
          v30 = v81;
          if ( v82 >= 1 )
          {
            v30 = idcv_float(v83, a9);
            if ( !v30 )
            {
              if ( v21 == -1 )
                v21 = 0;
              v39 = ((unsigned int)v20 & ~(unsigned int)(v20 >> 63)) << 16;
              if ( !v21 )
                v39 = 0;
              realtoasc(__b, 0x400u, (unsigned __int16 *)&v83[1], v39 | (v21 << 8) | 0xF, v31, v32, v89, v33, v34);
              for ( j = __b; ; ++j )
              {
                v41 = (unsigned __int8)*j;
                if ( v41 != 32 )
                  break;
              }
              v83 += 4;
              v42 = &byte_10008E2F5;
              if ( (v16 & 4) != 0 )
                v42 = " ";
              if ( (v16 & 2) != 0 )
                v42 = "+";
              if ( v41 == 45 )
                v28 = "-";
              else
                v28 = v42;
              if ( v41 == 45 )
                i = j + 1;
              else
                i = j;
              v43 = strlen(i);
              v81 = 0;
              goto LABEL_187;
            }
          }
          v35 = v30 == 1531;
          v36 = v83;
          if ( !v35 )
            goto LABEL_255;
          goto LABEL_174;
        case 'X':
        case 'x':
          if ( (v16 & 8) != 0 )
          {
            if ( v18 == 120 )
              v28 = "0x";
            else
              v28 = "0X";
          }
          v29 = 16;
          goto LABEL_114;
        case 'a':
          if ( --v82 < 1 )
          {
            v49 = v83;
            if ( (_DWORD)v81 )
              goto LABEL_255;
            v48 = 0;
          }
          else
          {
            if ( (unsigned int)idcv_long((unsigned __int8 *)v83, a9, (__int64)a2, a3, a4, a5, a6, a7, a8) )
              goto LABEL_255;
            v48 = v83[1];
            v49 = v83 + 4;
          }
          v83 = v49;
          i = __b;
          if ( off_10009CA38 )
            off_10009CA38(__b, 1024, *(_QWORD *)&v48);
          else
            qsnprintf(__b, 0x400u, "%a", a4, a5, a6, a7, a8, v48.i8[0]);
LABEL_181:
          v57 = strlen(i);
          v81 = 0;
          if ( v57 >= v20 )
            v58 = v20;
          else
            v58 = v57;
          if ( v20 >= 0 )
            v43 = v58;
          else
            v43 = v57;
          goto LABEL_187;
        case 'b':
          if ( (v16 & 8) != 0 )
            v28 = "0b";
          else
            v28 = &byte_10008E2F5;
          v29 = 2;
          goto LABEL_114;
        case 'c':
          --v82;
          v44 = v81;
          if ( v82 >= 1 )
          {
            v44 = idcv_long((unsigned __int8 *)v83, a9, (__int64)a2, a3, a4, a5, a6, a7, a8);
            if ( !(_DWORD)v44 )
            {
              v81 = 0;
              __b[0] = (char)v83[1];
              i = __b;
              v83 += 4;
              v43 = 1;
              goto LABEL_187;
            }
          }
          __b[0] = 0;
          v36 = v83;
          if ( !(_DWORD)v44 )
          {
            v81 = v44;
LABEL_165:
            i = __b;
            v43 = 1;
            goto LABEL_187;
          }
          if ( (_DWORD)v44 != 1531 )
            goto LABEL_255;
          goto LABEL_174;
        case 'd':
        case 'i':
          --v82;
          v36 = v83;
          if ( v82 >= 1 )
          {
            if ( v83->i8[0] == 2
              || (v37 = idcv_int64((unsigned __int8 *)v83, a9, (__int64)a2, a3, a4, a5, a6, a7, a8),
                  v36 = v83,
                  (LODWORD(v81) = v37) == 0) )
            {
              v45 = v36[1];
              v36 += 4;
              if ( (*(_QWORD *)&v45 & 0x8000000000000000LL) != 0 )
              {
                v83 = v36;
                v51 = -*(_QWORD *)&v45;
                v28 = "-";
                v29 = 10;
              }
              else
              {
                v38 = 64;
LABEL_134:
                if ( (v16 & 2) != 0 )
                {
                  v28 = "+";
                }
                else if ( (v16 & 4) != 0 )
                {
                  v28 = " ";
                }
                else
                {
                  v28 = &byte_10008E2F5;
                }
                v29 = 10;
LABEL_140:
                v83 = v36;
                if ( !(*(_QWORD *)&v45 | v20) )
                {
                  v81 = 0;
                  i = nullptr;
                  v43 = 0;
                  v28 = &byte_10008E2F5;
                  goto LABEL_187;
                }
                if ( v38 < 0x40 )
                  v50 = ~(-1LL << v38);
                else
                  v50 = -1;
                v51 = v50 & *(_QWORD *)&v45;
              }
              v43 = 0;
              if ( v18 == 88 )
                v52 = 7;
              else
                v52 = 39;
              if ( v20 >= 1024 )
                v53 = 1024;
              else
                v53 = v20;
              i = (const char *)v88;
              do
              {
                if ( v51 % v29 <= 9 )
                  v54 = 0;
                else
                  v54 = v52;
                *--i = v51 % v29 + v54 + 48;
                ++v43;
                --v53;
                v55 = v29 > v51;
                v51 /= v29;
              }
              while ( !v55 );
              if ( v20 >= 1024 )
                v56 = 1024;
              else
                v56 = v20;
              if ( v43 >= v56 )
              {
                v81 = 0;
              }
              else
              {
                i = (char *)v88 - v56;
                memset((char *)v88 - v56, 48, v53);
                v81 = 0;
                v43 = v56;
              }
              goto LABEL_187;
            }
          }
          v38 = v81;
          if ( !(_DWORD)v81 )
          {
            v45 = 0;
            goto LABEL_134;
          }
          if ( (_DWORD)v81 != 1531 )
            goto LABEL_255;
LABEL_174:
          v83 = v36 + 4;
          v81 = 1531;
          i = "<obj>";
          v43 = 5;
LABEL_187:
          v59 = strlen(v28);
          if ( (v16 & 0x10) != 0 )
          {
            while ( 1 )
            {
              v65 = *v28;
              if ( !*v28 )
                break;
              a2 = (int *)v84;
              if ( v85 >= 0x401 )
              {
                sub_100000AA0();
                if ( v84 )
                {
                  v85 = 0;
                  qfree(v84);
                  a2 = nullptr;
                  v84 = nullptr;
                  v86 = 0;
                }
                else
                {
                  a2 = nullptr;
                }
              }
              if ( v85 )
                v66 = v85 - 1;
              else
                v66 = 0;
              if ( v86 < v66 + 2 )
              {
                a2 = (int *)qvector_reserve(&v84, a2, v66 + 2, 1u);
                v84 = a2;
              }
              v85 = v66 + 2;
              *((_BYTE *)a2 + v66) = v65;
              ++v28;
              *((_BYTE *)v84 + v66 + 1) = 0;
              ++v11;
            }
          }
          v60 = v21;
          v61 = v59 + v43;
          v62 = v21 - (v59 + v43);
          if ( (v16 & 1) == 0 )
          {
            if ( (v16 & 0x10) != 0 )
              v63 = 48;
            else
              v63 = 32;
            if ( v62 - 1 >= 0 )
            {
              do
              {
                a2 = (int *)v84;
                if ( v85 >= 0x401 )
                {
                  sub_100000AA0();
                  if ( v84 )
                  {
                    v85 = 0;
                    qfree(v84);
                    a2 = nullptr;
                    v84 = nullptr;
                    v86 = 0;
                  }
                  else
                  {
                    a2 = nullptr;
                  }
                }
                if ( v85 )
                  v64 = v85 - 1;
                else
                  v64 = 0;
                if ( v86 < v64 + 2 )
                {
                  a2 = (int *)qvector_reserve(&v84, a2, v64 + 2, 1u);
                  v84 = a2;
                }
                v85 = v64 + 2;
                *((_BYTE *)a2 + v64) = v63;
                *((_BYTE *)v84 + v64 + 1) = 0;
                --v62;
              }
              while ( v62 > 0 );
              v11 += v60 - v61;
              v62 = -1;
            }
            else
            {
              --v62;
            }
          }
          v67 = *v28;
          v9 = v79;
          if ( *v28 )
          {
            v68 = (unsigned __int8 *)(v28 + 1);
            do
            {
              a2 = (int *)v84;
              if ( v85 >= 0x401 )
              {
                sub_100000AA0();
                if ( v84 )
                {
                  v85 = 0;
                  qfree(v84);
                  a2 = nullptr;
                  v84 = nullptr;
                  v86 = 0;
                }
                else
                {
                  a2 = nullptr;
                }
              }
              if ( v85 )
                v70 = v85 - 1;
              else
                v70 = 0;
              if ( v86 < v70 + 2 )
              {
                a2 = (int *)qvector_reserve(&v84, a2, v70 + 2, 1u);
                v84 = a2;
              }
              v85 = v70 + 2;
              *((_BYTE *)a2 + v70) = v67;
              *((_BYTE *)v84 + v70 + 1) = 0;
              ++v11;
              v69 = *v68++;
              v67 = v69;
            }
            while ( v69 );
          }
          if ( v43 - 1 >= 0 )
          {
            v71 = v43;
            do
            {
              v73 = *i++;
              v72 = v73;
              a2 = (int *)v84;
              if ( v85 >= 0x401 )
              {
                sub_100000AA0();
                if ( v84 )
                {
                  v85 = 0;
                  qfree(v84);
                  a2 = nullptr;
                  v84 = nullptr;
                  v86 = 0;
                }
                else
                {
                  a2 = nullptr;
                }
              }
              if ( v85 )
                v74 = v85 - 1;
              else
                v74 = 0;
              if ( v86 < v74 + 2 )
              {
                a2 = (int *)qvector_reserve(&v84, a2, v74 + 2, 1u);
                v84 = a2;
              }
              v85 = v74 + 2;
              *((_BYTE *)a2 + v74) = v72;
              *((_BYTE *)v84 + v74 + 1) = 0;
              --v71;
            }
            while ( v71 > 0 );
            v11 += v43;
          }
          v10 = v80;
          if ( v62 - 1 >= 0 )
          {
            v75 = v62;
            do
            {
              a2 = (int *)v84;
              if ( v85 >= 0x401 )
              {
                sub_100000AA0();
                if ( v84 )
                {
                  v85 = 0;
                  qfree(v84);
                  a2 = nullptr;
                  v84 = nullptr;
                  v86 = 0;
                }
                else
                {
                  a2 = nullptr;
                }
              }
              if ( v85 )
                v76 = v85 - 1;
              else
                v76 = 0;
              if ( v86 < v76 + 2 )
              {
                a2 = (int *)qvector_reserve(&v84, a2, v76 + 2, 1u);
                v84 = a2;
              }
              v85 = v76 + 2;
              *((_BYTE *)a2 + v76) = 32;
              *((_BYTE *)v84 + v76 + 1) = 0;
              --v75;
            }
            while ( v75 > 0 );
            v11 += v62;
          }
          break;
        case 'o':
          if ( (v16 & 8) != 0 )
            v28 = "0";
          else
            v28 = &byte_10008E2F5;
          v29 = 8;
          goto LABEL_114;
        case 's':
          if ( --v82 < 1 )
          {
            v47 = nullptr;
          }
          else
          {
            v46 = idcv_string((unsigned __int8 *)v83, a9, (__int64)a2, a3, a4, a5, a6, a7, a8);
            if ( v46 == 1531 )
            {
              v36 = v83;
              goto LABEL_174;
            }
            if ( v46 )
              goto LABEL_255;
            if ( v83[2] )
              v47 = (char *)v83[1];
            else
              v47 = &byte_100075A30;
            v83 += 4;
          }
          if ( v47 )
            i = v47;
          else
            i = "(null)";
          goto LABEL_181;
        case 'u':
LABEL_114:
          if ( --v82 < 1 )
            goto LABEL_118;
          if ( v83->i8[0] == 2 )
          {
            v45 = v83[1];
            v36 = v83 + 4;
            v38 = 64;
            goto LABEL_140;
          }
          LODWORD(v81) = idcv_int64((unsigned __int8 *)v83, a9, (__int64)a2, a3, a4, a5, a6, a7, a8);
          if ( (_DWORD)v81 )
          {
LABEL_118:
            v38 = v81;
            v36 = v83;
            if ( (_DWORD)v81 == 1531 )
              goto LABEL_174;
            if ( (_DWORD)v81 )
              goto LABEL_255;
            v45 = 0;
          }
          else
          {
            v45 = v83[1];
            v36 = v83 + 4;
            v38 = 64;
          }
          goto LABEL_140;
        default:
          v43 = strlen(i);
          v28 = &byte_10008E2F5;
          v80 = &byte_10008E2F5;
          goto LABEL_187;
      }
      continue;
    }
    break;
  }
  if ( !(unsigned int)idcv_long((unsigned __int8 *)v83, a9, (__int64)a2, a3, a4, a5, a6, a7, a8) )
  {
    v20 = (__int64)v83[1];
    v83 += 4;
    goto LABEL_62;
  }
LABEL_255:
  v77 = v84;
  if ( v85 >= 2 )
  {
    sub_100000AA0();
    v77 = v84;
  }
  if ( v77 )
  {
    v85 = 0;
    qfree(v77);
  }
  return 0;
}
// 10009CA38: invalid function type '?' has been ignored
// 10002A260: variable 'a9' is possibly undefined
// 10002A260: variable 'a2' is possibly undefined
// 10002A260: variable 'a3' is possibly undefined
// 10002A260: variable 'a4' is possibly undefined
// 10002A260: variable 'a5' is possibly undefined
// 10002A260: variable 'a6' is possibly undefined
// 10002A260: variable 'a7' is possibly undefined
// 10002A260: variable 'a8' is possibly undefined
// 10002A4E8: variable 'v31' is possibly undefined
// 10002A4E8: variable 'v32' is possibly undefined
// 10002A4E8: variable 'v89' is possibly undefined
// 10002A4E8: variable 'v33' is possibly undefined
// 10002A4E8: variable 'v34' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
// 10008E2F5: using guessed type char byte_10008E2F5;
// 10009CA38: using guessed type __int64 (__fastcall *off_10009CA38)(_QWORD, _QWORD, _QWORD);
