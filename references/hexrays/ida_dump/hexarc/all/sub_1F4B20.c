__int64 __fastcall sub_1F4B20(__int64 a1, __int64 a2, __int64 a3)
{
  if ( *(_DWORD *)(a2 + 4) == -1 )
    return 1;
  if ( sub_116590((unsigned __int8 *)a2, a1) )
    return *(unsigned int *)(a2 + 4);
  return sub_200290(a2, a3);
}
