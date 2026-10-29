__int64 __fastcall sub_15E9E0(__int64 a1)
{
  __int64 result; // rax

  if ( !*(_BYTE *)(a1 + 992) )
    return 0;
  if ( *(_QWORD *)(a1 + 480) )
  {
    result = 0;
    if ( *(_DWORD *)(a1 + 472) == 1 )
      return *(_QWORD *)(a1 + 856);
  }
  else
  {
    sub_158B30(a1);
    return sub_15EA20();
  }
  return result;
}

