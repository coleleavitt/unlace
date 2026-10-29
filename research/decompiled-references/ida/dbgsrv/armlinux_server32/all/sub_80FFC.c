/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80FFC
// Address: 0x00080FFC

//----- (00080FFC) --------------------------------------------------------
void __fastcall sub_80FFC(unsigned int a1, int a2)
{
  unsigned int *v2; // r3
  unsigned int v3; // r2
  unsigned int v4; // r2
  void (__fastcall *v5)(int); // r3
  int v6; // r4

  if ( a1 > 1 )
    sub_809F0(*(void (__fastcall **)(_DWORD))(a2 - 20));
  v2 = (unsigned int *)(a2 - 40);
  __dmb(0xBu);
  do
  {
    v3 = __ldrex(v2);
    v4 = v3 - 1;
  }
  while ( __strex(v4, v2) );
  __dmb(0xBu);
  if ( !v4 )
  {
    v5 = *(void (__fastcall **)(int))(a2 - 28);
    v6 = a2 + 88;
    if ( v5 )
      v5(a2 + 88);
    sub_80804(v6);
  }
}
