__int64 __fastcall ___ZN5dyld46Loader12validateFileER11DiagnosticsRKNS_12RuntimeStateEiPKcRKNS0_19CodeSignatureInFileERKNS0_18FileValidationInfoE_block_invoke(
        __int64 result,
        __int64 a2)
{
  if ( !(*(_QWORD *)a2 ^ *(_QWORD *)(*(_QWORD *)(result + 40) + 24LL)
       | *(_QWORD *)(a2 + 8) ^ *(_QWORD *)(*(_QWORD *)(result + 40) + 32LL)
       | (unsigned int)(*(_DWORD *)(a2 + 16) ^ *(_DWORD *)(*(_QWORD *)(result + 40) + 40LL))) )
    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(result + 32) + 8LL) + 24LL) = 1;
  return result;
}
