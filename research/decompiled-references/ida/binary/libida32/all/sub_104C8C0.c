__int64 __fastcall sub_104C8C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a3 != 4 )
  {
    result = 0;
    if ( a3 != 3 )
      return result;
    if ( *(_WORD *)a2 != 26230 || *(_BYTE *)(a2 + 2) != 112 )
      return 0;
    goto LABEL_12;
  }
  if ( *(_DWORD *)a2 == 1852794222 )
  {
    *(_DWORD *)(a1 + 608) = 2;
    return 1;
  }
  if ( *(_DWORD *)a2 == 846227062 || *(_DWORD *)a2 == 863004278 || (result = 0, *(_DWORD *)a2 == 879781494) )
  {
LABEL_12:
    *(_DWORD *)(a1 + 608) = 1;
    return 1;
  }
  return result;
}

