__int64 __fastcall sub_3FBF90(__int64 a1, unsigned __int8 a2, int a3, int a4, unsigned __int8 a5)
{
  __int64 v7; // r15
  unsigned int v8; // ebp
  int *v9; // rdi
  __int64 v10; // rdi
  int v11; // eax
  int v13; // eax
  int v14; // eax
  int dtype_size; // eax
  int v16; // eax
  int v17; // eax
  __int64 v18; // [rsp+8h] [rbp-50h]
  __int64 v20; // [rsp+10h] [rbp-48h]

  v7 = *(int *)(*(_QWORD *)(a1 + 832) + 452LL);
  v8 = v7 + get_dtype_size(a2);
  if ( !a5 )
  {
    if ( v8 == a3 )
    {
      if ( (_DWORD)v7 == a4 )
        goto LABEL_4;
    }
    else
    {
      dtype_size = get_dtype_size(a2);
      sub_1D6310(a1, 4u, dtype_size, a3, 0x3BEA45E214ADDC55LL, (int)v8, 0);
      if ( (_DWORD)v7 == a4 )
        goto LABEL_4;
    }
    v13 = get_dtype_size(a2);
    sub_1D6310(a1, 4u, v13, a4, 0x3BEA45E214ADDC55LL, v7, 0);
    goto LABEL_15;
  }
  if ( (_DWORD)v7 == a3 )
  {
    if ( v8 == a4 )
      goto LABEL_4;
    goto LABEL_19;
  }
  v17 = get_dtype_size(a2);
  sub_1D6310(a1, 4u, v17, a3, 0x3BEA45E214ADDC55LL, v7, 0);
  if ( v8 != a4 )
  {
LABEL_19:
    v16 = get_dtype_size(a2);
    sub_1D6310(a1, 4u, v16, a4, 0x3BEA45E214ADDC55LL, (int)v8, 0);
LABEL_15:
    v9 = *(int **)(a1 + 832);
    if ( *(_BYTE *)(a1 + 145) != 5 )
      goto LABEL_5;
    goto LABEL_16;
  }
LABEL_4:
  v9 = *(int **)(a1 + 832);
  if ( *(_BYTE *)(a1 + 145) != 5 )
  {
LABEL_5:
    v18 = (*(int (__fastcall **)(int *, _QWORD))(*(_QWORD *)v9 + 168LL))(v9, *(unsigned __int16 *)(a1 + 150));
    goto LABEL_6;
  }
LABEL_16:
  v18 = v9[115];
  v20 = *(_QWORD *)(a1 + 152);
  v14 = get_dtype_size(0);
  sub_1D6310(a1, 3u, v14, v20, 0x3BEA45E214ADDC55LL, v18, 2);
LABEL_6:
  v10 = 1;
  if ( a2 )
  {
    if ( a2 == 1 )
      v10 = 2;
    else
      v10 = (unsigned int)(a2 != 2) + 7;
  }
  v11 = get_dtype_size(v10);
  sub_1D6310(a1, a5 + 22, v11, v7, v18, v7, 0);
  if ( a5 )
    return (unsigned int)v7;
  return v8;
}
