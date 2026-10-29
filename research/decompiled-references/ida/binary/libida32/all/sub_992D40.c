__int64 __fastcall sub_992D40(__int64 *a1)
{
  __int64 result; // rax
  unsigned int v2; // ecx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // r10
  __int64 *v6; // r9
  __int64 v7; // r11
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 *i; // rbp
  __int64 v13; // r12
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  __int64 *v16; // rsi
  __int64 v17; // rax

  result = *((unsigned int *)a1 + 2);
  v2 = result - 1;
  *((_DWORD *)a1 + 2) = result - 1;
  if ( (_DWORD)result != 1 )
  {
    v3 = *a1;
    v4 = v2;
    v5 = 8LL * v2;
    v6 = (__int64 *)(*a1 + v5 - 8);
    v7 = *a1;
    v8 = *v6;
    v9 = (*v6 & 3) != 0 ? v8 | 3 : v8 | 1;
    *v6 = v9;
    v10 = v9;
    result = v9 & 3;
    for ( i = a1 + 2; result != 1; result = *v6 & 3 )
    {
      v15 = v10 & 0xFFFFFFFFFFFFFFFCLL;
      if ( result )
      {
        if ( result != 3 )
          return sub_992ED0(v15);
        *((_DWORD *)a1 + 2) = --v2;
        if ( !v2 )
          return result;
        v4 = v2;
        v16 = (__int64 *)(v3 + 8LL * v2 - 8);
        v17 = *v16;
        v15 = *v16 & 3;
        if ( (*v16 & 3) != 0 )
        {
          if ( v15 != 1 )
            return sub_992ED0(v15);
          *v16 = v17 | 3;
        }
        else
        {
          *v16 = v17 | 1;
        }
      }
      else
      {
        v13 = *(_QWORD *)(v15 + 8);
        if ( v13 )
        {
          v14 = v4 + 1;
          if ( v14 > *((unsigned int *)a1 + 3) )
          {
            sub_22134E0(a1, i, v14, 8);
            v7 = *a1;
            v5 = 8LL * *((unsigned int *)a1 + 2);
          }
          *(_QWORD *)(v7 + v5) = v13;
          result = *((unsigned int *)a1 + 2);
          v2 = result + 1;
          *((_DWORD *)a1 + 2) = result + 1;
          if ( (_DWORD)result == -1 )
            return result;
          v3 = *a1;
          v4 = v2;
        }
        else
        {
          *v6 = v10 | 1;
        }
      }
      v5 = 8 * v4;
      v7 = v3;
      v6 = (__int64 *)(v3 + 8 * v4 - 8);
      v10 = *v6;
    }
  }
  return result;
}

