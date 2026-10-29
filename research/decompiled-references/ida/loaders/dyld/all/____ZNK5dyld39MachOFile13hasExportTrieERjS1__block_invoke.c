__int64 __fastcall ___ZNK5dyld39MachOFile13hasExportTrieERjS1__block_invoke(_QWORD *a1, _QWORD *a2, _BYTE *a3)
{
  const char *v6; // x22
  __int64 result; // x0

  v6 = (const char *)a2[5];
  result = _platform_strcmp(v6, "__TEXT");
  if ( (_DWORD)result )
  {
    result = _platform_strcmp(v6, "__LINKEDIT");
    if ( !(_DWORD)result )
    {
      *(_QWORD *)(*(_QWORD *)(a1[5] + 8LL) + 24LL) = a2[2];
      *(_QWORD *)(*(_QWORD *)(a1[6] + 8LL) + 24LL) = *a2;
      *a3 = 1;
    }
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(a1[4] + 8LL) + 24LL) = a2[2];
  }
  return result;
}
