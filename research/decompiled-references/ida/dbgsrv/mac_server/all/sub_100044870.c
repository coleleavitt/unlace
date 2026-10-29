/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100044870
// Address: 0x0000000100044870

//----- (0000000100044870) ----------------------------------------------------
__int64 *__fastcall sub_100044870(__int64 **a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 *v4; // rax
  __int64 *v5; // r13
  __int64 *v6; // r14
  const char *v7; // r12
  const char *v8; // r13
  _OWORD *v9; // r12
  __int64 v10; // rbx
  size_t v11; // r15
  void *v12; // rax
  __int64 *v13; // rax
  _OWORD *v16; // [rsp+18h] [rbp-48h]

  v4 = a1[1];
  v5 = (__int64 *)(a1 + 1);
  v6 = (__int64 *)(a1 + 1);
  if ( v4 )
  {
    v7 = _s1;
    if ( *(_QWORD *)(a2 + 8) )
      v7 = *(const char **)a2;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = v4;
        v8 = _s1;
        if ( v4[5] )
          v8 = (const char *)v4[4];
        if ( strcmp(v7, v8) >= 0 )
          break;
        v4 = (__int64 *)*v6;
        v5 = v6;
        if ( !*v6 )
          goto LABEL_11;
      }
      if ( strcmp(v8, v7) >= 0 )
        break;
      v4 = (__int64 *)v6[1];
      if ( !v4 )
      {
        v5 = v6 + 1;
        goto LABEL_11;
      }
    }
  }
  else
  {
LABEL_11:
    v9 = operator new(0x58u);
    v16 = v9;
    v10 = *a4;
    v9[2] = 0;
    *((_QWORD *)v9 + 6) = 0;
    v11 = *(_QWORD *)(v10 + 8);
    if ( v11 )
    {
      v12 = qalloc_or_throw(*(_QWORD *)(v10 + 8));
      *((_QWORD *)v9 + 4) = v12;
      *((_QWORD *)v9 + 6) = v11;
      memcpy(v12, *(const void **)v10, v11);
      *((_QWORD *)v9 + 5) = v11;
    }
    *((_BYTE *)v9 + 56) = 2;
    v9[4] = 0;
    *((_QWORD *)v9 + 10) = 0;
    *v9 = 0;
    *((_QWORD *)v9 + 2) = v6;
    *v5 = (__int64)v9;
    v13 = (__int64 *)**a1;
    if ( v13 )
    {
      *a1 = v13;
      v9 = (_OWORD *)*v5;
    }
    sub_10000C830(a1[1], (__int64 *)v9);
    a1[2] = (__int64 *)((char *)a1[2] + 1);
    return (__int64 *)v16;
  }
  return v6;
}
