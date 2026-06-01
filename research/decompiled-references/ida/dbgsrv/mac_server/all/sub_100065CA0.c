/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100065CA0
// Address: 0x0000000100065CA0

//----- (0000000100065CA0) ----------------------------------------------------
__int64 __fastcall sub_100065CA0(void **a1, __int64 a2)
{
  const char *v4; // r12
  const char *v5; // r14
  size_t v6; // rax
  size_t v7; // r13
  char *v8; // rdi
  void *v9; // r14
  bool v10; // cf
  unsigned __int64 v11; // r14
  char *v12; // rax
  const char *v13; // rax
  size_t v14; // rax
  size_t v15; // r15
  const char *v16; // r13
  char *v17; // r14
  unsigned __int64 v18; // r12
  char *v19; // rax
  char *v21; // [rsp+0h] [rbp-40h]
  unsigned __int8 v22; // [rsp+Eh] [rbp-32h] BYREF
  unsigned __int8 v23; // [rsp+Fh] [rbp-31h] BYREF

  sub_10005A320(a1, *(_QWORD *)(a2 + 64) + 1LL);
  sub_10005A320(a1, *(_QWORD *)a2 - 16LL * *(_QWORD *)(a2 + 64) + 1);
  sub_10005A320(a1, *(_QWORD *)(a2 + 8) - *(_QWORD *)a2 + 1LL);
  sub_100032FE0(a1, *(unsigned __int8 *)(a2 + 73) | (16 * *(unsigned __int8 *)(a2 + 72)));
  if ( *(_QWORD *)(a2 + 24) )
    v4 = *(const char **)(a2 + 16);
  else
    v4 = _s1;
  v5 = &_s;
  if ( !v4 )
    v4 = &_s;
  v6 = strlen(v4);
  v7 = v6 + 1;
  if ( v6 != -1 )
  {
    v8 = (char *)a1[1];
    v9 = a1[1];
    v10 = __CFADD__(v7, v9);
    v11 = (unsigned __int64)v9 + v7;
    if ( v10 )
      v11 = 0x7FFFFFFFFFFFFFFFLL;
    if ( (unsigned __int64)v8 >= v11 )
    {
      if ( v8 == (char *)v11 )
      {
LABEL_16:
        memcpy(&v8[(_QWORD)*a1], v4, v7);
        v5 = &_s;
        goto LABEL_17;
      }
      v22 = 0;
      v21 = v8;
      sub_10001CE90((__int64)a1, v11, &v22);
    }
    else
    {
      v12 = (char *)*a1;
      v21 = (char *)a1[1];
      if ( (unsigned __int64)a1[2] < v11 )
      {
        v12 = (char *)qvector_reserve((__int64)a1, v12, v11, 1u);
        *a1 = v12;
      }
      __bzero(&v12[(_QWORD)a1[1]], v11 - (_QWORD)a1[1]);
      a1[1] = (void *)v11;
    }
    v8 = v21;
    goto LABEL_16;
  }
LABEL_17:
  if ( *(_QWORD *)(a2 + 48) )
    v13 = *(const char **)(a2 + 40);
  else
    v13 = _s1;
  if ( v13 )
    v5 = v13;
  v14 = strlen(v5);
  v15 = v14 + 1;
  if ( v14 != -1 )
  {
    v16 = v5;
    v17 = (char *)a1[1];
    v18 = (unsigned __int64)&v17[v15];
    if ( __CFADD__(v15, v17) )
      v18 = 0x7FFFFFFFFFFFFFFFLL;
    if ( (unsigned __int64)v17 >= v18 )
    {
      if ( v17 != (char *)v18 )
      {
        v23 = 0;
        sub_10001CE90((__int64)a1, v18, &v23);
      }
    }
    else
    {
      v19 = (char *)*a1;
      if ( (unsigned __int64)a1[2] < v18 )
      {
        v19 = (char *)qvector_reserve((__int64)a1, *a1, v18, 1u);
        *a1 = v19;
      }
      __bzero(&v19[(_QWORD)a1[1]], v18 - (_QWORD)a1[1]);
      a1[1] = (void *)v18;
    }
    memcpy(&v17[(_QWORD)*a1], v16, v15);
  }
  return __stack_chk_guard;
}
// 100082B16: using guessed type __int64 __fastcall __bzero(_QWORD, _QWORD);
