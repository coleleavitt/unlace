bool __fastcall sub_BE7400(int a1, __int64 a2)
{
  bool result; // al
  _DWORD *v3; // rdx
  __int64 v4; // rdx
  _DWORD *v5; // rdx

  result = 0;
  if ( !*(_WORD *)(a2 + 4) )
  {
    v3 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( v3 )
    {
      if ( *v3 == a1 )
      {
        result = 1;
        if ( v3[1] != 36 )
        {
          result = 0;
          if ( v3[1] == 25 && *(_DWORD *)(a2 + 24) == 1 )
          {
            v4 = *(_QWORD *)(a2 + 32);
            if ( !*(_WORD *)(v4 + 4) )
            {
              v5 = *(_DWORD **)(*(_QWORD *)(v4 + 16) + 24LL);
              if ( v5 )
              {
                if ( *v5 == a1 )
                  return v5[1] == 37;
              }
            }
          }
        }
      }
    }
  }
  return result;
}

