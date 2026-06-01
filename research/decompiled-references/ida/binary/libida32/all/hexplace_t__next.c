__int64 __fastcall hexplace_t__next(__int64 a1, __int64 a2)
{
  unsigned int v3; // r12d
  __int64 v5; // rdi
  unsigned int addr; // esi

  v3 = *(_DWORD *)(a1 + 16);
  v5 = v3 + (*(unsigned int (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 72LL))(a2, v3) - 1;
  if ( (unsigned int)v5 < *(_DWORD *)(a1 + 16) )
    return 0;
  addr = next_addr(v5);
  if ( addr == -1 )
    return 0;
  sub_4116C0(a1, addr, a2);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a1 + 16);
  return 1;
}

