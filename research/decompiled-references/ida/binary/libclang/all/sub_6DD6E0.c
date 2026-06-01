char __fastcall sub_6DD6E0(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v3; // r14d
  __int64 v5; // rbx
  char v6; // dl
  __int64 v7; // rcx
  char result; // al
  __int64 v9; // rsi

  v3 = *(_DWORD *)(a3 + 20) & 0x1FFFFFFF;
  if ( v3 == (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) )
  {
    v5 = 0;
    if ( v3 )
    {
      while ( (unsigned __int8)sub_6DD500(a1, *(_QWORD *)(a2 + 8 * v5 + 24), *(_QWORD *)(a3 + 8 * v5 + 24)) )
      {
        if ( v3 == (_DWORD)++v5 )
          goto LABEL_3;
      }
    }
    else
    {
LABEL_3:
      v6 = *(_BYTE *)(a2 + 23) & 0x40;
      if ( (*(_BYTE *)(a3 + 23) & 0x40) != 0 )
      {
        v7 = *(_QWORD *)(a3 + 8LL * (*(_DWORD *)(a3 + 20) & 0x1FFFFFFF) + 24);
        result = v7 == 0;
        if ( !v6 )
          return result;
        v9 = *(_QWORD *)(a2 + 8LL * (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) + 24);
        if ( (v9 == 0) == result )
        {
          if ( v7 )
            return sub_6A7280((__int64)a1, v9, v7);
          return 1;
        }
      }
      else if ( !v6 || !*(_QWORD *)(a2 + 8LL * (*(_DWORD *)(a2 + 20) & 0x1FFFFFFF) + 24) )
      {
        return 1;
      }
    }
  }
  return 0;
}

