double __fastcall sub_F03340(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v6; // rsi
  __int64 v7; // rbp
  double v8; // [rsp+8h] [rbp-50h]
  char v9; // [rsp+1Fh] [rbp-39h] BYREF
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h]

  v3 = sub_21D5390(a1, a2, a3);
  if ( *a1 == v3 )
    sub_21DC120(&v10, a1);
  else
    sub_21D5A60(&v10, a1);
  v4 = sub_21D5370();
  sub_21DEB80(&v10, v4, 1, &v9);
  v8 = sub_21DF000(&v10);
  if ( v10 != v3 )
  {
    sub_21D5AF0(&v10);
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
      sub_971860((_QWORD *)(v7 - 24));
      if ( v11 == v7 - 24 )
        break;
      v7 -= 24;
    }
    operator delete[]((void *)(v7 - 32), 24LL * *(_QWORD *)(v7 - 32) + 8);
  }
  return v8;
}

