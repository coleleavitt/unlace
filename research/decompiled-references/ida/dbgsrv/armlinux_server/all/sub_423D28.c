/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_423D28
// Address: 0x0000000000423D28

//----- (0000000000423D28) ----------------------------------------------------
unsigned __int64 __fastcall sub_423D28(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // x0
  unsigned __int64 v6; // x5
  unsigned __int64 v7; // x2
  __int64 v8; // x0
  __int64 v9; // x3
  unsigned int v10; // w3
  unsigned __int64 v11; // x0
  unsigned __int64 v12; // x2

  if ( !*(_BYTE *)(a1 + 72) )
    sub_4068E0();
  if ( *(_DWORD *)a2 != 1 && *(_DWORD *)a2 != 6 && (unsigned int)(*(_DWORD *)a2 - 3) > 1 )
    return 0;
  result = 0;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 64) + 488LL) - *(_QWORD *)(*(_QWORD *)(a1 + 64) + 480LL);
  if ( v6 < v7 )
  {
    v8 = *(_QWORD *)(a1 + 32);
    v9 = 0x6DB6DB6DB6DB6DB7LL * ((a2 - v8) >> 3);
    if ( (v9 & 0x80000000) == 0 )
    {
      v10 = v9 + 1;
      if ( *(_QWORD *)(a1 + 40) > (unsigned __int64)(int)v10 )
      {
        v11 = *(_QWORD *)(v8 + 56LL * v10 + 8);
        if ( v6 <= v11 )
          v7 = v11;
      }
    }
    result = *(_QWORD *)(a2 + 32);
    v12 = v7 - v6;
    if ( v12 <= result )
      return v12;
  }
  return result;
}
