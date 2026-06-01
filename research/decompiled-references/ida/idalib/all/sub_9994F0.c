__int64 __fastcall sub_9994F0(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  const void *v7; // rax
  __int64 v8; // rbx
  size_t v9; // r12
  __int64 *v10; // rdi
  unsigned __int64 v11; // rbx
  __int64 result; // rax
  char *v13; // rcx
  __int64 v14; // rbx

  v7 = *(const void **)a1;
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v10 = (__int64 *)(*a2 & 0xFFFFFFFFFFFFFFF8LL);
  v11 = 2 * ((v8 - (__int64)v7) >> 3);
  result = *v10;
  if ( v11 < a3 )
    v11 = a3;
  v13 = (char *)((result + 7) & 0xFFFFFFFFFFFFFFF8LL);
  v14 = 8 * v11;
  v10[10] += v14;
  if ( v10[1] >= (unsigned __int64)&v13[v14] && result )
  {
    *v10 = (__int64)&v13[v14];
  }
  else
  {
    result = sub_986170((__int64)v10, v14, v14, 3, a5, a6);
    v13 = (char *)result;
  }
  if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) )
  {
    result = (__int64)memcpy(v13, *(const void **)a1, v9);
    v13 = (char *)result;
  }
  *(_QWORD *)a1 = v13;
  *(_QWORD *)(a1 + 8) = &v13[v9];
  *(_QWORD *)(a1 + 16) = &v13[v14];
  return result;
}
