__int64 __fastcall hexplace_t__next(__int64 a1, __int64 a2)
{
  __int64 v3; // r12
  unsigned __int64 v5; // rdi
  __int64 addr; // rsi

  v3 = *(_QWORD *)(a1 + 24);
  v5 = v3 + (*(int (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 72LL))(a2, v3) - 1;
  if ( v5 < *(_QWORD *)(a1 + 24) )
    return 0;
  addr = next_addr(v5);
  if ( addr == -1 )
    return 0;
  sub_425060(a1, addr, a2);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 24);
  return 1;
}
