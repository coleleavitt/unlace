unsigned __int64 __fastcall sub_B270(_QWORD *a1)
{
  __int64 *v2; // rbp
  __int64 *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 i; // rbx
  __int64 j; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  _QWORD *v13; // [rsp+8h] [rbp-450h]
  _BYTE v14[1032]; // [rsp+10h] [rbp-448h] BYREF
  unsigned __int64 v15; // [rsp+418h] [rbp-40h]

  v15 = __readfsqword(0x28u);
  v2 = a1 + 654;
  v13 = a1 + 44;
  v3 = a1 + 44;
  do
  {
    v4 = *v3++;
    qfree(v4);
    *(v3 - 1) = 0;
  }
  while ( v3 != v2 );
  v5 = 0;
  *(_QWORD *)(a1[2] + 56LL) = 0;
  do
  {
    qsnprintf(v14, 1024, "r%d", v5);
    v6 = qstrdup(v14);
    v14[0] = 102;
    a1[v5 + 44] = v6;
    a1[v5 + 172] = qstrdup(v14);
    qsnprintf(v14, 1024, "ar%d", v5);
    v7 = qstrdup(v14);
    v14[0] = 99;
    a1[v5 + 372] = v7;
    a1[v5++ + 500] = qstrdup(v14);
  }
  while ( v5 != 128 );
  for ( i = 0; i != 64; ++i )
  {
    qsnprintf(v14, 1024, "p%d", i);
    a1[i + 300] = qstrdup(v14);
  }
  for ( j = 0; j != 8; ++j )
  {
    qsnprintf(v14, 1024, "b%d", j);
    a1[j + 364] = qstrdup(v14);
  }
  a1[638] = qstrdup("ip");
  a1[639] = qstrdup("cfm");
  a1[640] = qstrdup("um");
  a1[641] = qstrdup("pr");
  a1[643] = qstrdup("psr");
  a1[628] = qstrdup("pmd");
  a1[629] = qstrdup("pmc");
  a1[631] = qstrdup("rr");
  a1[632] = qstrdup("msr");
  a1[633] = qstrdup("pkr");
  a1[634] = qstrdup("itr");
  a1[635] = qstrdup("dtr");
  a1[636] = qstrdup("ibr");
  a1[637] = qstrdup("dbr");
  a1[630] = qstrdup("cpuid");
  a1[642] = qstrdup("pr.rot");
  a1[644] = qstrdup("psr.l");
  a1[645] = qstrdup("psr.um");
  a1[646] = qstrdup("@brcst");
  a1[647] = qstrdup("@mix");
  a1[648] = qstrdup("@shuf");
  a1[649] = qstrdup("@alt");
  a1[650] = qstrdup("@rev");
  a1[651] = qstrdup("cs");
  a1[652] = qstrdup("ds");
  v10 = qstrdup("gp");
  v11 = a1[45];
  a1[653] = v10;
  qstrncpy(v11, "gp", 3);
  qstrncpy(a1[56], "sp", 3);
  *(_QWORD *)(a1[2] + 56LL) = v13;
  return v15 - __readfsqword(0x28u);
}
