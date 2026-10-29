/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41CB60
// Address: 0x000000000041CB60

//----- (000000000041CB60) ----------------------------------------------------
__int64 __fastcall sub_41CB60(
        __int64 a1,
        int a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 result; // rax

  v10 = *(_QWORD *)(a1 + 1224);
  if ( !v10 )
    return 0xFFFFFFFFLL;
  v11 = a1 + 1216;
  do
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(v10 + 16);
      v13 = *(_QWORD *)(v10 + 24);
      if ( a2 <= *(_DWORD *)(v10 + 32) )
        break;
      v10 = *(_QWORD *)(v10 + 24);
      if ( !v13 )
        goto LABEL_6;
    }
    v11 = v10;
    v10 = *(_QWORD *)(v10 + 16);
  }
  while ( v12 );
LABEL_6:
  result = 0xFFFFFFFFLL;
  if ( a1 + 1216 != v11 && a2 >= *(_DWORD *)(v11 + 32) )
  {
    sub_41C660(a1, a2, 0, a3, a4, a5, a6, a7, a8, a9, a10);
    ++*(_DWORD *)(v11 + 48);
    return 1;
  }
  return result;
}
