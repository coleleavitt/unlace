/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_682E0
// Address: 0x000682E0

//----- (000682E0) --------------------------------------------------------
int __fastcall sub_682E0(int a1, unsigned int *a2)
{
  int v4; // r0
  int v5; // r6
  unsigned int v6; // r0
  const char *v7; // r6
  _BYTE *v8; // r1
  _BYTE *v9; // r2
  bool v10; // zf
  void **v11; // r7
  size_t v12; // r0
  unsigned int v13; // r2
  void *v14; // r0
  const char *v15; // r6
  _BYTE *v16; // r1
  _BYTE *v17; // r2
  void **v18; // r7
  size_t v19; // r0
  size_t v20; // r5
  unsigned int v21; // r2
  void *v22; // r0
  int result; // r0
  unsigned int v24; // [sp+8h] [bp-8h]
  size_t v25; // [sp+Ch] [bp-4h]
  unsigned int v26; // [sp+Ch] [bp-4h]

  v4 = unpack_dq(a2, a2[1]) - 1;
  *(_DWORD *)(a1 + 32) = v4;
  v5 = 16 * v4 + unpack_dq(a2, a2[1]) - 1;
  *(_DWORD *)a1 = v5;
  *(_DWORD *)(a1 + 4) = v5 + unpack_dq(a2, a2[1]) - 1;
  v6 = unpack_dd(a2, a2[1]);
  *(_BYTE *)(a1 + 37) = v6 & 7;
  *(_BYTE *)(a1 + 36) = v6 >> 4;
  v7 = (const char *)*a2;
  v8 = (_BYTE *)*a2;
  do
  {
    if ( (unsigned int)v8 >= a2[1] )
      goto LABEL_9;
    v9 = v8 + 1;
    v10 = *v8++ == 0;
  }
  while ( !v10 );
  *a2 = (unsigned int)v9;
  v11 = (void **)(a1 + 8);
  if ( !v7 || (v12 = strlen(v7)) == 0 )
  {
LABEL_9:
    *(_DWORD *)(a1 + 12) = 0;
    goto LABEL_10;
  }
  v25 = v12;
  v13 = v12 + 1;
  if ( *(_DWORD *)(a1 + 16) >= v12 + 1 )
  {
    v14 = *v11;
  }
  else
  {
    v24 = v12 + 1;
    v14 = qvector_reserve(a1 + 8, *v11, v13, 1u);
    v13 = v24;
    *v11 = v14;
  }
  *(_DWORD *)(a1 + 12) = v13;
  memmove(v14, v7, v25);
  *(_BYTE *)(*(_DWORD *)(a1 + 8) + v25) = 0;
LABEL_10:
  v15 = (const char *)*a2;
  v16 = (_BYTE *)*a2;
  do
  {
    if ( (unsigned int)v16 >= a2[1] )
      goto LABEL_18;
    v17 = v16 + 1;
    v10 = *v16++ == 0;
  }
  while ( !v10 );
  *a2 = (unsigned int)v17;
  v18 = (void **)(a1 + 20);
  if ( !v15 || (v19 = strlen(v15)) == 0 )
  {
LABEL_18:
    *(_DWORD *)(a1 + 24) = 0;
    return 0;
  }
  v20 = v19;
  v21 = v19 + 1;
  if ( *(_DWORD *)(a1 + 28) >= v19 + 1 )
  {
    v22 = *v18;
  }
  else
  {
    v26 = v19 + 1;
    v22 = qvector_reserve(a1 + 20, *v18, v21, 1u);
    v21 = v26;
    *v18 = v22;
  }
  *(_DWORD *)(a1 + 24) = v21;
  memmove(v22, v15, v20);
  result = *(_DWORD *)(a1 + 20);
  *(_BYTE *)(result + v20) = 0;
  return result;
}
