void __fastcall sub_69C080(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r13
  __int64 v4; // rax
  _QWORD *v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rsi
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rax
  _QWORD *v10; // r14
  __int64 v11; // rdi
  int v12; // r14d
  _QWORD v13[6]; // [rsp+8h] [rbp-30h] BYREF

  v2 = (_QWORD *)(a1 + 16);
  v4 = sub_25D5F70(a1, a1 + 16, a2, 8, v13);
  v5 = *(_QWORD **)a1;
  v6 = v4;
  v7 = 8LL * *(unsigned int *)(a1 + 8);
  v8 = (_QWORD *)(*(_QWORD *)a1 + v7);
  if ( *(_QWORD **)a1 != v8 )
  {
    v9 = 0;
    do
    {
      *(_QWORD *)(v6 + v9) = v5[v9 / 8];
      v5[v9 / 8] = 0;
      v9 += 8LL;
    }
    while ( v7 != v9 );
    v10 = *(_QWORD **)a1;
    v8 = (_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8));
    if ( *(_QWORD **)a1 != v8 )
    {
      do
      {
        while ( 1 )
        {
          v11 = *--v8;
          if ( !v11 )
            break;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
          *v8 = 0;
          if ( v10 == v8 )
            goto LABEL_7;
        }
      }
      while ( v10 != v8 );
LABEL_7:
      v8 = *(_QWORD **)a1;
    }
  }
  v12 = v13[0];
  if ( v2 != v8 )
    free(v8);
  *(_QWORD *)a1 = v6;
  *(_DWORD *)(a1 + 12) = v12;
}

