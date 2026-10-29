/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_827B0
// Address: 0x000827B0

//----- (000827B0) --------------------------------------------------------
_DWORD *__fastcall sub_827B0(_DWORD *a1, _BYTE *a2, size_t a3)
{
  _BYTE *v4; // r0
  int v5; // r7
  int v8; // r0
  _BYTE *v9; // r6
  _BYTE *v10; // r0

  v4 = (_BYTE *)*a1;
  v5 = *((_DWORD *)v4 - 3);
  if ( a3 > 0x3FFFFFFC )
    sub_83AE4("basic_string::assign");
  if ( a2 < v4 || a2 > &v4[v5] )
    return sub_82780(a1, 0, v5, a2, a3);
  v8 = *((_DWORD *)v4 - 1);
  __dmb(0xBu);
  if ( v8 > 0 )
  {
    v5 = *(_DWORD *)(*a1 - 12);
    return sub_82780(a1, 0, v5, a2, a3);
  }
  v9 = (_BYTE *)*a1;
  v10 = &a2[-*a1];
  if ( a3 <= (unsigned int)v10 )
  {
    if ( a3 != 1 )
    {
      if ( a3 )
      {
        memcpy((void *)*a1, a2, a3);
        v9 = (_BYTE *)*a1;
      }
      goto LABEL_11;
    }
    goto LABEL_17;
  }
  if ( v10 )
  {
    if ( a3 == 1 )
    {
LABEL_17:
      *v9 = *a2;
      v9 = (_BYTE *)*a1;
      goto LABEL_11;
    }
    memmove((void *)*a1, a2, a3);
    v9 = (_BYTE *)*a1;
  }
LABEL_11:
  if ( v9 - 12 != (_BYTE *)std::string::_Rep::_S_empty_rep_storage )
  {
    *((_DWORD *)v9 - 3) = a3;
    *((_DWORD *)v9 - 1) = 0;
    v9[a3] = 0;
  }
  return a1;
}
// D5C38: using guessed type int std::string::_Rep::_S_empty_rep_storage[4];
