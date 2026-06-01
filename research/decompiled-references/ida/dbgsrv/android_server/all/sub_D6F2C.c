/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D6F2C
// Address: 0x00000000000D6F2C

//----- (00000000000D6F2C) ----------------------------------------------------
__int64 __fastcall sub_D6F2C(__int64 result, char a2, char a3, unsigned __int16 *a4, __int64 a5)
{
  __int64 v7; // x19
  int v8; // w8
  unsigned __int8 *v9; // x24
  __int64 IP; // x25
  __int64 RegionStart; // x0
  unsigned int v12; // w1
  __int64 v13; // x24
  __int64 v14; // x20
  unsigned __int64 v15; // x0
  unsigned __int16 *v16; // x9
  unsigned __int64 v17; // x13
  unsigned __int16 *v18; // x8
  __int64 v19; // x10
  __int64 v20; // x9
  char v21; // t1
  unsigned __int16 *v22; // x28
  unsigned __int16 *v23; // x21
  unsigned int v24; // w24
  __int64 v25; // x10
  __int64 v26; // x9
  unsigned __int64 v27; // x27
  char v28; // t1
  __int64 v29; // x23
  unsigned __int16 *v30; // x20
  unsigned __int16 *v31; // x9
  unsigned __int64 v32; // x25
  unsigned __int64 v33; // x26
  __int64 v34; // x10
  __int64 v35; // x8
  char v36; // t1
  __int64 v37; // x25
  __int64 v38; // x27
  unsigned int v39; // w21
  unsigned __int64 v40; // x9
  __int64 v41; // x8
  char *v42; // x20
  char v43; // w10
  char v44; // t1
  bool v45; // w11
  __int64 v46; // x9
  __int64 v47; // x26
  unsigned __int16 *v48; // x8
  __int64 v49; // x1
  char v50; // w8
  unsigned __int16 *v51; // x23
  __int64 v52; // x24
  __int64 v53; // x9
  __int64 v54; // x8
  char *v55; // x22
  char v56; // t1
  unsigned __int64 v57; // x0
  __int64 v58; // x10
  unsigned __int64 v59; // x9
  __int64 v60; // x8
  char v61; // w11
  unsigned int v62; // w10
  _BOOL4 v63; // w11
  __int64 v64; // x9
  __int64 v65; // x8
  int v66; // w8
  unsigned __int16 *v67; // x8
  unsigned __int64 v68; // [xsp+0h] [xbp-B0h]
  _QWORD *v69; // [xsp+18h] [xbp-98h]
  unsigned __int64 v70; // [xsp+20h] [xbp-90h]
  char v72; // [xsp+34h] [xbp-7Ch]
  unsigned int v74; // [xsp+3Ch] [xbp-74h]
  unsigned __int16 *v75; // [xsp+40h] [xbp-70h] BYREF
  unsigned __int16 *v76; // [xsp+48h] [xbp-68h] BYREF
  unsigned __int16 *v77[2]; // [xsp+50h] [xbp-60h] BYREF

  v7 = result;
  v77[1] = *(unsigned __int16 **)(_ReadStatusReg(TPIDR_EL0) + 40);
  *(_QWORD *)(result + 32) = 0;
  *(_OWORD *)result = 0u;
  *(_OWORD *)(result + 16) = 0u;
  *(_DWORD *)(result + 40) = 3;
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 0xE) == 0 )
      goto LABEL_9;
LABEL_5:
    v8 = 3;
    goto LABEL_6;
  }
  if ( (a2 & 2) == 0 )
    goto LABEL_5;
  if ( (~a2 & 0xC) == 0 )
  {
    v8 = 2;
    goto LABEL_6;
  }
