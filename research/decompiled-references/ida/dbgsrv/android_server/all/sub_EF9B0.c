/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EF9B0
// Address: 0x00000000000EF9B0

//----- (00000000000EF9B0) ----------------------------------------------------
__int64 __fastcall sub_EF9B0(
        __int64 result,
        __int64 (__fastcall *a2)(__int64, _QWORD, _QWORD),
        __int64 a3,
        int a4,
        int a5)
{
  __int64 v5; // x24
  int i; // w19
  int v10; // w0
  __int64 v11; // x21
  __int64 v12; // x0
  int v13; // [xsp+58h] [xbp+58h]

  v5 = result;
  for ( i = 2 * a4 + 1; i < a5; i = result + 1 )
  {
    if ( i + 1 < a5 )
    {
      v13 = a4;
      v10 = a2(v5, *(_QWORD *)(a3 + 8LL * i), *(_QWORD *)(a3 + 8LL * i + 8));
      a4 = v13;
      if ( v10 < 0 )
        ++i;
    }
    v11 = 8LL * a4;
    result = a2(v5, *(_QWORD *)(a3 + v11), *(_QWORD *)(a3 + 8LL * i));
    if ( (result & 0x80000000) == 0 )
      break;
    a4 = i;
    v12 = *(_QWORD *)(a3 + v11);
    *(_QWORD *)(a3 + v11) = *(_QWORD *)(a3 + 8LL * i);
    *(_QWORD *)(a3 + 8LL * i) = v12;
    result = (unsigned int)(2 * i);
  }
  return result;
}
