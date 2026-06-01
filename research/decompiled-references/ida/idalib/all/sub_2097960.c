void __fastcall sub_2097960(__int64 a1, unsigned int a2, double a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r15
  void (__fastcall *v6)(__int64, int, double); // rax
  __int64 v7; // rax
  __int64 v8; // rbp
  size_t v9; // rax
  void *v10; // rdi
  size_t v11; // r14
  unsigned int v12; // r14d
  unsigned int v13; // ebp
  __int64 v14; // rsi
  __int64 v15; // r13
  unsigned int v17; // [rsp+Ch] [rbp-3Ch]

  v17 = 2 * a2;
  if ( *(_DWORD *)(a1 + 456) )
  {
    v4 = 0;
    do
    {
      while ( 1 )
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 448) + 8LL * v4);
        if ( !v5 )
          BUG();
        v6 = *(void (__fastcall **)(__int64, int, double))(*(_QWORD *)(v5 - 32) + 120LL);
        if ( v6 == sub_20978E0 )
          break;
        ++v4;
        ((void (__fastcall *)(__int64, _QWORD))v6)(v5 - 32, a2);
        if ( *(_DWORD *)(a1 + 456) <= v4 )
          return;
      }
      v7 = sub_221A480(a3);
      v8 = sub_227D090(v7, v17);
      v9 = j__strlen("FunctionPass Manager\n");
      v10 = *(void **)(v8 + 32);
      v11 = v9;
      if ( v9 > *(_QWORD *)(v8 + 24) - (_QWORD)v10 )
      {
        sub_227BF10(v8, "FunctionPass Manager\n", v9);
      }
      else if ( v9 )
      {
        memcpy(v10, "FunctionPass Manager\n", v9);
        *(_QWORD *)(v8 + 32) += v11;
      }
      v12 = 0;
      v13 = a2 + 1;
      while ( *(_DWORD *)(v5 + 24) > v12 )
      {
        v14 = v12++;
        v15 = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 8 * v14);
        a3 = (*(double (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 120LL))(v15, v13);
        sub_2097790(v5, v15, v13, a3);
      }
      ++v4;
    }
    while ( *(_DWORD *)(a1 + 456) > v4 );
  }
}
