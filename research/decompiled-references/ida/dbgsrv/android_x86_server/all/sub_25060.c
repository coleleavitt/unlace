/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_25060
// Address: 0x00025060

//----- (00025060) --------------------------------------------------------
void __cdecl sub_25060(int a1)
{
  void *v1; // eax
  void *v2; // eax
  void *v3; // eax
  void *v4; // eax

  v1 = *(void **)(a1 + 56);
  if ( v1 )
  {
    *(_DWORD *)(a1 + 60) = 0;
    qfree(v1);
    *(_DWORD *)(a1 + 56) = 0;
    *(_DWORD *)(a1 + 64) = 0;
  }
  v2 = *(void **)(a1 + 44);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 48) = 0;
    qfree(v2);
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 52) = 0;
  }
  sub_2CEE0(a1 + 32, *(void ***)(a1 + 36));
  v3 = *(void **)(a1 + 20);
  if ( v3 )
  {
    *(_DWORD *)(a1 + 24) = 0;
    qfree(v3);
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 28) = 0;
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
  {
    *(_DWORD *)(a1 + 12) = 0;
    qfree(v4);
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 16) = 0;
  }
}
