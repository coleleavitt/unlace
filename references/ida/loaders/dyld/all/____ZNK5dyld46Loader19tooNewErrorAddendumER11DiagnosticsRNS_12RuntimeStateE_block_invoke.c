__int64 __fastcall ___ZNK5dyld46Loader19tooNewErrorAddendumER11DiagnosticsRNS_12RuntimeStateE_block_invoke(
        __int64 result,
        int a2,
        int a3)
{
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL) = a2;
  *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 40) + 8LL) + 24LL) = a3;
  return result;
}
