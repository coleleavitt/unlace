__int64 __fastcall hexplace_t__prev(__int64 a1, __int64 a2)
{
  __int64 addr; // rsi
  __int64 result; // rax

  addr = prev_addr(*(_QWORD *)(a1 + 24));
  result = 0;
  if ( addr != -1 && addr != *(_QWORD *)(a1 + 24) )
  {
    sub_425060(a1, addr, a2);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a1 + 24);
    return 1;
  }
  return result;
}
