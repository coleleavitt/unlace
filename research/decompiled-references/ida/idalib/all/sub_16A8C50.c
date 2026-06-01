char __fastcall sub_16A8C50(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v5; // esi
  unsigned __int64 v6; // rcx
  unsigned int v7; // edi
  char result; // al
  __int64 v9; // rcx

  v5 = (unsigned int)a2 >> 9;
  v6 = *a1;
  v7 = (unsigned int)*a1 >> 9;
  if ( v5 != v7 )
  {
    result = sub_F56A30(v7, v5, a3);
    if ( !result )
      return result;
    v6 = *a1;
  }
  if ( ((v6 >> 4) & 3) == ((a2 >> 4) & 3) || (v6 & 0x30) == 0 || (result = 0, (a2 & 0x30) == 0) )
  {
    result = 0;
    if ( HIDWORD(v6) == HIDWORD(a2)
      && ((a2 >> 6) & 7) == ((v6 >> 6) & 7)
      && ((unsigned __int8)a2 & (unsigned __int8)~(_BYTE)v6 & 7) == 0 )
    {
      result = 1;
      v9 = (v6 >> 3) & 1;
      if ( (a2 & 8) != 0 )
        return v9;
    }
  }
  return result;
}
