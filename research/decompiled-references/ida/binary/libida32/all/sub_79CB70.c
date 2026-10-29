__int64 __fastcall sub_79CB70(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 result; // rax
  __int64 *v8; // rbx
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rbp
  const void *v11; // r12
  void *v12; // rax
  const void *v13; // r13
  void *v14; // rdi
  __int64 v15; // rax

  v5 = a1[1];
  v6 = *a1;
  result = v5 + 1;
  if ( a1[2] < (unsigned __int64)(v5 + 1) )
  {
    result = qvector_reserve(a1, v6, v5 + 1, 48);
    v5 = a1[1];
    *a1 = result;
    v6 = result;
  }
  v8 = (__int64 *)(v6 + 48 * v5);
  *v8 = 0;
  v8[3] = 0;
  *(_OWORD *)(v8 + 1) = 0;
  *((_OWORD *)v8 + 2) = 0;
  ++a1[1];
  if ( v8 != (__int64 *)a2 )
  {
    v9 = *(_QWORD *)(a2 + 8);
    if ( v9 > 1 )
    {
      v13 = *(const void **)a2;
      v14 = (void *)*v8;
      if ( v8[2] < v9 )
      {
        v15 = qvector_reserve(v8, *v8, v9, 1);
        *v8 = v15;
        v14 = (void *)v15;
      }
      v8[1] = v9;
      memmove(v14, v13, v9 - 1);
      result = *v8;
      *(_BYTE *)(*v8 + v9 - 1) = 0;
    }
    else
    {
      v8[1] = 0;
    }
  }
  if ( v8 + 3 != (__int64 *)a3 )
  {
    v10 = *(_QWORD *)(a3 + 8);
    if ( v10 > 1 )
    {
      v11 = *(const void **)a3;
      v12 = (void *)v8[3];
      if ( v8[5] < v10 )
      {
        v12 = (void *)qvector_reserve(v8 + 3, v8[3], v10, 1);
        v8[3] = (__int64)v12;
      }
      v8[4] = v10;
      memmove(v12, v11, v10 - 1);
      result = v8[3];
      *(_BYTE *)(result + v10 - 1) = 0;
    }
    else
    {
      v8[4] = 0;
    }
  }
  return result;
}

