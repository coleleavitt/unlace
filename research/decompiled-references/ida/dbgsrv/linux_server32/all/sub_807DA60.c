/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807DA60
// Address: 0x0807DA60

//----- (0807DA60) --------------------------------------------------------
int sub_807DA60()
{
  int v0; // esi
  pthread_mutex_t *v1; // edi

  v0 = 0;
  v1 = (pthread_mutex_t *)dword_811E640;
  sub_80D15A0((pthread_mutex_t *)dword_811E640);
  if ( dword_811E63C < (unsigned int)dword_811E634 )
  {
    v0 = *(_DWORD *)(dword_811E630 + 4 * dword_811E63C);
    if ( v0 )
      ++*(_DWORD *)(v0 + 8);
  }
  sub_80D1600(v1);
  return v0;
}
// 811E630: using guessed type int dword_811E630;
// 811E634: using guessed type int dword_811E634;
// 811E63C: using guessed type int dword_811E63C;
// 811E640: using guessed type int dword_811E640;
