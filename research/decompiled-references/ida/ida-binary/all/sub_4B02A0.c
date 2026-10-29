char *__fastcall sub_4B02A0(__int64 **a1, const char *a2, __int64 a3)
{
  __int64 *v5; // r12
  __int64 v6; // rdi
  char *result; // rax
  __int64 *v8; // r12
  __int64 v9; // r13
  __int64 *v10; // r12
  __int64 v11; // rdi
  __int64 *v12; // r12
  __int64 v13; // r13
  void *v14; // rax
  void *v15; // rax

  if ( (_BYTE)a2 )
  {
    v5 = *a1;
    if ( *a1 )
    {
      v6 = *v5;
      if ( *v5 )
      {
        v5[1] = 0;
        qfree(v6, a2);
      }
      qfree(v5, a2);
    }
    result = (char *)qalloc_or_throw(24);
    *(_QWORD *)result = 0;
    v8 = (__int64 *)result;
    *(_OWORD *)(result + 8) = 0;
    v9 = *(_QWORD *)(a3 + 8);
    if ( v9 )
    {
      v15 = (void *)qalloc_or_throw(2 * v9);
      *v8 = (__int64)v15;
      v8[2] = v9;
      result = (char *)memcpy(v15, *(const void **)a3, 2 * v9);
      v8[1] = v9;
    }
    *a1 = v8;
  }
  else
  {
    v10 = a1[1];
    if ( v10 )
    {
      v11 = *v10;
      if ( *v10 )
      {
        v10[1] = 0;
        qfree(v11, a2);
      }
      qfree(v10, a2);
    }
    result = (char *)qalloc_or_throw(24);
    *(_QWORD *)result = 0;
    v12 = (__int64 *)result;
    *(_OWORD *)(result + 8) = 0;
    v13 = *(_QWORD *)(a3 + 8);
    if ( v13 )
    {
      v14 = (void *)qalloc_or_throw(2 * v13);
      *v12 = (__int64)v14;
      v12[2] = v13;
      result = (char *)memcpy(v14, *(const void **)a3, 2 * v13);
      v12[1] = v13;
      a1[1] = v12;
    }
    else
    {
      a1[1] = (__int64 *)result;
    }
  }
  return result;
}
