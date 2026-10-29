/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8C3E4
// Address: 0x0008C3E4

//----- (0008C3E4) --------------------------------------------------------
int *__fastcall sub_8C3E4(int *result, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r3
  int *v4; // r4
  unsigned int v5; // r3
  int v6; // r3

  v3 = result[1];
  if ( a2 > v3 )
    sub_83B6C("%s: __pos (which is %zu) > this->size() (which is %zu)", "basic_string::erase", a2, v3);
  v4 = result;
  if ( a3 == -1 )
  {
    v6 = *result;
    result[1] = a2;
    *(_BYTE *)(v6 + a2) = 0;
  }
  else
  {
    if ( a3 )
    {
      v5 = v3 - a2;
      if ( a3 >= v5 )
        a3 = v5;
      sub_8BF78(result, a2, a3);
    }
    return v4;
  }
  return result;
}
