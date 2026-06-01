/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_687D8
// Address: 0x000687D8

//----- (000687D8) --------------------------------------------------------
int __fastcall sub_687D8(int a1, unsigned int *a2)
{
  const char *v4; // r6
  unsigned int v5; // r0
  _BYTE *v6; // r1
  _BYTE *v7; // r2
  size_t v9; // r0
  size_t v10; // r7
  unsigned int v11; // r2
  void *v12; // r0
  int result; // r0
  unsigned int v14; // [sp+4h] [bp-4h]

  v4 = (const char *)*a2;
  v5 = a2[1];
  v6 = (_BYTE *)*a2;
  do
  {
    if ( (unsigned int)v6 >= v5 )
      goto LABEL_9;
    v7 = v6 + 1;
  }
  while ( *v6++ != 0 );
  *a2 = (unsigned int)v7;
  if ( !v4 || (v9 = strlen(v4)) == 0 )
  {
LABEL_9:
    *(_DWORD *)(a1 + 4) = 0;
    goto LABEL_10;
  }
  v10 = v9;
  v11 = v9 + 1;
  if ( *(_DWORD *)(a1 + 8) >= v9 + 1 )
  {
    v12 = *(void **)a1;
  }
  else
  {
    v14 = v9 + 1;
    v12 = qvector_reserve(a1, *(void **)a1, v11, 1u);
    v11 = v14;
    *(_DWORD *)a1 = v12;
  }
  *(_DWORD *)(a1 + 4) = v11;
  memmove(v12, v4, v10);
  *(_BYTE *)(*(_DWORD *)a1 + v10) = 0;
LABEL_10:
  *(_DWORD *)(a1 + 12) = unpack_dq(a2, a2[1]) - 1;
  *(_DWORD *)(a1 + 16) = unpack_dq(a2, a2[1]) - 1;
  result = unpack_dq(a2, a2[1]) - 1;
  *(_DWORD *)(a1 + 20) = result;
  return result;
}
