__int64 __fastcall ___ZNK5dyld414PrebuiltLoader15applyObjCFixupsERNS_12RuntimeStateE_block_invoke_6(
        __int64 result,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v4; // x19
  __int64 v5; // x8
  __int64 v6; // x21
  _DWORD *v7; // x21
  __int64 v8; // x22
  __int64 v9; // x8
  __int64 v10; // x21
  _DWORD *v11; // x21
  __int64 v12; // x22
  __int64 v13; // x8
  __int64 v14; // x21
  _DWORD *v15; // x21
  __int64 v16; // x22
  __int64 v17; // x8
  __int64 v18; // x20
  _DWORD *v19; // x19
  __int64 v20; // x20

  v4 = result;
  v5 = a3[3];
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
  v9 = a3[4];
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
  v13 = a3[5];
  if ( v13 )
  {
    v14 = v13 - **(_QWORD **)(v4 + 32);
    result = dyld3::MachOAnalyzer::objcMethodListIsRelative(**(dyld3::MachOAnalyzer ***)(v4 + 40), v14);
    if ( (result & 1) == 0 )
    {
      result = *(_QWORD *)(v4 + 56);
      v15 = (_DWORD *)(**(_QWORD **)(v4 + 48) + v14);
      v16 = (unsigned int)*v15 | 1LL;
      if ( *(_BYTE *)(*(_QWORD *)(result + 8) + 182LL) )
        result = dyld4::RuntimeState::log(
                   (dyld4::RuntimeState *)result,
                   "fixup: *0x%012lX = 0x%012lX <mark method list uniqued>\n",
                   v15,
                   v16);
      *v15 = v16;
    }
  }
  v17 = a3[6];
  if ( v17 )
  {
    v18 = v17 - **(_QWORD **)(v4 + 32);
    result = dyld3::MachOAnalyzer::objcMethodListIsRelative(**(dyld3::MachOAnalyzer ***)(v4 + 40), v18);
    if ( (result & 1) == 0 )
    {
      result = *(_QWORD *)(v4 + 56);
      v19 = (_DWORD *)(**(_QWORD **)(v4 + 48) + v18);
      v20 = (unsigned int)*v19 | 1LL;
      if ( *(_BYTE *)(*(_QWORD *)(result + 8) + 182LL) )
        result = dyld4::RuntimeState::log(
                   (dyld4::RuntimeState *)result,
                   "fixup: *0x%012lX = 0x%012lX <mark method list uniqued>\n",
                   v19,
                   v20);
      *v19 = v20;
    }
  }
  return result;
}
