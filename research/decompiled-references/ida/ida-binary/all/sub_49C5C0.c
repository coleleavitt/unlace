void __fastcall sub_49C5C0(char *src, char *a2, char *a3)
{
  char *v3; // r13
  __int64 v4; // r14
  char *v7; // r15
  char *v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // [rsp+8h] [rbp-40h]

  v3 = &a3[a2 - src];
  v4 = (a2 - src) >> 3;
  v11 = a2 - src;
  if ( a2 - src <= 48 )
  {
    sub_49BF00(src, a2);
  }
  else
  {
    v7 = src;
    do
    {
      v8 = v7;
      v7 += 56;
      sub_49BF00(v8, v7);
    }
    while ( a2 - v7 > 48 );
    sub_49BF00(v7, a2);
    if ( v11 > 56 )
    {
      v9 = 7;
      do
      {
        sub_49C530(src, a2, a3, v9);
        v10 = 2 * v9;
        v9 *= 4;
        sub_49C530(a3, v3, src, v10);
      }
      while ( v4 > v9 );
    }
  }
}
