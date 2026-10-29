_QWORD *__fastcall sub_21F6CB0(_QWORD *a1, __int64 a2, __int64 a3)
{
  int *v5; // r12
  __int64 v6; // rbx
  __int64 i; // r15
  __int64 v8; // rsi
  int *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rax
  __int64 v13; // rbp
  _BOOL8 v14; // rdx
  double v15; // xmm0_8
  __int64 v17; // rsi
  __int64 v18; // r12
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 v22; // [rsp+10h] [rbp-78h] BYREF
  __int64 v23; // [rsp+18h] [rbp-70h]
  _BYTE v24[88]; // [rsp+30h] [rbp-58h] BYREF

  v5 = (int *)(a2 + 16);
  v6 = a3;
  for ( i = sub_21F90B0(a1, a2); ; v6 = i )
  {
    v8 = v6;
    v9 = v5;
    if ( (unsigned __int8)sub_21EF140(v5, v6) )
      break;
    while ( v6 != sub_21F9090() )
    {
      v11 = sub_21F9080();
      v12 = sub_21F90A0();
      if ( v6 != v11 )
      {
        if ( v6 == v12 )
          break;
        v12 = sub_21F90C0();
      }
      v6 = v12;
      v9 = v5;
      v8 = v12;
      if ( (unsigned __int8)sub_21EF140(v5, v12) )
        goto LABEL_8;
    }
  }
LABEL_8:
  v13 = sub_21F90D0(v9, v8, v10);
  if ( v6 == v13 )
    sub_21FFBD0(a1, v6);
  else
    sub_21FBA00(a1, v6);
  v14 = (*(_BYTE *)(a2 + 19) & 0x20) != 0;
  if ( *a1 == v13 )
    sub_2201FE0(a1, a2, v14, 1);
  else
    sub_21FB140(a1, a2, v14, 1);
  v15 = pow(2.0, (double)((__int16)(8 * *(_WORD *)(a2 + 18)) >> 3));
  sub_21FBFD0(v24, v15);
  sub_22023D0(&v22, v24, i);
  sub_21F9830(v24);
  sub_22028C0(&v22, v6, 0, v24);
  if ( *a1 == v13 )
    sub_22018C0(a1, &v22, 0);
  else
    sub_21FEB40(a1, &v22, 0);
  if ( v6 != a3 )
    sub_22028C0(a1, a3, 1, v24);
  if ( v13 == v22 )
  {
    if ( v23 )
    {
      v17 = 24LL * *(_QWORD *)(v23 - 8);
      v18 = v23 + v17;
      if ( v23 != v23 + v17 )
      {
        while ( 1 )
        {
          v19 = v18 - 24;
          v20 = v18 - 24;
          if ( v13 == *(_QWORD *)(v18 - 24) )
          {
            sub_A4F010(v20);
            if ( v23 == v19 )
            {
LABEL_28:
              operator delete[]((void *)(v18 - 32), 24LL * *(_QWORD *)(v18 - 32) + 8);
              return a1;
            }
          }
          else
          {
            sub_21F9830(v20);
            if ( v19 == v23 )
              goto LABEL_28;
          }
          v18 -= 24;
        }
      }
      operator delete[]((void *)(v23 - 8), v17 + 8);
    }
  }
  else
  {
    sub_21F9830(&v22);
  }
  return a1;
}
