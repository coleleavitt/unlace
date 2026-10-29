void __fastcall sub_557F50(_QWORD *a1, char a2, int a3)
{
  size_t v4; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // r12
  __int64 v7; // r15
  unsigned __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax

  if ( a3 > 0 )
  {
    v4 = a3;
    v5 = a1[4];
    if ( v5 )
    {
      v6 = v5 - 1;
      v7 = a3 + v5 - 1;
      v8 = a3 + v5;
      if ( v5 >= v8 )
      {
LABEL_4:
        memset((void *)(v6 + a1[3]), a2, v4);
        return;
      }
    }
    else
    {
      v8 = a3 + 1LL;
      v7 = a3;
      v6 = 0;
    }
    v9 = a1[3];
    if ( a1[5] < v8 )
    {
      v10 = qvector_reserve(a1 + 3, v9, v8, 1);
      a1[3] = v10;
      v9 = v10;
    }
    a1[4] = v8;
    *(_BYTE *)(v9 + v7) = 0;
    goto LABEL_4;
  }
}

