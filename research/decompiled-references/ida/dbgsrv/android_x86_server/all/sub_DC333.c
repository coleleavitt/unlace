/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DC333
// Address: 0x000DC333

//----- (000DC333) --------------------------------------------------------
_DWORD *__usercall sub_DC333@<eax>(unsigned int *a1@<eax>)
{
  unsigned int v2; // esi
  unsigned int v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // edx
  void *v6; // eax
  const void *v7; // esi
  unsigned int v8; // ecx

  v2 = a1[1];
  v3 = *a1;
  if ( v2 > 4 )
  {
    v6 = malloc(v2 + v3 + 3);
    if ( !v6 )
LABEL_3:
      abort();
    v5 = (_DWORD *)(((unsigned int)v6 + v2 + 3) & -v2);
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
    qmemcpy(v5, v7, v8);
  else
    memset(v5, 0, v8);
  return v5;
}
