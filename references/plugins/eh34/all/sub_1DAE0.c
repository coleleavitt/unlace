const char *__fastcall sub_1DAE0(__int64 a1, const char *a2, __int64 a3, __int64 a4, __int64 a5)
{
  const char *result; // rax
  const char *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rax
  size_t v11; // r15
  _QWORD *v12; // r12
  void *v13; // rax
  const char *v14; // rsi
  const char *v15; // rsi
  unsigned int v16; // [rsp+4h] [rbp-44h]
  const char *v17; // [rsp+8h] [rbp-40h]

  result = &a2[24 * a3];
  v6 = (const char *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = a1 + 8;
  *(_QWORD *)(a1 + 32) = a1 + 8;
  *(_QWORD *)(a1 + 40) = 0;
  v17 = result;
  if ( result != a2 )
  {
    v7 = (__int64)a2;
    while ( 1 )
    {
      result = sub_1D920((_QWORD *)a1, v6, v7, a4, a5);
      v9 = v8;
      if ( v8 )
        break;
LABEL_4:
      v7 += 24;
      if ( v17 == (const char *)v7 )
        return result;
    }
    LOBYTE(v16) = v6 == (const char *)v8 || result != nullptr;
    if ( (_BYTE)v16 )
    {
LABEL_7:
      v10 = operator new(0x38u);
      v11 = *(_QWORD *)(v7 + 8);
      *(_QWORD *)(v10 + 32) = 0;
      v12 = (_QWORD *)v10;
      *(_OWORD *)(v10 + 40) = 0;
      if ( v11 )
      {
        v13 = (void *)qalloc_or_throw(v11);
        v12[4] = v13;
        v14 = *(const char **)v7;
        v12[6] = v11;
        memcpy(v13, v14, v11);
        v12[5] = v11;
      }
      result = (const char *)std::_Rb_tree_insert_and_rebalance((unsigned __int8)v16, v12, v9, v6);
      ++*(_QWORD *)(a1 + 40);
      goto LABEL_4;
    }
    v15 = s1;
    if ( *(_QWORD *)(v8 + 40) )
    {
      v15 = *(const char **)(v8 + 32);
      if ( !*(_QWORD *)(v7 + 8) )
        goto LABEL_12;
    }
    else if ( !*(_QWORD *)(v7 + 8) )
    {
LABEL_12:
      v16 = (unsigned int)strcmp(s1, v15) >> 31;
      goto LABEL_7;
    }
    v16 = (unsigned int)strcmp(*(const char **)v7, v15) >> 31;
    goto LABEL_7;
  }
  return result;
}
