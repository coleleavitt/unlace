/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_711E4
// Address: 0x000711E4

//----- (000711E4) --------------------------------------------------------
int __fastcall sub_711E4(int a1, int a2)
{
  int v4; // r1
  __int16 v5; // r0
  __int16 v6; // r2
  unsigned __int16 *v7; // r3
  unsigned __int16 *v9; // r10
  unsigned __int16 *v10; // r8
  int v11; // r9
  unsigned __int16 *v12; // r11
  unsigned __int16 *v13; // r3
  int v14; // r1
  unsigned int v15; // r12
  unsigned int v16; // t1
  unsigned int v17; // t1
  bool v18; // cc
  unsigned __int16 *v19; // r0
  _WORD *v20; // r1
  int v21; // r12
  int v22; // lr
  int v23; // t1
  int v24; // t1
  unsigned int v25; // r3
  __int16 v26; // r12
  int *v27; // r0
  __int16 v28; // r1
  __int16 v29; // t1
  __int16 v30; // r3
  bool v31; // nf
  unsigned __int16 *v32; // r2
  int v33; // r4
  int v34; // t1
  int v35; // r1
  int v36; // r2
  int v37; // r3
  int v38; // r5
  int v40; // r7
  unsigned int v41; // r2
  int *v42; // r0
  unsigned int v43; // r3
  bool v44; // cc
  __int16 v45; // r1
  __int16 v46; // r2
  __int16 v47; // t1
  __int16 v48; // r3
  bool v49; // zf
  int v50; // [sp+Ch] [bp-20h] BYREF
  int v51; // [sp+10h] [bp-1Ch] BYREF
  int v52; // [sp+14h] [bp-18h]
  int v53; // [sp+18h] [bp-14h]
  int v54; // [sp+1Ch] [bp-10h]
  __int16 v55; // [sp+20h] [bp-Ch]
  _BYTE v56[2]; // [sp+22h] [bp-Ah] BYREF

  v4 = *(unsigned __int16 *)(a1 + 8);
  v5 = *(_WORD *)a2;
  v52 = 0;
  LOWORD(v50) = v5;
  v6 = *(_WORD *)(a2 + 2);
  v51 = 0;
  HIWORD(v50) = v6;
  v53 = 0;
  v54 = 0;
  v55 = 0;
  if ( !v4 )
  {
    v7 = (unsigned __int16 *)(a1 + 10);
    while ( *v7++ )
    {
      if ( v7 == (unsigned __int16 *)(a1 + 22) )
      {
        if ( (*(_WORD *)(a1 + 6) & 1) != 0 )
          break;
        v40 = 114;
        sub_71168(a2);
        sub_71168(a1);
        do
        {
          v41 = *(unsigned __int16 *)(a1 + 6);
          v42 = (int *)v56;
          v43 = *(unsigned __int16 *)(a2 + 6);
          v44 = v41 > v43;
          if ( v41 > v43 )
          {
            v45 = 0;
          }
          else
          {
            LOWORD(v43) = v43 - v41;
            v45 = 1;
          }
          v46 = 0;
          if ( !v44 )
            *(_WORD *)(a2 + 6) = v43;
          do
          {
            v47 = *((_WORD *)v42 - 1);
            v42 = (int *)((char *)v42 - 2);
            v48 = 2 * v47;
            if ( v47 < 0 )
              v46 |= 1u;
            v49 = (v46 & 2) == 0;
            v46 *= 2;
            if ( !v49 )
              v48 |= 1u;
            *(_WORD *)v42 = v48;
          }
          while ( v42 != &v51 );
          HIWORD(v54) |= v45;
          sub_711A8(a2);
          --v40;
        }
        while ( v40 );
        v10 = (unsigned __int16 *)(a2 + 4);
        goto LABEL_20;
      }
    }
  }
  v9 = (unsigned __int16 *)(a1 + 2);
  v10 = (unsigned __int16 *)(a2 + 4);
  v11 = 114;
  v12 = (unsigned __int16 *)(a1 + 20);
  do
  {
    v13 = v9;
    v14 = a2 + 2;
    while ( 1 )
    {
      v16 = v13[1];
      ++v13;
      v15 = v16;
      v17 = *(unsigned __int16 *)(v14 + 2);
      v14 += 2;
      v18 = v15 > v17;
      if ( v15 != v17 )
        break;
      if ( v12 == v13 )
        goto LABEL_10;
    }
    if ( v18 )
    {
      v26 = 0;
      goto LABEL_13;
    }
LABEL_10:
    v19 = v12;
    v20 = (_WORD *)(a2 + 22);
    v21 = 0;
    do
    {
      v23 = *v19--;
      v22 = v23;
      v24 = (unsigned __int16)*--v20;
      v25 = v24 - v22 - v21;
      *v20 = v25;
      v21 = HIWORD(v25) & 1;
    }
    while ( v19 != v9 );
    v26 = 1;
LABEL_13:
    v27 = (int *)v56;
    v28 = 0;
    do
    {
      v29 = *((_WORD *)v27 - 1);
      v27 = (int *)((char *)v27 - 2);
      v30 = 2 * v29;
      if ( v29 < 0 )
        v28 |= 1u;
      v31 = (v28 & 2) != 0;
      v28 *= 2;
      if ( v31 )
        v30 |= 1u;
      *(_WORD *)v27 = v30;
    }
    while ( &v51 != v27 );
    HIWORD(v54) |= v26;
    sub_711A8(a2);
    --v11;
  }
  while ( v11 );
LABEL_20:
  sub_71168((int)&v50);
  sub_71168((int)&v50);
  v32 = v10 + 9;
  while ( 1 )
  {
    v34 = *v10++;
    v33 = v34;
    if ( v34 )
      break;
    if ( v10 == v32 )
      goto LABEL_23;
  }
  v33 = 1;
LABEL_23:
  v35 = v51;
  v36 = v52;
  v37 = v53;
  *(_DWORD *)a2 = v50;
  *(_DWORD *)(a2 + 4) = v35;
  *(_DWORD *)(a2 + 8) = v36;
  *(_DWORD *)(a2 + 12) = v37;
  v38 = a2 + 16;
  LOWORD(v35) = v55;
  *(_DWORD *)v38 = v54;
  *(_WORD *)(v38 + 4) = v35;
  return v33;
}
