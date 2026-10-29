/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_57414
// Address: 0x00057414

//----- (00057414) --------------------------------------------------------
_DWORD *__fastcall sub_57414(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0
  _DWORD **v4; // r0
  _DWORD **v5; // r7

  a1[5] = 0;
  *a1 = &off_D9E58;
  a1[1] = 0;
  a1[2] = 0;
  v2 = (void *)a1[1038];
  if ( v2 )
  {
    a1[1039] = 0;
    qfree(v2);
    a1[1038] = 0;
    a1[1040] = 0;
  }
  v3 = (void *)a1[1035];
  if ( v3 )
  {
    a1[1036] = 0;
    qfree(v3);
    a1[1035] = 0;
    a1[1037] = 0;
  }
  v4 = (_DWORD **)a1[1031];
  if ( a1 + 1031 != v4 )
  {
    do
    {
      v5 = (_DWORD **)*v4;
      *v4[1] = *v4;
      (*v4)[1] = v4[1];
      qfree(v4);
      --a1[1033];
      v4 = v5;
    }
    while ( a1 + 1031 != v5 );
  }
  return a1;
}
// D9E58: using guessed type _UNKNOWN *off_D9E58;
