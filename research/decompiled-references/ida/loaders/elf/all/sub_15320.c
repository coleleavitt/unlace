__int64 __fastcall sub_15320(__int64 a1, __int64 a2, const char *a3)
{
  char v5; // dl
  __int64 result; // rax
  __int64 v7; // r13
  bool v8; // r12
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbx
  const char *v11; // rdi
  int v12; // edx

  if ( !*(_DWORD *)(a2 + 88) && *(_WORD *)(a2 + 54) != 0xFFF1 || strcmp(a3, "_gp") )
  {
    v5 = *(_BYTE *)(a2 + 53);
    if ( (*(_BYTE *)(a2 + 52) & 0xF) == 2 )
      goto LABEL_10;
LABEL_4:
    if ( v5 == -16 || v5 == (char)0x80 )
    {
      v10 = sub_394F0(a2, *(_QWORD *)(a1 + 16), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL)) & 0xFFFFFFFFFFFFFFFELL;
      sub_101F0(0x57u, v10, 1);
      create_insn(v10, 0);
    }
    return 1;
  }
  v7 = *(_QWORD *)(a2 + 80);
  if ( *(_DWORD *)(get_ph() + 4) != 12 )
  {
    sub_15040();
    return sub_154B0();
  }
  sub_101F0(0xBBAu, v7);
  v5 = *(_BYTE *)(a2 + 53);
  if ( (*(_BYTE *)(a2 + 52) & 0xF) != 2 )
    goto LABEL_4;
LABEL_10:
  if ( v5 != -16 )
  {
    v8 = v5 == (char)0x80;
LABEL_12:
    v9 = sub_394F0(a2, *(_QWORD *)(a1 + 16), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL)) & 0xFFFFFFFFFFFFFFFELL;
    sub_101F0(0x57u, v9, (v8 | (unsigned __int8)*(_DWORD *)(a2 + 80)) & 1);
    auto_mark_range(v9, v9 + 1, 20);
    auto_mark_range(v9, v9 + 1, 30);
    return 1;
  }
  v11 = a3;
  v8 = 1;
  v12 = strncmp(v11, "__pend_", 7u);
  result = 0;
  if ( v12 )
    goto LABEL_12;
  return result;
}

