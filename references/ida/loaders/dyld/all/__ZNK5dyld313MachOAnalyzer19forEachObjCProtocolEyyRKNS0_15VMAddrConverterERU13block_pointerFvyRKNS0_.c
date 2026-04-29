__int64 __fastcall dyld3::MachOAnalyzer::forEachObjCProtocol(
        dyld3::MachOFile *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v10; // w25
  __int64 result; // x0
  __int64 v12; // x21
  __int64 v13; // x8
  __int64 *v14; // x23
  __int64 v15; // x24
  __int64 v16; // t1
  __int64 *v17; // x25
  __int64 v18; // x8
  unsigned int *v19; // x23
  __int64 v20; // x24
  unsigned int v21; // t1
  unsigned int *v22; // x25
  __int64 v23; // [xsp+0h] [xbp-80h]
  __int64 v24; // [xsp+8h] [xbp-78h]
  __int64 v25; // [xsp+10h] [xbp-70h]
  __int64 v26; // [xsp+18h] [xbp-68h]
  __int64 v27; // [xsp+20h] [xbp-60h]
  __int64 v28; // [xsp+28h] [xbp-58h]
  __int64 v29; // [xsp+30h] [xbp-50h]
  char v30; // [xsp+3Fh] [xbp-41h]

  v10 = dyld3::MachOFile::pointerSize(a1);
  result = dyld3::MachOLoaded::getSlide(a1);
  v12 = result;
  if ( v10 == 8 )
  {
    v30 = 0;
    if ( a3 )
    {
      v13 = a3 - 1;
      v14 = (__int64 *)((char *)a1 + a2);
      do
      {
        v15 = v13;
        v16 = *v14++;
        v17 = (__int64 *)(dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a4, v16) + v12);
        v23 = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a4, *v17);
        v24 = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a4, v17[1]);
        v25 = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a4, v17[2]);
        v26 = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a4, v17[3]);
        v27 = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a4, v17[4]);
        v28 = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a4, v17[5]);
        v29 = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a4, v17[6]);
        result = (*(__int64 (**)(void))(*(_QWORD *)a5 + 16LL))();
        if ( v30 )
          break;
        v13 = v15 - 1;
      }
      while ( v15 );
    }
  }
  else
  {
    v30 = 0;
    if ( a3 )
    {
      v18 = a3 - 1;
      v19 = (unsigned int *)((char *)a1 + a2);
      do
      {
        v20 = v18;
        v21 = *v19++;
        v22 = (unsigned int *)(dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a4, v21) + v12);
        v23 = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a4, *v22);
        v24 = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a4, v22[1]);
        v25 = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a4, v22[2]);
        v26 = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a4, v22[3]);
        v27 = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a4, v22[4]);
        v28 = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a4, v22[5]);
        v29 = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a4, v22[6]);
        result = (*(__int64 (**)(void))(*(_QWORD *)a5 + 16LL))();
        if ( v30 )
          break;
        v18 = v20 - 1;
      }
      while ( v20 );
    }
  }
  return result;
}
