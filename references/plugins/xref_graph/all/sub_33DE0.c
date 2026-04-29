int *__fastcall pin_nodes_ah_t__::vfunc_6(__int64 a1, __int64 a2, __int64 a3, int **a4, __int64 a5, __int64 a6)
{
  int *v7; // rsi
  int *v8; // rcx
  int *v9; // rax
  char v10; // bp
  int *v11; // rax
  int *v12; // rbx
  char v13; // bp
  int *v14; // rcx
  int *result; // rax
  __int64 v16; // rdx

  v7 = a4[1];
  v8 = &v7[2 * (_QWORD)a4[2]];
  if ( v7 == v8 )
  {
    v10 = 1;
  }
  else
  {
    v9 = v7;
    do
    {
      v10 = *(_BYTE *)(*(_QWORD *)v9 + 133LL);
      if ( !v10 )
        break;
      v9 += 2;
    }
    while ( v8 != v9 );
  }
  v11 = *a4;
  if ( !*a4 || *v11 > 1 )
  {
    sub_22070((__int64)a4, 0, 0, 0, a5, a6);
    v7 = a4[1];
    v11 = *a4;
  }
  v12 = v7;
  if ( !v11 || *v11 > 1 )
  {
    sub_22070((__int64)a4, 0, 0, 0, a5, a6);
    v7 = a4[1];
  }
  v13 = v10 ^ 1;
  v14 = &v7[2 * (_QWORD)a4[2]];
  for ( result = v12; v14 != result; *(_BYTE *)(v16 + 133) = v13 )
  {
    v16 = *(_QWORD *)result;
    result += 2;
  }
  return result;
}
