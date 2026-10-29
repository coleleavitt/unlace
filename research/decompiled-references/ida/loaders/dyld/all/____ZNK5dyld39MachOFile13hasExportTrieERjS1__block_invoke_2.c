__int64 __fastcall ___ZNK5dyld39MachOFile13hasExportTrieERjS1__block_invoke_2(__int64 result, int *a2)
{
  int v2; // w9
  __int64 v3; // x8
  int *v4; // x8
  _DWORD *v5; // x11

  v2 = *a2;
  v3 = 5;
  if ( *a2 != -2147483614 && v2 != 34 )
  {
    if ( v2 != -2147483597 )
      return result;
    v3 = 1;
  }
  v4 = &a2[2 * v3];
  v5 = *(_DWORD **)(result + 40);
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL) = *v4;
  *v5 = v4[1];
  return result;
}
