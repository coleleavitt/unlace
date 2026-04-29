__int64 __fastcall sub_3CFDA0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  int v9; // ecx
  int v10; // eax
  bool v11; // cc

  v2 = *(_QWORD *)(a1 + 40);
  v3 = *(_QWORD *)(a2 + 40);
  result = 0xFFFFFFFFLL;
  if ( v2 >= v3 )
  {
    result = 1;
    if ( v3 >= v2 )
    {
      if ( *(_DWORD *)(a1 + 16) == *(_DWORD *)(a2 + 16) )
      {
        v9 = *(_DWORD *)(a2 + 20);
        result = 0xFFFFFFFFLL;
        if ( *(_DWORD *)(a1 + 20) >= v9 )
        {
          result = 1;
          if ( *(_DWORD *)(a1 + 20) <= v9 )
          {
            v10 = *(_DWORD *)(a2 + 24);
            v11 = *(_DWORD *)(a1 + 24) < v10;
            result = *(_DWORD *)(a1 + 24) > v10;
            if ( v11 )
              return 0xFFFFFFFFLL;
          }
        }
      }
      else
      {
        v5 = *(_QWORD *)(a1 + 56);
        if ( v5 == -1
          || (v6 = *(_QWORD *)(a2 + 56), v6 == -1)
          || (result = 0xFFFFFFFFLL, v5 >= v6) && (result = 1, v6 >= v5) )
        {
          v7 = *(_QWORD *)(a1 + 48);
          result = 0;
          if ( v7 != -1 )
          {
            v8 = *(_QWORD *)(a2 + 48);
            if ( v8 != -1 )
            {
              result = 0xFFFFFFFFLL;
              if ( v7 >= v8 )
                return v8 < v7;
            }
          }
        }
      }
    }
  }
  return result;
}
