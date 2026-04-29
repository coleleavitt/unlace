__int64 __fastcall sub_37F330(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 0;
  if ( *(_DWORD *)(a4 + 8) != 71 )
  {
    *(_QWORD *)(a1 + 8) = a4;
    return 1;
  }
  return result;
}
