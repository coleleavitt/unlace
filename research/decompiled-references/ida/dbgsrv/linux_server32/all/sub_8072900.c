/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8072900
// Address: 0x08072900

//----- (08072900) --------------------------------------------------------
int __cdecl sub_8072900(int a1)
{
  pthread_mutex_t *v1; // edi
  unsigned int v2; // eax
  int i; // eax
  unsigned int v5; // [esp+0h] [ebp-1Ch]

  v1 = (pthread_mutex_t *)dword_811E6F8;
  sub_80D15A0((pthread_mutex_t *)dword_811E6F8);
  v2 = *(_DWORD *)(a1 + 4);
  v5 = v2;
  if ( v2 )
  {
    if ( v2 < dword_811E624 )
    {
      sub_80CF060(*(FILE **)(dword_811E620 + 4 * v2));
      *(_DWORD *)(dword_811E620 + 4 * v5) = 0;
      for ( i = dword_811E624; i; dword_811E624 = --i )
      {
        if ( *(_DWORD *)(dword_811E620 + 4 * i - 4) )
          break;
      }
    }
  }
  sub_80D1600(v1);
  return 0;
}
// 811E620: using guessed type int dword_811E620;
// 811E624: using guessed type int dword_811E624;
// 811E6F8: using guessed type int dword_811E6F8;
