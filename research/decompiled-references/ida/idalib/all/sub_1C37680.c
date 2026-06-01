__int64 __fastcall sub_1C37680(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbp

  result = *(unsigned int *)(a1 + 11176);
  v2 = *(_QWORD *)(a1 + 608);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 11180) )
  {
    sub_2237220(a1 + 11168, a1 + 11184, result + 1, 8);
    result = *(unsigned int *)(a1 + 11176);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 11168) + 8 * result) = v2;
  ++*(_DWORD *)(a1 + 11176);
  return result;
}
