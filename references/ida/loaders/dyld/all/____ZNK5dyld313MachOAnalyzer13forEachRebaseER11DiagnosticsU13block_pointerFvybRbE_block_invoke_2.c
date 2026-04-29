__int64 __fastcall ___ZNK5dyld313MachOAnalyzer13forEachRebaseER11DiagnosticsU13block_pointerFvybRbE_block_invoke_2(
        __int64 result,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        unsigned int a7,
        __int64 a8,
        unsigned int a9)
{
  _QWORD *v14; // x19
  dyld3::MachOAnalyzer *v15; // x21
  bool v16; // zf
  __int64 v17; // x27
  const char **v18; // x28
  unsigned __int64 v19; // x23
  __int64 v20; // x8
  __int64 v21; // x9
  unsigned __int64 v22; // x9
  __int64 (*v23)(void); // x5
  __int64 _58; // [xsp+58h] [xbp+8h]

  if ( a9 > 4 || ((1 << a9) & 0x19) == 0 )
  {
    v14 = (_QWORD *)result;
    v15 = *(dyld3::MachOAnalyzer **)(result + 88);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(result + 40) + 8LL) + 24LL) )
      v16 = 1;
    else
      v16 = a7 == 0;
    if ( !v16 )
    {
      v17 = a7;
      v18 = (const char **)(a4 + 40);
      while ( _platform_strcmp(*v18, "__TEXT") )
      {
        v18 += 8;
        if ( !--v17 )
          goto LABEL_15;
      }
      *(_QWORD *)(*(_QWORD *)(v14[6] + 8LL) + 24LL) = *(v18 - 3);
      *(_BYTE *)(*(_QWORD *)(v14[5] + 8LL) + 24LL) = 1;
    }
LABEL_15:
    v19 = *(_QWORD *)(a4 + ((unsigned __int64)a7 << 6) + 16) + a8;
    if ( v19 >= *(_QWORD *)(*(_QWORD *)(v14[7] + 8LL) + 24LL) && v19 < *(_QWORD *)(*(_QWORD *)(v14[8] + 8LL) + 24LL) )
    {
      v20 = *(_QWORD *)(*(_QWORD *)(v14[6] + 8LL) + 24LL);
      v21 = v19 - v20;
      v22 = a6 == 8 ? *(_QWORD *)((char *)v15 + v21) : *(unsigned int *)((char *)v15 + v21);
      if ( v22 >= *(_QWORD *)(*(_QWORD *)(v14[9] + 8LL) + 24LL) && v22 < *(_QWORD *)(*(_QWORD *)(v14[10] + 8LL) + 24LL) )
        dyld3::MachOAnalyzer::contentIsRegularStub(v15, (const unsigned __int8 *)v15 + v22 - v20);
    }
    v23 = *(__int64 (**)(void))(v14[4] + 16LL);
    if ( ((_58 ^ (2 * _58)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return v23();
  }
  return result;
}
