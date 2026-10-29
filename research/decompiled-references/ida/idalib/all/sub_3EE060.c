__int64 sub_3EE060()
{
  __int64 v0; // r12
  __int64 v1; // rbp
  __int64 v2; // rax
  __int64 i; // rbx
  __int64 v4; // r13
  _QWORD v6[7]; // [rsp+0h] [rbp-38h] BYREF

  v6[1] = __readfsqword(0x28u);
  v0 = qword_2CCB598;
  v1 = *(_QWORD *)(qword_2CCB598 + 1672) + 2400LL;
  sub_7BF040(v1, qword_2CCB598, "$ patches", 0);
  v2 = sub_7BEB00(v1, v0, 0, 80);
  if ( v2 != -1 )
  {
    for ( i = v2; i != -1; i = sub_7BEBF0(v1, v0, i, 80) )
    {
      v4 = sub_7BE710(v1, v0, i, 65);
      LOBYTE(v6[0]) = 1;
      sub_7BE7C0(v1, v0, i, v6, 1, 80);
      v6[0] = v4;
      sub_7BE7C0(v1, v0, i, v6, 8, 65);
    }
  }
  return 1;
}
