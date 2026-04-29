__int64 __fastcall sub_252100(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // ecx

  result = 1;
  if ( *(_QWORD *)a2 >= *(_QWORD *)a1 )
  {
    result = 0xFFFFFFFFLL;
    if ( *(_QWORD *)a1 >= *(_QWORD *)a2 )
    {
      v3 = *(_DWORD *)(a1 + 8);
      if ( *(_DWORD *)(a2 + 8) >= v3 )
        return *(_DWORD *)(a2 + 8) > v3;
    }
  }
  return result;
}
