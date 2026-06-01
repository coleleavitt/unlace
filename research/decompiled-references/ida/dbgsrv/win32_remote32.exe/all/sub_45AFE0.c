/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45AFE0
// Address: 0x0045AFE0

//----- (0045AFE0) --------------------------------------------------------
unsigned __int8 *__stdcall sub_45AFE0(int a1, int a2)
{
  unsigned __int8 v2; // dl
  unsigned __int8 *v3; // ecx
  unsigned __int8 *v4; // eax
  unsigned __int8 v5; // dl
  unsigned __int8 *v6; // ecx
  unsigned __int8 *v7; // eax
  int v8; // ebx
  int v9; // edi
  unsigned __int8 v10; // dl
  unsigned __int8 *v11; // ecx
  unsigned __int8 *v12; // eax
  unsigned __int8 v13; // dl
  unsigned __int8 *v14; // ecx
  unsigned __int8 *v15; // eax
  unsigned __int8 v16; // dl
  unsigned __int8 *v17; // ecx
  unsigned __int8 *v18; // eax
  unsigned __int8 v19; // dl
  unsigned __int8 *v20; // ecx
  unsigned __int8 *v21; // eax
  unsigned __int8 v22; // dl
  unsigned __int8 *v23; // ecx
  unsigned __int8 *v24; // eax
  int v25; // eax
  unsigned __int8 v26; // dl
  unsigned __int8 *v27; // ecx
  unsigned __int8 *v28; // eax
  unsigned __int8 v29; // dl
  unsigned __int8 *v30; // ecx
  unsigned __int8 *v31; // eax
  unsigned __int8 v32; // dl
  unsigned __int8 *v33; // ecx
  unsigned __int8 *v34; // eax
  unsigned __int8 v35; // dl
  unsigned __int8 *v36; // ecx
  unsigned __int8 *result; // eax

  *(_DWORD *)a1 = sub_4542B0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
  *(_DWORD *)(a1 + 4) = sub_4542B0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
  *(_DWORD *)(a1 + 8) = sub_4542B0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
  *(_WORD *)(a1 + 12) = sub_4542E0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
  *(_WORD *)(a1 + 14) = sub_4542E0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
  *(_DWORD *)(a1 + 16) = sub_4541E0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
  v2 = 0;
  v3 = *(unsigned __int8 **)a2;
  if ( *(_DWORD *)a2 < *(_DWORD *)(a2 + 4) )
    v2 = *v3;
  v4 = v3 + 1;
  if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
    v4 = *(unsigned __int8 **)a2;
  *(_DWORD *)a2 = v4;
  *(_BYTE *)(a1 + 20) = v2;
  v5 = 0;
  v6 = *(unsigned __int8 **)a2;
  if ( *(_DWORD *)a2 < *(_DWORD *)(a2 + 4) )
    v5 = *v6;
  v7 = v6 + 1;
  if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
    v7 = *(unsigned __int8 **)a2;
  *(_DWORD *)a2 = v7;
  *(_BYTE *)(a1 + 21) = v5;
  *(_WORD *)(a1 + 22) = sub_4542E0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
  v8 = 0;
  v9 = a1 + 26;
  do
  {
    *(_BYTE *)(v9 - 2) = v8;
    v10 = 0;
    v11 = *(unsigned __int8 **)a2;
    if ( *(_DWORD *)a2 < *(_DWORD *)(a2 + 4) )
      v10 = *v11;
    v12 = v11 + 1;
    if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
      v12 = *(unsigned __int8 **)a2;
    *(_DWORD *)a2 = v12;
    *(_BYTE *)(v9 - 1) = v10;
    v13 = 0;
    v14 = *(unsigned __int8 **)a2;
    if ( *(_DWORD *)a2 < *(_DWORD *)(a2 + 4) )
      v13 = *v14;
    v15 = v14 + 1;
    if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
      v15 = *(unsigned __int8 **)a2;
    *(_DWORD *)a2 = v15;
    *(_BYTE *)v9 = v13;
    v16 = 0;
    v17 = *(unsigned __int8 **)a2;
    if ( *(_DWORD *)a2 < *(_DWORD *)(a2 + 4) )
      v16 = *v17;
    v18 = v17 + 1;
    if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
      v18 = *(unsigned __int8 **)a2;
    *(_DWORD *)a2 = v18;
    *(_BYTE *)(v9 + 1) = v16;
    v19 = 0;
    v20 = *(unsigned __int8 **)a2;
    if ( *(_DWORD *)a2 < *(_DWORD *)(a2 + 4) )
      v19 = *v20;
    v21 = v20 + 1;
    if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
      v21 = *(unsigned __int8 **)a2;
    *(_DWORD *)a2 = v21;
    *(_BYTE *)(v9 + 2) = v19;
    v22 = 0;
    v23 = *(unsigned __int8 **)a2;
    if ( *(_DWORD *)a2 < *(_DWORD *)(a2 + 4) )
      v22 = *v23;
    v24 = v23 + 1;
    if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
      v24 = *(unsigned __int8 **)a2;
    *(_DWORD *)a2 = v24;
    *(_BYTE *)(v9 + 3) = v22;
    *(_WORD *)(v9 + 4) = sub_4542E0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
    *(_DWORD *)(v9 + 6) = sub_4542B0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
    *(_DWORD *)(v9 + 10) = sub_4542B0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
    v25 = sub_4542B0((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
    v26 = 0;
    *(_DWORD *)(v9 + 14) = v25 - 1;
    v27 = *(unsigned __int8 **)a2;
    if ( *(_DWORD *)a2 < *(_DWORD *)(a2 + 4) )
      v26 = *v27;
    v28 = v27 + 1;
    if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
      v28 = *(unsigned __int8 **)a2;
    *(_DWORD *)a2 = v28;
    *(_BYTE *)(v9 + 18) = v26;
    v29 = 0;
    v30 = *(unsigned __int8 **)a2;
    if ( *(_DWORD *)a2 < *(_DWORD *)(a2 + 4) )
      v29 = *v30;
    v31 = v30 + 1;
    if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
      v31 = *(unsigned __int8 **)a2;
    *(_DWORD *)a2 = v31;
    *(_BYTE *)(v9 + 19) = v29;
    v32 = 0;
    v33 = *(unsigned __int8 **)a2;
    if ( *(_DWORD *)a2 < *(_DWORD *)(a2 + 4) )
      v32 = *v33;
    v34 = v33 + 1;
    if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
      v34 = *(unsigned __int8 **)a2;
    *(_DWORD *)a2 = v34;
    *(_BYTE *)(v9 + 20) = v32;
    v35 = 0;
    v36 = *(unsigned __int8 **)a2;
    if ( *(_DWORD *)a2 < *(_DWORD *)(a2 + 4) )
      v35 = *v36;
    result = v36 + 1;
    if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
      result = *(unsigned __int8 **)a2;
    ++v8;
    *(_DWORD *)a2 = result;
    *(_BYTE *)(v9 + 21) = v35;
    v9 += 24;
  }
  while ( v8 < 8 );
  return result;
}
