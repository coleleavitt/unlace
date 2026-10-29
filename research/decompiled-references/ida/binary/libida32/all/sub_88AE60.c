__int64 __fastcall sub_88AE60(__int64 a1, char **a2, char a3)
{
  int v3; // eax
  __int64 v4; // rbx
  void *v5; // rax
  int v6; // r13d

  v3 = *(unsigned __int8 *)(a1 + 72) ^ 1;
  if ( (a2 == nullptr) | *(_BYTE *)(a1 + 72) ^ 1 )
  {
    if ( !under_debugger )
      interr(3158);
LABEL_10:
    BUG();
  }
  if ( (a3 & 2) != 0 )
  {
    if ( !under_debugger )
      interr(57005);
    goto LABEL_10;
  }
  LOBYTE(v3) = (a2 == nullptr) | *(_BYTE *)(a1 + 72) ^ 1;
  LODWORD(v4) = v3;
  sub_8894C0(a1);
  v5 = sub_88AA10(a1, a1 + 40, a2);
  v6 = (int)v5;
  if ( v5 )
  {
    v4 = operator new(0xA8u);
    sub_7EEE20(v4, v6);
    *(_QWORD *)(a1 + 432) = v4;
    LOBYTE(v4) = (unsigned int)sub_7EEE90(v4, (__int64 *)a2) == 0;
  }
  return (unsigned int)v4;
}

