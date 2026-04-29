__int64 __fastcall sub_3ED260(__int64 a1, unsigned int a2, __int64 a3, int a4, __int64 a5, __int64 a6, signed int a7)
{
  int v7; // r14d
  int v8; // r13d
  __int64 v10; // rax
  int v11; // r15d
  int dtype_size; // eax
  __int64 v14; // rsi

  v7 = a6;
  v8 = a5;
  v10 = *(_QWORD *)(a1 + 832);
  v11 = a7;
  if ( *(_DWORD *)(v10 + 84) != 8 || !a7 || a7 >= (unsigned __int64)*(int *)(v10 + 80) )
    goto LABEL_2;
  if ( a2 != 54 )
  {
    if ( a2 > 0x36 )
    {
      if ( a2 != 57 )
        goto LABEL_2;
LABEL_9:
      v14 = a5;
      goto LABEL_10;
    }
    if ( a2 != 1 )
    {
      if ( a2 != 2 )
        goto LABEL_2;
      goto LABEL_9;
    }
  }
  v14 = a6;
LABEL_10:
  if ( v14 != -1 )
    v11 = sub_3ED1E0(a1, v14, a7);
LABEL_2:
  dtype_size = get_dtype_size();
  return sub_1D3790(a1, a2, dtype_size, a4, v8, v7, v11);
}