LABEL_9:
  result = Unwind_GetLanguageSpecificData(a5);
  v76 = (unsigned __int16 *)result;
  if ( !result )
  {
LABEL_82:
    v8 = 8;
    goto LABEL_6;
  }
  v9 = (unsigned __int8 *)result;
  *(_QWORD *)(v7 + 16) = result;
  IP = Unwind_GetIP(a5);
  RegionStart = Unwind_GetRegionStart(a5);
  v76 = (unsigned __int16 *)(v9 + 1);
  v12 = *v9;
  v13 = RegionStart;
  v14 = ~RegionStart;
  v15 = sub_D78EC(&v76, v12);
  v16 = v76;
  if ( v15 )
    v17 = v15;
  else
    v17 = v13;
  v18 = (unsigned __int16 *)((char *)v76 + 1);
  v76 = (unsigned __int16 *)((char *)v76 + 1);
  v72 = a3;
  v70 = v17;
  v74 = *(unsigned __int8 *)v16;
  if ( v74 == 255 )
  {
    v22 = nullptr;
  }
  else
  {
    v19 = 0;
    v20 = 0;
    do
    {
      v21 = *(_BYTE *)v18;
      v18 = (unsigned __int16 *)((char *)v18 + 1);
      v20 |= (unsigned __int64)(v21 & 0x7F) << v19;
      v19 += 7;
    }
    while ( v21 < 0 );
    v22 = (unsigned __int16 *)((char *)v18 + v20);
    v76 = v18;
  }
  v23 = (unsigned __int16 *)((char *)v18 + 1);
  v76 = (unsigned __int16 *)((char *)v18 + 1);
  v24 = *(unsigned __int8 *)v18;
  v25 = 0;
  v26 = 0;
  v27 = IP + v14;
  do
  {
    v28 = *(_BYTE *)v23;
    v23 = (unsigned __int16 *)((char *)v23 + 1);
    v26 |= (unsigned __int64)(v28 & 0x7F) << v25;
    v25 += 7;
  }
  while ( v28 < 0 );
  v29 = (unsigned int)v26;
  v30 = (unsigned __int16 *)((char *)v23 + (unsigned int)v26);
  v31 = v23;
  v75 = v23;
  v76 = v23;
  while ( 1 )
  {
    if ( v31 >= v30 )
LABEL_27:
      sub_D7524(v72 & 1, a4);
    v32 = sub_D78EC(&v75, v24);
    v33 = sub_D78EC(&v75, v24);
    result = sub_D78EC(&v75, v24);
    v31 = v75;
    v34 = 0;
    v35 = 0;
    do
    {
      v36 = *(_BYTE *)v31;
      v31 = (unsigned __int16 *)((char *)v31 + 1);
      v35 |= (unsigned __int64)(v36 & 0x7F) << v34;
      v34 += 7;
    }
    while ( v36 < 0 );
    v75 = v31;
    if ( v32 <= v27 && v27 < v33 + v32 )
      break;
    if ( v27 < v32 )
      goto LABEL_27;
  }
  if ( !result )
  {
LABEL_78:
    v66 = 8;
LABEL_79:
    *(_DWORD *)(v7 + 40) = v66;
    return result;
  }
  if ( !v35 )
  {
    if ( (a2 & 6) == 2 )
    {
      *(_QWORD *)v7 = 0;
      *(_QWORD *)(v7 + 24) = result + v70;
      v8 = 6;
      goto LABEL_6;
    }
    goto LABEL_82;
  }
  v68 = result + v70;
  v69 = a4 + 16;
  v37 = (v74 + 6) & 0xFLL;
  v38 = (__int64)v23 + v29 + v35 - 1;
  v39 = (0x747u >> v37) & 1;
  while ( 1 )
  {
    v40 = 0;
    v41 = 0;
    v42 = (char *)v38;
    do
    {
      v44 = *v42++;
      v43 = v44;
      v41 |= (unsigned __int64)(v44 & 0x7F) << v40;
      v40 += 7LL;
    }
    while ( v44 < 0 );
    v45 = v40 < 0x40;
    v46 = -1LL << v40;
    if ( (*(_DWORD *)&v45 & ((unsigned __int8)(v43 & 0x40) >> 6)) == 0 )
      v46 = 0;
    v47 = v41 | v46;
    if ( (v41 | v46) >= 1 )
    {
      v77[0] = v22;
      if ( !v22 || (unsigned int)v37 > 0xA || !v39 )
        goto LABEL_27;
      v77[0] = (unsigned __int16 *)((char *)v22 - (v47 << qword_1205B0[v37]));
      result = sub_D78EC(v77, v74);
      if ( result )
      {
        if ( (v72 & 1) == 0 )
          goto LABEL_73;
        v48 = a4 + 16;
        if ( *(_QWORD *)a4 == 0x434C4E47432B2B01LL )
          v48 = *((unsigned __int16 **)a4 - 12);
        v77[0] = v48;
        if ( !v48 || (v49 = *((_QWORD *)a4 - 11)) == 0 )
          sub_D7524(1, a4);
        result = (*(__int64 (__fastcall **)(__int64, __int64, unsigned __int16 **))(*(_QWORD *)result + 32LL))(
                   result,
                   v49,
                   v77);
        if ( (result & 1) == 0 )
          goto LABEL_73;
        v50 = a2;
        if ( (a2 & 1) != 0 )
        {
          *(_QWORD *)v7 = v47;
          *(_QWORD *)(v7 + 8) = v38;
          *(_QWORD *)(v7 + 24) = v68;
          v67 = v77[0];
          *(_DWORD *)(v7 + 40) = 6;
          *(_QWORD *)(v7 + 32) = v67;
          return result;
        }
        goto LABEL_72;
      }
      if ( (a2 & 5) != 0 )
        goto LABEL_83;
      if ( (a2 & 8) == 0 )
        goto LABEL_27;
      goto LABEL_73;
    }
    if ( (v47 & 0x8000000000000000LL) == 0 )
      break;
    if ( (v72 & 1) != 0 )
    {
      v51 = a4 + 16;
      if ( *(_QWORD *)a4 == 0x434C4E47432B2B01LL )
        v51 = *((unsigned __int16 **)a4 - 12);
      if ( !v51 || (v52 = *((_QWORD *)a4 - 11)) == 0 )
        sub_D7524(1, a4);
      if ( !v22 )
LABEL_93:
        sub_D7524(0, a4);
      v53 = 0;
      v54 = 0;
      v55 = (char *)v22 + ~v47;
      while ( 1 )
      {
        do
        {
          v56 = *v55++;
          v54 |= (unsigned __int64)(v56 & 0x7F) << v53;
          v53 += 7;
        }
        while ( v56 < 0 );
        if ( !v54 )
          break;
        v77[0] = v22;
        if ( (unsigned int)v37 > 0xA || !v39 )
          goto LABEL_90;
        v77[0] = (unsigned __int16 *)((char *)v22 - (v54 << qword_1205B0[v37]));
        v57 = sub_D78EC(v77, v74);
        v77[0] = v51;
        result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, unsigned __int16 **))(*(_QWORD *)v57 + 32LL))(
                   v57,
                   v52,
                   v77);
        v53 = 0;
        v54 = 0;
        if ( (result & 1) != 0 )
          goto LABEL_73;
      }
      v50 = a2;
      if ( (a2 & 1) != 0 )
      {
        *(_QWORD *)v7 = v47;
        *(_QWORD *)(v7 + 8) = v38;
        *(_QWORD *)(v7 + 24) = v68;
        *(_QWORD *)(v7 + 32) = v51;
        v66 = 6;
        goto LABEL_79;
      }
