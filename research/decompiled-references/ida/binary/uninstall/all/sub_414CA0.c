__int64 __fastcall sub_414CA0(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rbp
  int v8; // r9d
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rax

  if ( a3 != 2 )
  {
    sub_458930(a2, 1, a4, "procname");
    return 1;
  }
  v5 = *(_QWORD *)(a4 + 8);
  v6 = *(_QWORD *)(v5 + 8);
  if ( !v6 )
    v6 = sub_47B3B0(v5);
  v7 = sub_488820(a2, v6);
  if ( !v7 )
  {
    sub_48B710(a2, (unsigned int)"\"", v6, (unsigned int)"\" isn't a procedure", 0, v8);
    return 1;
  }
  v9 = sub_46EEB0(0, 0);
  v10 = *(__int64 **)(v7 + 40);
  v11 = v9;
  while ( v10 )
  {
    if ( (*((_BYTE *)v10 + 17) & 1) != 0 )
    {
      v12 = sub_48DF10(v10 + 5, 0xFFFFFFFF);
      sub_46FBF0(a2, v11, v12);
    }
    v10 = (__int64 *)*v10;
  }
  sub_48AFD0(a2, v11);
  return 0;
}

