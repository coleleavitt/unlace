/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479123
// Address: 0x00479123

//----- (00479123) --------------------------------------------------------
char __cdecl sub_479123(char a1)
{
  HMODULE *v1; // esi

  if ( !a1 )
  {
    v1 = (HMODULE *)dword_4B7A60;
    do
    {
      if ( *v1 )
      {
        if ( *v1 != (HMODULE)-1 )
          FreeLibrary(*v1);
        *v1 = nullptr;
      }
      ++v1;
    }
    while ( v1 != (HMODULE *)dword_4B7AB0 );
  }
  return 1;
}
// 4B7A60: using guessed type int dword_4B7A60[20];
// 4B7AB0: using guessed type int dword_4B7AB0[34];
