/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6BBD4
// Address: 0x0006BBD4

//----- (0006BBD4) --------------------------------------------------------
_DWORD *__fastcall sub_6BBD4(_DWORD *a1)
{
  int v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0

  *a1 = &off_DA8C8;
  sub_6C74E(a1 + 10);
  v2 = a1[11];
  if ( v2 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = (void *)a1[7];
  if ( v3 )
  {
    a1[8] = 0;
    qfree(v3);
    a1[9] = 0;
    a1[7] = 0;
  }
  v4 = (void *)a1[4];
  if ( v4 )
  {
    a1[5] = 0;
    qfree(v4);
    a1[6] = 0;
    a1[4] = 0;
  }
  v5 = (void *)a1[1];
  if ( v5 )
  {
    a1[2] = 0;
    qfree(v5);
    a1[3] = 0;
    a1[1] = 0;
  }
  return a1;
}
// DA8C8: using guessed type _UNKNOWN *off_DA8C8;
