__int64 __fastcall hexplace_t__beginning(__int64 a1)
{
  __int64 addr; // rax
  unsigned int v2; // edx

  addr = prev_addr(*(_QWORD *)(a1 + 24));
  v2 = 1;
  if ( addr != -1 )
    LOBYTE(v2) = *(_QWORD *)(a1 + 24) == addr;
  return v2;
}
