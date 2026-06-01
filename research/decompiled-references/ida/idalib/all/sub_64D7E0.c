size_t __fastcall sub_64D7E0(__int64 a1, __int64 a2, char a3)
{
  __int64 v4; // rdx
  size_t result; // rax
  size_t v6; // rbx

  if ( !a2 )
    a2 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a2 + 64);
  if ( (a3 & 1) == 0 )
    v4 = *(_QWORD *)(a2 + 56);
  result = 0;
  if ( *(_DWORD *)(v4 + 12) )
  {
    result = *(_QWORD *)(v4 + 32);
    v6 = result + *(unsigned int *)(v4 + 20);
    while ( *(_DWORD *)result == 2147483646 || *(_BYTE *)(result + 4) == 35 && !*(_BYTE *)(result + 5) )
    {
      result = sub_647640((const char *)result);
      if ( result >= v6 )
        return 0;
    }
    if ( result )
      result += 4LL;
  }
  return result;
}
