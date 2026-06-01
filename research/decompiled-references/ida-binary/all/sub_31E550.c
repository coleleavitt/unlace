__int64 __fastcall sub_31E550(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 *v5; // rdi
  __int64 *v6; // r12
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 *v9; // rdi
  __int64 *v10; // rbx
  __int64 v11; // rbp
  double v12; // xmm0_8
  char v13; // dl
  __int64 result; // rax

  v3 = a1[1068];
  if ( v3 )
  {
    a1[1069] = 0;
    qfree(v3, a2);
    a1[1068] = 0;
    a1[1070] = 0;
  }
  v4 = a1[1066];
  v5 = (__int64 *)a1[1065];
  v6 = v5;
  if ( 8 * v4 )
  {
    do
    {
      v7 = *v6;
      if ( *v6 )
      {
        v8 = *(_QWORD *)(v7 + 4248);
        v9 = *(__int64 **)(v7 + 4240);
        v10 = v9;
        if ( 8 * v8 )
        {
          do
          {
            v11 = *v10;
            if ( *v10 )
            {
              v12 = sub_319CD0(*v10);
              qfree(v11, a2, v12);
              v9 = *(__int64 **)(v7 + 4240);
              v8 = *(_QWORD *)(v7 + 4248);
            }
            ++v10;
          }
          while ( v10 != &v9[v8] );
        }
        if ( v9 )
        {
          *(_QWORD *)(v7 + 4248) = 0;
          qfree(v9, a2);
        }
        qfree(v7, a2);
        v5 = (__int64 *)a1[1065];
        v4 = a1[1066];
      }
      ++v6;
    }
    while ( v6 != &v5[v4] );
  }
  if ( v5 )
  {
    a1[1066] = 0;
    qfree(v5, a2);
    a1[1065] = 0;
    a1[1067] = 0;
  }
  a1[1072] = -1;
  a1[1071] = 0;
  v13 = build_snapshot_tree(a1 + 535);
  result = 0;
  if ( v13 )
  {
    sub_31E450(a1, a1 + 535, 0);
    return a1[1069];
  }
  return result;
}
