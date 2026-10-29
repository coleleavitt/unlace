/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43AAE8
// Address: 0x000000000043AAE8

//----- (000000000043AAE8) ----------------------------------------------------
__int64 __fastcall sub_43AAE8(__int64 (__fastcall *a1)(__int64), __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v4; // x25
  __int64 v5; // x26
  __int64 v6; // x28
  __int64 v10; // x0
  unsigned int v11; // w1
  __int64 *v12; // x23
  int v13; // w22
  int v14; // w1
  int v16; // w9
  unsigned int v17; // w6
  const char *v18; // x25
  unsigned int v19; // w0
  signed int v20; // w28
  unsigned int v21; // w28
  unsigned int v22; // t1
  __int64 v23; // x0
  double v24; // d0
  size_t v25; // x0
  __int64 v26; // x1
  bool v27; // cc
  __int64 v28; // x2
  size_t v29; // x0
  size_t v30; // x1
  const char *v31; // x26
  size_t v32; // x28
  __int64 *v33; // x0
  __int64 *v34; // x2
  signed int v35; // w0
  __int64 *v36; // x1
  const char *v37; // x23
  signed int v38; // w0
  const char *v39; // x26
  unsigned int v40; // t1
  size_t v41; // x25
  unsigned __int64 v42; // x0
  unsigned int v43; // w6
  unsigned int v44; // w25
  unsigned __int64 v45; // x4
  char v46; // w6
  char v47; // w1
  int v48; // w1
  char *v49; // x1
  __int64 v50; // x3
  size_t v51; // x0
  __int64 v52; // x1
  __int64 *v53; // x2
  int v54; // w0
  int v55; // w1
  const char *v56; // x0
  int v57; // t1
  __int64 v58; // [xsp+30h] [xbp-480h]
  __int64 v59; // [xsp+38h] [xbp-478h]
  __int64 v60; // [xsp+48h] [xbp-468h]
  __int64 v61; // [xsp+70h] [xbp-440h]
  __int64 v62; // [xsp+70h] [xbp-440h]
  int v63; // [xsp+70h] [xbp-440h]
  int v64; // [xsp+70h] [xbp-440h]
  int v65; // [xsp+70h] [xbp-440h]
  char v66; // [xsp+78h] [xbp-438h]
  char v67; // [xsp+78h] [xbp-438h]
  unsigned __int8 v68; // [xsp+78h] [xbp-438h]
  int v69; // [xsp+78h] [xbp-438h]
  int v70; // [xsp+78h] [xbp-438h]
  int v71; // [xsp+78h] [xbp-438h]
  __int64 v72; // [xsp+78h] [xbp-438h]
  int v73; // [xsp+78h] [xbp-438h]
  char v74; // [xsp+78h] [xbp-438h]
  char *v75; // [xsp+78h] [xbp-438h]
  int v76; // [xsp+78h] [xbp-438h]
  int v77; // [xsp+78h] [xbp-438h]
  unsigned int v78; // [xsp+84h] [xbp-42Ch]
  int v79; // [xsp+84h] [xbp-42Ch]
  int v80; // [xsp+84h] [xbp-42Ch]
  int v81; // [xsp+84h] [xbp-42Ch]
  unsigned int v82; // [xsp+84h] [xbp-42Ch]
  __int64 *v83[2]; // [xsp+88h] [xbp-428h] BYREF
  int v84; // [xsp+9Ch] [xbp-414h] BYREF
  unsigned int v85; // [xsp+A0h] [xbp-410h] BYREF
  unsigned int v86; // [xsp+A4h] [xbp-40Ch] BYREF
  unsigned __int8 v87; // [xsp+A8h] [xbp-408h] BYREF
  _BYTE v88[7]; // [xsp+A9h] [xbp-407h] BYREF
  __int64 v89; // [xsp+4A8h] [xbp-8h] BYREF

  v10 = *(_QWORD *)(a4 + 8);
  v11 = 0;
  v83[0] = a3;
  v84 = v10;
  if ( (int)v10 <= 0 )
  {
    *(_QWORD *)(a4 + 8) = 0;
    return v11;
  }
  v83[0] = a3 + 4;
  if ( a3[2] )
    v12 = (__int64 *)a3[1];
  else
    v12 = &qword_4B2D48;
  v13 = 0;
  v85 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v14 = *(unsigned __int8 *)v12;
      v12 = (__int64 *)((char *)v12 + 1);
      if ( !v14 )
      {
        *(_QWORD *)(a4 + 8) = v13;
        return 0;
      }
      if ( v14 == 37 )
        break;
      v11 = a1(a2);
      if ( v11 )
        return v11;
      ++v13;
    }
    v16 = 0;
    v58 = v4;
    v60 = v6;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v17 = *(unsigned __int8 *)v12;
          v18 = (const char *)v12;
          if ( v17 != 35 )
            break;
          v16 |= 8u;
          v12 = (__int64 *)((char *)v12 + 1);
        }
        if ( v17 <= 0x23 )
          break;
        if ( v17 == 43 )
        {
          v16 |= 2u;
          v12 = (__int64 *)((char *)v12 + 1);
        }
        else
        {
          if ( v17 != 45 )
            goto LABEL_21;
          v16 |= 1u;
          v12 = (__int64 *)((char *)v12 + 1);
        }
      }
      if ( v17 != 32 )
        break;
      v16 |= 4u;
      v12 = (__int64 *)((char *)v12 + 1);
    }
