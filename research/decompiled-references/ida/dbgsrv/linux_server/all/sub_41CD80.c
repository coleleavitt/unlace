/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41CD80
// Address: 0x000000000041CD80

//----- (000000000041CD80) ----------------------------------------------------
__int64 __fastcall sub_41CD80(
        __int64 a1,
        __int64 a2,
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
  __int64 v12; // rdx
  __int64 v13; // rcx

  v10 = *(_QWORD *)(a1 + 1224);
  if ( v10 )
  {
    v11 = a1 + 1216;
    do
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(v10 + 16);
        v13 = *(_QWORD *)(v10 + 24);
        if ( (int)a2 <= *(_DWORD *)(v10 + 32) )
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
    if ( a1 + 1216 != v11 && (int)a2 >= *(_DWORD *)(v11 + 32) )
      return 0;
  }
  if ( *(_DWORD *)(a1 + 1340) != a2 )
    sub_41C660(a1, a2, 0, *(double *)a3.m128_u64, a4, a5, a6, a7, a8, a9, a10);
  return sub_41B7C0(a1, (unsigned int)a2, -1, a3, a4, a5, a6, a7, a8, a9, a10);
}
// 41CDE5: variable 'a7' is possibly undefined
// 41CDE5: variable 'a8' is possibly undefined
