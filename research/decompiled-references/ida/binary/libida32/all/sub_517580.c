unsigned __int64 __fastcall sub_517580(__int64 *a1, char a2)
{
  __int64 *v3; // rax
  void *v4; // rdi
  __int64 v5; // rsi
  unsigned int v6; // r15d
  int v7; // ebp
  unsigned int v8; // ebx
  int v9; // eax
  unsigned int v10; // r13d
  int *v11; // r14
  unsigned int v12; // ecx
  int *v13; // rax
  char v14; // si
  __int64 v15; // rdx
  __int64 v16; // rsi
  _QWORD **v17; // rbx
  void *v18; // rdi
  __int64 v20; // rax
  __int64 v21; // [rsp+0h] [rbp-A8h]
  char *v22; // [rsp+8h] [rbp-A0h]
  int v23; // [rsp+10h] [rbp-98h]
  int v24; // [rsp+14h] [rbp-94h]
  int v25; // [rsp+20h] [rbp-88h]
  __int64 *v27; // [rsp+28h] [rbp-80h]
  int v28; // [rsp+30h] [rbp-78h]
  int v29; // [rsp+38h] [rbp-70h] BYREF
  void *v30; // [rsp+40h] [rbp-68h]
  int *v31; // [rsp+48h] [rbp-60h]
  int *v32; // [rsp+50h] [rbp-58h]
  __int64 v33; // [rsp+58h] [rbp-50h]
  unsigned __int64 v34; // [rsp+68h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v3 = a1 + 1;
  v4 = (void *)a1[1];
  v27 = v3;
  if ( v4 )
  {
    a1[2] = 0;
    qfree(v4);
    a1[1] = 0;
    a1[3] = 0;
  }
  v5 = *a1;
  v31 = &v29;
  v32 = &v29;
  v22 = (char *)a1 + 36;
  v29 = 0;
  v30 = nullptr;
  v33 = 0;
  v24 = sub_79B3A0((char *)a1 + 36, v5, 0xFFFFFFFFLL, 65);
  if ( v24 <= 0 )
  {
    *((_BYTE *)a1 + 32) = 0;
    goto LABEL_23;
  }
  v6 = 0;
  v7 = 0;
  v8 = -1;
  do
  {
    v9 = sub_79B3A0(v22, *a1, v6, 65);
    v10 = v9 - 1;
    if ( !v9 )
      goto LABEL_26;
    v11 = (int *)v30;
    if ( !v30 )
    {
      v11 = &v29;
      if ( v31 == &v29 )
      {
        HIBYTE(v25) = 1;
LABEL_16:
        *(_DWORD *)(operator new(0x28u) + 32) = v10;
        std::_Rb_tree_insert_and_rebalance();
        v15 = a1[2];
        ++v33;
        v16 = a1[1];
        if ( a1[3] < (unsigned __int64)(v15 + 1) )
        {
          v20 = qvector_reserve(v27, v16, v15 + 1, 4);
          a1[1] = v20;
          v15 = a1[2];
          v16 = v20;
        }
        *(_DWORD *)(v16 + 4 * v15) = v10;
        ++a1[2];
        goto LABEL_19;
      }
LABEL_30:
      v12 = *(_DWORD *)(std::_Rb_tree_decrement() + 32);
      goto LABEL_13;
    }
    while ( 1 )
    {
      v12 = v11[8];
      v13 = *((int **)v11 + 2);
      v14 = 1;
      if ( v10 >= v12 )
      {
        v13 = *((int **)v11 + 3);
        v14 = 0;
      }
      if ( !v13 )
        break;
      v11 = v13;
    }
    if ( v14 )
    {
      if ( v31 == v11 )
      {
LABEL_14:
        HIBYTE(v25) = 1;
        if ( v11 != &v29 )
          HIBYTE(v25) = v10 < v11[8];
        goto LABEL_16;
      }
      goto LABEL_30;
    }
LABEL_13:
    if ( v12 < v10 )
      goto LABEL_14;
LABEL_26:
    ++v7;
    if ( v8 == -1 )
      v8 = v6;
LABEL_19:
    ++v6;
  }
  while ( v24 != v6 );
  *((_BYTE *)a1 + 32) = 0;
  if ( v8 != -1 )
  {
    if ( !a2 )
    {
      if ( !under_debugger )
        interr(1731);
      BUG();
    }
    sub_82BC50(
      "%d bad structure node(s) deleted\n",
      v21,
      (int)v22,
      v23,
      (int)&v29,
      v25,
      (int)v27,
      v28,
      v29,
      (int)v30,
      (int)v31,
      (__int64)v32);
    sub_517450(a1, v8);
  }
LABEL_23:
  v17 = (_QWORD **)v30;
  if ( v30 )
  {
    do
    {
      sub_516220(v17[3]);
      v18 = v17;
      v17 = (_QWORD **)v17[2];
      operator delete(v18, 0x28u);
    }
    while ( v17 );
  }
  return v34 - __readfsqword(0x28u);
}

