/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_54330
// Address: 0x00054330

//----- (00054330) --------------------------------------------------------
char *__cdecl sub_54330(_DWORD *a1, int a2)
{
  _DWORD *v2; // eax
  char *result; // eax

  if ( a2 < 0 )
  {
    result = &byte_DCEE2;
    if ( a2 != -1 && (unsigned int)off_13B614 > -a2 )
      return off_13B618[-6 * a2];
  }
  else if ( a1[1] <= (unsigned int)a2 )
  {
    return &byte_DCEE2;
  }
  else
  {
    v2 = *(_DWORD **)(*a1 + 4 * a2);
    if ( v2[1] )
      return (char *)*v2;
    else
      return byte_EF875;
  }
  return result;
}
// DCEE2: using guessed type char byte_DCEE2;
// 13B614: using guessed type int *off_13B614;
// 13B618: using guessed type char **off_13B618;
