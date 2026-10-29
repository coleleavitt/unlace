void __fastcall sub_68DDE0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rdx
  __int64 v5; // rbp
  __int64 v6; // rsi
  _QWORD *v7; // r14
  unsigned __int64 v8; // rax
  _QWORD *v9; // r13
  void *v10; // rdi
  void *v11; // rdi
  __m128i *v12; // rbx
  void (__fastcall *v13)(__m128i *); // rdx
  int v14; // ebx
  _QWORD *v15; // [rsp+8h] [rbp-50h]
  _QWORD v16[8]; // [rsp+18h] [rbp-40h] BYREF

  v15 = (_QWORD *)(a1 + 16);
  v3 = sub_25D5F70(a1, a1 + 16, a2, 8, v16);
  v4 = *(_QWORD **)a1;
  v5 = v3;
  v6 = 8LL * *(unsigned int *)(a1 + 8);
  v7 = (_QWORD *)(*(_QWORD *)a1 + v6);
  if ( *(_QWORD **)a1 != v7 )
  {
    v8 = 0;
    do
    {
      *(_QWORD *)(v5 + v8) = v4[v8 / 8];
      v4[v8 / 8] = 0;
      v8 += 8LL;
    }
    while ( v6 != v8 );
    v9 = *(_QWORD **)a1;
    v7 = (_QWORD *)(*(_QWORD *)a1 + 8LL * *(unsigned int *)(a1 + 8));
    if ( *(_QWORD **)a1 != v7 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v12 = (__m128i *)*--v7;
          if ( v12 )
            break;
LABEL_11:
          *v7 = 0;
          if ( v9 == v7 )
            goto LABEL_15;
        }
        v13 = *(void (__fastcall **)(__m128i *))(v12->m128i_i64[0] + 8);
        if ( v13 == sub_689960 )
        {
          v10 = (void *)v12[6].m128i_i64[1];
          v12->m128i_i64[0] = (__int64)&off_47D01C0;
          if ( v10 )
            operator delete(v10, v12[7].m128i_i64[1] - (_QWORD)v10);
          v11 = (void *)v12[5].m128i_i64[0];
          if ( v11 )
            operator delete(v11, v12[6].m128i_i64[0] - (_QWORD)v11);
          sub_62FED0(v12);
          operator delete(v12, 0xB0u);
          goto LABEL_11;
        }
        v13(v12);
        *v7 = 0;
        if ( v9 == v7 )
        {
LABEL_15:
          v7 = *(_QWORD **)a1;
          break;
        }
      }
    }
  }
  v14 = v16[0];
  if ( v15 != v7 )
    free(v7);
  *(_QWORD *)a1 = v5;
  *(_DWORD *)(a1 + 12) = v14;
}

