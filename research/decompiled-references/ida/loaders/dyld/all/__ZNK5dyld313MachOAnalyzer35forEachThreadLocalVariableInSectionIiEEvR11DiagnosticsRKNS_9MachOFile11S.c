__int64 __fastcall dyld3::MachOAnalyzer::forEachThreadLocalVariableInSection<int>(
        dyld3::MachOFile *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // x0
  __int64 v8; // x8
  char *v9; // x20
  char *v10; // x21

  result = dyld3::MachOFile::preferredLoadAddress(a1);
  v8 = (unsigned int)(*(_QWORD *)(a3 + 72) / 0xCuLL);
  if ( (unsigned int)(*(_QWORD *)(a3 + 72) / 0xCuLL) )
  {
    v9 = (char *)a1 + *(_QWORD *)(a3 + 64) - result;
    v10 = &v9[12 * v8];
    do
    {
      result = (*(__int64 (__fastcall **)(__int64, char *, char *))(a4 + 16))(a4, v9, v9 + 4);
      v9 += 12;
    }
    while ( v9 < v10 );
  }
  return result;
}
