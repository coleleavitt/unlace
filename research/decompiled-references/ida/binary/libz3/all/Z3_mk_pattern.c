__int64 __fastcall Z3_mk_pattern(__int64 a1, unsigned int a2, __int64 a3)
{
  char v4; // bp
  __int64 v5; // rax
  __int64 v6; // r13

  v4 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v4 )
    sub_298B30();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a2 )
  {
    v5 = a3;
    while ( !*(_WORD *)(*(_QWORD *)v5 + 4LL) )
    {
      v5 += 8;
      if ( a3 + 8LL * a2 == v5 )
        goto LABEL_10;
    }
    sub_24EA30(a1, 3u, nullptr);
    if ( !v4 )
      return 0;
    sub_2BB620(0);
    v6 = 0;
  }
  else
  {
LABEL_10:
    v6 = sub_15E1EC0(*(_QWORD *)(a1 + 232), a2, a3);
    sub_251FD0(a1, v6);
    if ( !v4 )
      return v6;
    sub_2BB620(v6);
  }
  byte_1C7EBA0 = 1;
  return v6;
}

