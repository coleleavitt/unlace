__int64 __fastcall ___ZNK5dyld39MachOFile21forEachSingletonPatchER11DiagnosticsU13block_pointerFvNS0_18SingletonPatchKindEyE_block_invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4)
{
  __int64 result; // x0
  unsigned __int64 v8; // x8
  unsigned __int64 v9; // x9
  __int64 v10; // x21

  result = _platform_strcmp(*(const char **)(a2 + 80), "__const_cfobj2");
  if ( !(_DWORD)result )
  {
    *a4 = 1;
    v8 = *(_QWORD *)(a2 + 72);
    v9 = *(unsigned int *)(a1 + 56);
    if ( v8 % v9 )
    {
      return Diagnostics::error(
               *(Diagnostics **)(a1 + 40),
               "Incorrect patching size (%lld).  Should be a multiple of (2 * ptrSize)");
    }
    else if ( *(_DWORD *)(a2 + 104) == (_DWORD)v9 )
    {
      if ( v8 )
      {
        v10 = 0;
        do
        {
          result = (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 16LL))();
          v10 += *(unsigned int *)(a1 + 56);
        }
        while ( v10 != *(_QWORD *)(a2 + 72) );
      }
    }
    else
    {
      return Diagnostics::error(*(Diagnostics **)(a1 + 40), "reserved2 is unsupported value %d.  Expected %d");
    }
  }
  return result;
}
