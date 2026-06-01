__int64 __fastcall sub_16D930(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 12);
  result = 0;
  if ( *(_DWORD *)(a1 + 12) != v2 )
    return 2 * (unsigned int)(*(_DWORD *)(a1 + 12) > v2) - 1;
  return result;
}

