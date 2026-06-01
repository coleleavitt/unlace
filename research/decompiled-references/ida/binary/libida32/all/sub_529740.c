void __fastcall sub_529740(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdi

  if ( (debug & 0x100) != 0 )
    sub_365330();
  v2 = a1 + 224;
  clear_tinfo_t(a1 + 216);
  do
  {
    v3 = v2;
    v2 += 8;
    clear_tinfo_t(v3);
  }
  while ( v2 != a1 + 472 );
  sub_528B00(a1);
  sub_5294A0(a1);
  *(_DWORD *)(a1 + 128) = 2;
}

