/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4716B6
// Address: 0x004716B6

//----- (004716B6) --------------------------------------------------------
char __thiscall sub_4716B6(int this)
{
  char *v1; // edx
  char result; // al

  v1 = *(char **)(this + 8);
  result = *v1;
  if ( *v1 == 119 )
  {
    result = (_BYTE)v1 + 1;
    *(_DWORD *)(this + 8) = v1 + 1;
LABEL_5:
    *(_BYTE *)(this + 36) = 1;
    return result;
  }
  if ( result == 67 || result == 83 )
    goto LABEL_5;
  return result;
}
