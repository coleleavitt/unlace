_QWORD *__fastcall sub_30BA60(int *a1, __int64 a2, _QWORD *a3)
{
  const void *v5; // rsi
  _QWORD *v7; // r14
  int v8; // eax
  __int64 v9; // rdi
  int *v10; // rbp
  _QWORD *v11; // r13
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdi
  size_t v15; // r15
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rax
  void *v20; // rax
  __int64 v21; // rdx
  __int64 i; // rax
  __int64 v23; // rax

  v5 = a1 + 8;
  v7 = sub_30B8B0(a3, (__int64)(a1 + 8));
  v8 = *a1;
  v7[2] = 0;
  *(_DWORD *)v7 = v8;
  v7[3] = 0;
  v7[1] = a2;
  v9 = *((_QWORD *)a1 + 3);
  if ( v9 )
  {
    v5 = v7;
    v7[3] = sub_30BA60(v9, v7, a3);
  }
  v10 = *((int **)a1 + 2);
  v11 = v7;
  if ( v10 )
  {
    v12 = (_QWORD *)a3[1];
    if ( v12 )
      goto LABEL_5;
LABEL_15:
    v18 = operator new(0x40u);
    *(_QWORD *)(v18 + 32) = 0;
    v12 = (_QWORD *)v18;
    *(_OWORD *)(v18 + 40) = 0;
    v15 = *((_QWORD *)v10 + 5);
    if ( !v15 )
      goto LABEL_11;
LABEL_19:
    v20 = (void *)qalloc_or_throw(*((_QWORD *)v10 + 5));
    v12[4] = v20;
    v12[6] = v15;
    v5 = *((const void **)v10 + 4);
    memcpy(v20, v5, v15);
    v12[5] = v15;
    while ( 1 )
    {
LABEL_11:
      v12[7] = *((_QWORD *)v10 + 7);
      v16 = *v10;
      v12[2] = 0;
      *(_DWORD *)v12 = v16;
      v12[3] = 0;
      v11[2] = v12;
      v12[1] = v11;
      v17 = *((_QWORD *)v10 + 3);
      if ( v17 )
      {
        v5 = v12;
        v12[3] = sub_30BA60(v17, v12, a3);
      }
      v10 = *((int **)v10 + 2);
      if ( !v10 )
        break;
      v11 = v12;
      v12 = (_QWORD *)a3[1];
      if ( !v12 )
        goto LABEL_15;
LABEL_5:
      v13 = v12[1];
      a3[1] = v13;
      if ( v13 )
      {
        if ( v12 == *(_QWORD **)(v13 + 24) )
        {
          *(_QWORD *)(v13 + 24) = 0;
          v21 = *(_QWORD *)(a3[1] + 16LL);
          if ( v21 )
          {
            a3[1] = v21;
            for ( i = *(_QWORD *)(v21 + 24); i; i = *(_QWORD *)(i + 24) )
            {
              a3[1] = i;
              v21 = i;
            }
            v23 = *(_QWORD *)(v21 + 16);
            if ( v23 )
              a3[1] = v23;
          }
        }
        else
        {
          *(_QWORD *)(v13 + 16) = 0;
        }
      }
      else
      {
        *a3 = 0;
      }
      v14 = v12[4];
      if ( v14 )
      {
        v12[5] = 0;
        qfree(v14, (const char *)v5);
      }
      v12[4] = 0;
      *(_OWORD *)(v12 + 5) = 0;
      v15 = *((_QWORD *)v10 + 5);
      if ( v15 )
        goto LABEL_19;
    }
  }
  return v7;
}
