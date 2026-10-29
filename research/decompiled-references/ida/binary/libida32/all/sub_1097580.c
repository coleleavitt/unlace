__int64 __fastcall sub_1097580(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = 0;
  if ( a3 == 3 )
  {
    if ( *(_WORD *)a2 == 14387 && *(_BYTE *)(a2 + 2) == 55 )
    {
      *(_DWORD *)(a1 + 636) = 2;
      return 1;
    }
    else if ( *(_WORD *)a2 == 29555 && *(_BYTE *)(a2 + 2) == 101 )
    {
      *(_DWORD *)(a1 + 636) = 1;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

