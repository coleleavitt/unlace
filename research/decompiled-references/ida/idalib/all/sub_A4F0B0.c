double __fastcall sub_A4F0B0(_QWORD *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rsi
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rdi
  double v8; // [rsp+8h] [rbp-50h]
  char v9; // [rsp+1Fh] [rbp-39h] BYREF
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+28h] [rbp-30h]

  v1 = sub_21F90D0();
  if ( *a1 == v1 )
    sub_21FFE60(&v10, a1);
  else
    sub_21F97A0(&v10, a1);
  v2 = sub_21F90B0();
  sub_22028C0(&v10, v2, 1, &v9);
  v8 = sub_2202D40(&v10);
  if ( v10 != v1 )
  {
    sub_21F9830(&v10);
    return v8;
  }
  if ( !v11 )
    return v8;
  v4 = 24LL * *(_QWORD *)(v11 - 8);
  v5 = v11 + v4;
  if ( v11 == v11 + v4 )
  {
    operator delete[]((void *)(v11 - 8), v4 + 8);
    return v8;
  }
  while ( 1 )
  {
    v6 = v5 - 24;
    v7 = v5 - 24;
    if ( v1 == *(_QWORD *)(v5 - 24) )
      break;
    sub_21F9830(v7);
    if ( v11 == v6 )
      goto LABEL_15;
LABEL_12:
    v5 -= 24;
  }
  sub_A4F010(v7);
  if ( v11 != v6 )
    goto LABEL_12;
LABEL_15:
  operator delete[]((void *)(v5 - 32), 24LL * *(_QWORD *)(v5 - 32) + 8);
  return v8;
}
