void __fastcall sub_F09210(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  size_t v4; // rax
  __int64 v5; // rax
  const char *v6; // rsi
  __int64 v7; // rbp
  size_t v8; // rax
  __int64 v9; // rbp
  char *v10; // rax
  size_t v11; // rdx
  __int64 v12; // rax

  v2 = *(_QWORD *)(a1 + 1096);
  v4 = j__strlen(" ");
  v5 = sub_9717A0(v2, " ", v4);
  v6 = "postfix";
  if ( *(_BYTE *)(a2 + 2) > 0xFu )
    v6 = "prefix";
  v7 = sub_971800(v5, v6);
  v8 = j__strlen(" '");
  v9 = sub_9717A0(v7, " '", v8);
  v10 = sub_BD5820(*(_BYTE *)(a2 + 2) >> 3);
  v12 = sub_9717A0(v9, v10, v11);
  sub_971800(v12, "'");
  if ( (*(_QWORD *)a2 & 0x1000000) != 0 )
  {
    if ( (*(_QWORD *)a2 & 0x2000000) == 0 )
      return;
LABEL_7:
    sub_F074F0(a1, *(_QWORD *)(a2 + 24));
    return;
  }
  sub_971800(*(_QWORD *)(a1 + 1096), " cannot overflow");
  if ( (*(_QWORD *)a2 & 0x2000000) != 0 )
    goto LABEL_7;
}

