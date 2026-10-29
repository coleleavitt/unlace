__int64 __fastcall ___ZNK5dyld313MachOAnalyzer13forEachRebaseER11DiagnosticsU13block_pointerFvybRbE_block_invoke(
        __int64 result,
        __int64 a2)
{
  __int64 v3; // x19
  __int64 v4; // x8
  __int64 v5; // x9

  v3 = result;
  if ( (unsigned __int8)*(_DWORD *)(a2 + 92) == 7 )
  {
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL) = *(_QWORD *)(a2 + 64);
    v4 = *(_QWORD *)(a2 + 72) + *(_QWORD *)(a2 + 64);
    v5 = *(_QWORD *)(result + 40);
LABEL_3:
    *(_QWORD *)(*(_QWORD *)(v5 + 8) + 24LL) = v4;
    return result;
  }
  if ( (*(_DWORD *)(a2 + 92) & 0x80000000) != 0 )
  {
    result = _platform_strcmp(*(const char **)(a2 + 80), "__stub_helper");
    if ( !(_DWORD)result )
    {
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v3 + 48) + 8LL) + 24LL) = *(_QWORD *)(a2 + 64);
      v4 = *(_QWORD *)(a2 + 72) + *(_QWORD *)(a2 + 64);
      v5 = *(_QWORD *)(v3 + 56);
      goto LABEL_3;
    }
  }
  return result;
}
