__int64 __fastcall sub_15F2530(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi

  v1 = *(_DWORD *)(a1 + 40);
  if ( !v1 || v1 - 1 < 0 )
    return 0;
  v2 = *(_QWORD *)(a1 + 32);
  v3 = 8LL * (v1 - 1);
  result = *(_QWORD *)(v2 + v3);
  if ( (*(_BYTE *)(result + 8) & 7) == 1 )
  {
    v5 = v1 - 2;
    v6 = v3 - 8 * v5 + v2;
    while ( (int)v5 >= 0 )
    {
      result = *(_QWORD *)(v6 + 8 * v5-- - 8);
      if ( (*(_BYTE *)(result + 8) & 7) != 1 )
        return result;
    }
    return 0;
  }
  return result;
}
