_QWORD *__fastcall ___ZNK5dyld313MachOAnalyzer26forEachThreadLocalVariableER11DiagnosticsU13block_pointerFvPPFPvPNS0_9TLV_ThunkEEPmE_block_invoke(
        _QWORD *result,
        __int64 a2)
{
  _QWORD *v3; // x20
  int v4; // w8
  __int64 v5; // x8
  __int64 v6; // x10
  __int64 v7; // x9
  dyld3::MachOFile *v8; // x21
  _BOOL4 v9; // w0
  __int64 v10; // x1
  __int64 v11; // x3
  __int64 _28; // [xsp+28h] [xbp+8h]

  v3 = result;
  v4 = *(unsigned __int8 *)(a2 + 92);
  if ( (unsigned int)(v4 - 17) >= 2 )
  {
    if ( v4 == 19 )
    {
      v8 = (dyld3::MachOFile *)result[6];
      v9 = dyld3::MachOFile::is64(v8);
      v10 = v3[7];
      v11 = v3[4];
      if ( v9 )
      {
        if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        return (_QWORD *)dyld3::MachOAnalyzer::forEachThreadLocalVariableInSection<long long>(v8, v10, a2, v11);
      }
      else
      {
        if ( ((_28 ^ (2 * _28)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        return (_QWORD *)dyld3::MachOAnalyzer::forEachThreadLocalVariableInSection<int>(v8, v10, a2, v11);
      }
    }
  }
  else
  {
    v5 = *(_QWORD *)(result[5] + 8LL);
    v6 = *(_QWORD *)(v5 + 40);
    v7 = *(_QWORD *)(a2 + 64);
    if ( v6 )
    {
      *(_QWORD *)(v5 + 48) = v7 + *(_QWORD *)(a2 + 72) - (v6 + result[8]);
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v7 - result[8];
      *(_QWORD *)(*(_QWORD *)(result[5] + 8LL) + 48LL) = *(_QWORD *)(a2 + 72);
    }
  }
  return result;
}
