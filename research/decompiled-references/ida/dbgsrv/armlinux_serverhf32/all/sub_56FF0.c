/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56FF0
// Address: 0x00056FF0

//----- (00056FF0) --------------------------------------------------------
int *sub_56FF0()
{
  int v0; // r3
  void *v2; // r7

  if ( byte_D3AC4 )
  {
    v0 = dword_D3ABC;
  }
  else
  {
    if ( !sub_7A72C("DEBUG_FILE_DIRECTORY", (int)&dword_D3AB8) )
      sub_7A72C("ELF_DEBUG_FILE_DIRECTORY", (int)&dword_D3AB8);
    v0 = dword_D3ABC;
    if ( (unsigned int)dword_D3ABC <= 1 )
    {
      v2 = (void *)dword_D3AB8;
      if ( (unsigned int)dword_D3AC0 <= 0xE )
      {
        v2 = sub_77EB0((int)&dword_D3AB8, (void *)dword_D3AB8, 0xFu, 1u);
        dword_D3AB8 = (int)v2;
      }
      dword_D3ABC = 15;
      qmemcpy(v2, "/usr/lib/debug", 14);
      v0 = dword_D3ABC;
      *(_BYTE *)(dword_D3AB8 + 14) = 0;
    }
    byte_D3AC4 = 1;
  }
  if ( v0 )
    return (int *)dword_D3AB8;
  else
    return &dword_8DA5C;
}
// 8DA5C: using guessed type int dword_8DA5C;
// D3AB8: using guessed type int dword_D3AB8;
// D3ABC: using guessed type int dword_D3ABC;
// D3AC0: using guessed type int dword_D3AC0;
// D3AC4: using guessed type char byte_D3AC4;
