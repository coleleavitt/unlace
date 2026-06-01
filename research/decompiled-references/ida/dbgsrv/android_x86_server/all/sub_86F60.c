/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_86F60
// Address: 0x00086F60

//----- (00086F60) --------------------------------------------------------
void __cdecl sub_86F60(int a1)
{
  void *v1; // eax
  void *v2; // eax

  sub_799A0((_DWORD *)a1);
  sub_87090((char **)(a1 + 144));
  if ( *(_DWORD *)(a1 + 132) )
  {
    sub_87270((int *)(a1 + 132), 0);
    qfree(*(void **)(a1 + 132));
    *(_DWORD *)(a1 + 132) = 0;
    *(_DWORD *)(a1 + 140) = 0;
  }
  v1 = *(void **)(a1 + 112);
  if ( v1 )
  {
    *(_DWORD *)(a1 + 116) = 0;
    qfree(v1);
    *(_DWORD *)(a1 + 112) = 0;
    *(_DWORD *)(a1 + 120) = 0;
  }
  v2 = *(void **)(a1 + 64);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 68) = 0;
    qfree(v2);
    *(_DWORD *)(a1 + 64) = 0;
    *(_DWORD *)(a1 + 72) = 0;
  }
  sub_871B0((char **)(a1 + 52));
}
