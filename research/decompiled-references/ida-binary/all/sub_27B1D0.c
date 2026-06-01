__int64 __fastcall sub_27B1D0(int *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  __int64 v10; // rdi
  int *v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // r14
  int v16; // eax
  __int64 v17; // rdi
  void *v19; // rax
  void *v20; // rax
  const void *v21; // rsi

  v4 = operator new(0x50u);
  v5 = *((_QWORD *)a1 + 8);
  v6 = v4;
  v7 = *((_QWORD *)a1 + 4);
  *(_QWORD *)(v6 + 56) = 0;
  *(_QWORD *)(v6 + 32) = v7;
  v8 = *((_QWORD *)a1 + 5);
  *(_OWORD *)(v6 + 64) = 0;
  *(_QWORD *)(v6 + 40) = v8;
  *(_QWORD *)(v6 + 48) = *((_QWORD *)a1 + 6);
  if ( v5 )
  {
    v20 = (void *)qalloc_or_throw(8 * v5);
    *(_QWORD *)(v6 + 56) = v20;
    v21 = *((const void **)a1 + 7);
    *(_QWORD *)(v6 + 72) = v5;
    memcpy(v20, v21, 8 * v5);
    *(_QWORD *)(v6 + 64) = v5;
  }
  v9 = *a1;
  v10 = *((_QWORD *)a1 + 3);
  *(_QWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 24) = 0;
  *(_DWORD *)v6 = v9;
  *(_QWORD *)(v6 + 8) = a2;
  if ( v10 )
    *(_QWORD *)(v6 + 24) = sub_27B1D0(v10, v6);
  v11 = *((int **)a1 + 2);
  if ( v11 )
  {
    v12 = v6;
    do
    {
      v13 = v12;
      v12 = operator new(0x50u);
      *(_QWORD *)(v12 + 32) = *((_QWORD *)v11 + 4);
      *(_QWORD *)(v12 + 40) = *((_QWORD *)v11 + 5);
      v14 = *((_QWORD *)v11 + 6);
      *(_QWORD *)(v12 + 56) = 0;
      *(_QWORD *)(v12 + 48) = v14;
      *(_OWORD *)(v12 + 64) = 0;
      v15 = *((_QWORD *)v11 + 8);
      if ( v15 )
      {
        v19 = (void *)qalloc_or_throw(8 * v15);
        *(_QWORD *)(v12 + 56) = v19;
        *(_QWORD *)(v12 + 72) = v15;
        memcpy(v19, *((const void **)v11 + 7), 8 * v15);
        *(_QWORD *)(v12 + 64) = v15;
      }
      v16 = *v11;
      *(_QWORD *)(v12 + 16) = 0;
      *(_QWORD *)(v12 + 24) = 0;
      *(_DWORD *)v12 = v16;
      *(_QWORD *)(v13 + 16) = v12;
      *(_QWORD *)(v12 + 8) = v13;
      v17 = *((_QWORD *)v11 + 3);
      if ( v17 )
        *(_QWORD *)(v12 + 24) = sub_27B1D0(v17, v12);
      v11 = *((int **)v11 + 2);
    }
    while ( v11 );
  }
  return v6;
}
