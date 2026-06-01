/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_9D5B0
// Address: 0x000000000009D5B0

//----- (000000000009D5B0) ----------------------------------------------------
_OWORD *__fastcall sub_9D5B0(__int64 **a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 *v4; // r14
  void **v5; // r13
  const char *v6; // r12
  void **v7; // rbp
  const char *v8; // rbx
  void **v9; // rax
  _OWORD *v10; // rbx
  __int64 v11; // r12
  __int128 v12; // xmm0
  size_t v13; // r14
  void *v14; // rax
  __int64 *v15; // rax
  __int64 *v16; // rsi

  v4 = a4;
  v5 = (void **)a1[1];
  if ( !v5 )
  {
    v5 = (void **)(a1 + 1);
    v7 = (void **)(a1 + 1);
    goto LABEL_16;
  }
  v6 = s1;
  if ( *(_QWORD *)(a2 + 8) )
    v6 = *(const char **)a2;
  v7 = (void **)(a1 + 1);
  while ( 1 )
  {
    v8 = s1;
    if ( v5[5] )
      v8 = (const char *)v5[4];
    if ( strcmp(v6, v8) < 0 )
      break;
    if ( strcmp(v8, v6) >= 0 )
      goto LABEL_15;
    v7 = v5 + 1;
    v9 = (void **)v5[1];
    if ( !v9 )
      goto LABEL_15;
LABEL_5:
    v5 = v9;
  }
  v9 = (void **)*v5;
  v7 = v5;
  if ( *v5 )
    goto LABEL_5;
  v7 = v5;
LABEL_15:
  v4 = a4;
LABEL_16:
  v10 = *v7;
  if ( !*v7 )
  {
    v10 = operator new(0x50u);
    v11 = *v4;
    v12 = 0;
    v10[2] = 0;
    *((_QWORD *)v10 + 6) = 0;
    v13 = *(_QWORD *)(v11 + 8);
    if ( v13 )
    {
      v14 = qalloc_or_throw(*(_QWORD *)(v11 + 8));
      *((_QWORD *)v10 + 4) = v14;
      *((_QWORD *)v10 + 6) = v13;
      memcpy(v14, *(const void **)v11, v13);
      *((_QWORD *)v10 + 5) = v13;
      v12 = 0;
    }
    *(_OWORD *)((char *)v10 + 56) = v12;
    *((_QWORD *)v10 + 9) = 0;
    *v10 = v12;
    *((_QWORD *)v10 + 2) = v5;
    *v7 = v10;
    v15 = (__int64 *)**a1;
    if ( v15 )
    {
      *a1 = v15;
      v16 = (__int64 *)*v7;
    }
    else
    {
      v16 = (__int64 *)v10;
    }
    sub_4A450(a1[1], v16);
    a1[2] = (__int64 *)((char *)a1[2] + 1);
  }
  return v10;
}
