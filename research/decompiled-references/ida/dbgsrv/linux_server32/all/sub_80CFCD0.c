/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CFCD0
// Address: 0x080CFCD0

//----- (080CFCD0) --------------------------------------------------------
bool __cdecl sub_80CFCD0(int a1)
{
  pthread_mutex_t *v1; // ebp
  int v2; // edi
  _DWORD *v3; // eax
  int v4; // edx

  v1 = (pthread_mutex_t *)dword_811F8B0;
  sub_80D15A0((pthread_mutex_t *)dword_811F8B0);
  v2 = dword_811F8B4;
  if ( dword_811F8B4 )
  {
    v3 = *(_DWORD **)dword_811F8B4;
    v4 = *(_DWORD *)dword_811F8B4 + 4 * *(_DWORD *)(dword_811F8B4 + 4);
    if ( *(_DWORD *)dword_811F8B4 != v4 )
    {
      while ( *v3 != a1 )
      {
        if ( (_DWORD *)v4 == ++v3 )
          return sub_80D1600(v1);
      }
      if ( (_DWORD *)v4 != v3 )
      {
        memmove(v3, v3 + 1, v4 - (_DWORD)v3 - 4);
        --*(_DWORD *)(v2 + 4);
      }
    }
  }
  return sub_80D1600(v1);
}
// 811F8B0: using guessed type int dword_811F8B0;
// 811F8B4: using guessed type int dword_811F8B4;
