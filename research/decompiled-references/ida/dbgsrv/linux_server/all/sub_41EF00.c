/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41EF00
// Address: 0x000000000041EF00

//----- (000000000041EF00) ----------------------------------------------------
__int64 __fastcall sub_41EF00(
        __int64 a1,
        int a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  int v15; // eax

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
      if ( a2 > *(_DWORD *)(v10 + 32) )
        break;
      v11 = v10;
      v10 = *(_QWORD *)(v10 + 16);
      if ( !v12 )
        goto LABEL_6;
    }
    v10 = *(_QWORD *)(v10 + 24);
  }
  while ( v13 );
LABEL_6:
  if ( a1 + 1216 == v11 || a2 < *(_DWORD *)(v11 + 32) )
    return 0xFFFFFFFFLL;
  v14 = *(_DWORD *)(v11 + 48);
  if ( v14 > 0 )
  {
    v15 = v14 - 1;
    *(_DWORD *)(v11 + 48) = v15;
    if ( v15 )
      return 1;
  }
  if ( (unsigned int)sub_41CFB0(a1, a2, 0, a3, a4, a5, a6, a7, a8, a9, a10) )
    return 1;
  return 0xFFFFFFFFLL;
}
