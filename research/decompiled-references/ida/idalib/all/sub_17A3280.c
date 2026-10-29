char *__fastcall sub_17A3280(char *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi

  v9 = sub_B91570(a2, a2, a3, a4, a5, a6);
  do
  {
    if ( a1[8] >= 0 )
    {
      v12 = *((_QWORD *)a1 + 45);
      if ( v12 )
      {
        if ( sub_B91570(v12, a2, v7, v8, v10, v11) == v9 )
          break;
      }
    }
    a1 = *(char **)a1;
  }
  while ( a1 );
  return a1;
}
