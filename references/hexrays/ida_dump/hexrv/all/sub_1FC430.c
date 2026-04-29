__int64 __fastcall sub_1FC430(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = 0;
  if ( *(_DWORD *)(a3 + 44) == *(_DWORD *)(a1 + 24) )
  {
    *(_QWORD *)(a1 + 16) = a3;
    return 1;
  }
  return result;
}
