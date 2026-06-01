__int64 __fastcall sub_49F640(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  char *v5; // rbx
  __int64 v6; // rax
  char *v7; // r13
  char **v8; // rdx
  char *v9; // rax

  v5 = (char *)a3;
  v6 = sub_49F580(a1, a3);
  if ( v6 )
  {
    v7 = (char *)v6;
    if ( v5 )
      operator delete(v5, 0x20u);
    v5 = v7;
  }
  if ( a2 > 8 )
  {
    if ( !under_debugger )
      interr(1511);
    BUG();
  }
  if ( a4 )
    v8 = (char **)(a1 + 8LL * a2 + 72);
  else
    v8 = (char **)(a1 + 8LL * a2);
  v9 = *v8;
  if ( v5[25] < 0 )
  {
    while ( v9 )
    {
      v8 = (char **)v9;
      v9 = *(char **)v9;
    }
  }
  else
  {
    *(_QWORD *)v5 = v9;
  }
  *v8 = v5;
  return 1;
}

