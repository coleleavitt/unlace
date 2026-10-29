void __fastcall sub_1A7FD60(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r12
  __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // r13
  _QWORD *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rbp
  void *v16; // rdi
  int v17; // ebp
  _QWORD v18[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = (_QWORD *)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 48, v18);
  v5 = *(_QWORD **)a1;
  v6 = v4;
  v7 = (_QWORD *)(*(_QWORD *)a1 + 48LL * *(unsigned int *)(a1 + 8));
  if ( *(_QWORD **)a1 != v7 )
  {
    v8 = v4;
    do
    {
      *(_DWORD *)v8 = *(_DWORD *)v5;
      v9 = v5[1];
      *(_QWORD *)(v8 + 24) = 0;
      *(_QWORD *)(v8 + 32) = 0;
      *(_QWORD *)(v8 + 16) = 0;
      *(_QWORD *)(v8 + 8) = v9;
      *(_QWORD *)(v8 + 16) = v5[2];
      v10 = v5[3];
      v5[2] = 0;
      v11 = *(_QWORD *)(v8 + 24);
      *(_QWORD *)(v8 + 24) = v10;
      v12 = v5[4];
      v5[3] = v11;
      v13 = *(_QWORD *)(v8 + 32);
      *(_QWORD *)(v8 + 32) = v12;
      LODWORD(v12) = *((_DWORD *)v5 + 10);
      v5[4] = v13;
      *(_DWORD *)(v8 + 40) = v12 != 0;
      v14 = v5[2];
      if ( v14 != v5[3] )
        v5[3] = v14;
      ++*((_DWORD *)v5 + 10);
      v5 += 6;
      v8 += 48;
    }
    while ( v7 != v5 );
    v15 = *(_QWORD **)a1;
    v7 = (_QWORD *)(*(_QWORD *)a1 + 48LL * *(unsigned int *)(a1 + 8));
    if ( *(_QWORD **)a1 != v7 )
    {
      do
      {
        while ( 1 )
        {
          v7 -= 6;
          v16 = (void *)v7[2];
          if ( !v16 )
            break;
          operator delete(v16);
          if ( v15 == v7 )
            goto LABEL_9;
        }
      }
      while ( v15 != v7 );
LABEL_9:
      v7 = *(_QWORD **)a1;
    }
  }
  v17 = v18[0];
  if ( v3 != v7 )
    free(v7);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v17;
}
