_QWORD *__fastcall sub_2AF160(const char *a1, __int64 a2, _QWORD *a3)
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
  __int64 v15; // rax
  __int64 v16; // r15
  int v17; // eax
  __int64 v18; // rdi
  __int64 v19; // rax
  void *v21; // rax
  __int64 v22; // rdx
  __int64 i; // rax
  __int64 v24; // rax

  v5 = a1 + 32;
  v7 = sub_2A1BF0(a3, a1 + 32);
  v8 = *(_DWORD *)a1;
  v7[2] = 0;
  *(_DWORD *)v7 = v8;
  v7[3] = 0;
  v7[1] = a2;
  v9 = *((_QWORD *)a1 + 3);
  if ( v9 )
  {
    v5 = v7;
    v7[3] = sub_2AF160(v9, v7, a3);
  }
  v10 = *((int **)a1 + 2);
  v11 = v7;
  if ( v10 )
  {
    v12 = (_QWORD *)a3[1];
    if ( v12 )
      goto LABEL_5;
LABEL_15:
    v12 = (_QWORD *)operator new(0x50u);
    v12[4] = *((_QWORD *)v10 + 4);
    v12[5] = *((_QWORD *)v10 + 5);
    v19 = *((_QWORD *)v10 + 6);
    v12[7] = 0;
    v12[6] = v19;
    *((_OWORD *)v12 + 4) = 0;
    v16 = *((_QWORD *)v10 + 8);
    if ( !v16 )
      goto LABEL_11;
LABEL_19:
    v21 = (void *)qalloc_or_throw(8 * v16);
    v12[7] = v21;
    v12[9] = v16;
    v5 = *((const void **)v10 + 7);
    memcpy(v21, v5, 8 * v16);
    v12[8] = v16;
    while ( 1 )
    {
LABEL_11:
      v17 = *v10;
      v12[2] = 0;
      v12[3] = 0;
      *(_DWORD *)v12 = v17;
      v11[2] = v12;
      v12[1] = v11;
      v18 = *((_QWORD *)v10 + 3);
      if ( v18 )
      {
        v5 = v12;
        v12[3] = sub_2AF160(v18, v12, a3);
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
          v22 = *(_QWORD *)(a3[1] + 16LL);
          if ( v22 )
          {
            a3[1] = v22;
            for ( i = *(_QWORD *)(v22 + 24); i; i = *(_QWORD *)(i + 24) )
            {
              a3[1] = i;
              v22 = i;
            }
            v24 = *(_QWORD *)(v22 + 16);
            if ( v24 )
              a3[1] = v24;
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
      v14 = v12[7];
      if ( v14 )
      {
        v12[8] = 0;
        qfree(v14, (const char *)v5);
      }
      v12[4] = *((_QWORD *)v10 + 4);
      v12[5] = *((_QWORD *)v10 + 5);
      v15 = *((_QWORD *)v10 + 6);
      v12[7] = 0;
      v12[6] = v15;
      *((_OWORD *)v12 + 4) = 0;
      v16 = *((_QWORD *)v10 + 8);
      if ( v16 )
        goto LABEL_19;
    }
  }
  return v7;
}
