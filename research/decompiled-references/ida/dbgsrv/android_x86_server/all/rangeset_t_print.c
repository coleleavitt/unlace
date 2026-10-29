/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: rangeset_t_print
// Address: 0x000B80F0

//----- (000B80F0) --------------------------------------------------------
_BYTE *__cdecl rangeset_t_print(int **a1, _BYTE *a2, int a3)
{
  _BYTE *v3; // eax
  int *v4; // ecx
  _BYTE *v5; // edi
  int *v6; // esi
  _BYTE *v7; // eax
  unsigned int v9; // [esp+14h] [ebp-18h]

  v3 = a2;
  v9 = (unsigned int)&a2[a3];
  if ( ((unsigned int)a1[1] & 0x1FFFFFFF) != 0 )
  {
    v4 = *a1;
    v5 = a2;
    v6 = *a1;
    do
    {
      if ( v6 == v4 )
      {
        v7 = &a2[a3];
      }
      else
      {
        v7 = &a2[a3];
        if ( (unsigned int)v5 >= v9 )
        {
          if ( !(_BYTE)under_debugger )
            interr(518);
LABEL_15:
          BUG();
        }
        *v5++ = 44;
        if ( (unsigned int)v5 >= v9 )
        {
          v5 = (_BYTE *)(v9 - 1);
          *(_BYTE *)(v9 - 1) = 0;
        }
      }
      v3 = &v5[range_t_print(v6, v5, v7 - v5)];
      v6 += 2;
      v4 = *a1;
      v5 = v3;
    }
    while ( v6 != &(*a1)[2 * (_DWORD)a1[1]] );
  }
  if ( (unsigned int)v3 >= v9 )
  {
    if ( !(_BYTE)under_debugger )
      interr(519);
    goto LABEL_15;
  }
  *v3 = 0;
  return (_BYTE *)(v3 - a2);
}
// 13E34C: using guessed type int under_debugger;
