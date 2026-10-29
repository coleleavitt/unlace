/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002AD70
// Address: 0x000000010002AD70

//----- (000000010002AD70) ----------------------------------------------------
__int64 __fastcall sub_10002AD70(
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
  char *v10; // x24
  int v11; // w21
  char *v12; // x19
  const char *i; // x23
  int v14; // w22
  __int64 v15; // x25
  int v16; // w22
  int v17; // w8
  unsigned __int64 v18; // x27
  int v19; // w8
  __int64 v20; // x26
  int v21; // w28
  int v22; // w8
  int v23; // t1
  const char *v24; // x8
  int v25; // t1
  unsigned int v26; // t1
  unsigned int v27; // t1
  const char *v28; // x24
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
  size_t v59; // x26
  __int64 v60; // x27
  char v61; // w22
  char v62; // w22
  __int64 v63; // x20
  char v64; // w19
  __int64 v65; // x20
  unsigned __int8 *v66; // x19
  int v67; // t1
  __int64 v68; // x20
  __int64 v69; // x19
  char v70; // w22
  char v71; // t1
  __int64 v72; // x20
  __int64 v73; // x19
  __int64 v74; // x20
  int *v76; // [xsp+10h] [xbp-4A0h]
  char *v77; // [xsp+18h] [xbp-498h]
  __int64 v78; // [xsp+20h] [xbp-490h]
  int v79; // [xsp+2Ch] [xbp-484h]
  int16x4_t *v80; // [xsp+30h] [xbp-480h]
  int *v81; // [xsp+38h] [xbp-478h] BYREF
  __int128 v82; // [xsp+40h] [xbp-470h]
  char __b[1024]; // [xsp+50h] [xbp-460h] BYREF
  _QWORD v84[2]; // [xsp+450h] [xbp-60h] BYREF
  int8x16x2_t v85; // 0:q0.32

  v9 = a2;
  v81 = nullptr;
  v82 = 0u;
  if ( a2[2] <= 0 )
  {
    *((_QWORD *)a2 + 1) = 0;
    goto LABEL_233;
  }
  v79 = a2[2];
  if ( a1[2] )
    v10 = (char *)a1[1];
  else
    v10 = &byte_100075A30;
  v80 = a1 + 4;
  v78 = 0;
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
        goto LABEL_233;
      }
      if ( v14 == 37 )
        break;
      a2 = v81;
      if ( (_QWORD)v82 )
        v15 = v82 - 1;
      else
        v15 = 0;
      if ( *((_QWORD *)&v82 + 1) < (unsigned __int64)(v15 + 2) )
      {
        a2 = (int *)qvector_reserve(&v81, v81, v15 + 2, 1u);
        v81 = a2;
      }
      *(_QWORD *)&v82 = v15 + 2;
      *((_BYTE *)a2 + v15) = v14;
      ++v12;
      *((_BYTE *)v81 + v15 + 1) = 0;
      ++v11;
    }
    v16 = 0;
    while ( 1 )
    {
      v18 = *((unsigned __int8 *)i - 1);
      if ( v18 > 0x2A )
        break;
      if ( v18 == 32 )
      {
        v17 = 4;
        goto LABEL_18;
      }
      if ( v18 != 35 )
      {
        if ( v18 == 42 )
        {
          if ( --v79 < 1 )
          {
            v19 = v78;
            if ( (_DWORD)v78 )
              goto LABEL_233;
          }
          else
          {
            if ( (unsigned int)idcv_long((unsigned __int8 *)v80, a9, (__int64)a2, a3, a4, a5, a6, a7, a8) )
              goto LABEL_233;
            v19 = v80[1].i32[0];
            v80 += 4;
          }
          v78 = 0;
          if ( v19 >= 0 )
            v21 = v19;
          else
            v21 = -v19;
          v16 |= (unsigned int)v19 >> 31;
          v18 = *(unsigned __int8 *)i;
          goto LABEL_46;
        }
LABEL_34:
        --i;
        if ( (v18 & 0x80) == 0 )
          goto LABEL_35;
LABEL_33:
        v20 = -1;
        v21 = -1;
        goto LABEL_59;
      }
      v17 = 8;
LABEL_18:
      v16 |= v17;
      ++i;
    }
    if ( v18 == 43 )
    {
      v17 = 2;
      goto LABEL_18;
    }
    if ( v18 == 45 )
    {
      v17 = 1;
      goto LABEL_18;
    }
    if ( v18 != 48 )
      goto LABEL_34;
    LOBYTE(v16) = ~(16 * v16) & 0x10 | v16;
    v18 = *(unsigned __int8 *)i;
    if ( (v18 & 0x80) != 0 )
      goto LABEL_33;
