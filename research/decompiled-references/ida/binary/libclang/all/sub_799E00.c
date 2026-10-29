unsigned int *__fastcall sub_799E00(__int64 a1, unsigned int *a2, __int64 a3)
{
  unsigned int *result; // rax
  unsigned __int64 v6; // rdx
  size_t v7; // r13
  unsigned int *v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rdx
  unsigned int **v11; // rdi
  unsigned int **v12; // rsi
  __int64 v13; // rdx
  unsigned int **v14; // rdi
  unsigned int **v15; // rsi

  result = (unsigned int *)sub_6BB160(a3, a1);
  if ( result != a2 )
  {
    v6 = a2[2];
    v7 = result[2];
    v8 = result;
    v9 = a2[2];
    if ( v7 >= v6 )
    {
      if ( a2[2] )
      {
        v14 = *(unsigned int ***)result;
        v15 = *(unsigned int ***)a2;
        if ( v6 == 1 )
        {
          result = *v15;
          *v14 = *v15;
        }
        else
        {
          result = (unsigned int *)memmove(v14, v15, 8 * v6);
        }
      }
      goto LABEL_10;
    }
    if ( result[3] < v6 )
    {
      v7 = 0;
      result[2] = 0;
      result = (unsigned int *)sub_25D6060(result, result + 4, v6, 8);
      v13 = a2[2];
    }
    else
    {
      v10 = 8 * v6;
      if ( !result[2] )
        goto LABEL_9;
      v7 *= 8LL;
      v11 = *(unsigned int ***)result;
      v12 = *(unsigned int ***)a2;
      if ( v7 == 8 )
      {
        result = *v12;
        *v11 = *v12;
      }
      else
      {
        result = (unsigned int *)memmove(v11, v12, v7);
      }
      v13 = a2[2];
    }
    v10 = 8 * v13;
    if ( v10 == v7 )
    {
LABEL_10:
      v8[2] = v9;
      goto LABEL_11;
    }
LABEL_9:
    result = (unsigned int *)memcpy((void *)(v7 + *(_QWORD *)v8), (const void *)(v7 + *(_QWORD *)a2), v10 - v7);
    goto LABEL_10;
  }
LABEL_11:
  *(_BYTE *)(a1 + 29) |= 1u;
  return result;
}

