/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_539B0
// Address: 0x000539B0

//----- (000539B0) --------------------------------------------------------
int __fastcall sub_539B0(int a1, unsigned __int8 *a2, int a3)
{
  int v5; // r7
  int v6; // r1
  bool v7; // cf
  int v8; // r0
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r0
  int v13; // r0
  __int64 v14; // kr10_8
  __int64 v15; // r0
  int v16; // r3
  int v17; // r2
  int v18; // r1
  int v19; // r0
  __int64 *v20; // r3
  __int64 *v21; // r5
  int v22; // r5
  int v23; // r0
  int v24; // r2
  int v25; // r7
  int v26; // r0
  __int64 *v27; // r3
  __int64 *v28; // r7
  int v29; // r7
  int v30; // r0
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r7
  unsigned __int64 v35; // r0
  int v36; // r7
  __int64 *v37; // r3
  __int64 *v38; // r7
  int v39; // r7
  int v40; // r0
  int v41; // r0
  int v42; // r0
  int v43; // r0
  __int64 v44; // kr28_8
  unsigned __int64 v45; // r0
  int v46; // r3
  int v47; // r1
  int v48; // r0
  int v49; // r0
  int v50; // r0
  __int64 v51; // kr38_8
  unsigned __int64 v52; // r0
  int v53; // r3
  int v54; // r1
  int v55; // r3
  unsigned int v56; // r1
  int v57; // r0
  int v58; // r0
  int v59; // r0
  __int64 v60; // kr40_8
  unsigned __int64 v61; // r0
  int v62; // r3
  int v63; // r1
  int v64; // r7
  unsigned int v65; // r2
  int v66; // r0
  int v67; // r3
  unsigned int v68; // r1
  int v69; // r3
  unsigned int v70; // r1
  int v71; // r2
  int *v72; // r1
  int *v74; // [sp+20h] [bp-90h]
  int v75; // [sp+34h] [bp-7Ch]
  int v76; // [sp+38h] [bp-78h]
  int v77; // [sp+74h] [bp-3Ch]
  int v78; // [sp+78h] [bp-38h]
  _BYTE v79[8]; // [sp+7Ch] [bp-34h] BYREF
  __int64 v80; // [sp+84h] [bp-2Ch]
  _BYTE v81[8]; // [sp+8Ch] [bp-24h] BYREF
  __int64 v82; // [sp+94h] [bp-1Ch]
  _BYTE v83[8]; // [sp+9Ch] [bp-14h] BYREF
  __int64 v84; // [sp+A4h] [bp-Ch] BYREF
  int v85; // [sp+ACh] [bp-4h]

  sub_53528(a1, (int)a2, a3);
  v77 = a1;
  v78 = a1 + 444;
  v74 = (int *)(a2 + 8);
  v5 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      v83[0] = 1;
      v84 = 0;
      v8 = *(_DWORD *)v78;
      v9 = *(unsigned __int16 *)(*(_DWORD *)v78 + 12);
      if ( v9 != 45 )
        break;
      sub_53528(a1, (int)v83, 1);
      v6 = HIDWORD(v84);
      v7 = *v74 >= (unsigned int)v84;
      *v74 -= v84;
      *((_DWORD *)a2 + 3) -= v6 + !v7;
    }
    if ( v9 != 43 )
      break;
    sub_53528(a1, (int)v83, 1);
    v10 = HIDWORD(v84);
    v7 = __CFADD__((_DWORD)v84, *v74);
    *v74 += v84;
    *((_DWORD *)a2 + 3) += v10 + v7;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v81[0] = 1;
      v82 = 0;
      v11 = *(unsigned __int16 *)(v8 + 12);
      if ( v11 != 15420 )
        break;
      sub_53528(a1, (int)v81, 1);
      while ( 1 )
      {
        while ( 1 )
        {
          v83[0] = 1;
          v84 = 0;
          v13 = *(unsigned __int16 *)(*(_DWORD *)v78 + 12);
          if ( v13 != 45 )
            break;
          sub_53528(a1, (int)v83, 1);
          v82 -= v84;
        }
        if ( v13 != 43 )
          break;
        sub_53528(a1, (int)v83, 1);
        v82 += v84;
      }
      *(_QWORD *)v74 <<= v82;
      v5 = 1;
      v8 = *(_DWORD *)v78;
    }
    if ( v11 != 15934 )
      break;
    sub_53528(a1, (int)v81, 1);
    while ( 1 )
    {
      while ( 1 )
      {
        v83[0] = 1;
        v84 = 0;
        v12 = *(unsigned __int16 *)(*(_DWORD *)v78 + 12);
        if ( v12 != 45 )
          break;
        sub_53528(a1, (int)v83, 1);
        v82 -= v84;
      }
      if ( v12 != 43 )
        break;
      sub_53528(a1, (int)v83, 1);
      v82 += v84;
    }
    v14 = *(__int64 *)v74 >> v82;
    v15 = *(_QWORD *)v74 >> v82;
    v16 = HIDWORD(v14);
    v17 = *a2;
    if ( *a2 )
      v16 = *(_QWORD *)v74 >> v82 >> 32;
    *((_DWORD *)a2 + 3) = v16;
    v18 = v14;
    if ( v17 )
      v18 = v15;
    *v74 = v18;
    v8 = *(_DWORD *)v78;
    v5 = 1;
  }
  while ( 1 )
  {
    v79[0] = 1;
    v80 = 0;
    v19 = *(unsigned __int16 *)(v8 + 12);
    if ( v19 <= 15420 )
    {
      if ( v19 == 60 )
      {
        sub_53528(v77, (int)v79, 1);
        v27 = &v84;
        while ( 1 )
        {
          while ( 1 )
          {
            v83[0] = 1;
            *(_DWORD *)v27 = 0;
            *((_DWORD *)v27 + 1) = 0;
            v29 = *(_DWORD *)v78;
            v30 = *(unsigned __int16 *)(*(_DWORD *)v78 + 12);
            if ( v30 != 45 )
              break;
            v28 = v27;
            sub_53528(v77, (int)v83, 1);
            v80 -= *v28;
            v27 = v28;
          }
          if ( v30 != 43 )
            break;
          sub_53528(v77, (int)v83, 1);
          v27 = &v84;
          v80 += v84;
        }
        v76 = 1;
        while ( 1 )
        {
          while ( 1 )
          {
            v81[0] = 1;
            v82 = 0;
            v48 = *(unsigned __int16 *)(v29 + 12);
            if ( v48 != 15420 )
              break;
            sub_53528(v77, (int)v81, 1);
            while ( 1 )
            {
              while ( 1 )
              {
                v83[0] = 1;
                v84 = 0;
                v29 = *(_DWORD *)v78;
                v50 = *(unsigned __int16 *)(*(_DWORD *)v78 + 12);
                if ( v50 != 45 )
                  break;
                sub_53528(v77, (int)v83, 1);
                v82 -= v84;
              }
              if ( v50 != 43 )
                break;
              sub_53528(v77, (int)v83, 1);
              v82 += v84;
            }
            v80 <<= v82;
          }
          if ( v48 != 15934 )
            break;
          sub_53528(v77, (int)v81, 1);
          while ( 1 )
          {
            while ( 1 )
            {
              v83[0] = 1;
              v84 = 0;
              v29 = *(_DWORD *)v78;
              v49 = *(unsigned __int16 *)(*(_DWORD *)v78 + 12);
              if ( v49 != 45 )
                break;
              sub_53528(v77, (int)v83, 1);
              v82 -= v84;
            }
            if ( v49 != 43 )
              break;
            sub_53528(v77, (int)v83, 1);
            v82 += v84;
          }
          v51 = v80 >> v82;
          v52 = (unsigned __int64)v80 >> v82;
          v53 = (unsigned __int64)(v80 >> v82) >> 32;
          if ( v79[0] )
            v53 = (unsigned __int64)v80 >> v82 >> 32;
          HIDWORD(v80) = v53;
          v54 = v51;
          if ( v79[0] )
            v54 = v52;
          LODWORD(v80) = v54;
        }
        v67 = *v74;
        v68 = *((_DWORD *)a2 + 3);
        if ( *a2 )
        {
          if ( __PAIR64__(v68, v67) >= v80 )
LABEL_137:
            v76 = 0;
LABEL_153:
          v5 = 1;
          v72 = (int *)(a2 + 8);
          v71 = v76;
          goto LABEL_154;
        }
        if ( v79[0] )
        {
          v76 = 1;
          if ( __PAIR64__(v68, v67) < v80 )
            goto LABEL_153;
        }
        else
        {
          v76 = 1;
          if ( __SPAIR64__(v68, v67) < v80 )
            goto LABEL_153;
        }
      }
      else
      {
        if ( v19 != 62 )
          return _stack_chk_guard - v85;
        sub_53528(v77, (int)v79, 1);
        v20 = &v84;
        while ( 1 )
        {
          while ( 1 )
          {
            v83[0] = 1;
            *(_DWORD *)v20 = 0;
            *((_DWORD *)v20 + 1) = 0;
            v22 = *(_DWORD *)v78;
            v23 = *(unsigned __int16 *)(*(_DWORD *)v78 + 12);
            if ( v23 != 45 )
              break;
            v21 = v20;
            sub_53528(v77, (int)v83, 1);
            v80 -= *v21;
            v20 = v21;
          }
          if ( v23 != 43 )
            break;
          sub_53528(v77, (int)v83, 1);
          v20 = &v84;
          v80 += v84;
        }
        v76 = 1;
        while ( 1 )
        {
          while ( 1 )
          {
            v81[0] = 1;
            v82 = 0;
            v31 = *(unsigned __int16 *)(v22 + 12);
            if ( v31 != 15420 )
              break;
            sub_53528(v77, (int)v81, 1);
            while ( 1 )
            {
              while ( 1 )
              {
                v83[0] = 1;
                v84 = 0;
                v22 = *(_DWORD *)v78;
                v33 = *(unsigned __int16 *)(*(_DWORD *)v78 + 12);
                if ( v33 != 45 )
                  break;
                sub_53528(v77, (int)v83, 1);
                v82 -= v84;
              }
              if ( v33 != 43 )
                break;
              sub_53528(v77, (int)v83, 1);
              v82 += v84;
            }
            v80 <<= v82;
          }
          if ( v31 != 15934 )
            break;
          sub_53528(v77, (int)v81, 1);
          while ( 1 )
          {
            while ( 1 )
            {
              v83[0] = 1;
              v84 = 0;
              v22 = *(_DWORD *)v78;
              v32 = *(unsigned __int16 *)(*(_DWORD *)v78 + 12);
              if ( v32 != 45 )
                break;
              sub_53528(v77, (int)v83, 1);
              v82 -= v84;
            }
            if ( v32 != 43 )
              break;
            sub_53528(v77, (int)v83, 1);
            v82 += v84;
          }
          v34 = (unsigned __int64)(v80 >> v82) >> 32;
          v75 = v80 >> v82;
          v35 = (unsigned __int64)v80 >> v82;
          if ( v79[0] )
            v34 = (unsigned __int64)v80 >> v82 >> 32;
          HIDWORD(v80) = v34;
          v36 = v75;
          if ( v79[0] )
            v36 = v35;
          LODWORD(v80) = v36;
        }
        v55 = *v74;
        v56 = *((_DWORD *)a2 + 3);
        if ( *a2 )
        {
          if ( v80 >= __PAIR64__(v56, v55) )
            goto LABEL_137;
          goto LABEL_153;
        }
        if ( v79[0] )
        {
          v76 = 1;
          if ( v80 < __PAIR64__(v56, v55) )
            goto LABEL_153;
        }
        else
        {
          v76 = 1;
          if ( v80 < __SPAIR64__(v56, v55) )
            goto LABEL_153;
        }
      }
      v76 = 0;
      goto LABEL_153;
    }
    if ( v19 != 15421 )
      break;
    sub_53528(v77, (int)v79, 1);
    v37 = &v84;
    while ( 1 )
    {
      while ( 1 )
      {
        v83[0] = 1;
        *(_DWORD *)v37 = 0;
        *((_DWORD *)v37 + 1) = 0;
        v39 = *(_DWORD *)v78;
        v40 = *(unsigned __int16 *)(*(_DWORD *)v78 + 12);
        if ( v40 != 45 )
          break;
        v38 = v37;
        sub_53528(v77, (int)v83, 1);
        v80 -= *v38;
        v37 = v38;
      }
      if ( v40 != 43 )
        break;
      sub_53528(v77, (int)v83, 1);
      v37 = &v84;
      v80 += v84;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v81[0] = 1;
        v82 = 0;
        v57 = *(unsigned __int16 *)(v39 + 12);
        if ( v57 != 15420 )
          break;
        sub_53528(v77, (int)v81, 1);
        while ( 1 )
        {
          while ( 1 )
          {
            v83[0] = 1;
            v84 = 0;
            v39 = *(_DWORD *)v78;
            v59 = *(unsigned __int16 *)(*(_DWORD *)v78 + 12);
            if ( v59 != 45 )
              break;
            sub_53528(v77, (int)v83, 1);
            v82 -= v84;
          }
          if ( v59 != 43 )
            break;
          sub_53528(v77, (int)v83, 1);
          v82 += v84;
        }
        v80 <<= v82;
      }
      if ( v57 != 15934 )
        break;
      sub_53528(v77, (int)v81, 1);
      while ( 1 )
      {
        while ( 1 )
        {
          v83[0] = 1;
          v84 = 0;
          v39 = *(_DWORD *)v78;
          v58 = *(unsigned __int16 *)(*(_DWORD *)v78 + 12);
          if ( v58 != 45 )
            break;
          sub_53528(v77, (int)v83, 1);
          v82 -= v84;
        }
        if ( v58 != 43 )
          break;
        sub_53528(v77, (int)v83, 1);
        v82 += v84;
      }
      v60 = v80 >> v82;
      v61 = (unsigned __int64)v80 >> v82;
      v62 = (unsigned __int64)(v80 >> v82) >> 32;
      if ( v79[0] )
        v62 = (unsigned __int64)v80 >> v82 >> 32;
      HIDWORD(v80) = v62;
      v63 = v60;
      if ( v79[0] )
        v63 = v61;
      LODWORD(v80) = v63;
    }
    v69 = *v74;
    v70 = *((_DWORD *)a2 + 3);
    if ( !*a2 )
    {
      if ( v79[0] )
      {
        v71 = 1;
        if ( v80 >= __PAIR64__(v70, v69) )
          goto LABEL_141;
      }
      else
      {
        v71 = 1;
        if ( v80 >= __SPAIR64__(v70, v69) )
          goto LABEL_141;
      }
LABEL_140:
      v71 = 0;
      goto LABEL_141;
    }
    v71 = 1;
    if ( v80 < __PAIR64__(v70, v69) )
      goto LABEL_140;
