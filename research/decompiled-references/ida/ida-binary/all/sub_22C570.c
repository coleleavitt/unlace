_QWORD *__fastcall pathmap_chooser_t__::vfunc_6(__int64 a1, __int64 **a2, __int64 a3, __int64 a4, __int64 a5)
{
  _QWORD *result; // rax
  __int64 *v6; // rbp
  __int64 v7; // rbx
  unsigned __int64 v8; // r13
  const char *v9; // r12
  const void *v10; // r15
  void *v11; // rdi
  unsigned __int64 v12; // r13
  size_t v13; // rbx
  void *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rax

  result = *(_QWORD **)(a1 + 184);
  v6 = *a2;
  v7 = *result + 48 * a5;
  if ( (__int64 *)v7 != *a2 )
  {
    v8 = *(_QWORD *)(v7 + 8);
    if ( v8 > 1 )
    {
      v10 = *(const void **)v7;
      v11 = (void *)*v6;
      if ( v6[2] < v8 )
      {
        v16 = qvector_reserve(v6, *v6, *(_QWORD *)(v7 + 8), 1);
        *v6 = v16;
        v11 = (void *)v16;
      }
      v6[1] = v8;
      memmove(v11, v10, v8 - 1);
      result = (_QWORD *)*v6;
      *(_BYTE *)(*v6 + v8 - 1) = 0;
      v6 = *a2;
      if ( *(_QWORD *)(v7 + 32) > 1u )
        goto LABEL_5;
LABEL_10:
      v12 = 10;
      v9 = "(ignored)";
      v13 = 9;
      goto LABEL_11;
    }
    v6[1] = 0;
    v6 = *a2;
  }
  if ( *(_QWORD *)(v7 + 32) <= 1u )
    goto LABEL_10;
LABEL_5:
  v9 = *(const char **)(v7 + 24);
  if ( !v9 || (result = (_QWORD *)strlen(*(const char **)(v7 + 24)), (v13 = (size_t)result) == 0) )
  {
    v6[4] = 0;
    return result;
  }
  v12 = (unsigned __int64)result + 1;
LABEL_11:
  v14 = (void *)v6[3];
  if ( v6[5] < v12 )
  {
    v15 = qvector_reserve(v6 + 3, v6[3], v12, 1);
    v6[3] = v15;
    v14 = (void *)v15;
  }
  v6[4] = v12;
  memmove(v14, v9, v13);
  result = (_QWORD *)v6[3];
  *((_BYTE *)result + v13) = 0;
  return result;
}
