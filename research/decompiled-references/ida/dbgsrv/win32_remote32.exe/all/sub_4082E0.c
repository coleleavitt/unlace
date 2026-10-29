/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4082E0
// Address: 0x004082E0

//----- (004082E0) --------------------------------------------------------
void __thiscall sub_4082E0(int this)
{
  void *v2; // [esp-4h] [ebp-8h]

  if ( *(_BYTE *)(this + 93) && !sub_456370(*(HANDLE *)(this + 200), 0) )
  {
    do
    {
      if ( sub_456370(*(HANDLE *)(this + 28), 0) )
      {
        v2 = *(void **)(this + 32);
        *(_BYTE *)(this + 24) = 0;
        sub_456350(v2);
      }
      Sleep(0x64u);
    }
    while ( !sub_456370(*(HANDLE *)(this + 200), 0) );
  }
}
