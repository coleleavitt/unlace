char __fastcall sub_BDC800(__int64 a1)
{
  __int64 v1; // rdx
  char result; // al
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx

  v1 = *(_QWORD *)(a1 + 72);
  if ( !v1 || (result = 1, !*(_DWORD *)(v1 - 4)) )
  {
    v3 = *(_QWORD *)(a1 + 80);
    if ( !v3 || (result = 1, !*(_DWORD *)(v3 - 4)) )
    {
      v4 = *(_QWORD *)(a1 + 88);
      if ( !v4 || (result = 1, !*(_DWORD *)(v4 - 4)) )
      {
        v5 = *(_QWORD *)(a1 + 96);
        if ( !v5 || (result = 1, !*(_DWORD *)(v5 - 4)) )
        {
          result = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 112LL) + 404LL);
          if ( result )
          {
            return 0;
          }
          else
          {
            v6 = *(_QWORD *)(a1 + 64);
            if ( v6 )
              return *(_DWORD *)(a1 + 56) < *(_DWORD *)(v6 - 4);
          }
        }
      }
    }
  }
  return result;
}