LABEL_21:
    if ( v17 == 42 )
    {
      v63 = v16;
      v38 = sub_43A900(&v84, v83, &v85);
      v20 = v38;
      v11 = v85;
      if ( v85 )
        return v11;
      v16 = v63;
      if ( v38 < 0 )
      {
        v20 = -v38;
        v16 = v63 | 1;
      }
      v17 = *((unsigned __int8 *)v12 + 1);
      v18 = (char *)v12 + 1;
    }
    else
    {
      if ( v17 == 48 )
      {
        v17 = *((unsigned __int8 *)v12 + 1);
        if ( (v16 & 1) == 0 )
          v16 |= 0x10u;
        v18 = (char *)v12 + 1;
      }
      v19 = v17;
      v20 = v17 & 0xFFFFFF80;
      if ( (v17 & 0x80) != 0 || v17 - 48 > 9 )
      {
        v20 = -1;
      }
      else
      {
        while ( 1 )
        {
          v21 = v19 + 10 * v20;
          v22 = *(unsigned __int8 *)++v18;
          v19 = v22;
          v20 = v21 - 48;
          v17 = v22;
          if ( (v22 & 0x80) != 0 || v19 - 48 > 9 )
            break;
          if ( v20 == -1 )
            v20 = 0;
        }
      }
    }
    v61 = -1;
    v12 = (__int64 *)(v18 + 1);
    if ( v17 == 46 )
    {
      v17 = *((unsigned __int8 *)v18 + 1);
      if ( v17 == 42 )
      {
        v70 = v16;
        v61 = sub_43A900(&v84, v83, &v85);
        v11 = v85;
        if ( v85 )
          return v11;
        v59 = v5;
        v12 = (__int64 *)(v18 + 3);
        v16 = v70;
        v18 += 2;
        v17 = *(unsigned __int8 *)v18;
      }
      else
      {
        v59 = v5;
        v34 = (__int64 *)(v18 + 2);
        if ( (v17 & 0x80) != 0 )
        {
          ++v18;
          v61 = 0;
          v12 = v34;
        }
        else
        {
          v61 = 0;
          v35 = v17 - 48;
          v36 = (__int64 *)(v18 + 2);
          ++v18;
          v12 = v34;
          if ( v17 - 48 <= 9 )
          {
            do
            {
              v17 = *(unsigned __int8 *)v36;
              v37 = (const char *)v36;
              v36 = (__int64 *)((char *)v36 + 1);
              v61 = v35 + 10 * v61;
              if ( (v17 & 0x80) != 0 )
                break;
              v35 = v17 - 48;
            }
            while ( v17 - 48 <= 9 );
            v18 = v37;
            v12 = v36;
          }
        }
      }
    }
    else
    {
      v59 = v5;
    }
    if ( v17 == 78 )
    {
LABEL_72:
      v17 = *((unsigned __int8 *)v18 + 1);
      v18 = (const char *)v12;
      v12 = (__int64 *)((char *)v12 + 1);
      goto LABEL_39;
    }
    if ( v17 > 0x4E )
    {
      if ( v17 == 104 || v17 == 108 )
        goto LABEL_72;
    }
    else if ( v17 == 70 || v17 == 76 )
    {
      goto LABEL_72;
    }
