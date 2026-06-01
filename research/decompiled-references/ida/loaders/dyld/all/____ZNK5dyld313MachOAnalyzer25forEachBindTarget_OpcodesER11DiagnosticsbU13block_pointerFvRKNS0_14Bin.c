__int64 __fastcall ___ZNK5dyld313MachOAnalyzer25forEachBindTarget_OpcodesER11DiagnosticsbU13block_pointerFvRKNS0_14BindTargetInfoERbES8__block_invoke(
        __int64 result,
        __int64 a2,
        _DWORD *a3)
{
  __int64 v4; // x19

  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 40) + 8LL) + 24LL) != *a3 )
  {
    v4 = result;
    result = (*(__int64 (**)(void))(*(_QWORD *)(result + 32) + 16LL))();
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 40) + 8LL) + 24LL) = *a3;
  }
  return result;
}
