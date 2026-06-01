/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_426880
// Address: 0x0000000000426880

//----- (0000000000426880) ----------------------------------------------------
__int64 __fastcall sub_426880(__int64 a1, __int64 a2, unsigned __int64 **a3)
{
  unsigned __int64 *v6; // x1
  unsigned __int64 *v7; // x2
  unsigned __int64 v8; // x3
  unsigned __int64 *i; // x19
  unsigned __int64 v10; // x0
  int v11; // w7
  unsigned __int64 v12; // x5
  unsigned __int64 v13; // x4
  __int64 v14; // x0
  int v15; // w1
  _QWORD *v16; // x0
  unsigned __int64 v17; // x2
  __int64 v18; // x27
  __int64 v19; // x4
  __int64 v20; // x2
  unsigned __int64 v21; // x3
  void *v22; // x0
  unsigned __int64 v23; // x1
  __int64 v24; // x28
  _QWORD *v25; // x0
  unsigned __int64 v26; // x5
  __int64 v27; // x2
  int v28; // w1
  unsigned __int64 v29; // x4
  unsigned __int64 v30; // x2
  unsigned __int64 v31; // x2
  unsigned __int64 v32; // x4
  unsigned __int64 v33; // x5
  __int64 v34; // x2
  int j; // w1
  unsigned __int64 v36; // x2
  unsigned __int64 v37; // x2
  unsigned __int64 v38; // x4
  unsigned __int64 v39; // x5
  __int64 v40; // x2
  int k; // w1
  unsigned __int64 v42; // x2
  unsigned __int64 v43; // x2
  unsigned __int64 v44; // x4
  unsigned __int64 v45; // x5
  __int64 v46; // x2
  int m; // w1
  unsigned __int64 v48; // x2
  unsigned __int64 v49; // x2
  unsigned __int64 v50; // x4
  unsigned __int64 v51; // x5
  __int64 v52; // x2
  int n; // w1
  unsigned __int64 v54; // x2
  unsigned __int64 v55; // x2
  unsigned __int64 v56; // x4
  unsigned __int64 v57; // x5
  __int64 v58; // x2
  int ii; // w1
  unsigned __int64 v60; // x2
  unsigned __int64 v61; // x2
  unsigned int v62; // w27
  int v64; // w3
  int v65; // w0
  int v67; // w0
  int v69; // w0
  int v70; // w3
  unsigned __int64 v71; // x4
  unsigned __int64 v72; // x1
  __int64 v73; // x0
  int v74; // w2
  _QWORD *v75; // x0
  unsigned __int64 v76; // x27
  __int64 v77; // x27
  unsigned __int64 v78; // x3
  void *v79; // x0
  unsigned __int64 v80; // x2
  void *ptr; // [xsp+70h] [xbp-20h] BYREF
  unsigned __int64 v83; // [xsp+78h] [xbp-18h]
  unsigned __int64 v84; // [xsp+80h] [xbp-10h]

  sub_426830((_WORD *)a2, (unsigned __int16 *)a1);
  ptr = nullptr;
  v83 = 0;
  v6 = *a3;
  v7 = a3[1];
  v84 = 0;
  v8 = 16LL * (_QWORD)v7;
  if ( !(16LL * (_QWORD)v7) )
  {
    v25 = nullptr;
    *(_QWORD *)(a2 + 48) = 0;
    goto LABEL_139;
  }
  for ( i = v6; i != &v6[2 * (_QWORD)v7]; i += 2 )
  {
    v10 = *i;
    if ( *i == 26 )
    {
      v11 = 11;
      goto LABEL_10;
    }
    if ( *i > 0x1A )
    {
      if ( v10 == 1879047925 )
      {
        v11 = 8;
      }
      else if ( v10 > 0x6FFFFEF5 )
      {
        switch ( v10 )
        {
          case 0x6FFFFFFCuLL:
            v11 = 12;
            break;
          case 0x6FFFFFFEuLL:
            v11 = 13;
            break;
          case 0x6FFFFFF0uLL:
            v11 = 14;
            break;
          default:
            goto LABEL_82;
        }
      }
      else
      {
        switch ( v10 )
        {
          case 0x6000000FuLL:
            v65 = *(unsigned __int16 *)(a1 + 522);
            if ( v65 != 40 && v65 != 183 )
              continue;
            v11 = 4;
            break;
          case 0x60000011uLL:
            v67 = *(unsigned __int16 *)(a1 + 522);
            if ( v67 != 183 && v67 != 40 )
              continue;
            v11 = 5;
            break;
          case 0x20uLL:
            v11 = 9;
            break;
          default:
            goto LABEL_82;
        }
      }
      goto LABEL_10;
    }
    if ( v10 == 7 )
    {
      v11 = 3;
      goto LABEL_10;
    }
    if ( v10 > 7 )
    {
      switch ( v10 )
      {
        case 0x17uLL:
          v11 = 6;
          break;
        case 0x19uLL:
          v11 = 10;
          break;
        case 0x11uLL:
          v11 = 2;
          break;
        default:
          goto LABEL_82;
      }
LABEL_10:
      v12 = *(_QWORD *)(a1 + 584);
      v13 = i[1];
      if ( v12 )
      {
        v14 = 0;
        v15 = 0;
        while ( 1 )
        {
          v16 = (_QWORD *)(*(_QWORD *)(a1 + 576) + 24 * v14);
          v17 = v16[2];
          if ( v13 >= v17 && v13 < v17 + v16[1] )
            break;
          v14 = ++v15;
          if ( v15 >= v12 )
            goto LABEL_15;
        }
        v18 = (unsigned int)(v13 - v17) + *v16;
        v19 = v18;
      }
      else
      {
LABEL_15:
        v18 = -1;
        v19 = -1;
      }
      v20 = 32LL * v11;
      v21 = v84;
      v22 = ptr;
      v23 = v83;
      *(_QWORD *)(a2 + v20) = v19;
      v24 = a2 + v20;
      if ( v21 < v23 + 1 )
      {
        v22 = sub_491288((__int64)&ptr, v22, v23 + 1, 8u);
        v23 = v83;
        ptr = v22;
      }
      *((_QWORD *)v22 + v23) = v18;
      ++v83;
      *(_QWORD *)(v24 + 8) = i[1];
      v6 = *a3;
      v7 = a3[1];
      continue;
    }
    if ( v10 == 5 )
    {
      v11 = 0;
      goto LABEL_10;
    }
    if ( v10 > 5 )
    {
      v11 = 1;
      goto LABEL_10;
    }
    v11 = 7;
    if ( v10 == 4 )
      goto LABEL_10;
LABEL_82:
    if ( v10 == 27 )
    {
      v64 = 10;
      goto LABEL_88;
    }
    if ( v10 > 0x1B )
    {
      if ( v10 == 33 )
      {
        v64 = 9;
        goto LABEL_88;
      }
      if ( v10 <= 0x21 )
      {
        v64 = 11;
        if ( v10 == 28 )
          goto LABEL_88;
      }
      else
      {
        if ( v10 == 1610612752 )
        {
          v64 = 4;
          goto LABEL_88;
        }
        v64 = 5;
        if ( v10 == 1610612754 )
          goto LABEL_88;
      }
    }
    else
    {
      if ( v10 == 8 )
      {
        v64 = 3;
        goto LABEL_88;
      }
      if ( v10 <= 8 )
      {
        v64 = 6;
        if ( v10 == 2 )
          goto LABEL_88;
      }
      else
      {
        if ( v10 == 10 )
        {
          v64 = 0;
LABEL_88:
          *(_QWORD *)(a2 + 32LL * v64 + 16) = i[1];
          v6 = *a3;
          v7 = a3[1];
          continue;
        }
        v64 = 2;
        if ( v10 == 18 )
          goto LABEL_88;
      }
    }
    switch ( v10 )
    {
      case 0xBuLL:
        v69 = 1;
        goto LABEL_135;
      case 0x13uLL:
        v69 = 2;
        goto LABEL_135;
      case 9uLL:
        v69 = 3;
LABEL_135:
        *(_WORD *)(a2 + 32LL * v69 + 24) = i[1];
        v6 = *a3;
        v7 = a3[1];
        continue;
      case 0x6FFFFFFDuLL:
        v70 = 12;
LABEL_151:
        *(_DWORD *)(a2 + 32LL * v70 + 28) = i[1];
        v6 = *a3;
        v7 = a3[1];
        continue;
    }
    v70 = 13;
    if ( v10 == 1879048191 )
      goto LABEL_151;
    if ( v10 > 0xD )
    {
      if ( v10 == 20 )
      {
        v80 = i[1];
        *(_DWORD *)(a2 + 480) = v80;
        if ( (_DWORD)v80 != 17 && (_DWORD)v80 != 7 )
        {
          v62 = (*(unsigned __int8 (__fastcall **)(__int64, __int64))(a1 + 496))(a1, 15);
          if ( !v62 )
          {
            v25 = ptr;
            goto LABEL_74;
          }
        }
        v6 = *a3;
        v7 = a3[1];
      }
      continue;
    }
    if ( v10 >= 0xC )
    {
LABEL_157:
      v71 = *(_QWORD *)(a1 + 584);
      v72 = i[1];
      if ( v71 )
      {
        v73 = 0;
        v74 = 0;
        while ( 1 )
        {
          v75 = (_QWORD *)(*(_QWORD *)(a1 + 576) + 24 * v73);
          v76 = v75[2];
          if ( v72 >= v76 && v72 < v76 + v75[1] )
            break;
          v73 = ++v74;
          if ( v74 >= v71 )
            goto LABEL_163;
        }
        v77 = (unsigned int)(v72 - v76) + *v75;
      }
      else
      {
LABEL_163:
        v77 = -1;
      }
      v78 = v83;
      if ( v84 < v83 + 1 )
      {
        v79 = sub_491288((__int64)&ptr, ptr, v83 + 1, 8u);
        v78 = v83;
        ptr = v79;
      }
      *((_QWORD *)ptr + v78) = v77;
      v6 = *a3;
      v7 = a3[1];
      ++v83;
      continue;
    }
    if ( !v10 )
      break;
    if ( v10 == 3 )
      goto LABEL_157;
  }
  v25 = ptr;
  v8 = v83;
  v26 = -1;
  *(_QWORD *)(a2 + 48) = -1;
  v27 = 0;
  v28 = 0;
  v29 = *(_QWORD *)(a2 + 32);
  if ( !v8 )
  {
    *(_QWORD *)(a2 + 48) = 0;
    *(_QWORD *)(a2 + 240) = 0;
    *(_QWORD *)(a2 + 272) = 0;
    goto LABEL_127;
  }
  do
  {
    if ( v29 )
    {
      v30 = v25[v27];
      if ( v30 > v29 )
      {
        v31 = v30 - v29;
        if ( v26 > v31 )
          v26 = v31;
        *(_QWORD *)(a2 + 48) = v26;
      }
    }
    v27 = ++v28;
  }
  while ( v28 < v8 );
  v32 = *(_QWORD *)(a2 + 224);
  if ( v26 == -1 )
    *(_QWORD *)(a2 + 48) = 0;
  *(_QWORD *)(a2 + 240) = -1;
  v33 = -1;
  v34 = 0;
  for ( j = 0; j < v8; v34 = ++j )
  {
    if ( v32 )
    {
      v36 = v25[v34];
      if ( v36 > v32 )
      {
        v37 = v36 - v32;
        if ( v33 > v37 )
          v33 = v37;
        *(_QWORD *)(a2 + 240) = v33;
      }
    }
  }
  if ( v33 != -1 )
  {
    *(_QWORD *)(a2 + 272) = -1;
    v38 = *(_QWORD *)(a2 + 256);
    goto LABEL_38;
  }
LABEL_139:
  *(_QWORD *)(a2 + 240) = 0;
  *(_QWORD *)(a2 + 272) = -1;
  v38 = *(_QWORD *)(a2 + 256);
  if ( v8 )
  {
LABEL_38:
    v39 = -1;
    v40 = 0;
    for ( k = 0; k < v8; v40 = ++k )
    {
      if ( v38 )
      {
        v42 = v25[v40];
        if ( v42 > v38 )
        {
          v43 = v42 - v38;
          if ( v39 > v43 )
            v39 = v43;
          *(_QWORD *)(a2 + 272) = v39;
        }
      }
    }
    if ( v39 == -1 )
    {
      *(_QWORD *)(a2 + 272) = 0;
      *(_QWORD *)(a2 + 400) = -1;
      v44 = *(_QWORD *)(a2 + 384);
    }
    else
    {
      v44 = *(_QWORD *)(a2 + 384);
      *(_QWORD *)(a2 + 400) = -1;
    }
    v45 = -1;
    v46 = 0;
    for ( m = 0; m < v8; v46 = ++m )
    {
      if ( v44 )
      {
        v48 = v25[v46];
        if ( v48 > v44 )
        {
          v49 = v48 - v44;
          if ( v45 > v49 )
            v45 = v49;
          *(_QWORD *)(a2 + 400) = v45;
        }
      }
    }
    if ( v45 == -1 )
    {
      *(_QWORD *)(a2 + 400) = 0;
      *(_QWORD *)(a2 + 432) = -1;
      v50 = *(_QWORD *)(a2 + 416);
    }
    else
    {
      v50 = *(_QWORD *)(a2 + 416);
      *(_QWORD *)(a2 + 432) = -1;
    }
    v51 = -1;
    v52 = 0;
    for ( n = 0; n < v8; v52 = ++n )
    {
      if ( v50 )
      {
        v54 = v25[v52];
        if ( v54 > v50 )
        {
          v55 = v54 - v50;
          if ( v51 > v55 )
            v51 = v55;
          *(_QWORD *)(a2 + 432) = v51;
        }
      }
    }
    if ( v51 == -1 )
    {
      *(_QWORD *)(a2 + 432) = 0;
      *(_QWORD *)(a2 + 464) = -1;
      v56 = *(_QWORD *)(a2 + 448);
    }
    else
    {
      v56 = *(_QWORD *)(a2 + 448);
      *(_QWORD *)(a2 + 464) = -1;
    }
    v57 = -1;
    v58 = 0;
    for ( ii = 0; ii < v8; v58 = ++ii )
    {
      if ( v56 )
      {
        v60 = v25[v58];
        if ( v60 > v56 )
        {
          v61 = v60 - v56;
          if ( v57 > v61 )
            v57 = v61;
          *(_QWORD *)(a2 + 464) = v57;
        }
      }
    }
    if ( v57 == -1 )
      goto LABEL_128;
    v62 = 1;
  }
  else
  {
    *(_QWORD *)(a2 + 272) = 0;
LABEL_127:
    *(_QWORD *)(a2 + 400) = 0;
    *(_QWORD *)(a2 + 432) = 0;
LABEL_128:
    v62 = 1;
    *(_QWORD *)(a2 + 464) = 0;
  }
LABEL_74:
  if ( v25 )
  {
    v83 = 0;
    j__free(v25);
  }
  return v62;
}
// 426880: could not find valid save-restore pair for x28
// 426DF0: conditional instruction was optimized away because x3.8!=0
// 426E70: conditional instruction was optimized away because x3.8!=0
// 426EAC: conditional instruction was optimized away because x3.8!=0
