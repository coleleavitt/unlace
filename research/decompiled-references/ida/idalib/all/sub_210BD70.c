void __fastcall sub_210BD70(__int64 a1, __int64 a2)
{
  __int64 *v2; // r12
  __int64 v4; // rax
  __int64 *v5; // rdx
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 *v15; // r14
  void *v16; // rdi
  int v17; // r14d
  __int64 v18[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = (__int64 *)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 32, v18);
  v5 = *(__int64 **)a1;
  v6 = v4;
  v7 = 32LL * *(unsigned int *)(a1 + 8);
  v8 = (__int64 *)(*(_QWORD *)a1 + v7);
  if ( *(__int64 **)a1 != v8 )
  {
    v9 = v6;
    do
    {
      v10 = *v5;
      *(_QWORD *)(v9 + 16) = 0;
      v5 += 4;
      v9 += 32;
      *(_QWORD *)(v9 - 8) = 0;
      *(_QWORD *)(v9 - 24) = 0;
      *(_QWORD *)(v9 - 32) = v10;
      *(_QWORD *)(v9 - 24) = *(v5 - 3);
      v11 = *(v5 - 2);
      *(v5 - 3) = 0;
      v12 = *(_QWORD *)(v9 - 16);
      *(_QWORD *)(v9 - 16) = v11;
      v13 = *(v5 - 1);
      *(v5 - 2) = v12;
      v14 = *(_QWORD *)(v9 - 8);
      *(_QWORD *)(v9 - 8) = v13;
      *(v5 - 1) = v14;
    }
    while ( v8 != v5 );
    v15 = *(__int64 **)a1;
    v8 = (__int64 *)(*(_QWORD *)a1 + v7);
    if ( *(__int64 **)a1 != v8 )
    {
      do
      {
        while ( 1 )
        {
          v8 -= 4;
          v16 = (void *)v8[1];
          if ( !v16 )
            break;
          operator delete(v16);
          if ( v8 == v15 )
            goto LABEL_7;
        }
      }
      while ( v8 != v15 );
LABEL_7:
      v8 = *(__int64 **)a1;
    }
  }
  v17 = v18[0];
  if ( v2 != v8 )
    free(v8);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v17;
}
