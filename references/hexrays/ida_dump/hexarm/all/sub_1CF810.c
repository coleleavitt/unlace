__int64 __fastcall sub_1CF810(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax

  v2 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 1496) + 24LL) + 24LL);
  if ( (*(_BYTE *)a1 & 4) != 0 )
  {
    result = *(_QWORD *)(a1 + 80) + a2;
    if ( v2 != 8 )
      return (int)result;
  }
  else
  {
    result = *(_QWORD *)(*(_QWORD *)(a1 + 1472) + 32LL) + a2;
    if ( v2 != 8 )
      return (int)result;
  }
  return result;
}
