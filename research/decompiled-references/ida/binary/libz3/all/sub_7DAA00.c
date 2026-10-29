unsigned int **__fastcall sub_7DAA00(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rdx
  unsigned int **result; // rax
  __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // r12
  __int64 *v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdi
  bool v12; // zf

  v4 = a4[1];
  result = *(unsigned int ***)(a2 + 64);
  v6 = (__int64)*result;
  v7 = **result;
  ++(*result)[2];
  v8 = 8 * v7;
  v9 = (__int64 *)(v8 + v4);
  v10 = *v9;
  if ( *v9 && (v11 = *a4, v12 = *(_DWORD *)(v10 + 8) == 1, --*(_DWORD *)(v10 + 8), v12) )
  {
    result = (unsigned int **)sub_15D7BC0(v11, v10);
    *(_QWORD *)(v8 + a4[1]) = v6;
  }
  else
  {
    *v9 = v6;
  }
  return result;
}

