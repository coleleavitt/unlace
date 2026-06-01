__int64 __fastcall sub_3F9880(__int64 a1, __int64 a2, int a3, char a4, double a5)
{
  __int64 v6; // rbp
  __int64 v7; // rsi
  int v8; // eax
  unsigned int v9; // r12d
  int v10; // eax
  __int64 v11; // r13
  int v12; // eax
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // r15
  int v17; // eax
  __int64 v18; // r13
  int dtype_size; // eax
  __int64 v20; // r12
  int v21; // eax
  __int64 v22; // r13
  int v23; // eax

  v6 = a3;
  v7 = *(unsigned __int16 *)(a2 + 6);
  v8 = *(_DWORD *)(a1 + 52) & 0x1018;
  v9 = a4 == 0 ? 4 : 12;
  if ( v8 == 4096 || v8 == 8 )
  {
    switch ( v7 )
    {
      case 0LL:
        v18 = *(int *)(*(_QWORD *)(a1 + 832) + 396LL);
        goto LABEL_14;
      case 1LL:
        v22 = *(int *)(*(_QWORD *)(a1 + 832) + 396LL);
        goto LABEL_17;
      case 2LL:
        v18 = *(int *)(*(_QWORD *)(a1 + 832) + 400LL);
LABEL_14:
        dtype_size = get_dtype_size();
        sub_1D6310(a1, v9, dtype_size, v18, v6, v6, 0);
        v20 = *(int *)(*(_QWORD *)(a1 + 832) + 408LL);
        goto LABEL_15;
      case 3LL:
        v22 = *(int *)(*(_QWORD *)(a1 + 832) + 400LL);
LABEL_17:
        v23 = get_dtype_size();
        sub_1D6310(a1, v9, v23, v22, v6, v6, 0);
        v20 = *(int *)(*(_QWORD *)(a1 + 832) + 404LL);
LABEL_15:
        v21 = get_dtype_size();
        sub_1D6310(a1, 0xCu, v21, v20, v6, v6, 0);
        return 1;
      case 4LL:
        v11 = *(int *)(*(_QWORD *)(a1 + 832) + 408LL);
        goto LABEL_5;
      case 5LL:
        v11 = *(int *)(*(_QWORD *)(a1 + 832) + 404LL);
        goto LABEL_5;
      case 6LL:
        v11 = *(int *)(*(_QWORD *)(a1 + 832) + 400LL);
        goto LABEL_5;
      case 7LL:
        v11 = *(int *)(*(_QWORD *)(a1 + 832) + 396LL);
        goto LABEL_5;
      default:
        if ( !under_debugger )
          sub_383060(0xC553u, a5);
        BUG();
    }
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 832) + 168LL))(*(_QWORD *)(a1 + 832), v7);
  if ( *(_WORD *)(a2 + 6) == 28 )
  {
    v14 = *(_QWORD *)(a1 + 832);
    v15 = *(_DWORD *)(v14 + 456);
    if ( !*(_BYTE *)a2 )
      v15 = *(_DWORD *)(v14 + 452);
    v16 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
    v11 = v15;
    v17 = get_dtype_size();
    sub_1D6310(a1, 3u, v17, v16, 0x3BEA45E214ADDC55LL, v11, 0);
  }
  else
  {
    v11 = v10;
  }
LABEL_5:
  v12 = get_dtype_size();
  sub_1D6310(a1, v9, v12, v11, v6, v6, 0);
  return 1;
}