LABEL_141:
    v5 = 1;
    v72 = (int *)(a2 + 8);
LABEL_154:
    *v72 = v71;
    v72[1] = 0;
    *a2 = 0;
LABEL_26:
    v8 = *(_DWORD *)v78;
  }
  if ( v19 == 15933 )
  {
    sub_53528(v77, (int)v79, 1);
    while ( 1 )
    {
      while ( 1 )
      {
        v83[0] = v5;
        v84 = 0;
        v24 = v5;
        v25 = *(_DWORD *)v78;
        v26 = *(unsigned __int16 *)(*(_DWORD *)v78 + 12);
        if ( v26 != 45 )
          break;
        v5 = v24;
        sub_53528(v77, (int)v83, v24);
        v80 -= v84;
      }
      if ( v26 != 43 )
        break;
      v5 = 1;
      sub_53528(v77, (int)v83, 1);
      v80 += v84;
    }
    while ( 1 )
    {
      while ( 1 )
      {
        v81[0] = 1;
        v82 = 0;
        v41 = *(unsigned __int16 *)(v25 + 12);
        if ( v41 != 15420 )
          break;
        sub_53528(v77, (int)v81, 1);
        while ( 1 )
        {
          while ( 1 )
          {
            v83[0] = 1;
            v84 = 0;
            v25 = *(_DWORD *)v78;
            v43 = *(unsigned __int16 *)(*(_DWORD *)v78 + 12);
            if ( v43 != 45 )
              break;
            sub_53528(v77, (int)v83, 1);
            v82 -= v84;
          }
          if ( v43 != 43 )
            break;
          sub_53528(v77, (int)v83, 1);
          v82 += v84;
        }
        v80 <<= v82;
      }
      if ( v41 != 15934 )
        break;
      sub_53528(v77, (int)v81, 1);
      while ( 1 )
      {
        while ( 1 )
        {
          v83[0] = 1;
          v84 = 0;
          v25 = *(_DWORD *)v78;
          v42 = *(unsigned __int16 *)(*(_DWORD *)v78 + 12);
          if ( v42 != 45 )
            break;
          sub_53528(v77, (int)v83, 1);
          v82 -= v84;
        }
        if ( v42 != 43 )
          break;
        sub_53528(v77, (int)v83, 1);
        v82 += v84;
      }
      v44 = v80 >> v82;
      v45 = (unsigned __int64)v80 >> v82;
      v46 = (unsigned __int64)(v80 >> v82) >> 32;
      if ( v79[0] )
        v46 = (unsigned __int64)v80 >> v82 >> 32;
      HIDWORD(v80) = v46;
      v47 = v44;
      if ( v79[0] )
        v47 = v45;
      LODWORD(v80) = v47;
    }
    v64 = *v74;
    v65 = *((_DWORD *)a2 + 3);
    if ( *a2 )
    {
      v7 = __PAIR64__(v65, v64) >= v80;
      v5 = 1;
      v66 = v7;
LABEL_149:
      *v74 = v66;
      *((_DWORD *)a2 + 3) = 0;
      *a2 = 0;
      goto LABEL_26;
    }
    if ( v79[0] )
    {
      v66 = 1;
      if ( __PAIR64__(v65, v64) < v80 )
        goto LABEL_147;
    }
    else
    {
      v66 = 1;
      if ( __SPAIR64__(v65, v64) < v80 )
LABEL_147:
        v66 = 0;
    }
    v5 = 1;
    goto LABEL_149;
  }
  return _stack_chk_guard - v85;
}
