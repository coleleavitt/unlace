__int64 __fastcall sub_253FC0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // eax
  bool v4; // cc

  result = 0xFFFFFFFFLL;
  if ( *(_QWORD *)a1 >= *(_QWORD *)a2 )
  {
    result = 1;
    if ( *(_QWORD *)a2 >= *(_QWORD *)a1 )
    {
      v3 = *(_DWORD *)(a2 + 8);
      v4 = *(_DWORD *)(a1 + 8) < v3;
      result = *(_DWORD *)(a1 + 8) > v3;
      if ( v4 )
        return 0xFFFFFFFFLL;
    }
  }
  return result;
}
