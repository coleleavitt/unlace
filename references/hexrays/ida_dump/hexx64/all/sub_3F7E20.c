__int64 __fastcall sub_3F7E20(
        __int64 a1,
        unsigned int a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        signed int a7)
{
  __int64 v11; // rax
  int v12; // r15d
  int dtype_size; // eax
  __int64 v15; // rsi

  v11 = *(_QWORD *)(a1 + 832);
  v12 = a7;
  if ( *(_DWORD *)(v11 + 84) != 8 || !a7 || a7 >= (unsigned __int64)*(int *)(v11 + 80) )
    goto LABEL_2;
  if ( a2 != 54 )
  {
    if ( a2 > 0x36 )
    {
      if ( a2 != 57 )
        goto LABEL_2;
LABEL_9:
      v15 = a5;
      goto LABEL_10;
    }
    if ( a2 != 1 )
    {
      if ( a2 != 2 )
        goto LABEL_2;
      goto LABEL_9;
    }
  }
  v15 = a6;
LABEL_10:
  if ( v15 != -1 )
    v12 = sub_3F7DA0(a1, v15, a7);
LABEL_2:
  dtype_size = get_dtype_size(a3);
  return sub_1D6310(a1, a2, dtype_size, a4, a5, a6, v12);
}
