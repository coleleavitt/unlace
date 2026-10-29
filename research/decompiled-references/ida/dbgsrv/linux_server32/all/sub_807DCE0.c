/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807DCE0
// Address: 0x0807DCE0

//----- (0807DCE0) --------------------------------------------------------
int __cdecl sub_807DCE0(int a1)
{
  int v1; // edx
  unsigned int v2; // esi
  int v3; // esi
  int v5; // [esp-18h] [ebp-34h]
  int v6; // [esp-14h] [ebp-30h]
  int v7; // [esp-10h] [ebp-2Ch]
  pthread_mutex_t *mutex; // [esp+0h] [ebp-1Ch]

  mutex = (pthread_mutex_t *)dword_811E640;
  sub_80D15A0((pthread_mutex_t *)dword_811E640);
  if ( !dword_811E634 )
    goto LABEL_12;
  v1 = a1;
  v2 = 0;
  while ( *(_DWORD *)(dword_811E630 + 4 * v2) != a1 )
  {
    if ( ++v2 == dword_811E634 )
      goto LABEL_12;
  }
  if ( v2 < dword_811E634 )
  {
    if ( dword_811E63C == v2 )
    {
      sub_807DC00(nullptr);
      v1 = a1;
    }
    if ( *(_DWORD *)(v1 + 8) && !byte_811F8AC )
    {
      if ( !byte_811F8A1 )
        sub_80CFF40(1442, v5, v6, v7);
      BUG();
    }
    *(_DWORD *)(dword_811E630 + 4 * v2) = 0;
    nullsub_20(1, v1, v2);
    v3 = 1;
  }
  else
  {
LABEL_12:
    v3 = 0;
  }
  sub_80D1600(mutex);
  return v3;
}
// 807DDC8: variable 'v5' is possibly undefined
// 807DDC8: variable 'v6' is possibly undefined
// 807DDC8: variable 'v7' is possibly undefined
// 80C3670: using guessed type int __cdecl nullsub_20(_DWORD, _DWORD, _DWORD);
// 811E630: using guessed type int dword_811E630;
// 811E634: using guessed type int dword_811E634;
// 811E63C: using guessed type int dword_811E63C;
// 811E640: using guessed type int dword_811E640;
// 811F8A1: using guessed type char byte_811F8A1;
// 811F8AC: using guessed type char byte_811F8AC;
