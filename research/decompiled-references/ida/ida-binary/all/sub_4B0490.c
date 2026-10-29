char *__fastcall sub_4B0490(__int64 a1, unsigned __int8 a2, __int64 a3)
{
  char *result; // rax
  _QWORD *v5; // rbp
  __int64 v6; // r13
  __int64 v7; // rax
  _QWORD *v8; // rbp
  __int64 v9; // r13
  _QWORD *v10; // rbp
  __int64 v11; // r13
  void *v12; // rax
  void *v13; // rax
  void *v14; // rax

  sub_4B03E0((__int64 **)a1, (const char *)a2);
  if ( a2 )
  {
    result = (char *)qalloc_or_throw(24);
    *(_QWORD *)result = 0;
    v5 = result;
    *(_OWORD *)(result + 8) = 0;
    v6 = *(_QWORD *)(a3 + 8);
    if ( v6 )
    {
      v13 = (void *)qalloc_or_throw(2 * v6);
      *v5 = v13;
      v5[2] = v6;
      result = (char *)memcpy(v13, *(const void **)a3, 2 * v6);
      v5[1] = v6;
    }
    *(_QWORD *)(a1 + 16) = v5;
  }
  else
  {
    v7 = qalloc_or_throw(24);
    *(_QWORD *)v7 = 0;
    v8 = (_QWORD *)v7;
    *(_OWORD *)(v7 + 8) = 0;
    v9 = *(_QWORD *)(a3 + 8);
    if ( v9 )
    {
      v14 = (void *)qalloc_or_throw(2 * v9);
      *v8 = v14;
      v8[2] = v9;
      memcpy(v14, *(const void **)a3, 2 * v9);
      v8[1] = v9;
    }
    *(_QWORD *)(a1 + 8) = v8;
    result = (char *)qalloc_or_throw(24);
    *(_QWORD *)result = 0;
    v10 = result;
    *(_OWORD *)(result + 8) = 0;
    v11 = *(_QWORD *)(a3 + 8);
    if ( v11 )
    {
      v12 = (void *)qalloc_or_throw(2 * v11);
      *v10 = v12;
      v10[2] = v11;
      result = (char *)memcpy(v12, *(const void **)a3, 2 * v11);
      v10[1] = v11;
      *(_QWORD *)a1 = v10;
    }
    else
    {
      *(_QWORD *)a1 = result;
    }
  }
  return result;
}
