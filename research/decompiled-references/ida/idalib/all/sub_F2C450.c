void __fastcall sub_F2C450(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  const char *v4; // rbp
  size_t v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax

  v2 = sub_FDF900((*(_BYTE *)(a2 + 3) >> 1) & 0x3F);
  if ( v2 )
  {
    v3 = *(_QWORD *)(a1 + 1096);
    v4 = (const char *)v2;
    v5 = j__strlen(" '");
    v6 = sub_9954E0(v3, " '", v5);
    v7 = sub_995540(v6, v4);
    sub_995540(v7, "'");
  }
  if ( (*(_BYTE *)(a2 + 2) & 0x10) == 0 )
  {
    if ( (*(_DWORD *)a2 & 0x200000) == 0 )
      return;
LABEL_7:
    sub_F2B230(
      a1,
      *(_QWORD *)(a2 + 8 * (*(_DWORD *)(a2 + 16) + (unsigned int)((*(_BYTE *)(a2 + 2) & 8) != 0) + 1) + 32));
    return;
  }
  sub_995540(*(_QWORD *)(a1 + 1096), " adl");
  if ( (*(_DWORD *)a2 & 0x200000) != 0 )
    goto LABEL_7;
}
