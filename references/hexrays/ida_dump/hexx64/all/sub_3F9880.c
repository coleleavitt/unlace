__int64 __fastcall sub_3F9880(__int64 a1, __int64 a2, int a3, char a4, double a5)
{
  __int64 v6; // rbp
  __int64 v8; // rsi
  int v9; // eax
  unsigned int v10; // r12d
  int v11; // eax
  unsigned int v12; // r14d
  __int64 v13; // r13
  __int64 v14; // rdi
  int v15; // eax
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // r15
  int v20; // eax
  __int64 v21; // r13
  int dtype_size; // eax
  __int64 v23; // r12
  int v24; // eax
  __int64 v25; // r13
  int v26; // eax

  v6 = a3;
  v8 = *(unsigned __int16 *)(a2 + 6);
  v9 = *(_DWORD *)(a1 + 52) & 0x1018;
  v10 = a4 == 0 ? 4 : 12;
  if ( v9 == 4096 || v9 == 8 )
  {
    switch ( v8 )
    {
      case 0LL:
        v21 = *(int *)(*(_QWORD *)(a1 + 832) + 396LL);
        goto LABEL_15;
      case 1LL:
        v25 = *(int *)(*(_QWORD *)(a1 + 832) + 396LL);
        goto LABEL_18;
      case 2LL:
        v21 = *(int *)(*(_QWORD *)(a1 + 832) + 400LL);
LABEL_15:
        dtype_size = get_dtype_size(1);
        sub_1D6310(a1, v10, dtype_size, v21, v6, v6, 0);
        v23 = *(int *)(*(_QWORD *)(a1 + 832) + 408LL);
        goto LABEL_16;
      case 3LL:
        v25 = *(int *)(*(_QWORD *)(a1 + 832) + 400LL);
LABEL_18:
        v26 = get_dtype_size(1);
        sub_1D6310(a1, v10, v26, v25, v6, v6, 0);
        v23 = *(int *)(*(_QWORD *)(a1 + 832) + 404LL);
LABEL_16:
        v24 = get_dtype_size(1);
        sub_1D6310(a1, 0xCu, v24, v23, v6, v6, 0);
        return 1;
      case 4LL:
        v13 = *(int *)(*(_QWORD *)(a1 + 832) + 408LL);
        goto LABEL_13;
      case 5LL:
        v13 = *(int *)(*(_QWORD *)(a1 + 832) + 404LL);
        goto LABEL_13;
      case 6LL:
        v13 = *(int *)(*(_QWORD *)(a1 + 832) + 400LL);
        goto LABEL_13;
      case 7LL:
        v13 = *(int *)(*(_QWORD *)(a1 + 832) + 396LL);
LABEL_13:
        v14 = 1;
        break;
      default:
        if ( !under_debugger )
          sub_383060(0xC553u, v8, a5);
        BUG();
    }
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 832) + 168LL))(*(_QWORD *)(a1 + 832), v8);
    v12 = 5 * ((*(_DWORD *)(a1 + 52) & 0x1018) == 4112) + 2;
    if ( *(_WORD *)(a2 + 6) == 28 )
    {
      v17 = *(_QWORD *)(a1 + 832);
      v18 = *(_DWORD *)(v17 + 456);
      if ( !*(_BYTE *)a2 )
        v18 = *(_DWORD *)(v17 + 452);
      v19 = *(_QWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 50);
      v13 = v18;
      v20 = get_dtype_size(v12);
      sub_1D6310(a1, 3u, v20, v19, 0x3BEA45E214ADDC55LL, v13, 0);
    }
    else
    {
      v13 = v11;
    }
    v14 = v12;
  }
  v15 = get_dtype_size(v14);
  sub_1D6310(a1, v10, v15, v13, v6, v6, 0);
  return 1;
}
