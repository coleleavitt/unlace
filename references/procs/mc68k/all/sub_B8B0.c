__int64 __fastcall sub_B8B0(__int64 a1, __int64 a2, char a3)
{
  char v5; // al
  unsigned __int8 v6; // di
  __int64 dtype_size; // rbx
  __int64 result; // rax
  int v9; // ecx
  __int64 v10; // rdx
  __int64 v11; // rax
  char v12; // si

  v5 = *(_BYTE *)(a2 + 1);
  if ( v5 == 10 )
  {
    v9 = 32;
    v10 = 0;
    v11 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFLL;
    do
    {
      v12 = v11;
      LODWORD(v11) = (unsigned int)v11 >> 1;
      v10 += v12 & 1;
      --v9;
    }
    while ( v9 );
    dtype_size = 4 * v10;
  }
  else
  {
    if ( v5 )
      v6 = *(_BYTE *)(a2 + 5);
    else
      v6 = *(_BYTE *)(a1 + 32) - 1;
    dtype_size = get_dtype_size(v6);
    if ( dtype_size == 1 )
      dtype_size = 2;
  }
  if ( a3 )
    dtype_size = -dtype_size;
  result = get_func(*(_QWORD *)(a1 + 16));
  if ( result )
    return add_auto_stkpnt(result, *(_QWORD *)(a1 + 16) + *(unsigned __int16 *)(a1 + 26), dtype_size);
  return result;
}
