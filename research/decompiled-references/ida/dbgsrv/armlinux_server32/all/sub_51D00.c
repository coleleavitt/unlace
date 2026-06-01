/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_51D00
// Address: 0x00051D00

//----- (00051D00) --------------------------------------------------------
_DWORD *__fastcall sub_51D00(_DWORD *a1)
{
  void *v2; // r0
  void *v3; // r0
  _DWORD **v4; // r3
  _DWORD **v5; // r4

  v2 = (void *)a1[1038];
  a1[1] = 0;
  a1[2] = 0;
  a1[5] = 0;
  *a1 = &dword_D27F0[2];
  if ( v2 )
  {
    a1[1039] = 0;
    sub_77F70(v2);
  }
  v3 = (void *)a1[1035];
  if ( v3 )
  {
    a1[1036] = 0;
    sub_77F70(v3);
  }
  v4 = (_DWORD **)a1[1031];
  if ( a1 + 1031 != v4 )
  {
    do
    {
      v5 = (_DWORD **)*v4;
      *v4[1] = *v4;
      (*v4)[1] = v4[1];
      sub_77F70(v4);
      v4 = v5;
      --a1[1033];
    }
    while ( a1 + 1031 != v5 );
  }
  return a1;
}
// D27F0: using guessed type int dword_D27F0[4];
