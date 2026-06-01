/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57C94
// Address: 0x00057C94

//----- (00057C94) --------------------------------------------------------
_DWORD *__fastcall sub_57C94(_DWORD *a1)
{
  _BYTE *v2; // r0
  int v3; // r3
  void *v4; // r0
  void *v5; // r0

  v2 = (_BYTE *)a1[61];
  *a1 = &off_D194C;
  a1[25] = &off_D1978;
  if ( v2 )
    v3 = (v2[452] ^ 1) & 1;
  else
    v3 = 0;
  if ( v3 )
    (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v2 + 20))(v2);
  sub_656B4((int)a1);
  a1[62] = 0;
  sub_6E318(a1 + 50);
  sub_6E318(a1 + 39);
  v4 = (void *)a1[35];
  a1[25] = dword_D1B54;
  if ( v4 )
  {
    a1[36] = 0;
    sub_77E08(v4);
  }
  v5 = (void *)a1[27];
  if ( v5 )
  {
    a1[28] = 0;
    sub_77E08(v5);
  }
  sub_65648(a1);
  return a1;
}
// D194C: using guessed type _UNKNOWN *off_D194C;
// D1978: using guessed type _UNKNOWN *off_D1978;
// D1B54: using guessed type int dword_D1B54[2];