LABEL_35:
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
        goto LABEL_51;
    }
LABEL_46:
    if ( v18 != 46 )
    {
LABEL_51:
      v20 = -1;
      goto LABEL_59;
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
      goto LABEL_59;
    }
    if ( --v79 < 1 )
    {
      if ( (_DWORD)v78 )
        goto LABEL_233;
      v20 = 0;
LABEL_58:
      v78 = 0;
      v26 = *((unsigned __int8 *)i + 2);
      i += 2;
      v18 = v26;
LABEL_59:
      if ( v18 - 70 <= 0x26 && ((1LL << ((unsigned __int8)v18 - 70)) & 0x4400000141LL) != 0 )
      {
        v27 = *(unsigned __int8 *)++i;
        v18 = v27;
      }
      v28 = &byte_10008E2F5;
      v29 = 10;
      v77 = (char *)(i + 1);
      switch ( v18 )
      {
        case '%':
          __b[0] = 37;
          goto LABEL_161;
        case 'E':
        case 'G':
        case 'e':
        case 'f':
        case 'g':
          --v79;
          v30 = v78;
          if ( v79 >= 1 )
          {
            v30 = idcv_float(v80, a9);
            if ( !v30 )
            {
              if ( v21 == -1 )
                v21 = 0;
              v39 = ((unsigned int)v20 & ~(unsigned int)(v20 >> 63)) << 16;
              if ( !v21 )
                v39 = 0;
              realtoasc(__b, 0x400u, (unsigned __int16 *)&v80[1], v39 | (v21 << 8) | 0xF, v31, v32, v85, v33, v34);
              for ( j = __b; ; ++j )
              {
                v41 = (unsigned __int8)*j;
                if ( v41 != 32 )
                  break;
              }
              v80 += 4;
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
              v78 = 0;
              goto LABEL_183;
            }
          }
          v35 = v30 == 1531;
          v36 = v80;
          if ( !v35 )
            goto LABEL_233;
          goto LABEL_170;
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
          goto LABEL_110;
        case 'a':
          if ( --v79 < 1 )
          {
            v49 = v80;
            if ( (_DWORD)v78 )
              goto LABEL_233;
            v48 = 0;
          }
          else
          {
            if ( (unsigned int)idcv_long((unsigned __int8 *)v80, a9, (__int64)a2, a3, a4, a5, a6, a7, a8) )
              goto LABEL_233;
            v48 = v80[1];
            v49 = v80 + 4;
          }
          v80 = v49;
          i = __b;
          if ( off_10009CA38 )
            off_10009CA38(__b, 1024, *(_QWORD *)&v48);
          else
            qsnprintf(__b, 0x400u, "%a", a4, a5, a6, a7, a8, v48.i8[0]);
          goto LABEL_177;
        case 'b':
          if ( (v16 & 8) != 0 )
            v28 = "0b";
          else
            v28 = &byte_10008E2F5;
          v29 = 2;
          goto LABEL_110;
        case 'c':
          --v79;
          v44 = v78;
          if ( v79 >= 1 )
          {
            v44 = idcv_long((unsigned __int8 *)v80, a9, (__int64)a2, a3, a4, a5, a6, a7, a8);
            if ( !(_DWORD)v44 )
            {
              v78 = 0;
              __b[0] = (char)v80[1];
              i = __b;
              v80 += 4;
              v43 = 1;
              goto LABEL_183;
            }
          }
          __b[0] = 0;
          v36 = v80;
          if ( !(_DWORD)v44 )
          {
            v78 = v44;
LABEL_161:
            i = __b;
            v43 = 1;
            goto LABEL_183;
          }
          if ( (_DWORD)v44 != 1531 )
            goto LABEL_233;
          goto LABEL_170;
        case 'd':
        case 'i':
          --v79;
          v36 = v80;
          if ( v79 >= 1 )
          {
            if ( v80->i8[0] == 2
              || (v37 = idcv_int64((unsigned __int8 *)v80, a9, (__int64)a2, a3, a4, a5, a6, a7, a8),
                  v36 = v80,
                  (LODWORD(v78) = v37) == 0) )
            {
              v45 = v36[1];
              v36 += 4;
              if ( (*(_QWORD *)&v45 & 0x8000000000000000LL) != 0 )
              {
                v80 = v36;
                v51 = -*(_QWORD *)&v45;
                v28 = "-";
                v29 = 10;
                goto LABEL_142;
              }
              v38 = 64;
              goto LABEL_130;
            }
          }
          v38 = v78;
          if ( !(_DWORD)v78 )
          {
            v45 = 0;
LABEL_130:
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
            goto LABEL_136;
          }
          if ( (_DWORD)v78 != 1531 )
            goto LABEL_233;
LABEL_170:
          v80 = v36 + 4;
          v78 = 1531;
          i = "<obj>";
          v43 = 5;
LABEL_183:
          v59 = strlen(v28);
          v76 = v9;
          if ( (v16 & 0x10) != 0 )
          {
            while ( 1 )
            {
              v64 = *v28;
              if ( !*v28 )
                break;
              a2 = v81;
              if ( (_QWORD)v82 )
                v65 = v82 - 1;
              else
                v65 = 0;
              if ( *((_QWORD *)&v82 + 1) < (unsigned __int64)(v65 + 2) )
              {
                a2 = (int *)qvector_reserve(&v81, v81, v65 + 2, 1u);
                v81 = a2;
              }
              *(_QWORD *)&v82 = v65 + 2;
              *((_BYTE *)a2 + v65) = v64;
              ++v28;
              *((_BYTE *)v81 + v65 + 1) = 0;
              ++v11;
            }
          }
          v60 = v21 - (v59 + v43);
          if ( (v16 & 1) != 0 )
            goto LABEL_190;
          if ( (v16 & 0x10) != 0 )
            v61 = 48;
          else
            v61 = 32;
          if ( v60 - 1 >= 0 )
          {
            do
            {
              a2 = v81;
              if ( (_QWORD)v82 )
                v63 = v82 - 1;
              else
                v63 = 0;
              if ( *((_QWORD *)&v82 + 1) < (unsigned __int64)(v63 + 2) )
              {
                a2 = (int *)qvector_reserve(&v81, v81, v63 + 2, 1u);
                v81 = a2;
              }
              *(_QWORD *)&v82 = v63 + 2;
              *((_BYTE *)a2 + v63) = v61;
              *((_BYTE *)v81 + v63 + 1) = 0;
              --v60;
            }
            while ( v60 > 0 );
            v11 += v21 - (v59 + v43);
            v60 = -1;
            v62 = *v28;
            if ( *v28 )
              goto LABEL_206;
          }
          else
          {
            --v60;
LABEL_190:
            v62 = *v28;
            if ( *v28 )
            {
LABEL_206:
              v66 = (unsigned __int8 *)(v28 + 1);
              do
              {
                a2 = v81;
                if ( (_QWORD)v82 )
                  v68 = v82 - 1;
                else
                  v68 = 0;
                if ( *((_QWORD *)&v82 + 1) < (unsigned __int64)(v68 + 2) )
                {
                  a2 = (int *)qvector_reserve(&v81, v81, v68 + 2, 1u);
                  v81 = a2;
                }
                *(_QWORD *)&v82 = v68 + 2;
                *((_BYTE *)a2 + v68) = v62;
                *((_BYTE *)v81 + v68 + 1) = 0;
                ++v11;
                v67 = *v66++;
                v62 = v67;
              }
              while ( v67 );
            }
          }
          if ( v43 - 1 >= 0 )
          {
            v69 = v43;
            do
            {
              v71 = *i++;
              v70 = v71;
              a2 = v81;
              if ( (_QWORD)v82 )
                v72 = v82 - 1;
              else
                v72 = 0;
              if ( *((_QWORD *)&v82 + 1) < (unsigned __int64)(v72 + 2) )
              {
                a2 = (int *)qvector_reserve(&v81, v81, v72 + 2, 1u);
                v81 = a2;
              }
              *(_QWORD *)&v82 = v72 + 2;
              *((_BYTE *)a2 + v72) = v70;
              *((_BYTE *)v81 + v72 + 1) = 0;
              --v69;
            }
            while ( v69 > 0 );
            v11 += v43;
          }
          v10 = v77;
          if ( v60 - 1 >= 0 )
          {
            v73 = v60;
            do
            {
              a2 = v81;
              if ( (_QWORD)v82 )
                v74 = v82 - 1;
              else
                v74 = 0;
              if ( *((_QWORD *)&v82 + 1) < (unsigned __int64)(v74 + 2) )
              {
                a2 = (int *)qvector_reserve(&v81, v81, v74 + 2, 1u);
                v81 = a2;
              }
              *(_QWORD *)&v82 = v74 + 2;
              *((_BYTE *)a2 + v74) = 32;
              *((_BYTE *)v81 + v74 + 1) = 0;
              --v73;
            }
            while ( v73 > 0 );
            v11 += v60;
          }
          v9 = v76;
          break;
        case 'o':
          if ( (v16 & 8) != 0 )
            v28 = "0";
          else
            v28 = &byte_10008E2F5;
          v29 = 8;
          goto LABEL_110;
        case 's':
          if ( --v79 < 1 )
          {
            v47 = nullptr;
          }
          else
          {
            v46 = idcv_string((unsigned __int8 *)v80, a9, (__int64)a2, a3, a4, a5, a6, a7, a8);
            if ( v46 == 1531 )
            {
              v36 = v80;
              goto LABEL_170;
            }
            if ( v46 )
              goto LABEL_233;
            if ( v80[2] )
              v47 = (char *)v80[1];
            else
              v47 = &byte_100075A30;
            v80 += 4;
          }
          if ( v47 )
            i = v47;
          else
            i = "(null)";
LABEL_177:
          v57 = strlen(i);
          v78 = 0;
          if ( v57 >= v20 )
            v58 = v20;
          else
            v58 = v57;
          if ( v20 >= 0 )
            v43 = v58;
          else
            v43 = v57;
          goto LABEL_183;
        case 'u':
LABEL_110:
          if ( --v79 < 1 )
            goto LABEL_114;
          if ( v80->i8[0] == 2 )
          {
            v45 = v80[1];
            v36 = v80 + 4;
            v38 = 64;
          }
          else
          {
            LODWORD(v78) = idcv_int64((unsigned __int8 *)v80, a9, (__int64)a2, a3, a4, a5, a6, a7, a8);
            if ( (_DWORD)v78 )
            {
LABEL_114:
              v38 = v78;
              v36 = v80;
              if ( (_DWORD)v78 == 1531 )
                goto LABEL_170;
              if ( (_DWORD)v78 )
                goto LABEL_233;
              v45 = 0;
            }
            else
            {
              v45 = v80[1];
              v36 = v80 + 4;
              v38 = 64;
            }
          }
LABEL_136:
          v80 = v36;
          if ( *(_QWORD *)&v45 | v20 )
          {
            if ( v38 < 0x40 )
              v50 = ~(-1LL << v38);
            else
              v50 = -1;
            v51 = v50 & *(_QWORD *)&v45;
LABEL_142:
            v43 = 0;
            if ( v18 == 88 )
              v52 = 7;
            else
              v52 = 39;
            if ( v20 >= 1024 )
              v53 = 1024;
            else
              v53 = v20;
            i = (const char *)v84;
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
              v78 = 0;
            }
            else
            {
              i = (char *)v84 - v56;
              memset((char *)v84 - v56, 48, v53);
              v78 = 0;
              v43 = v56;
            }
          }
          else
          {
            v78 = 0;
            i = nullptr;
            v43 = 0;
            v28 = &byte_10008E2F5;
          }
          goto LABEL_183;
        default:
          v43 = strlen(i);
          v28 = &byte_10008E2F5;
          v77 = &byte_10008E2F5;
          goto LABEL_183;
      }
      continue;
    }
    break;
  }
  if ( !(unsigned int)idcv_long((unsigned __int8 *)v80, a9, (__int64)a2, a3, a4, a5, a6, a7, a8) )
  {
    v20 = (__int64)v80[1];
    v80 += 4;
    goto LABEL_58;
  }
LABEL_233:
  *(_BYTE *)v9 = 7;
  *((_QWORD *)v9 + 1) = v81;
  *((_OWORD *)v9 + 1) = v82;
  return 0;
}
// 10002AEE4: variable 'a9' is possibly undefined
// 10002AEE4: variable 'a2' is possibly undefined
// 10002AEE4: variable 'a3' is possibly undefined
// 10002AEE4: variable 'a4' is possibly undefined
// 10002AEE4: variable 'a5' is possibly undefined
// 10002AEE4: variable 'a6' is possibly undefined
// 10002AEE4: variable 'a7' is possibly undefined
// 10002AEE4: variable 'a8' is possibly undefined
// 10002B16C: variable 'v31' is possibly undefined
// 10002B16C: variable 'v32' is possibly undefined
// 10002B16C: variable 'v85' is possibly undefined
// 10002B16C: variable 'v33' is possibly undefined
// 10002B16C: variable 'v34' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
// 10008E2F5: using guessed type char byte_10008E2F5;
// 10009CA38: using guessed type __int64 (__fastcall *off_10009CA38)(_QWORD, _QWORD, _QWORD);
