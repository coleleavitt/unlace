unsigned int *__fastcall sub_9E2160(__int64 a1, int a2, unsigned int **a3, __int64 a4)
{
  __int64 v6; // rax
  _DWORD *v7; // rdx
  unsigned int v8; // ecx
  unsigned int *v9; // rdi
  __int64 v10; // rcx
  _DWORD *v11; // r8
  unsigned int *result; // rax
  unsigned int v13; // ecx
  __int64 v14; // rdx
  int v15[7]; // [rsp+Ch] [rbp-1Ch] BYREF

  v6 = *(unsigned int *)(a4 + 8);
  v7 = *(_DWORD **)a4;
  v8 = v6 - 1;
  v6 *= 8;
  v9 = (_DWORD *)((char *)v7 + v6);
  v10 = 8LL * (a2 & v8);
  v11 = &v7[(unsigned __int64)v10 / 4];
  if ( v10 != v6 )
  {
    for ( result = &v7[(unsigned __int64)v10 / 4]; v9 != result; result += 2 )
    {
      v13 = result[1];
      if ( v13 + 0x80000000 > 1 )
      {
        if ( *result == a2 && v13 == a2 )
          return result;
      }
      else if ( v13 == 0x80000000 )
      {
        goto LABEL_8;
      }
    }
  }
  for ( ; v11 != v7; v7 += 2 )
  {
    result = (unsigned int *)(unsigned int)v7[1];
    if ( (unsigned int)result + 0x80000000 > 1 )
    {
      if ( *v7 == a2 && (_DWORD)result == a2 )
        return result;
    }
    else if ( (_DWORD)result == 0x80000000 )
    {
      break;
    }
  }
LABEL_8:
  v15[0] = a2;
  sub_9E1E20(a4, v15);
  result = *a3;
  if ( !*a3 || (v14 = *(result - 1), (_DWORD)v14 == *(result - 2)) )
  {
    sub_313C10(a3);
    result = *a3;
    result[*(*a3 - 1)] = a2;
    ++*(result - 1);
  }
  else
  {
    result[v14] = a2;
    ++*(result - 1);
  }
  return result;
}

