const char *__fastcall sub_43D990(__int64 a1, _QWORD *a2, __int64 a3)
{
  int *v4; // rax
  int *v5; // rbx
  int v6; // eax
  bool v7; // zf
  int *v8; // rax
  int *v9; // rbx
  int v10; // eax

  sub_48EDF0(*a2, a2[1], 0xFFFFFFFFLL);
  sub_48EDF0(*a2, a3, 0xFFFFFFFFLL);
  sub_48EDF0(*a2, " (characters ", 0xFFFFFFFFLL);
  v4 = (int *)sub_47BD00(*(unsigned int *)(a1 + 4));
  ++*v4;
  v5 = v4;
  sub_48F180(*a2, v4);
  v6 = *v5 - 1;
  v7 = *v5 == 1;
  *v5 = v6;
  if ( v6 < 0 || v7 )
    sub_47B120(v5);
  sub_48EDF0(*a2, "-", 0xFFFFFFFFLL);
  v8 = (int *)sub_47BD00(*(unsigned int *)(a1 + 12));
  ++*v8;
  v9 = v8;
  sub_48F180(*a2, v8);
  v10 = *v9 - 1;
  v7 = *v9 == 1;
  *v9 = v10;
  if ( v10 < 0 || v7 )
    sub_47B120(v9);
  sub_48EDF0(*a2, ")", 0xFFFFFFFFLL);
  a2[1] = "\n";
  return "\n";
}

