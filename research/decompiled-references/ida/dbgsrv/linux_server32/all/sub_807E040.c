/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_807E040
// Address: 0x0807E040

//----- (0807E040) --------------------------------------------------------
void __usercall sub_807E040(int a1@<eax>)
{
  int v2; // eax
  int v3; // esi
  int v4; // ebp
  int v5; // eax

  v2 = *(_DWORD *)(a1 + 12);
  if ( v2 )
  {
    v3 = v2 + 20 * *(_DWORD *)(v2 - 4);
    if ( v2 == v3 )
    {
      v5 = 0;
    }
    else
    {
      do
      {
        v4 = v3;
        v3 -= 20;
        sub_8089430(v3);
      }
      while ( *(_DWORD *)(a1 + 12) != v3 );
      v5 = 20 * *(_DWORD *)(v4 - 24);
    }
    operator delete[]((void *)(v3 - 4), v5 + 4);
  }
  sub_80CF780(*(void **)a1);
  sub_80CF780(*(void **)(a1 + 8));
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
}
