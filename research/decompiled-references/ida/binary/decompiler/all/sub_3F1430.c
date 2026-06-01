__int64 __fastcall sub_3F1430(__int64 a1, __int64 a2, int a3, int a4, unsigned __int8 a5)
{
  unsigned int v7; // r15d
  unsigned int v8; // ebp
  _DWORD *v9; // rdi
  int v10; // eax
  int v12; // eax
  int v13; // eax
  int dtype_size; // eax
  int v15; // eax
  int v16; // eax
  int v17; // [rsp+8h] [rbp-50h]
  __int64 v19; // [rsp+10h] [rbp-48h]

  v7 = *(_DWORD *)(*(_QWORD *)(a1 + 832) + 452LL);
  v8 = v7 + get_dtype_size();
  if ( !a5 )
  {
    if ( v8 == a3 )
    {
      if ( v7 == a4 )
        goto LABEL_4;
    }
    else
    {
      dtype_size = get_dtype_size();
      sub_1D3790(a1, 4, dtype_size, a3, 346938453, v8, 0);
      if ( v7 == a4 )
        goto LABEL_4;
    }
    v12 = get_dtype_size();
    sub_1D3790(a1, 4, v12, a4, 346938453, v7, 0);
    goto LABEL_12;
  }
  if ( v7 == a3 )
  {
    if ( v8 == a4 )
      goto LABEL_4;
    goto LABEL_16;
  }
  v16 = get_dtype_size();
  sub_1D3790(a1, 4, v16, a3, 346938453, v7, 0);
  if ( v8 != a4 )
  {
LABEL_16:
    v15 = get_dtype_size();
    sub_1D3790(a1, 4, v15, a4, 346938453, v8, 0);
LABEL_12:
    v9 = *(_DWORD **)(a1 + 832);
    if ( *(_BYTE *)(a1 + 145) != 5 )
      goto LABEL_5;
    goto LABEL_13;
  }
LABEL_4:
  v9 = *(_DWORD **)(a1 + 832);
  if ( *(_BYTE *)(a1 + 145) != 5 )
  {
LABEL_5:
    v17 = (*(__int64 (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v9 + 168LL))(v9, *(unsigned __int16 *)(a1 + 150));
    goto LABEL_6;
  }
LABEL_13:
  v17 = v9[115];
  v19 = *(_QWORD *)(a1 + 152);
  v13 = get_dtype_size();
  sub_1D3790(a1, 3, v13, v19, 346938453, v17, 2);
LABEL_6:
  v10 = get_dtype_size();
  sub_1D3790(a1, a5 + 22, v10, v7, v17, v7, 0);
  if ( a5 )
    return v7;
  return v8;
}
