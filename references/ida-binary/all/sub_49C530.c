__int64 __fastcall sub_49C530(char *src, char *a2, _QWORD *a3, __int64 a4)
{
  __int64 v5; // r15
  __int64 v6; // rax
  __int64 v7; // r13
  char *v8; // rbx
  __int64 v9; // r14
  __int64 v10; // r12
  char *v11; // rdi

  v5 = a4;
  v6 = (a2 - src) >> 3;
  v7 = 2 * a4;
  v8 = src;
  if ( 2 * a4 <= v6 )
  {
    v9 = 16 * a4;
    v10 = -8 * a4;
    do
    {
      v11 = v8;
      v8 += v9;
      a3 = (_QWORD *)sub_49C470(v11, &v8[v10], &v8[v10], v8, a3);
      v6 = (a2 - v8) >> 3;
    }
    while ( v7 <= v6 );
  }
  if ( v5 > v6 )
    v5 = v6;
  return sub_49C470(v8, &v8[8 * v5], &v8[8 * v5], a2, a3);
}
