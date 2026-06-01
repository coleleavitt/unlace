__int64 __fastcall watchplace_t__::vfunc_8(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int64 v3; // rsi

  v2 = *(_QWORD *)(a2 + 8);
  if ( !v2 )
    return 0;
  v3 = *(unsigned int *)(a1 + 12);
  if ( v3 >= v2 - 1 )
    return 0;
  *(_DWORD *)(a1 + 12) = v3 + 1;
  return 1;
}
