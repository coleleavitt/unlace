double __fastcall sub_69EFF0(__int64 *a1)
{
  __int64 v1; // r12
  __int64 v2; // rbx
  __int64 v3; // rax
  double v4; // rbp
  __int64 *v6; // r12
  __int64 *v7; // rbx
  __int64 v8; // rsi
  char v9; // [rsp+Fh] [rbp-39h] BYREF
  __int64 v10; // [rsp+10h] [rbp-38h] BYREF
  __int64 *v11; // [rsp+18h] [rbp-30h]

  v1 = *a1;
  v2 = sub_2575D20();
  if ( v1 == v2 )
    sub_257CF50(&v10, a1);
  else
    sub_25768A0(&v10, a1);
  v3 = sub_2575D00();
  sub_2582620(&v10, v3, 1, &v9);
  v4 = sub_2582900(&v10);
  if ( v10 != v2 )
  {
    sub_25769A0(&v10);
    return v4;
  }
  v6 = v11;
  if ( !v11 )
    return v4;
  v7 = &v11[3 * *(v11 - 1)];
  if ( v11 == v7 )
  {
    v8 = 0;
  }
  else
  {
    do
    {
      v7 -= 3;
      sub_5FF3B0(v7);
    }
    while ( v6 != v7 );
    v8 = 24 * *(v6 - 1);
  }
  operator delete[](v6 - 1, v8 + 8);
  return v4;
}

