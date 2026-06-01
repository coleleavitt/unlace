/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8344C
// Address: 0x0008344C

//----- (0008344C) --------------------------------------------------------
int *__fastcall sub_8344C(_BYTE *a1, _BYTE *a2)
{
  size_t v2; // r5
  int *v4; // r0
  int *v5; // r7
  void *v6; // r3

  if ( a2 == a1 )
    return &std::string::_Rep::_S_empty_rep_storage[3];
  v2 = a2 - a1;
  v4 = sub_821F8(a2 - a1, 0);
  v5 = v4;
  v6 = v4 + 3;
  if ( v2 == 1 )
  {
    *((_BYTE *)v4 + 12) = *a1;
  }
  else if ( v2 )
  {
    v6 = memcpy(v4 + 3, a1, v2);
  }
  if ( v5 != std::string::_Rep::_S_empty_rep_storage )
  {
    *v5 = v2;
    v5[2] = 0;
    *((_BYTE *)v5 + v2 + 12) = 0;
  }
  return (int *)v6;
}
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
