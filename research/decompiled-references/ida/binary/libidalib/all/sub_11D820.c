__int64 __fastcall sub_11D820(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  _QWORD **v4; // rbx
  __int64 v5; // rbp
  char v6; // dl
  __int64 result; // rax

  if ( a1[1068] )
  {
    a1[1069] = 0;
    qfree();
    a1[1068] = 0;
    a1[1070] = 0;
  }
  v2 = a1[1066];
  v3 = a1[1065];
  v4 = (_QWORD **)a1[1065];
  if ( 8LL * a1[1066] )
  {
    do
    {
      v5 = (__int64)*v4;
      if ( *v4 )
      {
        sub_119040(*v4);
        if ( *(_QWORD *)(v5 + 4240) )
        {
          *(_QWORD *)(v5 + 4248) = 0;
          qfree();
        }
        qfree();
        v3 = a1[1065];
        v2 = a1[1066];
      }
      ++v4;
    }
    while ( v4 != (_QWORD **)(v3 + 8 * v2) );
  }
  if ( v3 )
  {
    a1[1066] = 0;
    qfree();
    a1[1065] = 0;
    a1[1067] = 0;
  }
  a1[1072] = -1;
  a1[1071] = 0;
  v6 = build_snapshot_tree();
  result = 0;
  if ( v6 )
  {
    sub_11D720(a1, a1 + 535, 0);
    return a1[1069];
  }
  return result;
}

