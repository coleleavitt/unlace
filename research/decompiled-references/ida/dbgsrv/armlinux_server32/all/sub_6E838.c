/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6E838
// Address: 0x0006E838

//----- (0006E838) --------------------------------------------------------
unsigned int __fastcall sub_6E838(int a1, int a2)
{
  int v4; // r5
  int v5; // r6
  unsigned int v6; // r2
  unsigned __int8 *v7; // r3
  bool v8; // cc
  unsigned __int8 v9; // r2
  unsigned int v10; // r2
  unsigned __int8 *v11; // r3
  bool v12; // cc
  unsigned __int8 v13; // r2
  unsigned int v14; // r2
  unsigned __int8 *v15; // r3
  bool v16; // cc
  unsigned __int8 v17; // r2
  unsigned int v18; // r2
  unsigned __int8 *v19; // r3
  bool v20; // cc
  unsigned __int8 v21; // r2
  unsigned int v22; // r2
  unsigned __int8 *v23; // r3
  bool v24; // cc
  unsigned __int8 v25; // r2
  unsigned int v26; // r2
  unsigned __int8 *v27; // r3
  bool v28; // cc
  unsigned __int8 v29; // r2
  unsigned int v30; // r2
  unsigned __int8 *v31; // r3
  bool v32; // cc
  unsigned __int8 v33; // r2
  unsigned int result; // r0
  unsigned int v35; // r2
  unsigned __int8 *v36; // r3
  bool v37; // cc
  unsigned __int8 v38; // r2
  unsigned int v39; // r2
  unsigned __int8 *v40; // r3
  bool v41; // cc
  unsigned __int8 v42; // r2
  unsigned int v43; // r2
  unsigned __int8 *v44; // r3
  bool v45; // cc
  unsigned __int8 v46; // r2
  unsigned int v47; // r2
  unsigned __int8 *v48; // r3
  bool v49; // cc
  unsigned __int8 v50; // r2

  v4 = a1;
  *(_DWORD *)a1 = sub_763AC((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
  v5 = 0;
  *(_DWORD *)(a1 + 4) = sub_763AC((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
  *(_DWORD *)(a1 + 8) = sub_763AC((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
  *(_WORD *)(a1 + 12) = sub_7627C((unsigned int *)a2, *(_DWORD *)(a2 + 4));
  *(_WORD *)(a1 + 14) = sub_7627C((unsigned int *)a2, *(_DWORD *)(a2 + 4));
  *(_DWORD *)(a1 + 16) = sub_762E4((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
  v6 = *(_DWORD *)(a2 + 4);
  v7 = *(unsigned __int8 **)a2;
  v8 = v6 > *(_DWORD *)a2;
  if ( v6 <= *(_DWORD *)a2 )
    v9 = 0;
  else
    v9 = *v7;
  if ( v8 )
    ++v7;
  *(_DWORD *)a2 = v7;
  *(_BYTE *)(a1 + 20) = v9;
  v10 = *(_DWORD *)(a2 + 4);
  v11 = *(unsigned __int8 **)a2;
  v12 = v10 > *(_DWORD *)a2;
  if ( v10 <= *(_DWORD *)a2 )
    v13 = 0;
  else
    v13 = *v11;
  if ( v12 )
    ++v11;
  *(_DWORD *)a2 = v11;
  *(_BYTE *)(a1 + 21) = v13;
  *(_WORD *)(a1 + 22) = sub_7627C((unsigned int *)a2, *(_DWORD *)(a2 + 4));
  do
  {
    *(_BYTE *)(v4 + 24) = v5;
    v14 = *(_DWORD *)(a2 + 4);
    v15 = *(unsigned __int8 **)a2;
    ++v5;
    v4 += 24;
    v16 = v14 > *(_DWORD *)a2;
    if ( v14 <= *(_DWORD *)a2 )
      v17 = 0;
    else
      v17 = *v15;
    if ( v16 )
      ++v15;
    *(_DWORD *)a2 = v15;
    *(_BYTE *)(v4 + 1) = v17;
    v18 = *(_DWORD *)(a2 + 4);
    v19 = *(unsigned __int8 **)a2;
    v20 = v18 > *(_DWORD *)a2;
    if ( v18 <= *(_DWORD *)a2 )
      v21 = 0;
    else
      v21 = *v19;
    if ( v20 )
      ++v19;
    *(_DWORD *)a2 = v19;
    *(_BYTE *)(v4 + 2) = v21;
    v22 = *(_DWORD *)(a2 + 4);
    v23 = *(unsigned __int8 **)a2;
    v24 = v22 > *(_DWORD *)a2;
    if ( v22 <= *(_DWORD *)a2 )
      v25 = 0;
    else
      v25 = *v23;
    if ( v24 )
      ++v23;
    *(_DWORD *)a2 = v23;
    *(_BYTE *)(v4 + 3) = v25;
    v26 = *(_DWORD *)(a2 + 4);
    v27 = *(unsigned __int8 **)a2;
    v28 = v26 > *(_DWORD *)a2;
    if ( v26 <= *(_DWORD *)a2 )
      v29 = 0;
    else
      v29 = *v27;
    if ( v28 )
      ++v27;
    *(_DWORD *)a2 = v27;
    *(_BYTE *)(v4 + 4) = v29;
    v30 = *(_DWORD *)(a2 + 4);
    v31 = *(unsigned __int8 **)a2;
    v32 = v30 > *(_DWORD *)a2;
    if ( v30 <= *(_DWORD *)a2 )
      v33 = 0;
    else
      v33 = *v31;
    if ( v32 )
      ++v31;
    *(_DWORD *)a2 = v31;
    *(_BYTE *)(v4 + 5) = v33;
    *(_WORD *)(v4 + 6) = sub_7627C((unsigned int *)a2, *(_DWORD *)(a2 + 4));
    *(_DWORD *)(v4 + 8) = sub_763AC((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
    *(_DWORD *)(v4 + 12) = sub_763AC((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
    result = sub_763AC((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
    *(_DWORD *)(v4 + 16) = result;
    v35 = *(_DWORD *)(a2 + 4);
    v36 = *(unsigned __int8 **)a2;
    v37 = v35 > *(_DWORD *)a2;
    if ( v35 <= *(_DWORD *)a2 )
      v38 = 0;
    else
      v38 = *v36;
    if ( v37 )
      ++v36;
    *(_DWORD *)a2 = v36;
    *(_BYTE *)(v4 + 20) = v38;
    v39 = *(_DWORD *)(a2 + 4);
    v40 = *(unsigned __int8 **)a2;
    v41 = v39 > *(_DWORD *)a2;
    if ( v39 <= *(_DWORD *)a2 )
      v42 = 0;
    else
      v42 = *v40;
    if ( v41 )
      ++v40;
    *(_DWORD *)a2 = v40;
    *(_BYTE *)(v4 + 21) = v42;
    v43 = *(_DWORD *)(a2 + 4);
    v44 = *(unsigned __int8 **)a2;
    v45 = v43 > *(_DWORD *)a2;
    if ( v43 <= *(_DWORD *)a2 )
      v46 = 0;
    else
      v46 = *v44;
    if ( v45 )
      ++v44;
    *(_DWORD *)a2 = v44;
    *(_BYTE *)(v4 + 22) = v46;
    v47 = *(_DWORD *)(a2 + 4);
    v48 = *(unsigned __int8 **)a2;
    v49 = v47 > *(_DWORD *)a2;
    if ( v47 <= *(_DWORD *)a2 )
      v50 = 0;
    else
      v50 = *v48;
    if ( v49 )
      ++v48;
    *(_DWORD *)a2 = v48;
    *(_BYTE *)(v4 + 23) = v50;
  }
  while ( v5 != 8 );
  return result;
}
