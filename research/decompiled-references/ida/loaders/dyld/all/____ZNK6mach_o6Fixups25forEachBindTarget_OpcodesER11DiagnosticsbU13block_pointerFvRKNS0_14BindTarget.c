__int64 __fastcall ___ZNK6mach_o6Fixups25forEachBindTarget_OpcodesER11DiagnosticsbU13block_pointerFvRKNS0_14BindTargetInfoERbES8__block_invoke(
        __int64 result,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  __int64 v5; // x19

  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(result + 40) + 8LL) + 24LL) != *a4 )
  {
    v5 = result;
    result = (*(__int64 (**)(void))(*(_QWORD *)(result + 32) + 16LL))();
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v5 + 40) + 8LL) + 24LL) = *a4;
  }
  return result;
}
