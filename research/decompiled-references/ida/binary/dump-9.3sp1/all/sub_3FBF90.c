__int64 __fastcall sub_3FBF90(__int64 a1, __int64 a2, int a3, int a4, unsigned __int8 a5)
{
  __int64 v7; // r15
  unsigned int v8; // ebp
  int *v9; // rdi
  int v10; // eax
  int v12; // eax
  int v13; // eax
  int dtype_size; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // [rsp+8h] [rbp-50h]
  __int64 v19; // [rsp+10h] [rbp-48h]

  v7 = *(int *)(*(_QWORD *)(a1 + 832) + 452LL);
  v8 = v7 + get_dtype_size();
  if ( !a5 )
  {
    if ( v8 == a3 )
    {
      if ( (_DWORD)v7 == a4 )
        goto LABEL_4;
    }
    else
    {
      dtype_size = get_dtype_size();
      sub_1D6310(a1, 4u, dtype_size, a3, 0x3BEA45E214ADDC55LL, (int)v8, 0);
      if ( (_DWORD)v7 == a4 )
        goto LABEL_4;
    }
    v12 = get_dtype_size();
    sub_1D6310(a1, 4u, v12, a4, 0x3BEA45E214ADDC55LL, v7, 0);
    goto LABEL_12;
  }
  if ( (_DWORD)v7 == a3 )
  {
    if ( v8 == a4 )
      goto LABEL_4;
    goto LABEL_16;
  }
  v16 = get_dtype_size();
  sub_1D6310(a1, 4u, v16, a3, 0x3BEA45E214ADDC55LL, v7, 0);
  if ( v8 != a4 )
  {
LABEL_16:
    v15 = get_dtype_size();
    sub_1D6310(a1, 4u, v15, a4, 0x3BEA45E214ADDC55LL, (int)v8, 0);
LABEL_12:
    v9 = *(int **)(a1 + 832);
    if ( *(_BYTE *)(a1 + 145) != 5 )
      goto LABEL_5;
    goto LABEL_13;
  }
LABEL_4:
  v9 = *(int **)(a1 + 832);
  if ( *(_BYTE *)(a1 + 145) != 5 )
  {
LABEL_5:
    v17 = (*(int (__fastcall **)(int *, _QWORD))(*(_QWORD *)v9 + 168LL))(v9, *(unsigned __int16 *)(a1 + 150));
    goto LABEL_6;
  }
LABEL_13:
  v17 = v9[115];
  v19 = *(_QWORD *)(a1 + 152);
  v13 = get_dtype_size();
  sub_1D6310(a1, 3u, v13, v19, 0x3BEA45E214ADDC55LL, v17, 2);
LABEL_6:
  v10 = get_dtype_size();
  sub_1D6310(a1, a5 + 22, v10, v7, v17, v7, 0);
  if ( a5 )
    return (unsigned int)v7;
  return v8;
}
