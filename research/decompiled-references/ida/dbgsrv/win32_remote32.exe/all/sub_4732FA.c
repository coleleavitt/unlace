/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4732FA
// Address: 0x004732FA

//----- (004732FA) --------------------------------------------------------
char *sub_4732FA()
{
  char *v0; // eax
  char *v1; // esi
  char *v2; // edi
  char *v3; // esi
  char *v5; // [esp+8h] [ebp-8h]

  v0 = (char *)sub_4791B9(0x40u, 0x38u);
  v5 = v0;
  if ( v0 )
  {
    v2 = v0 + 32;
    v3 = v0 + 3584;
    do
    {
      sub_47901F((LPCRITICAL_SECTION)(v2 - 32), 0xFA0u, 0);
      *((_DWORD *)v2 - 2) = -1;
      v2[13] &= 0xF8u;
      *(_DWORD *)v2 = 0;
      v2 += 56;
      *((_DWORD *)v2 - 13) = 0;
      *((_DWORD *)v2 - 12) = 168427520;
      *(v2 - 44) = 10;
      *(_DWORD *)(v2 - 42) = 0;
      *(v2 - 38) = 0;
    }
    while ( v2 - 32 != v3 );
    v1 = v5;
  }
  else
  {
    v1 = nullptr;
  }
  sub_479216(nullptr);
  return v1;
}
