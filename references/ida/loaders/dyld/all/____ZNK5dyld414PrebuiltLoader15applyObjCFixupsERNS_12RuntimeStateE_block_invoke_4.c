__int64 __fastcall ___ZNK5dyld414PrebuiltLoader15applyObjCFixupsERNS_12RuntimeStateE_block_invoke_4(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 result; // x0
  __int64 v7; // x20
  _DWORD *v8; // x19
  __int64 v9; // x20

  result = dyld3::MachOAnalyzer::ObjCClassInfo::getReadOnlyDataField(a5, 2, *(unsigned int *)(a1 + 64));
  if ( result )
  {
    v7 = result - **(_QWORD **)(a1 + 32);
    result = dyld3::MachOAnalyzer::objcMethodListIsRelative(**(dyld3::MachOAnalyzer ***)(a1 + 40), v7);
    if ( (result & 1) == 0 )
    {
      result = *(_QWORD *)(a1 + 56);
      v8 = (_DWORD *)(**(_QWORD **)(a1 + 48) + v7);
      v9 = (unsigned int)*v8 | 1LL;
      if ( *(_BYTE *)(*(_QWORD *)(result + 8) + 182LL) )
        result = dyld4::RuntimeState::log(
                   (dyld4::RuntimeState *)result,
                   "fixup: *0x%012lX = 0x%012lX <mark method list uniqued>\n",
                   v8,
                   v9);
      *v8 = v9;
    }
  }
  return result;
}
