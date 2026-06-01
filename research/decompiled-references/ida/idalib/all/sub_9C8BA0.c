bool __fastcall sub_9C8BA0(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  bool result; // al
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi

  v2 = *a1;
  v3 = *a2;
  result = 0;
  if ( ((v3 >> 1) & 1) == ((v2 >> 1) & 1) )
  {
    v5 = v2 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v5 )
    {
      if ( *(_BYTE *)v5 == 12 )
      {
        v6 = v3 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v6 )
        {
          if ( *(_BYTE *)v6 == 12 )
            return *(_QWORD *)(v5 + 64) == *(_QWORD *)(v6 + 64);
        }
      }
    }
  }
  return result;
}
