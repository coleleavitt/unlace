/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_print
// Address: 0x000830E8

//----- (000830E8) --------------------------------------------------------
_BYTE *__fastcall rangeset_t_print(int **a1, _BYTE *a2, int a3)
{
  _BYTE *v3; // r6
  unsigned int v5; // r4
  int *v6; // r0
  int *i; // r7

  v3 = a2;
  v5 = (unsigned int)&a2[a3];
  if ( 8 * (_DWORD)a1[1] )
  {
    v6 = *a1;
    v3 = a2;
    for ( i = *a1; i != &(*a1)[2 * (_DWORD)a1[1]]; i += 2 )
    {
      if ( i != v6 )
      {
        if ( (unsigned int)v3 >= v5 )
        {
          if ( !under_debugger )
            interr(518);
LABEL_14:
          __debugbreak();
        }
        *v3++ = 44;
        if ( (unsigned int)v3 >= v5 )
        {
          v3 = (_BYTE *)(v5 - 1);
          *(_BYTE *)(v5 - 1) = 0;
        }
      }
      v3 += range_t_print(i, v3, v5 - (_DWORD)v3);
      v6 = *a1;
    }
  }
  if ( (unsigned int)v3 >= v5 )
  {
    if ( !under_debugger )
      interr(519);
    goto LABEL_14;
  }
  *v3 = 0;
  return (_BYTE *)(v3 - a2);
}
// E0550: using guessed type char under_debugger;
