/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140008F10
// Address: 0x0000000140008F10

//----- (0000000140008F10) ----------------------------------------------------
void __fastcall sub_140008F10(__int64 a1)
{
  void *v2; // rcx

  if ( *(_BYTE *)(a1 + 113) && !sub_14005D750(*(void **)(a1 + 288), 0) )
  {
    do
    {
      if ( sub_14005D750(*(void **)(a1 + 32), 0) )
      {
        v2 = *(void **)(a1 + 40);
        *(_BYTE *)(a1 + 28) = 0;
        sub_14005D730(v2);
      }
      Sleep(0x64u);
    }
    while ( !sub_14005D750(*(void **)(a1 + 288), 0) );
  }
}
