/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809BDA0
// Address: 0x0809BDA0

//----- (0809BDA0) --------------------------------------------------------
void __cdecl sub_809BDA0(_DWORD *a1)
{
  void *v1; // eax
  void *v2; // eax
  _DWORD *i; // esi
  _DWORD **v4; // eax

  a1[1] = 0;
  a1[2] = 0;
  *a1 = dword_811CAAC;
  v1 = (void *)a1[1038];
  a1[5] = 0;
  if ( v1 )
  {
    a1[1039] = 0;
    sub_80CF780(v1);
  }
  v2 = (void *)a1[1035];
  if ( v2 )
  {
    a1[1036] = 0;
    sub_80CF780(v2);
  }
  for ( i = (_DWORD *)a1[1031]; a1 + 1031 != i; --a1[1033] )
  {
    v4 = (_DWORD **)i;
    i = (_DWORD *)*i;
    *v4[1] = i;
    i[1] = v4[1];
    sub_80CF780(v4);
  }
}
// 811CAAC: using guessed type int dword_811CAAC[2];
