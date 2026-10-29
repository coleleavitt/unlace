/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_834C8
// Address: 0x000834C8

//----- (000834C8) --------------------------------------------------------
int *__fastcall sub_834C8(_BYTE *a1, _BYTE *a2)
{
  size_t v3; // r4
  int *v4; // r0
  int *v5; // r7
  void *v6; // r3

  if ( a1 == a2 )
    return &std::string::_Rep::_S_empty_rep_storage[3];
  if ( !a1 )
    sub_83D00("basic_string::_S_construct null not valid");
  v3 = a2 - a1;
  v4 = sub_821F8(a2 - a1, 0);
  v5 = v4;
  v6 = v4 + 3;
  if ( v3 == 1 )
  {
    *((_BYTE *)v4 + 12) = *a1;
  }
  else if ( v3 )
  {
    v6 = memcpy(v4 + 3, a1, v3);
  }
  if ( v5 != std::string::_Rep::_S_empty_rep_storage )
  {
    *v5 = v3;
    v5[2] = 0;
    *((_BYTE *)v5 + v3 + 12) = 0;
  }
  return (int *)v6;
}
// D6C5C: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
