/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_82258
// Address: 0x00082258

//----- (00082258) --------------------------------------------------------
int *__fastcall sub_82258(unsigned int a1, int a2)
{
  void *v2; // r3
  int *v6; // r0
  int *v7; // r6

  if ( !a1 )
    return &std::string::_Rep::_S_empty_rep_storage[3];
  v6 = sub_821F8(a1, 0);
  v7 = v6;
  v2 = v6 + 3;
  if ( a1 != 1 )
  {
    v2 = memset(v6 + 3, a2, a1);
    if ( v7 == std::string::_Rep::_S_empty_rep_storage )
      return (int *)v2;
    goto LABEL_8;
  }
  *((_BYTE *)v6 + 12) = a2;
  if ( v6 != std::string::_Rep::_S_empty_rep_storage )
  {
LABEL_8:
    *v7 = a1;
    v7[2] = 0;
    *((_BYTE *)v7 + a1 + 12) = 0;
  }
  return (int *)v2;
}
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
