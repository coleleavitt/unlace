__int64 __fastcall sub_3E5490(__int64 a1, unsigned __int8 *a2, int a3, int a4)
{
  unsigned __int8 v5; // al
  __int64 v7; // rcx
  int dtype_size; // eax

  v5 = a2[5];
  if ( v5 == 1 )
  {
    v7 = 1;
  }
  else
  {
    v7 = 2;
    if ( v5 != 2 )
      return 0;
  }
  sub_3E5360(a1, a2, 2u, v7, 272);
  dtype_size = get_dtype_size(2);
  sub_1CF210(a1, 0x16u, dtype_size, a3, 272, a4, 0);
  return 1;
}
