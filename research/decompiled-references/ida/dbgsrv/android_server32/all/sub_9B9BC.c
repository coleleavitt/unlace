/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9B9BC
// Address: 0x0009B9BC

//----- (0009B9BC) --------------------------------------------------------
_DWORD *__fastcall sub_9B9BC(size_t *a1)
{
  unsigned int v1; // r6
  size_t v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  void *v6; // r0
  const void *v7; // r1
  size_t v8; // r2

  v1 = a1[1];
  v3 = *a1;
  if ( v1 > 4 )
  {
    v6 = malloc(v1 + v3 + 3);
    if ( !v6 )
LABEL_3:
      abort();
    v5 = (_DWORD *)(((unsigned int)v6 + v1 + 3) & -v1);
    *(v5 - 1) = v6;
  }
  else
  {
    v4 = malloc(v3 + 4);
    if ( !v4 )
      goto LABEL_3;
    *v4 = v4;
    v5 = v4 + 1;
  }
  v7 = (const void *)a1[3];
  v8 = *a1;
  if ( v7 )
    memcpy(v5, v7, v8);
  else
    memset(v5, 0, v8);
  return v5;
}