LABEL_39:
    if ( v17 == 100 )
      goto LABEL_115;
    if ( v17 > 0x64 )
      break;
    if ( v17 == 88 )
      goto LABEL_174;
    if ( v17 <= 0x58 )
    {
      if ( v17 != 69 && v17 != 71 )
      {
        if ( v17 == 37 )
        {
          v87 = 37;
          v30 = 1;
          v18 = (const char *)&v87;
          v62 = 1;
          goto LABEL_56;
        }
LABEL_147:
        v74 = v16;
        v30 = strlen(v18);
        LOBYTE(v16) = v74;
        v12 = (__int64 *)&byte_4B31F0;
        v62 = v30;
        goto LABEL_56;
      }
LABEL_148:
      if ( --v84 > 0 )
      {
        v77 = v16;
        v85 = sub_449AF8(v83[0]);
        v11 = v85;
        v16 = v77;
        if ( !v85 )
        {
          v53 = v83[0] + 1;
          v83[0] += 4;
          goto LABEL_152;
        }
LABEL_143:
        if ( v11 != 1531 )
          return v11;
      }
      else
      {
        v11 = v85;
        if ( v85 != 1531 )
        {
          if ( v85 )
            return v11;
          v53 = nullptr;
LABEL_152:
          if ( v20 == -1 )
          {
            v20 = 0;
            v54 = 0;
          }
          else
          {
            v54 = 0;
            if ( v20 )
            {
              v54 = v61;
              if ( v61 < 0 )
                v54 = 0;
            }
          }
          v64 = v16;
          sub_4890C8((char *)&v87, 0x400u, v53, (v20 << 8) | (v54 << 16) | 0xF);
          v55 = v87;
          if ( v87 == 32 )
          {
            v56 = v88;
            do
            {
              v18 = v56;
              v57 = *(unsigned __int8 *)v56++;
              v55 = v57;
            }
            while ( v57 == 32 );
          }
          else
          {
            v18 = (const char *)&v87;
          }
          if ( v55 == 45 )
          {
            ++v18;
            v31 = &byte_4C6328;
          }
          else if ( (v64 & 2) != 0 )
          {
            v31 = "+";
          }
          else if ( (v64 & 4) != 0 )
          {
            v31 = " ";
          }
          else
          {
            v31 = &byte_4B31F0;
          }
          v81 = v64;
          v49 = (char *)strlen(v18);
LABEL_165:
          v62 = (__int64)v49;
          v75 = v49;
          v51 = strlen(v31);
          v16 = v81;
          v52 = (__int64)v75;
          goto LABEL_136;
        }
      }
LABEL_144:
      v31 = &byte_4B31F0;
LABEL_145:
      v62 = 5;
      v80 = v16;
      v83[0] += 4;
      v51 = strlen(v31);
      v16 = v80;
      v18 = "<obj>";
      v52 = 5;
      goto LABEL_136;
    }
    if ( v17 == 98 )
    {
      if ( (v16 & 8) != 0 )
      {
        v44 = 2;
        v31 = "0b";
      }
      else
      {
        v31 = &byte_4B31F0;
        v44 = 2;
      }
      goto LABEL_171;
    }
    if ( v17 <= 0x62 )
    {
      if ( v17 != 97 )
        goto LABEL_147;
      v66 = v16;
      v23 = sub_43A900(&v84, v83, &v85);
      v11 = v85;
      if ( v85 )
        return v11;
      if ( off_520180 )
      {
        off_520180(&v87, 1024, v23);
        LOBYTE(v16) = v66;
        v18 = (const char *)&v87;
      }
      else
      {
        sub_49B748((const char *)&v87, 0x400u, "%a", v24);
        v18 = (const char *)&v87;
        LOBYTE(v16) = v66;
      }
LABEL_49:
      v67 = v16;
      v25 = strlen(v18);
      v26 = v61;
      LOBYTE(v16) = v67;
      v27 = v25 > v61;
      if ( v25 <= v61 )
        v28 = v25;
      else
        v28 = v61;
      v62 = v28;
      if ( v27 )
        v29 = v26;
      else
        v29 = v28;
      v30 = v29;
      goto LABEL_56;
    }
    v65 = v16;
    v87 = sub_43A900(&v84, v83, &v85);
    v11 = v85;
    v16 = v65;
    if ( v85 == 1531 )
      goto LABEL_144;
    if ( v85 )
      return v11;
    v18 = (const char *)&v87;
    v30 = 1;
    v62 = 1;
