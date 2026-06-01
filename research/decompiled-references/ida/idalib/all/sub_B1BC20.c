__int64 __fastcall sub_B1BC20(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // al
  int v3; // eax
  char *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  char *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  _BYTE v11[25]; // [rsp+Fh] [rbp-19h] BYREF

  v2 = *(_BYTE *)(a1 + 34);
  v11[0] = 1;
  if ( (v2 & 0xF0) == 0xF0 )
    v3 = sub_FA77D0(a1);
  else
    v3 = v2 >> 4;
  if ( v3 )
  {
    sub_995540(a2, "[[gnu::zero_call_used_regs");
    sub_AFB8E0(a2, v11);
    sub_995540(a2, "\"");
    v8 = sub_B1BB80(*(_DWORD *)(a1 + 40));
    v10 = sub_995540(v9, v8);
    sub_995540(v10, "\"");
    if ( !v11[0] )
      sub_995540(a2, ")");
    return sub_995540(a2, "]]");
  }
  else
  {
    sub_995540(a2, "__attribute__((zero_call_used_regs");
    sub_AFB8E0(a2, v11);
    sub_995540(a2, "\"");
    v4 = sub_B1BB80(*(_DWORD *)(a1 + 40));
    v6 = sub_995540(v5, v4);
    sub_995540(v6, "\"");
    if ( !v11[0] )
      sub_995540(a2, ")");
    return sub_995540(a2, "))");
  }
}
