double __fastcall sub_F27080(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v6; // rsi
  __int64 v7; // rbp
  double v8; // [rsp+8h] [rbp-50h]
  char v9; // [rsp+1Fh] [rbp-39h] BYREF
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h]

  v3 = sub_21F90D0(a1, a2, a3);
  if ( *a1 == v3 )
    sub_21FFE60(&v10, a1);
  else
    sub_21F97A0(&v10, a1);
  v4 = sub_21F90B0();
  sub_22028C0(&v10, v4, 1, &v9);
  v8 = sub_2202D40(&v10);
  if ( v10 != v3 )
  {
    sub_21F9830(&v10);
    return v8;
  }
  if ( !v11 )
    return v8;
  v6 = 24LL * *(_QWORD *)(v11 - 8);
  v7 = v11 + v6;
  if ( v11 == v11 + v6 )
  {
    operator delete[]((void *)(v11 - 8), v6 + 8);
  }
  else
  {
    while ( 1 )
    {
      sub_9955A0((_QWORD *)(v7 - 24));
      if ( v11 == v7 - 24 )
        break;
      v7 -= 24;
    }
    operator delete[]((void *)(v7 - 32), 24LL * *(_QWORD *)(v7 - 32) + 8);
  }
  return v8;
}
