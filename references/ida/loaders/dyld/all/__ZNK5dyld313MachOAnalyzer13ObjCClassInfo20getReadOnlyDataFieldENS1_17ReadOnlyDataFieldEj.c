__int64 __fastcall dyld3::MachOAnalyzer::ObjCClassInfo::getReadOnlyDataField(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // x9
  __int64 result; // x0
  unsigned int *v6; // x8
  __int64 v7; // x1

  v4 = *(_QWORD *)(a1 + 24);
  result = a1 + 40;
  v6 = (unsigned int *)(*(_QWORD *)(a1 + 48) + v4);
  if ( a3 == 8 )
  {
    if ( a2 <= 4 )
    {
      switch ( a2 )
      {
        case 0u:
          v7 = *((_QWORD *)v6 + 3);
          goto LABEL_5;
        case 1u:
          v7 = *((_QWORD *)v6 + 5);
          goto LABEL_5;
        case 2u:
          v7 = *((_QWORD *)v6 + 4);
          goto LABEL_5;
        case 3u:
          v7 = *((_QWORD *)v6 + 8);
          goto LABEL_5;
        case 4u:
          goto LABEL_9;
      }
    }
  }
  else if ( a2 <= 4 )
  {
    switch ( a2 )
    {
      case 0u:
        v7 = v6[4];
        goto LABEL_5;
      case 1u:
        v7 = v6[6];
        goto LABEL_5;
      case 2u:
        v7 = v6[5];
        goto LABEL_5;
      case 3u:
        v7 = v6[9];
LABEL_5:
        result = dyld3::MachOAnalyzer::VMAddrConverter::convertToVMAddr(result, v7);
        break;
      case 4u:
LABEL_9:
        result = *v6;
        break;
    }
  }
  return result;
}
