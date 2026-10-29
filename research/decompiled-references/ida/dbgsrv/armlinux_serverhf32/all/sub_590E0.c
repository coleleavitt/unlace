/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_590E0
// Address: 0x000590E0

//----- (000590E0) --------------------------------------------------------
_DWORD *__fastcall sub_590E0(_DWORD *a1, int a2, int a3, int a4, char a5, char a6, int a7, int a8)
{
  size_t v11; // r5
  void *v13; // r0

  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  v11 = *(_DWORD *)(a2 + 4);
  if ( v11 )
  {
    v13 = sub_77E84(*(_DWORD *)(a2 + 4));
    a1[2] = v11;
    *a1 = v13;
    memcpy(v13, *(const void **)a2, v11);
    a1[1] = v11;
  }
  a1[3] = a3;
  sub_590A0((int)(a1 + 4), a4, a5, a6, a7, a8);
  return a1;
}
