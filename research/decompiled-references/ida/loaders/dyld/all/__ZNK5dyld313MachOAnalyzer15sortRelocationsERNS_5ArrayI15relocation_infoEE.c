__int64 __fastcall dyld3::MachOAnalyzer::sortRelocations(__int64 a1, _QWORD *a2)
{
  __int64 v2; // x8
  __int64 v3; // x10
  __int64 v4; // x11
  __int64 v5; // x12
  unsigned __int64 v6; // x14
  char v7; // w13
  unsigned __int64 v8; // x16
  unsigned __int64 v9; // x15
  __int64 *v10; // x16
  __int64 result; // x0
  __int64 v12; // x17

  v2 = a2[2];
  if ( v2 != 1 )
  {
    v3 = 0;
    v4 = v2 - 1;
    do
    {
      if ( v2 == ++v3 )
        break;
      v5 = 0;
      v6 = 0;
      v7 = 1;
      do
      {
        v8 = a2[2];
        if ( v8 <= v6 )
          dyld3::MachOAnalyzer::sortRelocations();
        v9 = v6 + 1;
        if ( v8 <= v6 + 1 )
          dyld3::MachOAnalyzer::sortRelocations();
        v10 = (__int64 *)(*a2 + v5);
        result = *((unsigned int *)v10 + 2);
        if ( *(_DWORD *)v10 > (int)result )
        {
          v12 = *v10;
          *v10 = v10[1];
          if ( a2[2] <= v9 )
            dyld3::MachOAnalyzer::sortRelocations();
          v7 = 0;
          *(_QWORD *)(*a2 + 8 * v6 + 8) = v12;
        }
        v5 += 8;
        ++v6;
      }
      while ( v4 != v9 );
      --v4;
    }
    while ( !(v7 & 1 | (v3 == v2 - 1)) );
  }
  return result;
}
