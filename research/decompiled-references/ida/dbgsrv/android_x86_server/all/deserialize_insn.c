/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: deserialize_insn
// Address: 0x000A1C30

//----- (000A1C30) --------------------------------------------------------
unsigned __int8 *__cdecl deserialize_insn(int a1, int a2)
{
  unsigned __int8 *v2; // eax
  char v3; // cl
  unsigned __int8 *v4; // eax
  char v5; // cl
  __int16 v6; // ax
  int v7; // edx
  int v8; // edi
  int v9; // ecx
  unsigned __int8 *v10; // eax
  char v11; // cl
  unsigned __int8 *v12; // eax
  char v13; // cl
  unsigned __int8 *v14; // eax
  char v15; // cl
  unsigned __int8 *v16; // eax
  char v17; // cl
  unsigned __int8 *v18; // eax
  char v19; // cl
  int v20; // eax
  unsigned __int8 *v21; // eax
  char v22; // cl
  unsigned __int8 *v23; // eax
  char v24; // cl
  unsigned __int8 *v25; // eax
  char v26; // cl
  unsigned __int8 *result; // eax
  char v28; // cl
  int v29; // [esp+8h] [ebp-14h]

  *(_DWORD *)a1 = unpack_dq((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
  *(_DWORD *)(a1 + 4) = unpack_dq((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
  *(_DWORD *)(a1 + 8) = unpack_dq((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
  *(_WORD *)(a1 + 12) = unpack_dw((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
  *(_WORD *)(a1 + 14) = unpack_dw((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
  *(_DWORD *)(a1 + 16) = unpack_dd((unsigned int *)a2, *(_DWORD *)(a2 + 4));
  v2 = *(unsigned __int8 **)a2;
  if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
    v3 = 0;
  else
    v3 = *v2++;
  *(_DWORD *)a2 = v2;
  *(_BYTE *)(a1 + 20) = v3;
  v4 = *(unsigned __int8 **)a2;
  if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
    v5 = 0;
  else
    v5 = *v4++;
  *(_DWORD *)a2 = v4;
  *(_BYTE *)(a1 + 21) = v5;
  v6 = unpack_dw((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
  v7 = a1;
  *(_WORD *)(a1 + 22) = v6;
  v8 = -192;
  v9 = 0;
  do
  {
    *(_BYTE *)(v7 + v8 + 216) = v9;
    v10 = *(unsigned __int8 **)a2;
    v29 = v9;
    if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
      v11 = 0;
    else
      v11 = *v10++;
    *(_DWORD *)a2 = v10;
    *(_BYTE *)(v7 + v8 + 217) = v11;
    v12 = *(unsigned __int8 **)a2;
    if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
      v13 = 0;
    else
      v13 = *v12++;
    *(_DWORD *)a2 = v12;
    *(_BYTE *)(v7 + v8 + 218) = v13;
    v14 = *(unsigned __int8 **)a2;
    if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
      v15 = 0;
    else
      v15 = *v14++;
    *(_DWORD *)a2 = v14;
    *(_BYTE *)(v7 + v8 + 219) = v15;
    v16 = *(unsigned __int8 **)a2;
    if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
      v17 = 0;
    else
      v17 = *v16++;
    *(_DWORD *)a2 = v16;
    *(_BYTE *)(v7 + v8 + 220) = v17;
    v18 = *(unsigned __int8 **)a2;
    if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
      v19 = 0;
    else
      v19 = *v18++;
    *(_DWORD *)a2 = v18;
    *(_BYTE *)(v7 + v8 + 221) = v19;
    *(_WORD *)(a1 + v8 + 222) = unpack_dw((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
    *(_DWORD *)(a1 + v8 + 224) = unpack_dq((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
    *(_DWORD *)(a1 + v8 + 228) = unpack_dq((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4)) - 1;
    v20 = unpack_dq((unsigned __int8 **)a2, *(_DWORD *)(a2 + 4));
    v7 = a1;
    *(_DWORD *)(a1 + v8 + 232) = v20 - 1;
    v21 = *(unsigned __int8 **)a2;
    if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
      v22 = 0;
    else
      v22 = *v21++;
    *(_DWORD *)a2 = v21;
    *(_BYTE *)(a1 + v8 + 236) = v22;
    v23 = *(unsigned __int8 **)a2;
    if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
      v24 = 0;
    else
      v24 = *v23++;
    *(_DWORD *)a2 = v23;
    *(_BYTE *)(a1 + v8 + 237) = v24;
    v25 = *(unsigned __int8 **)a2;
    if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
      v26 = 0;
    else
      v26 = *v25++;
    *(_DWORD *)a2 = v25;
    *(_BYTE *)(a1 + v8 + 238) = v26;
    result = *(unsigned __int8 **)a2;
    if ( *(_DWORD *)a2 >= *(_DWORD *)(a2 + 4) )
      v28 = 0;
    else
      v28 = *result++;
    *(_DWORD *)a2 = result;
    *(_BYTE *)(a1 + v8 + 239) = v28;
    v9 = v29;
    LOBYTE(v9) = v29 + 1;
    v8 += 24;
  }
  while ( v8 );
  return result;
}
