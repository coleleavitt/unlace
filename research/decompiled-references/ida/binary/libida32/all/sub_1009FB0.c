char __fastcall sub_1009FB0(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al
  int v5; // eax

  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 304LL))(a1);
  if ( !result )
  {
    if ( a3 == 6 )
    {
      if ( *(_DWORD *)a2 != 1869440365 || (result = 1, *(_WORD *)(a2 + 4) != 31090) )
      {
        if ( *(_DWORD *)a2 != 1769434741 || (v5 = 0, *(_WORD *)(a2 + 4) != 25710) )
          v5 = 1;
        return v5 == 0;
      }
    }
    else if ( a3 == 2 )
    {
      return *(_WORD *)a2 == 25443;
    }
  }
  return result;
}

