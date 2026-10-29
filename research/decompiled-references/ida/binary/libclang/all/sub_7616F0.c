__int64 __fastcall sub_7616F0(__int64 a1, __int64 a2)
{
  int v2; // eax
  char *v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  char *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax

  if ( (~*(_BYTE *)(a1 + 30) & 0xF0) != 0 )
    v2 = *(_BYTE *)(a1 + 30) >> 4;
  else
    v2 = sub_C4A760(a1);
  if ( v2 )
  {
    sub_5FF0F0(a2, "[[gnu::zero_call_used_regs");
    sub_5FF0F0(a2, "(");
    sub_5FF0F0(a2, "\"");
    v3 = sub_7615B0(*(_DWORD *)(a1 + 36));
    v5 = sub_5FF0F0(v4, v3);
    sub_5FF0F0(v5, "\"");
    sub_5FF0F0(a2, ")");
    return sub_5FF0F0(a2, "]]");
  }
  else
  {
    sub_5FF0F0(a2, "__attribute__((zero_call_used_regs");
    sub_5FF0F0(a2, "(");
    sub_5FF0F0(a2, "\"");
    v7 = sub_7615B0(*(_DWORD *)(a1 + 36));
    v9 = sub_5FF0F0(v8, v7);
    sub_5FF0F0(v9, "\"");
    sub_5FF0F0(a2, ")");
    return sub_5FF0F0(a2, "))");
  }
}

