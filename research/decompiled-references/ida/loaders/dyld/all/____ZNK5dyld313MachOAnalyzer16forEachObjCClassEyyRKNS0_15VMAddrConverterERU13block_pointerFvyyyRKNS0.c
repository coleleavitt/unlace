__int64 __fastcall ___ZNK5dyld313MachOAnalyzer16forEachObjCClassEyyRKNS0_15VMAddrConverterERU13block_pointerFvyyyRKNS0_13ObjCClassInfoEbRbE_block_invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  dyld3::MachOFile *v6; // x19
  __int64 result; // x0
  __int64 v8; // x3
  __int64 v9; // x8
  __int64 v10; // x2
  __int64 v11; // x1
  _QWORD v12[7]; // [xsp+8h] [xbp-58h] BYREF

  v6 = *(dyld3::MachOFile **)(a1 + 40);
  result = (*(__int64 (**)(void))(**(_QWORD **)(a1 + 48) + 16LL))();
  v9 = *(_QWORD *)(a1 + 32);
  if ( !*(_BYTE *)(*(_QWORD *)(v9 + 8) + 24LL) )
  {
    v10 = *a4;
    v11 = *(_QWORD *)(a1 + 64);
    v12[0] = _NSConcreteStackBlock;
    v12[1] = 0x40000000;
    v12[2] = ___ZNK5dyld313MachOAnalyzer16forEachObjCClassEyyRKNS0_15VMAddrConverterERU13block_pointerFvyyyRKNS0_13ObjCClassInfoEbRbE_block_invoke_2;
    v12[3] = &unk_98028;
    v12[5] = *(_QWORD *)(a1 + 48);
    v12[6] = v10;
    v12[4] = v9;
    return dyld3::MachOAnalyzer::parseObjCClass(v6, v11, v10, v8, (__int64)v12);
  }
  return result;
}
