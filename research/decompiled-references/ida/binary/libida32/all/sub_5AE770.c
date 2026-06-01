unsigned int *__fastcall sub_5AE770(_QWORD *a1, __int64 a2, unsigned int a3)
{
  char v4; // al
  unsigned int *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int *v8; // rdi
  unsigned int *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int *v12; // rsi

  v4 = sub_5ACDD0(a1, a2, 1);
  v5 = nullptr;
  if ( v4 )
  {
    v6 = *(int *)(a2 + 104);
    if ( a3 == -1 || !(_DWORD)v6 )
      return nullptr;
    v7 = 8 * v6;
    v8 = *(unsigned int **)(a2 + 112);
    v9 = &v8[2 * v6];
    v10 = (8 * v6) >> 3;
    if ( v7 <= 0 )
    {
      if ( a3 >= *v8 )
      {
        v5 = *(unsigned int **)(a2 + 112);
        if ( a3 >= v8[1] )
          return nullptr;
      }
    }
    else
    {
      v5 = *(unsigned int **)(a2 + 112);
      do
      {
        while ( 1 )
        {
          v11 = v10 >> 1;
          v12 = &v5[2 * (v10 >> 1)];
          if ( a3 >= *v12 && (a3 != *v12 || v12[1] < a3) )
            break;
          v10 >>= 1;
          if ( v11 <= 0 )
            goto LABEL_11;
        }
        v5 = v12 + 2;
        v10 = v10 - 1 - v11;
      }
      while ( v10 > 0 );
LABEL_11:
      if ( v9 == v5 || a3 < *v5 || a3 >= v5[1] )
      {
        if ( v8 != v5 && a3 >= *(v5 - 2) && a3 < *(v5 - 1) )
        {
          v5 -= 2;
          return v5;
        }
        return nullptr;
      }
    }
  }
  return v5;
}

