unsigned __int64 __fastcall sub_16A7A90(__int64 a1, char a2, unsigned __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 i; // rsi

  result = a3;
  if ( a2 )
  {
    v4 = *(unsigned int *)(a1 + 1952);
    v5 = *(unsigned int *)(a1 + 1956);
    if ( *(_QWORD *)(a1 + 1944) == __PAIR64__(v5, v4) )
    {
      v5 = 0;
      v4 = 0;
    }
    result = sub_C0A3E0(
               *(_QWORD **)(a1 + 248),
               *(_QWORD *)(*(_QWORD *)(a1 + 248) + 19128LL),
               0,
               result,
               0,
               (*(_BYTE *)(result + 1) >> 1) & 3,
               (v5 << 32) | v4);
  }
  for ( i = *(_QWORD *)(result + 16); (*(_WORD *)i & 0x1FF) == 0x4F; i = *(_QWORD *)(i + 16) )
    *(_BYTE *)(i + 3) |= 4u;
  return result;
}
