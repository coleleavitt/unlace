/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6A768
// Address: 0x0006A768

//----- (0006A768) --------------------------------------------------------
_DWORD *__fastcall sub_6A768(_DWORD *a1)
{
  int v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0

  v2 = a1[22];
  *a1 = dword_D1B8C;
  if ( v2 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
    a1[22] = 0;
  }
  v3 = (void *)a1[24];
  a1[21] = 0;
  if ( v3 )
  {
    a1[25] = 0;
    sub_77E08(v3);
  }
  v4 = (void *)a1[18];
  if ( v4 )
  {
    a1[19] = 0;
    sub_77E08(v4);
  }
  v5 = (void *)a1[15];
  if ( v5 )
  {
    a1[16] = 0;
    sub_77E08(v5);
  }
  sub_65900(a1);
  return a1;
}
// D1B8C: using guessed type int dword_D1B8C[2];
