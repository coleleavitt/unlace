unsigned __int64 __fastcall sub_2198690(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // r12d
  unsigned int v6; // ecx
  unsigned __int32 v7; // edx
  bool (__fastcall *v8)(__int64); // rax
  unsigned __int64 v9; // r13

  v2 = *(_QWORD *)(a1 + 272);
  if ( !v2 )
    goto LABEL_15;
  if ( v2 < sub_215DEC0(a1) || (v3 = sub_215DEC0(a1), v2 + 24 > v4 + v3) )
    sub_2195DF0();
  v5 = *(_DWORD *)(v2 + 8);
  v6 = *(_DWORD *)(a1 + 8);
  v7 = _byteswap_ulong(v5);
  if ( v6 <= 0x14 && ((0x155800uLL >> v6) & 1) != 0 )
    v5 = v7;
  if ( !*(_QWORD *)(a1 + 272) )
LABEL_15:
    sub_2221C70("getSymbolIndex() called with no symbol table symbol", 1);
  v8 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a1 + 64LL);
  if ( v8 != sub_2195C40 )
  {
    if ( v8(a1) )
      goto LABEL_8;
LABEL_11:
    v9 = 12;
    return (a2 - (sub_215DEC0(a1) + (unsigned __int64)v5)) / v9;
  }
  if ( v6 - 19 > 1 )
    goto LABEL_11;
LABEL_8:
  v9 = 16;
  return (a2 - (sub_215DEC0(a1) + (unsigned __int64)v5)) / v9;
}