LABEL_56:
    v31 = &byte_4B31F0;
    v32 = v20 - v30;
    if ( (v16 & 0x10) != 0 )
      goto LABEL_63;
LABEL_57:
    if ( (v16 & 1) == 0 )
    {
      v68 = 32;
LABEL_64:
      if ( (--v32 & 0x8000000000000000LL) == 0LL )
      {
        do
        {
          v11 = ((__int64 (__fastcall *)(__int64, _QWORD))a1)(a2, v68);
          if ( v11 )
            return v11;
          --v32;
          ++v13;
        }
        while ( v32 != -1 );
      }
    }
    for ( ; *v31; ++v13 )
    {
      ++v31;
      v11 = a1(a2);
      if ( v11 )
        return v11;
    }
LABEL_96:
    v39 = &v18[v62];
    if ( v62 - 1 >= 0 )
    {
      do
      {
        v40 = *(unsigned __int8 *)v18++;
        v11 = ((__int64 (__fastcall *)(__int64, _QWORD))a1)(a2, v40);
        if ( v11 )
          return v11;
        ++v13;
      }
      while ( v18 != v39 );
    }
    v41 = v32 - 1;
    if ( (__int64)(v32 - 1) >= 0 )
    {
      do
      {
        v11 = ((__int64 (__fastcall *)(__int64, __int64))a1)(a2, 32);
        if ( v11 )
          return v11;
        --v41;
        ++v13;
      }
      while ( v41 != -1 );
    }
    v4 = v58;
    v5 = v59;
    v6 = v60;
  }
  if ( v17 == 111 )
  {
    v44 = 8;
    if ( (v16 & 8) != 0 )
      v31 = "0";
    else
      v31 = &byte_4B31F0;
    goto LABEL_171;
  }
  if ( v17 > 0x6F )
  {
    switch ( v17 )
    {
      case 'u':
        v44 = 10;
        v31 = &byte_4B31F0;
        break;
      case 'x':
LABEL_174:
        if ( (v16 & 8) != 0 )
        {
          v44 = 16;
          if ( v17 == 120 )
            v31 = "0x";
          else
            v31 = "0X";
        }
        else
        {
          v44 = 16;
          v31 = &byte_4B31F0;
        }
        break;
      case 's':
        --v84;
        v85 = 0;
        if ( v84 <= 0 )
          goto LABEL_84;
        v69 = v16;
        v85 = sub_448E00(v83[0]);
        v11 = v85;
        v16 = v69;
        if ( v85 )
          goto LABEL_143;
        v33 = v83[0];
        v83[0] += 4;
        v18 = v33[2] ? (const char *)v33[1] : (const char *)&qword_4B2D48;
        if ( !v18 )
LABEL_84:
          v18 = "(null)";
        goto LABEL_49;
      default:
        goto LABEL_147;
    }
LABEL_171:
    v76 = v16;
    v82 = v17;
    v42 = sub_43A870(&v84, v83, &v85, &v86);
    v11 = v85;
    v16 = v76;
    if ( v85 == 1531 )
      goto LABEL_145;
    if ( v85 )
      return v11;
    v43 = v82;
LABEL_121:
    if ( v61 | v42 )
      goto LABEL_122;
    v30 = 0;
    v18 = nullptr;
    v62 = 0;
    goto LABEL_56;
  }
  if ( v17 <= 0x67 )
    goto LABEL_148;
  if ( v17 != 105 )
    goto LABEL_147;
