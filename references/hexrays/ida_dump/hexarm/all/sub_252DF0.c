__int64 __fastcall sub_252DF0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 0;
  if ( *(_DWORD *)(a2 + 12) == *(_DWORD *)(a1 + 72) )
  {
    *(_QWORD *)(a1 + 64) = a2;
    return 1;
  }
  return result;
}
