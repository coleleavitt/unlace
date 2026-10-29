void __fastcall sub_8EFA80(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD); // rbx
  char v3; // r12
  __int64 v4; // rbx
  __int64 i; // r13
  void (*v6)(); // rax
  __int64 v7; // r13
  __int64 j; // rbx
  __int64 v9; // rdi
  __int64 v10; // r13
  void *v11; // rbx
  __int64 v12; // rdi
  __int64 *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rdx
  bool v16; // zf
  _QWORD **v17; // rbx
  _QWORD **k; // r14
  _QWORD *v19; // r13
  void *v20; // rdi

  v2 = *(void (__fastcall ****)(_QWORD))(a1 + 7488);
  v3 = *(_BYTE *)(a1 + 7508);
  *(_BYTE *)(a1 + 7508) = 1;
  if ( v2 )
  {
    (**v2)(v2);
    sub_186B220(v2);
    *(_QWORD *)(a1 + 7488) = 0;
  }
  sub_A6D950(*(_QWORD *)(a1 + 7480));
  v4 = *(_QWORD *)(a1 + 8688);
  if ( v4 )
  {
    for ( i = v4 + 8LL * *(unsigned int *)(v4 - 4); i != v4; v4 += 8 )
    {
      while ( 1 )
      {
        v6 = *(void (**)())(**(_QWORD **)v4 + 200LL);
        if ( v6 != nullsub_525 )
          break;
        v4 += 8;
        if ( i == v4 )
          goto LABEL_9;
      }
      v6();
    }
  }
LABEL_9:
  sub_8EF3E0(a1, (unsigned int ***)(a1 + 8888), 0);
  sub_8EF3E0(a1, (unsigned int ***)(a1 + 8896), 0);
  sub_8E8D40(a1, (__int64 *)(a1 + 8600), 0);
  sub_8EAAE0(a1);
  v7 = *(_QWORD *)(a1 + 9456);
  if ( v7 )
  {
    for ( j = v7 + 8LL * *(unsigned int *)(v7 - 4); v7 != j; j -= 8 )
    {
      v9 = *(_QWORD *)(j - 8);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    v10 = *(_QWORD *)(a1 + 9456);
    if ( v10 )
      *(_DWORD *)(v10 - 4) = 0;
  }
  v11 = *(void **)(a1 + 7472);
  if ( v11 )
  {
    sub_952AE0(*(_QWORD *)(a1 + 7472));
    sub_186B220(v11);
    *(_QWORD *)(a1 + 7472) = 0;
  }
  v12 = *(_QWORD *)(a1 + 8784);
  if ( v12 )
  {
    sub_B392C0(v12, *(_QWORD *)(a1 + 104), 0);
    v13 = *(__int64 **)(a1 + 8784);
    v14 = *v13;
    if ( !*v13
      || (v15 = *(_QWORD *)(a1 + 104), v16 = *(_DWORD *)(v14 + 8) == 1, --*(_DWORD *)(v14 + 8), !v16)
      || (sub_15D7BC0(v15, v14), (v13 = *(__int64 **)(a1 + 8784)) != nullptr) )
    {
      sub_186B220(v13);
    }
    *(_QWORD *)(a1 + 8784) = 0;
  }
  v17 = *(_QWORD ***)(a1 + 8824);
  if ( v17 )
  {
    for ( k = &v17[*((unsigned int *)v17 - 1)]; k != v17; ++v17 )
    {
      v19 = *v17;
      if ( *v17 )
      {
        v20 = (void *)v19[11];
        if ( v20 )
          sub_186B220(v20);
        sub_180C0E0(v19);
        sub_186B220(v19);
      }
    }
  }
  *(_BYTE *)(a1 + 7508) = v3;
}

