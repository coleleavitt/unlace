/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_531C0
// Address: 0x000531C0

//----- (000531C0) --------------------------------------------------------
char **__cdecl sub_531C0(char *s2)
{
  char **v1; // esi
  unsigned int v2; // edi
  int *v4; // [esp+8h] [ebp-14h]

  v1 = nullptr;
  if ( s2 )
  {
    v4 = off_13B614;
    if ( off_13B614 )
    {
      v1 = off_13B618;
      v2 = 0;
      while ( strcmp(*v1, s2) )
      {
        ++v2;
        v1 += 6;
        if ( v2 >= (unsigned int)v4 )
          return nullptr;
      }
      if ( !v1 )
        return nullptr;
      if ( !v1[1] )
        return nullptr;
    }
  }
  return v1;
}
// 13B614: using guessed type int *off_13B614;
// 13B618: using guessed type char **;
