/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807DC00
// Address: 0x0807DC00

//----- (0807DC00) --------------------------------------------------------
int __cdecl sub_807DC00(int *a1)
{
  pthread_mutex_t *v1; // edi
  int v2; // eax
  unsigned __int8 v4; // [esp+0h] [ebp-1Ch]

  v1 = (pthread_mutex_t *)dword_811E640;
  sub_80D15A0((pthread_mutex_t *)dword_811E640);
  if ( !a1 )
    a1 = dword_811D9E0;
  if ( !dword_811E634 )
    goto LABEL_12;
  v2 = 0;
  while ( *(int **)(dword_811E630 + 4 * v2) != a1 )
  {
    if ( dword_811E634 == ++v2 )
      goto LABEL_12;
  }
  if ( dword_811E634 == v2 )
  {
LABEL_12:
    v4 = 0;
  }
  else
  {
    if ( dword_811E63C != v2 )
    {
      dword_811E63C = v2;
      nullsub_20(2, a1, v2);
    }
    v4 = 1;
  }
  sub_80D1600(v1);
  return v4;
}
// 80C3670: using guessed type int __cdecl nullsub_20(_DWORD, _DWORD, _DWORD);
// 811D9E0: using guessed type int dword_811D9E0[3];
// 811E630: using guessed type int dword_811E630;
// 811E634: using guessed type int dword_811E634;
// 811E63C: using guessed type int dword_811E63C;
// 811E640: using guessed type int dword_811E640;
