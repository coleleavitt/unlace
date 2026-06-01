/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70430
// Address: 0x0000000000070430

//----- (0000000000070430) ----------------------------------------------------
_QWORD *__fastcall sub_70430(__int64 **a1, __int64 a2, __int64 a3, _QWORD **a4)
{
  _QWORD **v4; // r14
  void **v5; // r13
  const char *v6; // r12
  void **v7; // rbp
  const char *v8; // rbx
  void **v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rax
  __int64 *v12; // rax
  __int64 *v13; // rsi

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
    v10 = operator new(0x40u);
    v11 = *v4;
    v10[4] = **v4;
    *v11 = 0;
    v10[5] = v11[1];
    v11[1] = 0;
    v10[6] = v11[2];
    v11[2] = 0;
    *((_DWORD *)v10 + 14) = 0;
    *(_OWORD *)v10 = 0;
    v10[2] = v5;
    *v7 = v10;
    v12 = (__int64 *)**a1;
    if ( v12 )
    {
      *a1 = v12;
      v13 = (__int64 *)*v7;
    }
    else
    {
      v13 = v10;
    }
    sub_4A450(a1[1], v13);
    a1[2] = (__int64 *)((char *)a1[2] + 1);
  }
  return v10;
}
