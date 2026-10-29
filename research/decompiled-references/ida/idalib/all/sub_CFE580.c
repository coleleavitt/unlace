__int64 __fastcall sub_CFE580(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rax
  int v4; // ecx

  result = 1;
  if ( !*(_DWORD *)(a1 + 24) )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 32);
      v4 = *(_DWORD *)(a1 + 40);
      LOBYTE(v3) = *(_DWORD *)(v3 + 24) == v4;
      LOBYTE(v2) = v4 == 0;
      return (unsigned int)v2 | (unsigned int)v3;
    }
  }
  return result;
}
