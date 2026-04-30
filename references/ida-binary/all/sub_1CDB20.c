size_t __fastcall sub_1CDB20(size_t *a1, const void *a2, const void *a3)
{
  size_t v5; // rdx
  size_t v6; // rsi
  size_t result; // rax
  size_t *v8; // rbx
  size_t v9; // r12
  size_t v10; // r12
  void *v11; // rdi
  size_t v12; // r13
  void *v13; // rdi
  size_t v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax

  v5 = a1[1];
  v6 = *a1;
  result = v5 + 1;
  if ( a1[2] < v5 + 1 )
  {
    result = qvector_reserve(a1, v6, v5 + 1, 48);
    v5 = a1[1];
    *a1 = result;
    v6 = result;
  }
  v8 = (size_t *)(v6 + 48 * v5);
  *v8 = 0;
  v8[3] = 0;
  *(_OWORD *)(v8 + 1) = 0;
  *((_OWORD *)v8 + 2) = 0;
  ++a1[1];
  if ( a2 && (result = strlen((const char *)a2), (v9 = result) != 0) )
  {
    v13 = (void *)*v8;
    v14 = result + 1;
    if ( v8[2] < result + 1 )
    {
      v15 = qvector_reserve(v8, *v8, result + 1, 1);
      *v8 = v15;
      v13 = (void *)v15;
    }
    v8[1] = v14;
    memmove(v13, a2, v9);
    result = *v8;
    *(_BYTE *)(*v8 + v9) = 0;
  }
  else
  {
    v8[1] = 0;
  }
  if ( a3 && (result = strlen((const char *)a3), (v10 = result) != 0) )
  {
    v11 = (void *)v8[3];
    v12 = result + 1;
    if ( v8[5] < result + 1 )
    {
      v16 = qvector_reserve(v8 + 3, v8[3], v12, 1);
      v8[3] = v16;
      v11 = (void *)v16;
    }
    v8[4] = v12;
    memmove(v11, a3, v10);
    result = v8[3];
    *(_BYTE *)(result + v10) = 0;
  }
  else
  {
    v8[4] = 0;
  }
  return result;
}
