/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80140
// Address: 0x0000000000080140

//----- (0000000000080140) ----------------------------------------------------
_OWORD *__fastcall sub_80140(__int64 **a1, __int64 a2, __int128 *a3)
{
  __int128 *v3; // r14
  void **v4; // r13
  const char *v5; // r12
  void **v6; // rbp
  const char *v7; // rbx
  void **v8; // rax
  _OWORD *v9; // rbx
  __int128 v10; // xmm0
  __int64 *v11; // rax
  __int64 *v12; // rsi

  v3 = a3;
  v4 = (void **)a1[1];
  if ( !v4 )
  {
    v4 = (void **)(a1 + 1);
    v6 = (void **)(a1 + 1);
    goto LABEL_16;
  }
  v5 = s1;
  if ( *(_QWORD *)(a2 + 8) )
    v5 = *(const char **)a2;
  v6 = (void **)(a1 + 1);
  while ( 1 )
  {
    v7 = s1;
    if ( v4[5] )
      v7 = (const char *)v4[4];
    if ( strcmp(v5, v7) < 0 )
      break;
    if ( strcmp(v7, v5) >= 0 )
      goto LABEL_15;
    v6 = v4 + 1;
    v8 = (void **)v4[1];
    if ( !v8 )
      goto LABEL_15;
LABEL_5:
    v4 = v8;
  }
  v8 = (void **)*v4;
  v6 = v4;
  if ( *v4 )
    goto LABEL_5;
  v6 = v4;
LABEL_15:
  v3 = a3;
LABEL_16:
  v9 = *v6;
  if ( !*v6 )
  {
    v9 = operator new(0x38u);
    v10 = *v3;
    *(_QWORD *)v3 = 0;
    v9[2] = v10;
    *((_QWORD *)v9 + 6) = *((_QWORD *)v3 + 2);
    *(__int128 *)((char *)v3 + 8) = 0;
    *v9 = 0;
    *((_QWORD *)v9 + 2) = v4;
    *v6 = v9;
    v11 = (__int64 *)**a1;
    if ( v11 )
    {
      *a1 = v11;
      v12 = (__int64 *)*v6;
    }
    else
    {
      v12 = (__int64 *)v9;
    }
    sub_4A450(a1[1], v12);
    a1[2] = (__int64 *)((char *)a1[2] + 1);
  }
  return v9;
}
