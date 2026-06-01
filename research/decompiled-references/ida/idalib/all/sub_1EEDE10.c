unsigned __int64 __fastcall sub_1EEDE10(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r12
  __int64 v7; // r14
  void *v8; // rdi
  __int64 v9; // rbp
  unsigned int i; // ebx

  v3 = *(unsigned int *)(a1 + 24);
  *(_DWORD *)(a1 + 24) = v3 + 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v3);
  result = *(unsigned int *)(a2 + 48);
  v6 = (unsigned int)v4;
  if ( result == (unsigned int)v4 )
    goto LABEL_12;
  if ( result > (unsigned int)v4 )
  {
    *(_DWORD *)(a2 + 48) = v4;
LABEL_12:
    v7 = *(_QWORD *)(a2 + 40);
    goto LABEL_8;
  }
  if ( (unsigned int)v4 > (unsigned __int64)*(unsigned int *)(a2 + 52) )
  {
    sub_2237220(a2 + 40, a2 + 56, (unsigned int)v4, 8);
    result = *(unsigned int *)(a2 + 48);
  }
  v7 = *(_QWORD *)(a2 + 40);
  v8 = (void *)(v7 + 8 * result);
  result = v7 + 8LL * (unsigned int)v4;
  if ( v8 != (void *)result )
  {
    result = (unsigned __int64)memset(v8, 0, 8 * ((result - 8 - (unsigned __int64)v8) >> 3) + 8);
    v7 = *(_QWORD *)(a2 + 40);
  }
  *(_DWORD *)(a2 + 48) = v4;
LABEL_8:
  v9 = 0;
  for ( i = 0; i < v6; v9 = i )
  {
    result = sub_1EECCD0(a1);
    *(_QWORD *)(v7 + 8 * v9) = result;
    ++i;
  }
  return result;
}
