/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_483530
// Address: 0x0000000000483530

//----- (0000000000483530) ----------------------------------------------------
unsigned __int8 *__fastcall sub_483530(__int64 a1, __int64 a2)
{
  char v4; // w2
  unsigned __int8 *v5; // x0
  char v6; // w1
  unsigned __int8 *v7; // x0
  __int64 v8; // x20
  int v9; // w21
  char v10; // w1
  unsigned __int8 *v11; // x0
  char v12; // w2
  unsigned __int8 *v13; // x0
  char v14; // w1
  unsigned __int8 *v15; // x0
  char v16; // w2
  unsigned __int8 *v17; // x0
  char v18; // w1
  unsigned __int8 *v19; // x0
  char v20; // w2
  unsigned __int8 *v21; // x0
  char v22; // w1
  unsigned __int8 *v23; // x0
  char v24; // w2
  unsigned __int8 *v25; // x0
  char v26; // w1
  unsigned __int8 *result; // x0

  *(_QWORD *)a1 = sub_48E6E8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8)) - 1;
  *(_QWORD *)(a1 + 8) = sub_48E6E8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8)) - 1;
  *(_QWORD *)(a1 + 16) = sub_48E6E8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8)) - 1;
  *(_WORD *)(a1 + 24) = sub_48E500((unsigned __int64 *)a2, *(_QWORD *)(a2 + 8));
  *(_WORD *)(a1 + 26) = sub_48E500((unsigned __int64 *)a2, *(_QWORD *)(a2 + 8));
  *(_DWORD *)(a1 + 28) = sub_48E5A8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8));
  v4 = 0;
  v5 = *(unsigned __int8 **)a2;
  if ( *(_QWORD *)(a2 + 8) > *(_QWORD *)a2 )
    v4 = *v5++;
  *(_QWORD *)a2 = v5;
  v6 = 0;
  *(_BYTE *)(a1 + 32) = v4;
  v7 = *(unsigned __int8 **)a2;
  if ( *(_QWORD *)(a2 + 8) > *(_QWORD *)a2 )
    v6 = *v7++;
  *(_QWORD *)a2 = v7;
  v8 = a1 + 40;
  *(_BYTE *)(a1 + 33) = v6;
  v9 = 0;
  *(_WORD *)(a1 + 34) = sub_48E500((unsigned __int64 *)a2, *(_QWORD *)(a2 + 8));
  do
  {
    *(_BYTE *)v8 = v9;
    v10 = 0;
    v11 = *(unsigned __int8 **)a2;
    if ( *(_QWORD *)(a2 + 8) > *(_QWORD *)a2 )
      v10 = *v11++;
    *(_QWORD *)a2 = v11;
    v12 = 0;
    *(_BYTE *)(v8 + 1) = v10;
    v13 = *(unsigned __int8 **)a2;
    if ( *(_QWORD *)(a2 + 8) > *(_QWORD *)a2 )
      v12 = *v13++;
    *(_QWORD *)a2 = v13;
    v14 = 0;
    *(_BYTE *)(v8 + 2) = v12;
    v15 = *(unsigned __int8 **)a2;
    if ( *(_QWORD *)(a2 + 8) > *(_QWORD *)a2 )
      v14 = *v15++;
    *(_QWORD *)a2 = v15;
    v16 = 0;
    *(_BYTE *)(v8 + 3) = v14;
    v17 = *(unsigned __int8 **)a2;
    if ( *(_QWORD *)(a2 + 8) > *(_QWORD *)a2 )
      v16 = *v17++;
    *(_QWORD *)a2 = v17;
    v18 = 0;
    *(_BYTE *)(v8 + 4) = v16;
    v19 = *(unsigned __int8 **)a2;
    if ( *(_QWORD *)(a2 + 8) > *(_QWORD *)a2 )
      v18 = *v19++;
    *(_QWORD *)a2 = v19;
    *(_BYTE *)(v8 + 5) = v18;
    *(_WORD *)(v8 + 6) = sub_48E500((unsigned __int64 *)a2, *(_QWORD *)(a2 + 8));
    *(_QWORD *)(v8 + 8) = sub_48E6E8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8)) - 1;
    *(_QWORD *)(v8 + 16) = sub_48E6E8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8)) - 1;
    *(_QWORD *)(v8 + 24) = sub_48E6E8((unsigned __int8 **)a2, *(_QWORD *)(a2 + 8)) - 1;
    v20 = 0;
    v21 = *(unsigned __int8 **)a2;
    if ( *(_QWORD *)(a2 + 8) > *(_QWORD *)a2 )
      v20 = *v21++;
    *(_QWORD *)a2 = v21;
    v22 = 0;
    *(_BYTE *)(v8 + 32) = v20;
    v23 = *(unsigned __int8 **)a2;
    if ( *(_QWORD *)(a2 + 8) > *(_QWORD *)a2 )
      v22 = *v23++;
    *(_QWORD *)a2 = v23;
    v24 = 0;
    *(_BYTE *)(v8 + 33) = v22;
    v25 = *(unsigned __int8 **)a2;
    if ( *(_QWORD *)(a2 + 8) > *(_QWORD *)a2 )
      v24 = *v25++;
    *(_QWORD *)a2 = v25;
    v26 = 0;
    *(_BYTE *)(v8 + 34) = v24;
    result = *(unsigned __int8 **)a2;
    if ( *(_QWORD *)(a2 + 8) > *(_QWORD *)a2 )
      v26 = *result++;
    *(_QWORD *)a2 = result;
    ++v9;
    *(_BYTE *)(v8 + 35) = v26;
    v8 += 40;
  }
  while ( v9 != 8 );
  return result;
}
