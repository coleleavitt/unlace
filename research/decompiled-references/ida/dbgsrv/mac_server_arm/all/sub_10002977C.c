/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10002977C
// Address: 0x000000010002977C

//----- (000000010002977C) ----------------------------------------------------
__int64 __fastcall sub_10002977C(
        __int64 (__fastcall *a1)(_QWORD),
        __int64 a2,
        int16x4_t *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int8x16x2_t a9)
{
  __int64 v9; // x22
  int v10; // w27
  __int64 v11; // x20
  int16x4_t *v13; // x28
  char *v14; // x9
  __int64 result; // x0
  __int64 v16; // x24
  int v17; // w23
  char *v18; // x19
  const char *i; // x25
  int v20; // w8
  int v21; // w19
  int v22; // w8
  unsigned __int64 v23; // x28
  int v24; // w8
  __int64 v25; // x11
  int v26; // w22
  int v27; // w8
  int v28; // t1
  const char *v29; // x8
  int v30; // t1
  unsigned int v31; // t1
  unsigned int v32; // t1
  const char *v33; // x26
  unsigned __int64 v34; // x24
  int v35; // w27
  int16x4_t *v36; // x28
  __int64 v37; // x4
  __int64 v38; // x5
  __int64 v39; // x6
  __int64 v40; // x7
  const char *v41; // x8
  unsigned int v42; // w8
  int v43; // w8
  char *v44; // x9
  signed __int64 v45; // x27
  int16x4_t v46; // x8
  int16x4_t *v47; // x9
  __int64 v48; // x14
  char *v49; // x8
  int v50; // w27
  int16x4_t v51; // x2
  int16x4_t *v52; // x26
  __int64 v53; // x9
  unsigned __int64 v54; // x8
  char v55; // w9
  size_t v56; // x2
  char v57; // w12
  bool v58; // cc
  __int64 v59; // x28
  signed __int64 v60; // x0
  signed __int64 v61; // x8
  size_t v62; // x28
  size_t v63; // x9
  __int64 v64; // x28
  size_t j; // x19
  signed __int64 v66; // x22
  unsigned int v67; // t1
  char *v68; // [xsp+10h] [xbp-490h]
  __int64 v69; // [xsp+18h] [xbp-488h]
  int v70; // [xsp+24h] [xbp-47Ch]
  __int64 v71; // [xsp+28h] [xbp-478h]
  int16x4_t *v72; // [xsp+38h] [xbp-468h]
  char __b[1024]; // [xsp+40h] [xbp-460h] BYREF
  _QWORD v74[2]; // [xsp+440h] [xbp-60h] BYREF
  int8x16x2_t v75; // 0:q0.32

  v9 = a4;
  v10 = *(_DWORD *)(a4 + 8);
  if ( v10 <= 0 )
  {
    *(_QWORD *)(a4 + 8) = 0;
    return 0;
  }
  v11 = a2;
  v13 = a3 + 4;
  if ( a3[2] )
    v14 = (char *)a3[1];
  else
    v14 = &byte_100075A30;
  v16 = 0;
  v17 = 0;
  while ( 2 )
  {
    v18 = v14 + 1;
    for ( i = v14 + 2; ; ++i )
    {
      v20 = (unsigned __int8)*(v18 - 1);
      if ( !*(v18 - 1) )
      {
        *(_QWORD *)(v9 + 8) = v17;
        return 0;
      }
      if ( v20 == 37 )
        break;
      ++v18;
      result = ((__int64 (__fastcall *)(__int64, _QWORD, __n128, __n128))a1)(
                 v11,
                 (unsigned int)(char)v20,
                 (__n128)a9.val[0],
                 (__n128)a9.val[1]);
      ++v17;
      if ( (_DWORD)result )
        return result;
    }
    v72 = v13;
    v21 = 0;
    result = v16;
    v69 = v9;
    while ( 1 )
    {
      v23 = *((unsigned __int8 *)i - 1);
      if ( v23 > 0x2A )
        break;
      if ( v23 == 32 )
      {
        v22 = 4;
        goto LABEL_14;
      }
      if ( v23 != 35 )
      {
        if ( v23 == 42 )
        {
          if ( --v10 < 1 )
          {
            if ( (_DWORD)v16 )
              return result;
            v24 = 0;
          }
          else
          {
            result = idcv_long((unsigned __int8 *)v72, a9, a2, (__int64)a3, a4, a5, a6, a7, a8);
            if ( (_DWORD)result )
              return result;
            v24 = v72[1].i32[0];
            v72 += 4;
          }
          result = 0;
          if ( v24 >= 0 )
            v26 = v24;
          else
            v26 = -v24;
          v21 |= (unsigned int)v24 >> 31;
          v23 = *(unsigned __int8 *)i;
          goto LABEL_43;
        }
LABEL_30:
        --i;
        if ( (v23 & 0x80) == 0 )
          goto LABEL_31;
LABEL_29:
        v25 = -1;
        v26 = -1;
        goto LABEL_56;
      }
      v22 = 8;
LABEL_14:
      v21 |= v22;
      ++i;
    }
    if ( v23 == 43 )
    {
      v22 = 2;
      goto LABEL_14;
    }
    if ( v23 == 45 )
    {
      v22 = 1;
      goto LABEL_14;
    }
    if ( v23 != 48 )
      goto LABEL_30;
    LOBYTE(v21) = ~(16 * v21) & 0x10 | v21;
    v23 = *(unsigned __int8 *)i;
    if ( (v23 & 0x80) != 0 )
      goto LABEL_29;
LABEL_31:
    v26 = -1;
    while ( (_DefaultRuneLocale.__runetype[v23] & 0x400) != 0 )
    {
      v27 = 10 * v26 - 48;
      if ( v26 == -1 )
        v27 = -48;
      v26 = v27 + (unsigned __int8)v23;
      v28 = *++i;
      v23 = (unsigned __int8)v28;
      if ( v28 < 0 )
        goto LABEL_48;
    }
LABEL_43:
    if ( v23 != 46 )
    {
LABEL_48:
      v25 = -1;
      goto LABEL_56;
    }
    v29 = i + 1;
    v23 = *((unsigned __int8 *)i + 1);
    if ( (_DWORD)v23 != 42 )
    {
      v25 = 0;
      if ( (v23 & 0x80) == 0 )
      {
        do
        {
          if ( (_DefaultRuneLocale.__runetype[v23] & 0x400) == 0 )
            break;
          v25 = v23 + 10 * v25 - 48;
          v30 = *++v29;
          v23 = (unsigned __int8)v30;
        }
        while ( (v30 & 0x80000000) == 0 );
      }
      i = v29;
      goto LABEL_56;
    }
    if ( --v10 < 1 )
    {
      if ( (_DWORD)result )
        return result;
      v25 = 0;
LABEL_55:
      result = 0;
      v31 = *((unsigned __int8 *)i + 2);
      i += 2;
      v23 = v31;
LABEL_56:
      v71 = v25;
      if ( v23 - 70 <= 0x26 && ((1LL << ((unsigned __int8)v23 - 70)) & 0x4400000141LL) != 0 )
      {
        v32 = *(unsigned __int8 *)++i;
        v23 = v32;
      }
      v68 = (char *)(i + 1);
      v33 = &byte_10008E2F5;
      v34 = 10;
      switch ( v23 )
      {
        case '%':
          v16 = result;
          v70 = v10;
          __b[0] = 37;
          goto LABEL_102;
        case 'E':
        case 'G':
        case 'e':
        case 'f':
        case 'g':
          v35 = v10 - 1;
          i = "<obj>";
          v36 = v72;
          if ( v35 < 1 )
            goto LABEL_62;
          result = idcv_float(v72, a9);
          if ( (_DWORD)result )
            goto LABEL_62;
          if ( v26 == -1 )
            v26 = 0;
          v42 = ((unsigned int)v71 & ~(unsigned int)(v71 >> 63)) << 16;
          if ( !v26 )
            v42 = 0;
          i = __b;
          realtoasc(__b, 0x400u, (unsigned __int16 *)&v72[1], v42 | (v26 << 8) | 0xF, v37, v38, v75, v39, v40);
          while ( 1 )
          {
            v43 = *(unsigned __int8 *)i;
            if ( v43 != 32 )
              break;
            ++i;
          }
          v70 = v35;
          v44 = &byte_10008E2F5;
          if ( (v21 & 4) != 0 )
            v44 = " ";
          if ( (v21 & 2) != 0 )
            v44 = "+";
          if ( v43 == 45 )
            v33 = "-";
          else
            v33 = v44;
          if ( v43 == 45 )
            ++i;
          v45 = strlen(i);
          v16 = 0;
          v72 += 4;
          goto LABEL_180;
        case 'X':
        case 'x':
          v41 = "0X";
          if ( v23 == 120 )
            v41 = "0x";
          if ( (v21 & 8) != 0 )
            v33 = v41;
          else
            v33 = &byte_10008E2F5;
          v34 = 16;
          goto LABEL_107;
        case 'a':
          v50 = v10 - 1;
          if ( v50 < 1 )
          {
            v52 = v72;
            if ( (_DWORD)result )
              return result;
            v51 = 0;
          }
          else
          {
            result = idcv_long((unsigned __int8 *)v72, a9, a2, (__int64)a3, a4, a5, a6, a7, a8);
            if ( (_DWORD)result )
              return result;
            v51 = v72[1];
            v52 = v72 + 4;
          }
          v70 = v50;
          i = __b;
          if ( off_10009CA38 )
            off_10009CA38(__b, 1024, *(_QWORD *)&v51);
          else
            qsnprintf(__b, 0x400u, "%a", a4, a5, a6, a7, a8, v51.i8[0]);
LABEL_173:
          v72 = v52;
          v60 = strlen(i);
          v16 = 0;
          if ( v60 >= v71 )
            v61 = v71;
          else
            v61 = v60;
          if ( v71 >= 0 )
            v45 = v61;
          else
            v45 = v60;
          goto LABEL_179;
        case 'b':
          if ( (v21 & 8) != 0 )
            v33 = "0b";
          else
            v33 = &byte_10008E2F5;
          v34 = 2;
          goto LABEL_107;
        case 'c':
          v35 = v10 - 1;
          i = "<obj>";
          v36 = v72;
          if ( v35 >= 1 )
          {
            result = idcv_long((unsigned __int8 *)v72, a9, a2, (__int64)a3, a4, a5, a6, a7, a8);
            if ( !(_DWORD)result )
            {
              v70 = v35;
              v16 = 0;
              __b[0] = (char)v72[1];
              i = __b;
              v72 += 4;
              v45 = 1;
              goto LABEL_180;
            }
          }
          __b[0] = 0;
          if ( !(_DWORD)result )
          {
            v16 = result;
            v70 = v35;
LABEL_102:
            i = __b;
            v45 = 1;
            goto LABEL_180;
          }
LABEL_62:
          if ( (_DWORD)result != 1531 )
            return result;
          goto LABEL_115;
        case 'd':
        case 'i':
          v35 = v10 - 1;
          if ( v35 >= 1 )
          {
            if ( v72->i8[0] == 2
              || (result = idcv_int64((unsigned __int8 *)v72, a9, a2, (__int64)a3, a4, a5, a6, a7, a8), !(_DWORD)result) )
            {
              v46 = v72[1];
              v72 += 4;
              v48 = v71;
              if ( (*(_QWORD *)&v46 & 0x8000000000000000LL) != 0 )
              {
                v70 = v35;
                v54 = -*(_QWORD *)&v46;
                v33 = "-";
                v34 = 10;
                goto LABEL_142;
              }
              LODWORD(result) = 64;
              goto LABEL_130;
            }
          }
          if ( !(_DWORD)result )
          {
            v46 = 0;
            v48 = v71;
LABEL_130:
            if ( (v21 & 2) != 0 )
            {
              v33 = "+";
            }
            else if ( (v21 & 4) != 0 )
            {
              v33 = " ";
            }
            else
            {
              v33 = &byte_10008E2F5;
            }
            v34 = 10;
            goto LABEL_136;
          }
          i = "<obj>";
          v36 = v72;
          if ( (_DWORD)result != 1531 )
            return result;
LABEL_115:
          v70 = v35;
          v72 = v36 + 4;
          v16 = 1531;
          v45 = 5;
LABEL_180:
          v62 = strlen(v33);
          if ( (v21 & 0x10) != 0 )
          {
            while ( *v33 )
            {
              ++v33;
              result = a1(v11);
              ++v17;
              if ( (_DWORD)result )
                return result;
            }
          }
          v63 = v45 + v62;
          if ( (v21 & 1) != 0 )
          {
            j = v26 - v63;
          }
          else
          {
            if ( (v21 & 0x10) != 0 )
              v64 = 48;
            else
              v64 = 32;
            for ( j = ~v63 + v26; (j & 0x8000000000000000LL) == 0; --j )
            {
              result = ((__int64 (__fastcall *)(__int64, __int64))a1)(v11, v64);
              ++v17;
              if ( (_DWORD)result )
                return result;
            }
          }
          v13 = v72;
          while ( 1 )
          {
            a2 = (unsigned int)*v33;
            if ( !*v33 )
              break;
            ++v33;
            result = a1(v11);
            ++v17;
            if ( (_DWORD)result )
              return result;
          }
          v66 = v45 - 1;
          v10 = v70;
          while ( (v66 & 0x8000000000000000LL) == 0 )
          {
            v67 = *i++;
            result = ((__int64 (__fastcall *)(__int64, _QWORD))a1)(v11, v67);
            ++v17;
            --v66;
            if ( (_DWORD)result )
              return result;
          }
          v9 = v69;
          while ( (--j & 0x8000000000000000LL) == 0LL )
          {
            ++v17;
            result = ((__int64 (__fastcall *)(__int64, __int64))a1)(v11, 32);
            if ( (_DWORD)result )
              return result;
          }
          v14 = v68;
          break;
        case 'o':
          if ( (v21 & 8) != 0 )
            v33 = "0";
          else
            v33 = &byte_10008E2F5;
          v34 = 8;
          goto LABEL_107;
        case 's':
          v35 = v10 - 1;
          if ( v35 < 1 )
          {
            v70 = v35;
            v49 = nullptr;
            v52 = v72;
          }
          else
          {
            v36 = v72;
            result = idcv_string((unsigned __int8 *)v72, a9, a2, (__int64)a3, a4, a5, a6, a7, a8);
            i = "<obj>";
            if ( (_DWORD)result == 1531 )
              goto LABEL_115;
            if ( (_DWORD)result )
              return result;
            v70 = v35;
            if ( v72[2] )
              v49 = (char *)v72[1];
            else
              v49 = &byte_100075A30;
            v52 = v72 + 4;
          }
          if ( v49 )
            i = v49;
          else
            i = "(null)";
          goto LABEL_173;
        case 'u':
LABEL_107:
          v35 = v10 - 1;
          if ( v35 < 1 )
            goto LABEL_111;
          if ( v72->i8[0] == 2 )
          {
            v46 = v72[1];
            v47 = v72 + 4;
LABEL_128:
            LODWORD(result) = 64;
            v72 = v47;
            v48 = v71;
            goto LABEL_136;
          }
          result = idcv_int64((unsigned __int8 *)v72, a9, a2, (__int64)a3, a4, a5, a6, a7, a8);
          if ( !(_DWORD)result )
          {
            v46 = v72[1];
            v47 = v72 + 4;
            goto LABEL_128;
          }
LABEL_111:
          v48 = v71;
          if ( (_DWORD)result == 1531 )
          {
            i = "<obj>";
            v36 = v72;
            goto LABEL_115;
          }
          if ( (_DWORD)result )
            return result;
          v46 = 0;
LABEL_136:
          v70 = v35;
          if ( *(_QWORD *)&v46 | v48 )
          {
            if ( (unsigned int)result < 0x40 )
              v53 = ~(-1LL << result);
            else
              v53 = -1;
            v54 = v53 & *(_QWORD *)&v46;
LABEL_142:
            v45 = 0;
            if ( v23 == 88 )
              v55 = 7;
            else
              v55 = 39;
            if ( v48 >= 1024 )
              v56 = 1024;
            else
              v56 = v48;
            i = (const char *)v74;
            do
            {
              if ( v54 % v34 <= 9 )
                v57 = 0;
              else
                v57 = v55;
              *--i = v54 % v34 + v57 + 48;
              ++v45;
              --v56;
              v58 = v34 > v54;
              v54 /= v34;
            }
            while ( !v58 );
            if ( v48 >= 1024 )
              v59 = 1024;
            else
              v59 = v48;
            if ( v45 >= v59 )
            {
              v16 = 0;
            }
            else
            {
              i = (char *)v74 - v59;
              memset((char *)v74 - v59, 48, v56);
              v16 = 0;
              v45 = v59;
            }
          }
          else
          {
            v16 = 0;
            i = nullptr;
            v45 = 0;
LABEL_179:
            v33 = &byte_10008E2F5;
          }
          goto LABEL_180;
        default:
          v16 = result;
          v70 = v10;
          v45 = strlen(i);
          v33 = &byte_10008E2F5;
          v68 = &byte_10008E2F5;
          goto LABEL_180;
      }
      continue;
    }
    break;
  }
  result = idcv_long((unsigned __int8 *)v72, a9, a2, (__int64)a3, a4, a5, a6, a7, a8);
  if ( !(_DWORD)result )
  {
    v25 = (__int64)v72[1];
    v72 += 4;
    goto LABEL_55;
  }
  return result;
}
// 10002982C: variable 'a9' is possibly undefined
// 1000298C8: variable 'a2' is possibly undefined
// 1000298C8: variable 'a3' is possibly undefined
// 1000298C8: variable 'a4' is possibly undefined
// 1000298C8: variable 'a5' is possibly undefined
// 1000298C8: variable 'a6' is possibly undefined
// 1000298C8: variable 'a7' is possibly undefined
// 1000298C8: variable 'a8' is possibly undefined
// 100029B3C: variable 'v37' is possibly undefined
// 100029B3C: variable 'v38' is possibly undefined
// 100029B3C: variable 'v75' is possibly undefined
// 100029B3C: variable 'v39' is possibly undefined
// 100029B3C: variable 'v40' is possibly undefined
// 100075A30: using guessed type char byte_100075A30;
// 10008E2F5: using guessed type char byte_10008E2F5;
// 10009CA38: using guessed type __int64 (__fastcall *off_10009CA38)(_QWORD, _QWORD, _QWORD);
