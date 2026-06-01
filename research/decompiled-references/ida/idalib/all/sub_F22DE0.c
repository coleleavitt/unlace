__int64 __fastcall sub_F22DE0(__int64 *a1, char a2)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx
  __int64 result; // rax
  unsigned __int64 v6; // rdx
  char v7; // cl

  v2 = *a1;
  if ( *a1 )
  {
    v3 = (v2 >> 1) & 3;
    if ( ((v2 >> 1) & 3) != 0 )
    {
      if ( v3 == 2 )
      {
        v6 = v2 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v6 )
          return result;
      }
      else
      {
        if ( v3 != 1 )
          return result;
        v6 = v2 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v6 )
          return result;
        v7 = *(_BYTE *)v6 & 7;
        if ( v7 != 3 && (!a2 || v7 != 2) )
          return result;
      }
      return *(_QWORD *)(v6 + 16);
    }
    v4 = v2 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v4 )
    {
      if ( (*(_BYTE *)(v4 + 28) & 0x7Fu) - 53 <= 1 )
        return *(_QWORD *)(v4 + 64);
    }
  }
  return result;
}
