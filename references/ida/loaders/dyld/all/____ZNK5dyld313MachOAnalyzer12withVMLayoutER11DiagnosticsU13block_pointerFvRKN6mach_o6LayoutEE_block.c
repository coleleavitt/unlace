__int64 __fastcall ___ZNK5dyld313MachOAnalyzer12withVMLayoutER11DiagnosticsU13block_pointerFvRKN6mach_o6LayoutEE_block_invoke(
        _QWORD *a1,
        __int128 *a2)
{
  __int64 v4; // x22
  int v5; // w23
  const char *v6; // x21
  __int64 result; // x0
  int v8; // w8
  __int128 v9; // q0
  __int128 v10; // q1
  __int64 v11; // x9
  __int128 v12; // [xsp+0h] [xbp-50h]
  __int128 v13; // [xsp+10h] [xbp-40h]

  v12 = *a2;
  v13 = a2[1];
  v4 = a1[6] + v13;
  v5 = *((_DWORD *)a2 + 13);
  v6 = *((const char **)a2 + 5);
  result = _platform_strcmp(v6, "__TEXT");
  if ( (_DWORD)result )
  {
    result = _platform_strcmp(v6, "__LINKEDIT");
    if ( !(_DWORD)result )
    {
      v10 = v12;
      v9 = v13;
      *(_QWORD *)(*(_QWORD *)(a1[4] + 8LL) + 24LL) = v12;
      *(_QWORD *)(*(_QWORD *)(a1[5] + 8LL) + 24LL) = v4;
      v8 = 2;
      goto LABEL_7;
    }
    v8 = 0;
  }
  else
  {
    v8 = 1;
  }
  v10 = v12;
  v9 = v13;
LABEL_7:
  v11 = a1[7] + 48LL * ((unsigned __int16)*((_DWORD *)a2 + 14) >> 4);
  *(_OWORD *)v11 = v9;
  *(_OWORD *)(v11 + 16) = v10;
  *(_QWORD *)(v11 + 32) = v4;
  *(_DWORD *)(v11 + 40) = v5;
  *(_DWORD *)(v11 + 44) = v8;
  return result;
}
