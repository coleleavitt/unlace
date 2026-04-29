__int64 *__fastcall sub_17D060(__int64 a1, unsigned __int64 a2, int a3)
{
  __int64 *v3; // rcx
  __int64 v5; // r8
  __int64 *v6; // rsi
  unsigned __int64 v8; // r9

  v3 = *(__int64 **)(a1 + 16);
  if ( !v3 )
    return nullptr;
  v5 = 24;
  v6 = (__int64 *)(*v3 & 0xFFFFFFFFFFFFFFFCLL);
  if ( v6 )
  {
    while ( (*(_BYTE *)v6 & 2) == 0 )
    {
      v8 = v6[3];
      v5 = (__int64)(v6 + 3);
      if ( a2 < v8 )
      {
        v6 = (__int64 *)v6[1];
      }
      else
      {
        if ( v8 >= a2 )
        {
          if ( v3 == v6 )
            return nullptr;
          goto LABEL_9;
        }
        v6 = (__int64 *)v6[2];
      }
    }
    return nullptr;
  }
LABEL_9:
  if ( *(_DWORD *)(v5 + 16) == a3 && *(_QWORD *)(v5 + 8) == *(_QWORD *)(a2 + 24) )
    return v6 + 4;
  sub_17CCC0((unsigned __int64 **)(a1 + 16), v6);
  return nullptr;
}
