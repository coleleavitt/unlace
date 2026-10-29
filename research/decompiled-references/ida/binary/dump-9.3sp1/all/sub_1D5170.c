__int64 __fastcall sub_1D5170(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edx
  __int64 result; // rax

  v4 = *(_DWORD *)(a1 + 64);
  result = 0;
  if ( v4 > 0 )
  {
    result = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * (v4 - 1));
    if ( *(_DWORD *)(result + 76) != 1 )
    {
      result = sub_67FD0(a1, -1, 2, a4);
      *(_DWORD *)(result + 24) |= 0x200u;
      *(_DWORD *)(result + 76) = 1;
    }
  }
  return result;
}
