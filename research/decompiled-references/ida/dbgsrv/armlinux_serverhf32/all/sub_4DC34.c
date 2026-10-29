/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4DC34
// Address: 0x0004DC34

//----- (0004DC34) --------------------------------------------------------
_DWORD *__fastcall sub_4DC34(_DWORD *a1, unsigned __int8 **a2)
{
  unsigned int v4; // r8
  int v5; // r9
  int *v6; // r0
  int v7; // r0
  _DWORD *v9; // r0

  v4 = sub_80B04(*a2, *((_DWORD *)*a2 - 3), -955291385);
  v5 = v4 % a1[1];
  v6 = sub_4D2BC(a1, v5, (const void **)a2, v4);
  if ( v6 )
  {
    v7 = *v6;
    if ( v7 )
      return (_DWORD *)(v7 + 8);
  }
  v9 = sub_805CC(0x1Cu);
  v9[1] = *a2;
  *v9 = 0;
  v9[2] = 0;
  v9[3] = 0;
  v9[4] = 0;
  *((_BYTE *)v9 + 20) = 0;
  *a2 = (unsigned __int8 *)&std::string::_Rep::_S_empty_rep_storage[3];
  *((_BYTE *)v9 + 21) = 0;
  return sub_4DB14(a1, v5, v4, v9) + 2;
}
// D5C38: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
