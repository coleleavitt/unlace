char __fastcall sub_1A468F0(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v8; // rsi

  v6 = *(_QWORD *)(a2 + 8);
  if ( (v6 & 6) == 0 )
    return 1;
  if ( *(char *)(a2 + 29) < 0 )
  {
    v8 = sub_B8C660(a2);
    v6 = *(_QWORD *)(a2 + 8) & 7LL;
  }
  else
  {
    v8 = *(_QWORD *)(a2 - 8);
    LOBYTE(v6) = v6 & 7;
  }
  if ( sub_1A42210(a1, v8, (unsigned __int8)v6 > 2u, a4, a5, a6) )
    return 1;
  else
    return sub_1A42580(a1, a2, 0);
}
