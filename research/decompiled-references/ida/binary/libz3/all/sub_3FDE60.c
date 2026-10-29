unsigned __int64 __fastcall sub_3FDE60(__int64 a1, double a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v3; // r15
  __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // r13
  unsigned __int64 *v10; // rax
  __int64 v11; // r12
  __int64 v12; // rbx
  unsigned __int64 *v13; // r14
  bool v14; // al
  unsigned __int64 *v15; // rcx
  unsigned __int64 v16; // [rsp+0h] [rbp-48h]

  *(_BYTE *)(**(_QWORD **)(a1 + 16) + 78LL) &= ~4u;
  result = *(_QWORD *)(a1 + 24);
  v3 = *(unsigned __int64 **)(a1 + 16);
  v4 = result - 8;
  if ( (__int64)(result - (_QWORD)v3) > 8 )
  {
    v5 = *(_QWORD *)(result - 8);
    *(_QWORD *)(result - 8) = *v3;
    v16 = v5;
    v6 = (v4 - (__int64)v3) >> 3;
    if ( v4 - (__int64)v3 <= 16 )
    {
      if ( (v6 & 1) != 0 )
      {
LABEL_20:
        v15 = v3;
LABEL_13:
        result = v16;
        *v15 = v16;
        goto LABEL_2;
      }
      if ( (unsigned __int64)(v6 - 1) <= 2 )
      {
        v10 = v3;
        v7 = 0;
        goto LABEL_15;
      }
    }
    else
    {
      v7 = 0;
      do
      {
        v8 = v7;
        v7 = 2 * v7 + 2 - sub_3FDA00(v3[2 * v7 + 1], v3[2 * v7 + 2], a2);
        v9 = v7;
        v10 = &v3[v7];
        v3[v8] = *v10;
      }
      while ( (v6 - 1) / 2 > v7 );
      if ( (v6 & 1) == 0 && (v6 - 2) >> 1 == v7 )
      {
LABEL_15:
        v11 = v7;
        v9 = 2 * v7 + 1;
        *v10 = v3[v9];
        while ( 1 )
        {
LABEL_11:
          v13 = &v3[v11];
          v14 = sub_3FDA00(v16, *v13, a2);
          v15 = &v3[v9];
          if ( !v14 )
          {
            v4 = *(_QWORD *)(a1 + 24) - 8LL;
            goto LABEL_13;
          }
          v12 = v11;
          *v15 = *v13;
          if ( !v11 )
            break;
          v11 = (v11 - 1) / 2;
          v9 = v12;
        }
        v15 = v3;
        v4 = *(_QWORD *)(a1 + 24) - 8LL;
        goto LABEL_13;
      }
      v11 = (v7 - 1) / 2;
      if ( v7 )
        goto LABEL_11;
    }
    v4 = *(_QWORD *)(a1 + 24) - 8LL;
    goto LABEL_20;
  }
LABEL_2:
  *(_QWORD *)(a1 + 24) = v4;
  return result;
}

