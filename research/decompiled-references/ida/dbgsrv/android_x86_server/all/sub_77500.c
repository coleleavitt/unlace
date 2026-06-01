/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_77500
// Address: 0x00077500

//----- (00077500) --------------------------------------------------------
void __cdecl sub_77500(_DWORD *a1)
{
  void *v1; // eax
  void *v2; // eax
  _DWORD *i; // esi
  _DWORD **v4; // eax

  *a1 = &off_1381FC;
  a1[1] = 0;
  a1[2] = 0;
  a1[5] = 0;
  v1 = (void *)a1[1038];
  if ( v1 )
  {
    a1[1039] = 0;
    qfree(v1);
    a1[1038] = 0;
    a1[1040] = 0;
  }
  v2 = (void *)a1[1035];
  if ( v2 )
  {
    a1[1036] = 0;
    qfree(v2);
    a1[1035] = 0;
    a1[1037] = 0;
  }
  for ( i = (_DWORD *)a1[1031]; a1 + 1031 != i; --a1[1033] )
  {
    v4 = (_DWORD **)i;
    i = (_DWORD *)*i;
    *v4[1] = i;
    (*v4)[1] = v4[1];
    qfree(v4);
  }
}
// 1381FC: using guessed type int (__cdecl *off_1381FC)(int);
