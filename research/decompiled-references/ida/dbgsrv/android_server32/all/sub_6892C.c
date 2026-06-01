/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6892C
// Address: 0x0006892C

//----- (0006892C) --------------------------------------------------------
int __fastcall sub_6892C(int a1, unsigned int *a2)
{
  const char *v4; // r5
  _BYTE *v5; // r1
  _BYTE *v6; // r2
  void **v8; // r7
  size_t v9; // r0
  size_t v10; // r6
  unsigned int v11; // r2
  void *v12; // r0
  int result; // r0
  unsigned int v14; // [sp+4h] [bp-4h]

  *(_DWORD *)a1 = unpack_dd(a2, a2[1]);
  *(_BYTE *)(a1 + 4) = unpack_dd(a2, a2[1]) != 0;
  *(_DWORD *)(a1 + 8) = unpack_dq(a2, a2[1]) - 1;
  v4 = (const char *)*a2;
  v5 = (_BYTE *)*a2;
  do
  {
    if ( (unsigned int)v5 >= a2[1] )
      goto LABEL_9;
    v6 = v5 + 1;
  }
  while ( *v5++ != 0 );
  *a2 = (unsigned int)v6;
  v8 = (void **)(a1 + 12);
  if ( !v4 || (v9 = strlen(v4)) == 0 )
  {
LABEL_9:
    *(_DWORD *)(a1 + 16) = 0;
    return 0;
  }
  v10 = v9;
  v11 = v9 + 1;
  if ( *(_DWORD *)(a1 + 20) >= v9 + 1 )
  {
    v12 = *v8;
  }
  else
  {
    v14 = v9 + 1;
    v12 = qvector_reserve(a1 + 12, *v8, v11, 1u);
    v11 = v14;
    *v8 = v12;
  }
  *(_DWORD *)(a1 + 16) = v11;
  memmove(v12, v4, v10);
  result = *(_DWORD *)(a1 + 12);
  *(_BYTE *)(result + v10) = 0;
  return result;
}
