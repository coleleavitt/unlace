double __fastcall sub_BF88F0(__int64 a1)
{
  __int64 v1; // rax
  void *v2; // rcx
  __int64 v3; // rbp
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v10; // rsi
  __int64 v11; // rbp
  double v12; // [rsp+8h] [rbp-60h]
  void *v13; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v14; // [rsp+18h] [rbp-50h]
  __int64 v15; // [rsp+20h] [rbp-48h] BYREF
  __int64 v16; // [rsp+28h] [rbp-40h]

  v1 = sub_21F8CF0(*(_BYTE *)(a1 + 2) >> 3);
  v2 = *(void **)(a1 + 16);
  v3 = v1;
  v4 = *(unsigned int *)(a1 + 24);
  v5 = (unsigned __int64)(v4 + 63) >> 6;
  if ( v5 > 1 )
  {
    sub_2205610(&v13, v4, v5, v2);
  }
  else
  {
    v14 = *(_DWORD *)(a1 + 24);
    if ( (unsigned int)v4 > 0x40 )
      sub_2205470(&v13, v2, 0);
    else
      v13 = v2;
  }
  v6 = sub_21F90D0();
  v7 = v6;
  if ( v3 == v6 )
    sub_21FFDA0(&v15, v6, &v13);
  else
    sub_21FF7D0(&v15, v3, &v13);
  if ( v14 > 0x40 && v13 )
    operator delete[](v13);
  v8 = sub_21F90B0();
  sub_22028C0(&v15, v8, 1, &v13);
  v12 = sub_2202D40(&v15);
  if ( v15 == v7 )
  {
    if ( v16 )
    {
      v10 = 24LL * *(_QWORD *)(v16 - 8);
      v11 = v16 + v10;
      if ( v16 == v16 + v10 )
      {
        operator delete[]((void *)(v16 - 8), v10 + 8);
      }
      else
      {
        while ( 1 )
        {
          sub_9955A0((_QWORD *)(v11 - 24));
          if ( v16 == v11 - 24 )
            break;
          v11 -= 24;
        }
        operator delete[]((void *)(v11 - 32), 24LL * *(_QWORD *)(v11 - 32) + 8);
      }
    }
  }
  else
  {
    sub_21F9830(&v15);
  }
  return v12;
}
