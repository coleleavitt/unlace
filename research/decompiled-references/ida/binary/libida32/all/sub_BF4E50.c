void __fastcall sub_BF4E50(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r13
  __int64 v4; // r12
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // [rsp+8h] [rbp-60h]
  __int64 v17; // [rsp+10h] [rbp-58h] BYREF
  __int64 v18; // [rsp+18h] [rbp-50h]

  v2 = (_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 4) &= ~1u;
  *(_DWORD *)a1 = 0;
  v4 = sub_21D5370();
  sub_21D8290(&v17, 0.0);
  sub_21DE690(a1 + 8, &v17, v4);
  sub_21D5AF0(&v17);
  *(_DWORD *)a1 = 3;
  v5 = sub_21D5390();
  if ( *a2 == v5 )
  {
    sub_21DC190(&v17, a2);
    v6 = v17;
    if ( *(_QWORD *)(a1 + 8) != v5 )
    {
LABEL_3:
      if ( v5 != v6 )
      {
        sub_21D5850(v2, &v17);
        if ( v17 == v5 )
          goto LABEL_5;
LABEL_11:
        sub_21D5AF0(&v17);
        return;
      }
      goto LABEL_8;
    }
  }
  else
  {
    sub_21D5A90(&v17, a2);
    v6 = v17;
    if ( *(_QWORD *)(a1 + 8) != v5 )
      goto LABEL_3;
  }
  if ( v5 == v6 )
  {
    v9 = *(_QWORD *)(a1 + 16);
    if ( v9 )
    {
      v10 = 24LL * *(_QWORD *)(v9 - 8);
      v11 = v9 + v10;
      if ( v9 != v9 + v10 )
      {
        while ( 1 )
        {
          v9 = v11 - 24;
          v16 = v11;
          v13 = v11 - 24;
          if ( *(_QWORD *)(v11 - 24) == v6 )
          {
            sub_A2B2D0(v13);
            v12 = v16;
            if ( *(_QWORD *)(a1 + 16) == v9 )
            {
LABEL_22:
              v10 = 24LL * *(_QWORD *)(v12 - 32);
              break;
            }
          }
          else
          {
            sub_21D5AF0(v13);
            v12 = v16;
            if ( v9 == *(_QWORD *)(a1 + 16) )
              goto LABEL_22;
          }
          v11 = v9;
        }
      }
      operator delete[]((void *)(v9 - 8), v10 + 8);
    }
    goto LABEL_24;
  }
LABEL_8:
  sub_971860(v2);
  if ( v5 != v17 )
  {
    sub_21D5A90(v2, &v17);
    goto LABEL_10;
  }
LABEL_24:
  sub_21DC190(v2, &v17);
LABEL_10:
  if ( v17 != v5 )
    goto LABEL_11;
LABEL_5:
  if ( v18 )
  {
    v7 = 24LL * *(_QWORD *)(v18 - 8);
    v8 = v18 + v7;
    if ( v18 == v18 + v7 )
    {
      operator delete[]((void *)(v18 - 8), v7 + 8);
      return;
    }
    while ( 1 )
    {
      v14 = v8 - 24;
      v15 = v8 - 24;
      if ( v5 == *(_QWORD *)(v8 - 24) )
      {
        sub_A2B2D0(v15);
        if ( v18 == v14 )
        {
LABEL_29:
          operator delete[]((void *)(v8 - 32), 24LL * *(_QWORD *)(v8 - 32) + 8);
          return;
        }
      }
      else
      {
        sub_21D5AF0(v15);
        if ( v14 == v18 )
          goto LABEL_29;
      }
      v8 -= 24;
    }
  }
}

