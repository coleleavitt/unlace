__int64 __fastcall sub_208D3E0(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rsi
  __int64 v3; // rcx
  __int64 result; // rax

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + 8LL) != 14 )
    return 0;
  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 120LL);
  result = 0;
  if ( v1 )
  {
    v2 = (unsigned int)(*(_DWORD *)(a1 + 32) + 2);
    if ( (unsigned int)v2 < *(_DWORD *)(v1 + 8) )
    {
      v3 = *(_QWORD *)(v1 + 8 * v2 + 48);
      if ( v3 )
        return ((int)*(unsigned __int8 *)(v3 + 22) >> 6) & 1;
    }
  }
  return result;
}
