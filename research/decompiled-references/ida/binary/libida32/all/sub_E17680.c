void __fastcall sub_E17680(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi

  v4 = *(_QWORD *)(a2 + 40);
  v5 = *(_QWORD *)(a1 + 8);
  v6 = v4 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v4 & 7) != 0 )
    v6 = 0;
  sub_E15750(v5, v6);
  sub_E17190(*(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 8), a2, 0);
}

