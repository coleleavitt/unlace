/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45C180
// Address: 0x0045C180

//----- (0045C180) --------------------------------------------------------
void __stdcall sub_45C180(int a1)
{
  int v1; // esi
  void *v2; // eax

  v1 = *(_DWORD *)(a1 + 276);
  if ( v1 )
  {
    sub_475016(*(HANDLE *)(v1 + 560));
    v2 = *(void **)(v1 + 568);
    if ( v2 )
    {
      *(_DWORD *)(v1 + 572) = 0;
      sub_453A20(v2);
      *(_DWORD *)(v1 + 568) = 0;
      *(_DWORD *)(v1 + 576) = 0;
    }
    sub_4627F2((void *)v1);
    *(_DWORD *)(a1 + 276) = 0;
  }
}
