__int64 __fastcall sub_A7C800(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v4; // r14d
  __int64 v6; // rax
  unsigned int *v7; // rbx
  unsigned int *v8; // r12
  char v9; // al
  __int64 v10; // rbp
  __int64 v11; // rdi

  v4 = -1;
  v6 = *(_QWORD *)(sub_FF9B20(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL)) + 256) + 24LL * a2;
  v7 = *(unsigned int **)v6;
  v8 = *(unsigned int **)(v6 + 8);
  if ( *(unsigned int **)v6 != v8 )
  {
    do
    {
      while ( 1 )
      {
        v9 = sub_FFADE0(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL), *v7);
        v10 = *v7;
        v11 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL);
        if ( !v9 )
          break;
        sub_10054D0(v11, (unsigned int)v10, a3);
LABEL_4:
        v7 += 10;
        if ( v8 == v7 )
          return v4;
      }
      if ( *(int *)(*(_QWORD *)(sub_FF9B20(v11) + 360) + 4 * v10) < 0 )
        goto LABEL_4;
      v4 = *v7;
      v7 += 10;
    }
    while ( v8 != v7 );
  }
  return v4;
}

