void __fastcall sub_BF4040(__int64 a1)
{
  __int64 v2; // r12
  void *v3; // rdi
  void *v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // r13
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // rsi
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // rdi

  v2 = sub_21D5390();
  if ( *(_QWORD *)(a1 + 64) != v2 )
  {
    sub_21D5AF0(a1 + 64);
    goto LABEL_3;
  }
  v10 = *(_QWORD *)(a1 + 72);
  if ( v10 )
  {
    v11 = 24LL * *(_QWORD *)(v10 - 8);
    v12 = v10 + v11;
    if ( v10 == v10 + v11 )
    {
      operator delete[]((void *)(v10 - 8), v11 + 8);
      goto LABEL_3;
    }
    while ( 1 )
    {
      v13 = v12 - 24;
      v14 = v12 - 24;
      if ( v2 == *(_QWORD *)(v12 - 24) )
      {
        sub_A2B2D0(v14);
        if ( *(_QWORD *)(a1 + 72) == v13 )
        {
LABEL_27:
          operator delete[]((void *)(v12 - 32), 24LL * *(_QWORD *)(v12 - 32) + 8);
          break;
        }
      }
      else
      {
        sub_21D5AF0(v14);
        if ( v13 == *(_QWORD *)(a1 + 72) )
          goto LABEL_27;
      }
      v12 -= 24;
    }
  }
LABEL_3:
  if ( *(_QWORD *)(a1 + 40) == v2 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    if ( v5 )
    {
      v6 = 24LL * *(_QWORD *)(v5 - 8);
      v7 = v5 + v6;
      if ( v5 != v5 + v6 )
      {
        while ( 1 )
        {
          v8 = v7 - 24;
          v9 = v7 - 24;
          if ( v2 == *(_QWORD *)(v7 - 24) )
          {
            sub_A2B2D0(v9);
            if ( *(_QWORD *)(a1 + 48) == v8 )
            {
LABEL_19:
              operator delete[]((void *)(v7 - 32), 24LL * *(_QWORD *)(v7 - 32) + 8);
              goto LABEL_5;
            }
          }
          else
          {
            sub_21D5AF0(v9);
            if ( *(_QWORD *)(a1 + 48) == v8 )
              goto LABEL_19;
          }
          v7 -= 24;
        }
      }
      operator delete[]((void *)(v5 - 8), v6 + 8);
    }
  }
  else
  {
    sub_21D5AF0(a1 + 40);
  }
LABEL_5:
  if ( *(_DWORD *)(a1 + 32) > 0x40u )
  {
    v3 = *(void **)(a1 + 24);
    if ( v3 )
      operator delete[](v3);
  }
  if ( *(_DWORD *)(a1 + 16) > 0x40u )
  {
    v4 = *(void **)(a1 + 8);
    if ( v4 )
      operator delete[](v4);
  }
}

