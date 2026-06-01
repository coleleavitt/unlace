/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4CA28
// Address: 0x0004CA28

//----- (0004CA28) --------------------------------------------------------
_DWORD *__fastcall sub_4CA28(_DWORD *a1, char *s)
{
  size_t v4; // r0
  size_t v5; // r8
  int *v6; // r0
  int *v7; // r7
  void *v8; // r3

  if ( !s )
    sub_83A18("basic_string::_S_construct null not valid");
  v4 = strlen(s);
  v5 = v4;
  if ( v4 )
  {
    v6 = sub_4B30C(v4, 0);
    v7 = v6;
    v8 = v6 + 3;
    if ( v5 == 1 )
    {
      *((_BYTE *)v6 + 12) = *s;
    }
    else if ( v5 )
    {
      v8 = memcpy(v6 + 3, s, v5);
    }
    if ( v7 != std::string::_Rep::_S_empty_rep_storage )
    {
      *v7 = v5;
      v7[2] = 0;
      *((_BYTE *)v7 + v5 + 12) = 0;
    }
    *a1 = v8;
    return a1;
  }
  else
  {
    *a1 = &std::string::_Rep::_S_empty_rep_storage[3];
    return a1;
  }
}
// D5C38: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
