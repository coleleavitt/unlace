__int64 __fastcall sub_20B54D0(__int64 *a1, _QWORD *a2)
{
  unsigned __int8 v2; // al
  _BYTE **v4; // rax
  _BYTE *v5; // rax

  if ( !a2 )
    return sub_20B53F0(a1, a2, 0);
  if ( (unsigned int)*(unsigned __int8 *)a2 - 5 > 0x20 )
    return (__int64)a2;
  v2 = *((_BYTE *)a2 - 16);
  if ( (v2 & 2) != 0 )
  {
    if ( *((_DWORD *)a2 - 6) != 1 )
      return (__int64)a2;
    v4 = (_BYTE **)*(a2 - 4);
  }
  else
  {
    if ( ((*((_WORD *)a2 - 8) >> 6) & 0xF) != 1 )
      return (__int64)a2;
    v4 = (_BYTE **)&a2[-((v2 >> 2) & 0xF) - 2];
  }
  v5 = *v4;
  if ( !v5 )
  {
    a2 = nullptr;
    return sub_20B53F0(a1, a2, 0);
  }
  if ( *v5 == 1 )
    return (__int64)v5;
  return (__int64)a2;
}
