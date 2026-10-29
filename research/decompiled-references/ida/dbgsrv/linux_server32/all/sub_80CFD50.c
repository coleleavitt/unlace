/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CFD50
// Address: 0x080CFD50

//----- (080CFD50) --------------------------------------------------------
int __cdecl sub_80CFD50(int a1)
{
  int v1; // eax
  void (*v2)(void); // esi
  void *v3; // esi

  while ( 1 )
  {
    v3 = (void *)dword_811F8B4;
    if ( !dword_811F8B4 )
      break;
    v1 = *(_DWORD *)(dword_811F8B4 + 4);
    if ( !v1 )
    {
      if ( *(_DWORD *)dword_811F8B4 )
        sub_80CF780(*(void **)dword_811F8B4);
      sub_80CF780(v3);
      break;
    }
    v2 = *(void (**)(void))(*(_DWORD *)dword_811F8B4 + 4 * v1 - 4);
    sub_80CFCD0((int)v2);
    v2();
  }
  dword_811F8B4 = 0;
  if ( *(_BYTE *)(a1 + 16) )
    exit(*(_DWORD *)(a1 + 12));
  return 0;
}
// 811F8B4: using guessed type int dword_811F8B4;
