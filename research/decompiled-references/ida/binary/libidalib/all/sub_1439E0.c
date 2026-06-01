_QWORD *__fastcall sub_1439E0(int *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // r14
  int v6; // eax
  __int64 v7; // rdi
  int *v8; // rbp
  _QWORD *v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rax
  size_t v12; // r15
  int v13; // eax
  __int64 v14; // rdi
  __int64 v15; // rax
  void *v17; // rax
  __int64 v18; // rdx
  __int64 i; // rax
  __int64 v20; // rax

  v5 = sub_143820(a3, (__int64)(a1 + 8));
  v6 = *a1;
  v5[2] = 0;
  *(_DWORD *)v5 = v6;
  v5[3] = 0;
  v5[1] = a2;
  v7 = *((_QWORD *)a1 + 3);
  if ( v7 )
    v5[3] = sub_1439E0(v7, v5, a3);
  v8 = *((int **)a1 + 2);
  v9 = v5;
  if ( v8 )
  {
    v10 = a3[1];
    if ( v10 )
      goto LABEL_5;
LABEL_15:
    v15 = operator new(0x40u);
    *(_QWORD *)(v15 + 32) = 0;
    v10 = v15;
    *(_OWORD *)(v15 + 40) = 0;
    v12 = *((_QWORD *)v8 + 5);
    if ( !v12 )
      goto LABEL_11;
LABEL_19:
    v17 = (void *)qalloc_or_throw();
    *(_QWORD *)(v10 + 32) = v17;
    *(_QWORD *)(v10 + 48) = v12;
    memcpy(v17, *((const void **)v8 + 4), v12);
    *(_QWORD *)(v10 + 40) = v12;
    while ( 1 )
    {
LABEL_11:
      *(_QWORD *)(v10 + 56) = *((_QWORD *)v8 + 7);
      v13 = *v8;
      *(_QWORD *)(v10 + 16) = 0;
      *(_DWORD *)v10 = v13;
      *(_QWORD *)(v10 + 24) = 0;
      v9[2] = v10;
      *(_QWORD *)(v10 + 8) = v9;
      v14 = *((_QWORD *)v8 + 3);
      if ( v14 )
        *(_QWORD *)(v10 + 24) = sub_1439E0(v14, v10, a3);
      v8 = *((int **)v8 + 2);
      if ( !v8 )
        break;
      v9 = (_QWORD *)v10;
      v10 = a3[1];
      if ( !v10 )
        goto LABEL_15;
LABEL_5:
      v11 = *(_QWORD *)(v10 + 8);
      a3[1] = v11;
      if ( v11 )
      {
        if ( v10 == *(_QWORD *)(v11 + 24) )
        {
          *(_QWORD *)(v11 + 24) = 0;
          v18 = *(_QWORD *)(a3[1] + 16LL);
          if ( v18 )
          {
            a3[1] = v18;
            for ( i = *(_QWORD *)(v18 + 24); i; i = *(_QWORD *)(i + 24) )
            {
              a3[1] = i;
              v18 = i;
            }
            v20 = *(_QWORD *)(v18 + 16);
            if ( v20 )
              a3[1] = v20;
          }
        }
        else
        {
          *(_QWORD *)(v11 + 16) = 0;
        }
      }
      else
      {
        *a3 = 0;
      }
      if ( *(_QWORD *)(v10 + 32) )
      {
        *(_QWORD *)(v10 + 40) = 0;
        qfree();
      }
      *(_QWORD *)(v10 + 32) = 0;
      *(_OWORD *)(v10 + 40) = 0;
      v12 = *((_QWORD *)v8 + 5);
      if ( v12 )
        goto LABEL_19;
    }
  }
  return v5;
}

