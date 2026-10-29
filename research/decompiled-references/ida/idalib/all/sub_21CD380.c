void __fastcall sub_21CD380(__int64 a1, __int64 a2)
{
  void **v2; // r12
  __int64 v4; // rax
  void **v5; // rdx
  _OWORD *v6; // r13
  __int64 v7; // rax
  void **v8; // rbx
  _OWORD *v9; // rcx
  __int64 v10; // rdi
  void *v11; // rsi
  __int64 v12; // rdi
  void *v13; // rsi
  void **v14; // r14
  int v15; // r14d
  __int64 v16[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = (void **)(a1 + 16);
  v4 = sub_2237400(a1, a1 + 16, a2, 32, v16);
  v5 = *(void ***)a1;
  v6 = (_OWORD *)v4;
  v7 = 32LL * *(unsigned int *)(a1 + 8);
  v8 = (void **)(*(_QWORD *)a1 + v7);
  if ( *(void ***)a1 != v8 )
  {
    v9 = v6;
    do
    {
      *v9 = 0;
      v5 += 4;
      v9 += 2;
      *((_QWORD *)v9 - 2) = 0;
      *((_QWORD *)v9 - 4) = *(v5 - 4);
      v10 = (__int64)*(v5 - 3);
      *(v5 - 4) = nullptr;
      v11 = *((void **)v9 - 3);
      *((_QWORD *)v9 - 3) = v10;
      v12 = (__int64)*(v5 - 2);
      *(v5 - 3) = v11;
      v13 = *((void **)v9 - 2);
      *((_QWORD *)v9 - 2) = v12;
      *(v5 - 2) = v13;
      *((_QWORD *)v9 - 1) = *(v5 - 1);
    }
    while ( v8 != v5 );
    v14 = *(void ***)a1;
    v8 = (void **)(*(_QWORD *)a1 + v7);
    if ( *(void ***)a1 != v8 )
    {
      do
      {
        while ( 1 )
        {
          v8 -= 4;
          if ( !*v8 )
            break;
          operator delete(*v8);
          if ( v8 == v14 )
            goto LABEL_7;
        }
      }
      while ( v8 != v14 );
LABEL_7:
      v8 = *(void ***)a1;
    }
  }
  v15 = v16[0];
  if ( v2 != v8 )
    free(v8);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v15;
}
