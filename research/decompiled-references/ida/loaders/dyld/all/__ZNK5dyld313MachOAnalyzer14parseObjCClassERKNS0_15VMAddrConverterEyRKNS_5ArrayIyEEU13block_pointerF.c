__int64 __fastcall dyld3::MachOAnalyzer::parseObjCClass(
        dyld3::MachOFile *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  int v9; // w21
  __int64 Slide; // x0
  __int64 v11; // x20
  __int64 v12; // x21
  __int64 v13; // x23
  __int64 v14; // x1
  __int64 v15; // x0
  unsigned int *v16; // x23
  __int64 v17; // x1
  __int64 v18; // x0
  __int64 v19; // x8
  unsigned int v20; // w8
  unsigned int v21; // w8
  _BYTE v23[38]; // [xsp+0h] [xbp-70h] BYREF
  _BYTE v24[19]; // [xsp+28h] [xbp-48h]

  v9 = dyld3::MachOFile::pointerSize(a1);
  Slide = dyld3::MachOLoaded::getSlide(a1);
  memset(v23, 0, sizeof(v23));
  if ( v9 != 8 )
  {
    v11 = a3 + 4;
    v12 = a3 + 16;
    v16 = (unsigned int *)(Slide + a3);
    *(_QWORD *)v23 = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a2, *v16);
    *(_QWORD *)&v23[8] = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a2, v16[1]);
    v17 = v16[3];
    if ( (_DWORD)v17 )
      v18 = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a2, v17);
    else
      v18 = 0;
    *(_QWORD *)&v23[16] = v18;
    *(_QWORD *)&v23[24] = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a2, v16[4]) & 0xFFFFFFFCLL;
    *(_OWORD *)v24 = *(_OWORD *)a2;
    *(_DWORD *)&v24[15] = *(_DWORD *)(a2 + 15);
    v21 = v16[4];
    v23[36] = v21 & 1;
    v23[37] = (v21 & 2) != 0;
    if ( (v21 & 3) != 0 )
    {
      v20 = v16[5];
      goto LABEL_13;
    }
LABEL_12:
    v20 = 0;
    goto LABEL_13;
  }
  v11 = a3 + 8;
  v12 = a3 + 32;
  v13 = Slide + a3;
  *(_QWORD *)v23 = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a2, *(_QWORD *)v13);
  *(_QWORD *)&v23[8] = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a2, *(_QWORD *)(v13 + 8));
  v14 = *(_QWORD *)(v13 + 24);
  if ( v14 )
    v15 = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a2, v14);
  else
    v15 = 0;
  *(_QWORD *)&v23[16] = v15;
  *(_QWORD *)&v23[24] = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(a2, *(_QWORD *)(v13 + 32))
                      & 0x7FFFFFFFFFF8LL;
  *(_OWORD *)v24 = *(_OWORD *)a2;
  *(_DWORD *)&v24[15] = *(_DWORD *)(a2 + 15);
  v19 = *(_QWORD *)(v13 + 32);
  v23[36] = v19 & 1;
  v23[37] = (v19 & 2) != 0;
  if ( (v19 & 3) == 0 )
    goto LABEL_12;
  v20 = *(_DWORD *)(v13 + 40);
LABEL_13:
  *(_DWORD *)&v23[32] = v20;
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(a5 + 16))(a5, v11, v12, v23);
}
