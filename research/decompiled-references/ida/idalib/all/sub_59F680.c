unsigned __int64 __fastcall sub_59F680(__int64 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v5; // rsi
  _QWORD *v6; // rbp
  unsigned __int64 v7; // rax
  __int64 v8; // r12
  unsigned __int64 v9; // r13
  unsigned __int64 i; // rbx
  _QWORD v12[3]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-30h]

  v3 = a2;
  v13 = __readfsqword(0x28u);
  if ( a2 )
    v3 = sub_3BDD60(a1, a2);
  v5 = a3;
  v6 = a1 + 300;
  v7 = sub_3BDD60(a1, v5);
  v8 = *a1;
  v9 = v7;
  v12[2] = a1;
  v12[0] = &off_2B2F118;
  v12[1] = a1 + 300;
  for ( i = sub_7BEB00(a1 + 300, v8, v3, 80); i < v9; i = sub_7BEBF0(v6, v8, i, 80) )
  {
    sub_7BE710(v6, v8, i, 65);
    sub_599780((__int64)v12, i);
  }
  return v13 - __readfsqword(0x28u);
}
