/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140037AB0
// Address: 0x0000000140037AB0

//----- (0000000140037AB0) ----------------------------------------------------
_QWORD *__fastcall sub_140037AB0(_QWORD *a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v6; // r10
  _QWORD *v7; // rbx
  _QWORD *v8; // r8
  unsigned __int64 v9; // r9
  __int64 v10; // rdx
  unsigned __int64 i; // rcx
  _QWORD *v12; // r12
  void *v13; // rsi
  _QWORD *v15; // rax
  _QWORD *v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  void *v20; // r13
  void *v21; // rsi
  _QWORD *v22; // [rsp+20h] [rbp-58h]
  void *v23; // [rsp+28h] [rbp-50h]
  __int64 v24; // [rsp+30h] [rbp-48h]
  _QWORD *v25; // [rsp+88h] [rbp+10h]
  _QWORD *v27; // [rsp+98h] [rbp+20h]

  v3 = a3;
  if ( a2 != a3 )
  {
    v22 = (_QWORD *)a1[1];
    v6 = a1[3];
    v24 = v6;
    v25 = (_QWORD *)a2[1];
    v7 = a2;
    v8 = a2 + 2;
    v9 = a2[4];
    if ( a2[5] > 0xFu )
      v8 = (_QWORD *)*v8;
    v10 = 0xCBF29CE484222325uLL;
    for ( i = 0; i < v9; ++i )
      v10 = 0x100000001B3LL * (*((unsigned __int8 *)v8 + i) ^ (unsigned __int64)v10);
    v12 = (_QWORD *)(v6 + 16 * (v10 & a1[6]));
    v27 = (_QWORD *)*v12;
    v23 = (void *)v12[1];
    while ( 1 )
    {
      v13 = v7;
      v7 = (_QWORD *)*v7;
      sub_14002BC90((__int64)v13 + 48);
      sub_140037230((__int64)v13 + 16);
      j_j_free(v13);
      --a1[2];
      if ( v13 == v23 )
        break;
      if ( v7 == v3 )
      {
        if ( v27 == a2 )
LABEL_10:
          *v12 = v7;
        goto LABEL_11;
      }
    }
    if ( v27 == a2 )
    {
      v15 = v22;
      *v12 = v22;
    }
    else
    {
      v15 = v25;
    }
    for ( v12[1] = v15; v7 != v3; v12[1] = v22 )
    {
      v16 = v7 + 2;
      v17 = v7[4];
      if ( v7[5] > 0xFu )
        v16 = (_QWORD *)*v16;
      v18 = 0xCBF29CE484222325uLL;
      v19 = 0;
      if ( v17 )
      {
        do
          v18 = 0x100000001B3LL * (*((unsigned __int8 *)v16 + v19++) ^ (unsigned __int64)v18);
        while ( v19 < v17 );
        v3 = a3;
      }
      v12 = (_QWORD *)(v24 + 16 * (v18 & a1[6]));
      v20 = (void *)v12[1];
      while ( 1 )
      {
        v21 = v7;
        v7 = (_QWORD *)*v7;
        sub_14002BC90((__int64)v21 + 48);
        sub_140037230((__int64)v21 + 16);
        j_j_free(v21);
        --a1[2];
        if ( v21 == v20 )
          break;
        if ( v7 == v3 )
          goto LABEL_10;
      }
      *v12 = v22;
    }
LABEL_11:
    *v25 = v7;
    v7[1] = v25;
  }
  return v3;
}
