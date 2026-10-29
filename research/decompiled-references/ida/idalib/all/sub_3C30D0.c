__int64 __fastcall sub_3C30D0(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  unsigned int v3; // ecx
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  bool v8; // cc

  v2 = *(_DWORD *)(a1 + 24);
  v3 = *(_DWORD *)(a2 + 24);
  result = 0xFFFFFFFFLL;
  if ( v2 >= v3 )
  {
    result = 1;
    if ( v3 >= v2 )
    {
      v5 = *(_QWORD *)(a1 + 8);
      v6 = *(_QWORD *)(a2 + 8);
      result = 0xFFFFFFFFLL;
      if ( v5 >= v6 )
      {
        result = 1;
        if ( v6 >= v5 )
        {
          result = 0xFFFFFFFFLL;
          if ( *(_QWORD *)a1 >= *(_QWORD *)a2 )
          {
            result = 1;
            if ( *(_QWORD *)a2 >= *(_QWORD *)a1 )
            {
              v7 = *(_QWORD *)(a2 + 16);
              v8 = *(_QWORD *)(a1 + 16) < v7;
              result = *(_QWORD *)(a1 + 16) > v7;
              if ( v8 )
                return 0xFFFFFFFFLL;
            }
          }
        }
      }
    }
  }
  return result;
}
