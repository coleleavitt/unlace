/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000C450
// Address: 0x000000010000C450

//----- (000000010000C450) ----------------------------------------------------
char *__fastcall sub_10000C450(__int64 a1, __int64 a2, __int64 a3, const void **a4)
{
  char **v6; // r12
  char *result; // rax
  char *v8; // rcx
  __int64 v9; // rcx
  char *v10; // r12
  char *v11; // r13
  char *v12; // rax
  size_t v13; // r14
  bool v14; // cf
  const void *v15; // rbx
  void *v16; // rax

  v6 = *(char ***)(a1 + 88);
  result = *v6;
  v8 = v6[1];
  if ( v6[2] < v8 + 1 )
  {
    result = (char *)qvector_reserve(*(_QWORD *)(a1 + 88), result, (unsigned __int64)(v8 + 1), 0x28u);
    *v6 = result;
    v8 = v6[1];
  }
  v9 = 5LL * (_QWORD)v8;
  *(_OWORD *)&result[8 * v9 + 16] = 0;
  *(_OWORD *)&result[8 * v9] = 0;
  *(_QWORD *)&result[8 * v9 + 32] = 0;
  ++v6[1];
  v10 = &result[8 * v9 + 16];
  *(_QWORD *)&result[8 * v9] = a2;
  *(_QWORD *)&result[8 * v9 + 8] = a3;
  if ( v10 != (char *)a4 )
  {
    v11 = &result[8 * v9];
    v12 = (char *)a4[1];
    v13 = 0;
    v14 = v12 == nullptr;
    result = v12 - 1;
    if ( !v14 )
      v13 = (size_t)result;
    if ( v14 || result == nullptr )
    {
      *((_QWORD *)v11 + 3) = 0;
    }
    else
    {
      v15 = *a4;
      v16 = *((void **)v11 + 2);
      if ( *((_QWORD *)v11 + 4) <= v13 )
      {
        v16 = qvector_reserve((__int64)v10, *((void **)v11 + 2), v13 + 1, 1u);
        *(_QWORD *)v10 = v16;
      }
      *((_QWORD *)v11 + 3) = v13 + 1;
      memmove(v16, v15, v13);
      result = *((char **)v11 + 2);
      result[v13] = 0;
    }
  }
  return result;
}
