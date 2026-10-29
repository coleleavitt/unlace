void **__fastcall sub_B68390(__int64 a1, void **a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void **result; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  void **v11; // rbx
  int v12; // r13d
  char *v13; // rax
  char *v14; // rdi
  __int64 v15; // r14
  void **v16; // rsi
  __int64 v17; // rdx

  result = (void **)sub_A71BE0(a3, a1, a3, a4, a5, a6);
  if ( result != a2 )
  {
    v9 = *((unsigned int *)a2 + 2);
    v10 = *((unsigned int *)result + 2);
    v11 = result;
    v12 = *((_DWORD *)a2 + 2);
    if ( v9 <= v10 )
    {
      if ( *((_DWORD *)a2 + 2) )
        result = (void **)memmove(*result, *a2, 8 * v9);
    }
    else
    {
      if ( v9 > *((unsigned int *)result + 3) )
      {
        *((_DWORD *)result + 2) = 0;
        sub_22134E0(result, result + 2, v9, 8);
        v13 = (char *)*a2;
        v9 = *((unsigned int *)a2 + 2);
        v10 = 0;
        v14 = (char *)*v11;
        v16 = (void **)*a2;
      }
      else
      {
        v13 = (char *)*a2;
        v14 = (char *)*v11;
        v15 = 8 * v10;
        v16 = (void **)*a2;
        if ( v10 )
        {
          memmove(v14, v16, 8 * v10);
          v13 = (char *)*a2;
          v10 = v15;
          v9 = *((unsigned int *)a2 + 2);
          v14 = (char *)*v11 + v15;
          v16 = (void **)((char *)*a2 + v15);
        }
      }
      v17 = 8 * v9;
      result = (void **)&v13[v17];
      if ( v16 != result )
        result = (void **)memcpy(v14, v16, v17 - v10);
    }
    *((_DWORD *)v11 + 2) = v12;
  }
  *(_BYTE *)(a1 + 29) |= 1u;
  return result;
}

