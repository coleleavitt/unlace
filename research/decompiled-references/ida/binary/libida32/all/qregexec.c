__int64 __fastcall qregexec(__int64 a1, char *a2, unsigned __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v8; // r15
  int *v9; // rbx
  unsigned int v10; // r12d
  unsigned __int64 v11; // rax

  v8 = *(_QWORD *)(a1 + 24);
  v9 = (int *)qcalloc(8, a3);
  v10 = sub_87BF40(v8, a2, a3, v9, a5);
  if ( a3 )
  {
    v11 = 0;
    do
    {
      *(_QWORD *)(a4 + 2 * v11) = v9[v11 / 4];
      *(_QWORD *)(a4 + 2 * v11 + 8) = v9[v11 / 4 + 1];
      v11 += 8LL;
    }
    while ( 8 * a3 != v11 );
  }
  qfree(v9);
  return v10;
}

