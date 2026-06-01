__int64 __fastcall ___ZNK5dyld414PrebuiltLoader15applyObjCFixupsERNS_12RuntimeStateE_block_invoke_5(
        __int64 result,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // x19
  __int64 v5; // x8
  __int64 v6; // x21
  _DWORD *v7; // x21
  __int64 v8; // x22
  __int64 v9; // x8
  __int64 v10; // x20
  _DWORD *v11; // x19
  __int64 v12; // x20

  v4 = result;
  v5 = *(_QWORD *)(a3 + 16);
  if ( v5 )
  {
    v6 = v5 - **(_QWORD **)(result + 32);
    result = dyld3::MachOAnalyzer::objcMethodListIsRelative(**(dyld3::MachOAnalyzer ***)(result + 40), v6);
    if ( (result & 1) == 0 )
    {
      result = *(_QWORD *)(v4 + 56);
      v7 = (_DWORD *)(**(_QWORD **)(v4 + 48) + v6);
      v8 = (unsigned int)*v7 | 1LL;
      if ( *(_BYTE *)(*(_QWORD *)(result + 8) + 182LL) )
        result = dyld4::RuntimeState::log(
                   (dyld4::RuntimeState *)result,
                   "fixup: *0x%012lX = 0x%012lX <mark method list uniqued>\n",
                   v7,
                   v8);
      *v7 = v8;
    }
  }
  v9 = *(_QWORD *)(a3 + 24);
  if ( v9 )
  {
    v10 = v9 - **(_QWORD **)(v4 + 32);
    result = dyld3::MachOAnalyzer::objcMethodListIsRelative(**(dyld3::MachOAnalyzer ***)(v4 + 40), v10);
    if ( (result & 1) == 0 )
    {
      result = *(_QWORD *)(v4 + 56);
      v11 = (_DWORD *)(**(_QWORD **)(v4 + 48) + v10);
      v12 = (unsigned int)*v11 | 1LL;
      if ( *(_BYTE *)(*(_QWORD *)(result + 8) + 182LL) )
        result = dyld4::RuntimeState::log(
                   (dyld4::RuntimeState *)result,
                   "fixup: *0x%012lX = 0x%012lX <mark method list uniqued>\n",
                   v11,
                   v12);
      *v11 = v12;
    }
  }
  return result;
}
