/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005B360
// Address: 0x000000010005B360

//----- (000000010005B360) ----------------------------------------------------
__int64 __fastcall sub_10005B360(__int64 a1, __int64 a2)
{
  __int64 result; // x0
  int v5; // w21
  __int64 v6; // x22
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x5
  __int64 v11; // x6
  __int64 v12; // x7

  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)a1 + 216LL))(
             a1,
             *(unsigned int *)(a2 + 4),
             1);
  if ( (int)result >= 1 )
  {
    v5 = *(_DWORD *)(a2 + 4);
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 168LL))(a1, a2);
    if ( (int)result >= 1 )
    {
      v6 = result;
      while ( !(*(unsigned int (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 136LL))(a1, a2, 0xFFFFFFFFLL) )
        ;
      result = v6;
      if ( v5 != *(_DWORD *)(a2 + 4) )
      {
        if ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) != 3 )
          sub_100004BD4(
            a1,
            "unexpected event from thread %d arrived (expected thread %d)\n",
            v7,
            v8,
            v9,
            v10,
            v11,
            v12,
            *(_DWORD *)(a2 + 4));
        return 0xFFFFFFFFLL;
      }
    }
  }
  return result;
}
// 10005B454: variable 'v7' is possibly undefined
// 10005B454: variable 'v8' is possibly undefined
// 10005B454: variable 'v9' is possibly undefined
// 10005B454: variable 'v10' is possibly undefined
// 10005B454: variable 'v11' is possibly undefined
// 10005B454: variable 'v12' is possibly undefined
