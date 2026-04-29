unsigned __int64 __fastcall sub_3B440(_QWORD *a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  __int64 v5; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-20h]

  v3 = a1[4];
  v10 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(v3 + 16) & a2;
  a1[44] = v5;
  set_default_sreg_value(0, 68, v5);
  if ( a3 )
  {
    v7 = ea2node(a1[44]);
    v8 = a1[19];
    v9 = v7 + 1;
    netnode_supset(v8, 0, &v9, 8, 65);
  }
  return v10 - __readfsqword(0x28u);
}
