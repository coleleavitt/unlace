/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BFBD0
// Address: 0x080BFBD0

//----- (080BFBD0) --------------------------------------------------------
bool __cdecl sub_80BFBD0(_DWORD *a1)
{
  pthread_mutex_t *v1; // edi
  int v2; // edx
  _DWORD *v3; // eax

  v1 = (pthread_mutex_t *)dword_811E7D0;
  *a1 = &off_811CE1C;
  sub_80D15A0(v1);
  v2 = dword_811E7D8;
  v3 = (_DWORD *)dword_811E7D4;
  if ( dword_811E7DC < (unsigned int)(dword_811E7D8 + 1) )
  {
    v3 = sub_80CF920((int)&dword_811E7D4, (void *)dword_811E7D4, dword_811E7D8 + 1, 4u);
    v2 = dword_811E7D8;
    dword_811E7D4 = (int)v3;
  }
  v3[v2] = a1;
  ++dword_811E7D8;
  return sub_80D1600(v1);
}
// 811CE1C: using guessed type _UNKNOWN *off_811CE1C;
// 811E7D0: using guessed type int dword_811E7D0;
// 811E7D4: using guessed type int dword_811E7D4;
// 811E7D8: using guessed type int dword_811E7D8;
// 811E7DC: using guessed type int dword_811E7DC;