LABEL_72:
      if ( (v50 & 8) == 0 )
LABEL_90:
        sub_D7524(1, a4);
      goto LABEL_73;
    }
    if ( (a2 & 5) != 0 )
    {
LABEL_83:
      *(_QWORD *)v7 = v47;
      *(_QWORD *)(v7 + 8) = v38;
      *(_QWORD *)(v7 + 24) = v68;
      if ( *(_QWORD *)a4 == 0x434C4E47432B2B01LL )
        v69 = *((_QWORD **)a4 - 12);
      *(_QWORD *)(v7 + 32) = v69;
      v66 = 6;
      goto LABEL_79;
    }
    if ( (a2 & 8) == 0 )
      goto LABEL_93;
LABEL_73:
    v58 = 0;
    v59 = 0;
    v60 = 0;
    do
    {
      v61 = v42[v58++];
      v60 |= (unsigned __int64)(v61 & 0x7F) << v59;
      v59 += 7LL;
    }
    while ( v61 < 0 );
    v62 = v61 & 0x40;
    v63 = v59 < 0x40;
    v64 = -1LL << v59;
    if ( (v63 & (v62 >> 6)) == 0 )
      v64 = 0;
    v65 = v60 | v64;
    if ( !v65 )
      goto LABEL_78;
    v38 = (__int64)&v42[v65];
  }
  if ( (a2 & 6) != 2 )
    goto LABEL_73;
  *(_QWORD *)v7 = v47;
  *(_QWORD *)(v7 + 8) = v38;
  *(_QWORD *)(v7 + 24) = v68;
  if ( *(_QWORD *)a4 == 0x434C4E47432B2B01LL )
    v69 = *((_QWORD **)a4 - 12);
  *(_QWORD *)(v7 + 32) = v69;
  v8 = 6;
LABEL_6:
  *(_DWORD *)(v7 + 40) = v8;
  return result;
}
// 1205B0: using guessed type __int64 qword_1205B0[11];
