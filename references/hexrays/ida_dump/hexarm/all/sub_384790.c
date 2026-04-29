__int64 __fastcall sub_384790(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = 0xFFFFFFFFLL;
  if ( *(_QWORD *)(a2 + 16) == *(_QWORD *)(a3 + 16) )
  {
    result = 4294967294LL;
    if ( *(_DWORD *)(a2 + 12) != *(_DWORD *)(a3 + 12) )
      return 0xFFFFFFFFLL;
  }
  return result;
}
