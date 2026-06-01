__int64 __fastcall sub_16BDC30(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r13
  unsigned int v5; // r12d
  __int64 v6; // rax
  __int64 v8; // rsi
  __int64 v9; // rbp
  char v10; // [rsp+Fh] [rbp-59h] BYREF
  __int64 v11; // [rsp+10h] [rbp-58h] BYREF
  __int64 v12; // [rsp+18h] [rbp-50h]

  v4 = sub_21F90D0(a1, a2, a3);
  if ( *a1 == v4 )
    sub_21FFE60(&v11, a1);
  else
    sub_21F97A0(&v11, a1);
  sub_22028C0(&v11, a2, 1, &v10);
  v5 = 0;
  sub_22028C0(&v11, a3, 1, &v10);
  v6 = v11;
  if ( v11 == *a1 )
  {
    if ( v11 != v4 )
    {
      v5 = sub_21F96E0(&v11, a1);
      if ( v4 != v11 )
        goto LABEL_5;
      goto LABEL_9;
    }
    v5 = sub_2201080(&v11, a1);
    v6 = v11;
  }
  if ( v4 != v6 )
  {
LABEL_5:
    sub_21F9830(&v11);
    return v5;
  }
LABEL_9:
  if ( v12 )
  {
    v8 = 24LL * *(_QWORD *)(v12 - 8);
    v9 = v12 + v8;
    if ( v12 == v12 + v8 )
    {
      operator delete[]((void *)(v12 - 8), v8 + 8);
    }
    else
    {
      while ( 1 )
      {
        sub_9955A0((_QWORD *)(v9 - 24));
        if ( v12 == v9 - 24 )
          break;
        v9 -= 24;
      }
      operator delete[]((void *)(v9 - 32), 24LL * *(_QWORD *)(v9 - 32) + 8);
    }
  }
  return v5;
}