LABEL_115:
  v71 = v16;
  v78 = v17;
  v42 = sub_43A870(&v84, v83, &v85, &v86);
  v11 = v85;
  v16 = v71;
  v43 = v78;
  if ( v85 == 1531 )
    goto LABEL_144;
  if ( v85 )
    return v11;
  if ( (v42 & 0x8000000000000000LL) == 0 )
  {
    if ( (v71 & 2) != 0 )
    {
      v44 = 10;
      v31 = "+";
    }
    else if ( (v71 & 4) != 0 )
    {
      v44 = 10;
      v31 = " ";
    }
    else
    {
      v31 = &byte_4B31F0;
      v44 = 10;
    }
    goto LABEL_121;
  }
  v42 = -(__int64)v42;
  v31 = &byte_4C6328;
  v44 = 10;
LABEL_122:
  v45 = v44;
  if ( v86 < 0x40 )
    v42 &= ~(-1LL << v86);
  v18 = (const char *)&v89;
  if ( v43 == 88 )
    v46 = 7;
  else
    v46 = 39;
  do
  {
    v47 = v42 % v45;
    v42 /= v45;
    v48 = (char)(v47 + 48);
    if ( v48 > 57 )
      LOBYTE(v48) = v48 + v46;
    *--v18 = v48;
  }
  while ( v42 );
  v49 = (char *)((char *)&v89 - v18);
  if ( v61 > 1024 )
    v50 = 1024;
  else
    v50 = v61;
  if ( v50 <= (__int64)v49 )
  {
    v81 = v16;
    goto LABEL_165;
  }
  do
    *--v18 = 48;
  while ( v18 != (char *)&v89 - v50 );
  v62 = v50;
  v72 = v50;
  v79 = v16;
  v51 = strlen(v31);
  v16 = v79;
  v52 = v72;
LABEL_136:
  v32 = v20 - v51 - v52;
  if ( (v16 & 0x10) == 0 )
    goto LABEL_57;
  if ( !*v31 )
  {
LABEL_63:
    v68 = 48;
    if ( (v16 & 1) != 0 )
      goto LABEL_96;
    goto LABEL_64;
  }
  while ( 1 )
  {
    v73 = v16;
    ++v31;
    v11 = a1(a2);
    if ( v11 )
      return v11;
    ++v13;
    v16 = v73;
    if ( !*v31 )
      goto LABEL_63;
  }
}
// 43AAE8: could not find valid save-restore pair for x22
// 43AAE8: could not find valid save-restore pair for x23
// 43AAE8: could not find valid save-restore pair for x25
// 43AAE8: could not find valid save-restore pair for x26
// 43AAE8: could not find valid save-restore pair for x28
// 43ABE4: variable 'v4' is possibly undefined
// 43ABE8: variable 'v6' is possibly undefined
// 43ACBC: variable 'v5' is possibly undefined
// 43B52C: variable 'v24' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4B31F0: using guessed type char byte_4B31F0;
// 4C5B88: using guessed type __int64 qword_4C5B88[239];
// 4C6328: using guessed type char byte_4C6328;
// 520180: using guessed type __int64 (__fastcall *off_520180)(_QWORD, _QWORD, _QWORD);
