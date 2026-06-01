__int64 __fastcall sub_3EED20(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v6; // rsi
  int v7; // eax
  int v8; // r12d
  int v9; // eax
  int v10; // r13d
  int v11; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // r15
  int v16; // eax
  int v17; // r13d
  int dtype_size; // eax
  int v19; // r12d
  int v20; // eax
  int v21; // r13d
  int v22; // eax

  v6 = *(unsigned __int16 *)(a2 + 6);
  v7 = *(_DWORD *)(a1 + 52) & 0x1018;
  v8 = a4 == 0 ? 4 : 12;
  if ( v7 == 4096 || v7 == 8 )
  {
    switch ( v6 )
    {
      case 0LL:
        v17 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 396LL);
        goto LABEL_14;
      case 1LL:
        v21 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 396LL);
        goto LABEL_17;
      case 2LL:
        v17 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 400LL);
LABEL_14:
        dtype_size = get_dtype_size();
        sub_1D3790(a1, v8, dtype_size, v17, a3, a3, 0);
        v19 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 408LL);
        goto LABEL_15;
      case 3LL:
        v21 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 400LL);
LABEL_17:
        v22 = get_dtype_size();
        sub_1D3790(a1, v8, v22, v21, a3, a3, 0);
        v19 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 404LL);
LABEL_15:
        v20 = get_dtype_size();
        sub_1D3790(a1, 12, v20, v19, a3, a3, 0);
        return 1;
      case 4LL:
        v10 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 408LL);
        goto LABEL_5;
      case 5LL:
        v10 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 404LL);
        goto LABEL_5;
      case 6LL:
        v10 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 400LL);
        goto LABEL_5;
      case 7LL:
        v10 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 396LL);
        goto LABEL_5;
      default:
        if ( !under_debugger )
          sub_37EA20(50515);
        BUG();
    }
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 832) + 168LL))(*(_QWORD *)(a1 + 832), v6);
  if ( *(_WORD *)(a2 + 6) == 28 )
  {
    v13 = *(_QWORD *)(a1 + 832);
    v14 = *(_DWORD *)(v13 + 456);
    if ( !*(_BYTE *)a2 )
      v14 = *(_DWORD *)(v13 + 452);
    v15 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
    v10 = v14;
    v16 = get_dtype_size();
    sub_1D3790(a1, 3, v16, v15, 346938453, v10, 0);
  }
  else
  {
    v10 = v9;
  }
LABEL_5:
  v11 = get_dtype_size();
  sub_1D3790(a1, v8, v11, v10, a3, a3, 0);
  return 1;
}
