/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F3E0
// Address: 0x0007F3E0

//----- (0007F3E0) --------------------------------------------------------
_DWORD *__fastcall sub_7F3E0(_DWORD *result, char *a2, int a3)
{
  _DWORD *v3; // r4
  unsigned int v4; // r6
  void *v7; // r1

  if ( result )
  {
    v3 = result;
    v4 = result[1];
    if ( v4 > 1 )
    {
      v7 = (void *)*result;
      if ( *(_BYTE *)(*result + v4 - 2) != 10 )
      {
        if ( v4 + 1 > result[2] )
        {
          v7 = sub_77EB0((int)result, v7, v4 + 1, 1u);
          *v3 = v7;
        }
        v3[1] = v4 + 1;
        *((_BYTE *)v7 + v4 - 1) = 10;
        *(_BYTE *)(*v3 + v4) = 0;
      }
    }
    return (_DWORD *)sub_34044((int)v3, a2, a3);
  }
  return result;
}
