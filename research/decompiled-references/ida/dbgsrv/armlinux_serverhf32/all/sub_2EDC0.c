/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2EDC0
// Address: 0x0002EDC0

//----- (0002EDC0) --------------------------------------------------------
int __fastcall sub_2EDC0(int a1, int a2, __int64 *a3)
{
  __int64 v5; // r0
  int v6; // r3
  int v7; // r5
  unsigned __int64 v8; // r2
  int v9; // r11
  unsigned __int64 v10; // r0
  int v11; // r4
  _QWORD *v12; // r7
  int v13; // r12
  unsigned __int64 v14; // r2
  int v15; // r11
  void *v16; // r1
  int v17; // r3
  __int64 v18; // r6
  unsigned __int64 v19; // r8
  int i; // r2
  __int64 v21; // r4
  __int64 v22; // r6
  unsigned __int64 v23; // r8
  int j; // r2
  __int64 v25; // r4
  __int64 v26; // r6
  unsigned __int64 v27; // r8
  int k; // r2
  __int64 v29; // r4
  __int64 v30; // r6
  unsigned __int64 v31; // r8
  int m; // r2
  __int64 v33; // r4
  __int64 v34; // r6
  unsigned __int64 v35; // r8
  int n; // r2
  __int64 v37; // r4
  __int64 v38; // r6
  unsigned __int64 v39; // r8
  int ii; // r2
  __int64 v41; // r4
  bool v42; // zf
  int v43; // r4
  int v45; // r3
  int v46; // r3
  int v47; // r2
  __int64 v48; // kr00_8
  int v49; // r4
  int v50; // r3
  bool v51; // zf
  int v52; // r3
  bool v53; // zf
  unsigned int *v54; // r0
  int v55; // r3
  int v56; // r3
  unsigned __int64 v57; // r6
  int v58; // r3
  int v59; // r2
  unsigned __int64 v60; // kr08_8
  unsigned __int64 v61; // r0
  int v62; // r4
  int v63; // r3
  int v64; // r2
  void *v65; // r0
  unsigned __int64 v68; // [sp+48h] [bp-24h]
  void *ptr; // [sp+58h] [bp-14h] BYREF
  int v70; // [sp+5Ch] [bp-10h]
  unsigned int v71; // [sp+60h] [bp-Ch]

  sub_2ED74((_WORD *)a2, (unsigned __int16 *)a1);
  v5 = *a3;
  ptr = nullptr;
  v70 = 0;
  v71 = 0;
  v6 = 16 * HIDWORD(v5);
  if ( !(16 * HIDWORD(v5)) )
  {
    v54 = (unsigned int *)(16 * HIDWORD(v5));
    *(_QWORD *)(a2 + 48) = 0;
    goto LABEL_133;
  }
  v7 = v5;
  while ( 1 )
  {
    v8 = *(_QWORD *)v7;
    if ( *(_QWORD *)v7 == 26 )
    {
      v9 = 11;
      goto LABEL_13;
    }
    if ( v8 < 0x1B )
    {
      if ( v8 == 7 )
      {
        v9 = 3;
        goto LABEL_13;
      }
      if ( v8 >= 8 )
      {
        switch ( v8 )
        {
          case 0x17uLL:
            v9 = 6;
            goto LABEL_13;
          case 0x19uLL:
            v9 = 10;
            goto LABEL_13;
          case 0x11uLL:
            v9 = 2;
            goto LABEL_13;
        }
      }
      else
      {
        if ( v8 == 5 )
        {
          v9 = 0;
          goto LABEL_13;
        }
        if ( v8 >= 6 )
        {
          v9 = 1;
          goto LABEL_13;
        }
        if ( v8 == 4 )
        {
          v9 = 7;
LABEL_13:
          v10 = *(_QWORD *)(v7 + 8);
          v11 = *(_DWORD *)(a1 + 464);
          if ( v11 )
          {
            v12 = *(_QWORD **)(a1 + 460);
            v13 = 0;
            while ( 1 )
            {
              v14 = v12[2];
              if ( v10 >= v14 && v10 < v14 + v12[1] )
                break;
              ++v13;
              v12 += 3;
              if ( v13 == v11 )
                goto LABEL_19;
            }
            v48 = (unsigned int)(v10 - v14) + *v12;
            v49 = v10 - v14 + *(_DWORD *)v12;
          }
          else
          {
LABEL_19:
            v49 = -1;
            v48 = -1;
          }
          v15 = 32 * v9;
          v16 = ptr;
          v17 = v70;
          *(_QWORD *)(a2 + v15) = v48;
          if ( v71 < v17 + 1 )
          {
            v16 = sub_77EB0((int)&ptr, v16, v17 + 1, 4u);
            v17 = v70;
            ptr = v16;
          }
          *((_DWORD *)v16 + v17) = v49;
          ++v70;
          *(_QWORD *)(v15 + a2 + 8) = *(_QWORD *)(v7 + 8);
          v5 = *a3;
          goto LABEL_23;
        }
      }
      goto LABEL_89;
    }
    if ( v8 == 1879047925 )
    {
      v9 = 8;
      goto LABEL_13;
    }
    if ( v8 > 0x6FFFFEF5 )
      break;
    switch ( v8 )
    {
      case 0x6000000FuLL:
        v50 = *(unsigned __int16 *)(a1 + 406);
        v51 = v50 == 183;
        if ( v50 != 183 )
          v51 = v50 == 40;
        if ( v51 )
        {
          v9 = 4;
          goto LABEL_13;
        }
        break;
      case 0x60000011uLL:
        v52 = *(unsigned __int16 *)(a1 + 406);
        v53 = v52 == 40;
        if ( v52 != 40 )
          v53 = v52 == 183;
        if ( v53 )
        {
          v9 = 5;
          goto LABEL_13;
        }
        break;
      case 0x20uLL:
        v9 = 9;
        goto LABEL_13;
      default:
        goto LABEL_89;
    }
LABEL_23:
    v7 += 16;
    if ( v7 == (_DWORD)v5 + 16 * HIDWORD(v5) )
      goto LABEL_24;
  }
  switch ( v8 )
  {
    case 0x6FFFFFFCuLL:
      v9 = 12;
      goto LABEL_13;
    case 0x6FFFFFFEuLL:
      v9 = 13;
      goto LABEL_13;
    case 0x6FFFFFF0uLL:
      v9 = 14;
      goto LABEL_13;
  }
LABEL_89:
  if ( v8 == 27 )
  {
    v45 = 10;
    goto LABEL_95;
  }
  if ( v8 >= 0x1C )
  {
    if ( v8 == 33 )
    {
      v45 = 9;
      goto LABEL_95;
    }
    if ( v8 < 0x22 )
    {
      if ( v8 == 28 )
      {
        v45 = 11;
        goto LABEL_95;
      }
    }
    else
    {
      if ( v8 == 1610612752 )
      {
        v45 = 4;
        goto LABEL_95;
      }
      if ( v8 == 1610612754 )
      {
        v45 = 5;
        goto LABEL_95;
      }
    }
  }
  else
  {
    if ( v8 == 8 )
    {
      v45 = 3;
      goto LABEL_95;
    }
    if ( v8 < 9 )
    {
      if ( v8 == 2 )
      {
        v45 = 6;
        goto LABEL_95;
      }
    }
    else
    {
      if ( v8 == 10 )
      {
        v45 = 0;
LABEL_95:
        v46 = a2 + 32 * v45;
        v47 = *(_DWORD *)(v7 + 12);
        *(_DWORD *)(v46 + 16) = *(_DWORD *)(v7 + 8);
        *(_DWORD *)(v46 + 20) = v47;
        v5 = *a3;
        goto LABEL_23;
      }
      if ( v8 == 18 )
      {
        v45 = 2;
        goto LABEL_95;
      }
    }
  }
  switch ( v8 )
  {
    case 0xBuLL:
      v55 = 1;
      goto LABEL_141;
    case 0x13uLL:
      v55 = 2;
      goto LABEL_141;
    case 9uLL:
      v55 = 3;
LABEL_141:
      *(_WORD *)(a2 + 32 * v55 + 24) = *(_DWORD *)(v7 + 8);
      v5 = *a3;
      goto LABEL_23;
    case 0x6FFFFFFDuLL:
      v56 = 12;
      goto LABEL_156;
    case 0x6FFFFFFFuLL:
      v56 = 13;
LABEL_156:
      *(_DWORD *)(a2 + 32 * v56 + 28) = *(_DWORD *)(v7 + 8);
      v5 = *a3;
      goto LABEL_23;
  }
  if ( v8 >= 0xE )
  {
    if ( v8 == 20 )
    {
      v64 = *(_DWORD *)(v7 + 8);
      *(_DWORD *)(a2 + 480) = v64;
      if ( v64 != 17 && v64 != 7 )
      {
        v43 = (*(int (__fastcall **)(int, int))(a1 + 384))(a1, 15);
        if ( !v43 )
        {
          v54 = (unsigned int *)ptr;
          goto LABEL_81;
        }
      }
      v5 = *a3;
    }
    goto LABEL_23;
  }
  if ( v8 >= 0xC )
  {
LABEL_162:
    v57 = *(_QWORD *)(v7 + 8);
    if ( *(_DWORD *)(a1 + 464) )
    {
      v58 = *(_DWORD *)(a1 + 460);
      v59 = 0;
      v60 = v68;
      do
      {
        v61 = *(_QWORD *)(v58 + 16);
        if ( v57 >= v61 )
        {
          v60 = v61 + *(_QWORD *)(v58 + 8);
          if ( v57 < v60 )
          {
            v68 = v60;
            v62 = v57 - v61 + *(_DWORD *)v58;
            goto LABEL_169;
          }
        }
        ++v59;
        v58 += 24;
      }
      while ( v59 != *(_DWORD *)(a1 + 464) );
      v68 = v60;
      v62 = -1;
    }
    else
    {
      v62 = -1;
    }
LABEL_169:
    v63 = v70;
    if ( v71 < v70 + 1 )
    {
      v65 = sub_77EB0((int)&ptr, ptr, v70 + 1, 4u);
      v63 = v70;
      ptr = v65;
    }
    *((_DWORD *)ptr + v63) = v62;
    v5 = *a3;
    ++v70;
    goto LABEL_23;
  }
  if ( v8 )
  {
    if ( v8 == 3 )
      goto LABEL_162;
    goto LABEL_23;
  }
LABEL_24:
  v54 = (unsigned int *)ptr;
  v6 = v70;
  *(_DWORD *)(a2 + 48) = -1;
  *(_DWORD *)(a2 + 52) = 0;
  if ( !v6 )
  {
    *(_QWORD *)(a2 + 48) = 0;
    *(_QWORD *)(a2 + 240) = 0;
    goto LABEL_131;
  }
  v18 = *(_QWORD *)(a2 + 32);
  v19 = 0xFFFFFFFFLL;
  for ( i = 0; i != v6; ++i )
  {
    if ( v18 )
    {
      v21 = v54[i];
      if ( v18 < (unsigned int)v21 )
      {
        if ( v21 - v18 < v19 )
          v19 = v21 - v18;
        *(_QWORD *)(a2 + 48) = v19;
      }
    }
  }
  *(_QWORD *)(a2 + 240) = 0xFFFFFFFFLL;
  if ( v19 == 0xFFFFFFFF )
    *(_QWORD *)(a2 + 48) = 0;
  v22 = *(_QWORD *)(a2 + 224);
  v23 = 0xFFFFFFFFLL;
  for ( j = 0; j != v6; ++j )
  {
    if ( v22 )
    {
      v25 = v54[j];
      if ( v22 < (unsigned int)v25 )
      {
        if ( v25 - v22 < v23 )
          v23 = v25 - v22;
        *(_QWORD *)(a2 + 240) = v23;
      }
    }
  }
  if ( v23 != 0xFFFFFFFF )
  {
    *(_QWORD *)(a2 + 272) = 0xFFFFFFFFLL;
    goto LABEL_43;
  }
LABEL_133:
  *(_QWORD *)(a2 + 240) = 0;
  *(_QWORD *)(a2 + 272) = 0xFFFFFFFFLL;
  if ( !v6 )
  {
LABEL_131:
    *(_QWORD *)(a2 + 272) = 0;
    *(_QWORD *)(a2 + 400) = 0;
    *(_QWORD *)(a2 + 432) = 0;
    goto LABEL_132;
  }
LABEL_43:
  v26 = *(_QWORD *)(a2 + 256);
  v27 = 0xFFFFFFFFLL;
  for ( k = 0; k != v6; ++k )
  {
    if ( v26 )
    {
      v29 = v54[k];
      if ( v26 < (unsigned int)v29 )
      {
        if ( v29 - v26 < v27 )
          v27 = v29 - v26;
        *(_QWORD *)(a2 + 272) = v27;
      }
    }
  }
  *(_QWORD *)(a2 + 400) = 0xFFFFFFFFLL;
  if ( v27 == 0xFFFFFFFF )
    *(_QWORD *)(a2 + 272) = 0;
  v30 = *(_QWORD *)(a2 + 384);
  v31 = 0xFFFFFFFFLL;
  for ( m = 0; m != v6; ++m )
  {
    if ( v30 )
    {
      v33 = v54[m];
      if ( v30 < (unsigned int)v33 )
      {
        if ( v33 - v30 < v31 )
          v31 = v33 - v30;
        *(_QWORD *)(a2 + 400) = v31;
      }
    }
  }
  *(_QWORD *)(a2 + 432) = 0xFFFFFFFFLL;
  if ( v31 == 0xFFFFFFFF )
    *(_QWORD *)(a2 + 400) = 0;
  v34 = *(_QWORD *)(a2 + 416);
  v35 = 0xFFFFFFFFLL;
  for ( n = 0; n != v6; ++n )
  {
    if ( v34 )
    {
      v37 = v54[n];
      if ( v34 < (unsigned int)v37 )
      {
        if ( v37 - v34 < v35 )
          v35 = v37 - v34;
        *(_QWORD *)(a2 + 432) = v35;
      }
    }
  }
  *(_QWORD *)(a2 + 464) = 0xFFFFFFFFLL;
  if ( v35 == 0xFFFFFFFF )
    *(_QWORD *)(a2 + 432) = 0;
  v38 = *(_QWORD *)(a2 + 448);
  v39 = 0xFFFFFFFFLL;
  for ( ii = 0; ii != v6; ++ii )
  {
    if ( v38 )
    {
      v41 = v54[ii];
      if ( v38 < (unsigned int)v41 )
      {
        if ( v41 - v38 < v39 )
          v39 = v41 - v38;
        *(_QWORD *)(a2 + 464) = v39;
      }
    }
  }
  v42 = HIDWORD(v39) == 0;
  if ( !HIDWORD(v39) )
    v42 = (_DWORD)v39 == -1;
  if ( v42 )
  {
LABEL_132:
    v43 = 1;
    *(_QWORD *)(a2 + 464) = 0;
  }
  else
  {
    v43 = 1;
  }
LABEL_81:
  if ( v54 )
  {
    v70 = 0;
    sub_77E08(v54);
  }
  return v43;
}
// 2F422: variable 'v68' is possibly undefined
