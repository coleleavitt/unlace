__int64 __fastcall ___ZNK5dyld37FatFile18isFatFileWithSliceER11DiagnosticsyRKNS_11GradedArchsEbRyS6_Rb_block_invoke(
        __int64 result,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // x9
  __int64 v6; // x10
  int v7; // w13
  int v8; // w9
  _QWORD *v9; // x11

  v5 = 0;
  v6 = *(_QWORD *)(result + 48);
  do
  {
    v7 = *(_DWORD *)(v6 + v5);
    if ( !v7 )
      break;
    if ( v7 == a2
      && *(_DWORD *)(v6 + v5 + 4) == (a3 & 0xFFFFFF)
      && (*(_BYTE *)(result + 72) || !*(_BYTE *)(v6 + v5 + 8)) )
    {
      v8 = *(unsigned __int16 *)(v6 + v5 + 10);
      if ( v8 )
      {
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL) < v8 )
        {
          v9 = *(_QWORD **)(result + 64);
          **(_QWORD **)(result + 56) = a4 - *(_QWORD *)(result + 40);
          *v9 = a5;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL) = v8;
        }
      }
      return result;
    }
    v5 += 12;
  }
  while ( v5 != 48 );
  return result;
}
