__int64 __fastcall sub_A89F80(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // r8
  __int64 result; // rax

  v4 = a1;
  if ( *(_BYTE *)(a2 + 16) == 10 )
    return (4 * *(_DWORD *)(a2 + 32)) & 0x7FFFFF8;
  while ( 2 )
  {
    switch ( ((*(_WORD *)(a2 + 18) >> 3) + 76) & 0x1FF )
    {
      case 0:
        return 8 * (unsigned int)sub_A884B0((__int64)v4, v4[2330], a3, a4, (__int64)v4) + 1;
      case 1:
      case 2:
      case 0xC:
      case 0xD:
        return 8 * (unsigned int)sub_A884B0((__int64)v4, v4[2331], a3, a4, (__int64)v4) + 2;
      case 3:
      case 0xE:
        a2 = *(_QWORD *)(sub_A3FE00(v4, *(_DWORD *)(v4[2181] + 152LL)) & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_10;
      case 4:
        a2 = *(_QWORD *)(v4[2344] & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_10;
      case 5:
        a2 = *(_QWORD *)(sub_A3FE00(v4, *(_DWORD *)(v4[2181] + 160LL)) & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_10;
      case 6:
        a2 = *(_QWORD *)(sub_A3FE00(v4, *(_DWORD *)(v4[2181] + 164LL)) & 0xFFFFFFFFFFFFFFF0LL);
LABEL_10:
        if ( *(_BYTE *)(a2 + 16) != 10 )
          continue;
        result = (4 * *(_DWORD *)(a2 + 32)) & 0x7FFFFF8;
        break;
      case 7:
      case 0xF:
        return 8 * (unsigned int)sub_A884B0((__int64)v4, v4[2339], a3, a4, (__int64)v4) + 3;
      case 8:
      case 0x10:
        return 8 * (unsigned int)sub_A884B0((__int64)v4, v4[2340], a3, a4, (__int64)v4) + 4;
      case 9:
      case 0x11:
        return 8 * (unsigned int)sub_A884B0((__int64)v4, v4[2341], a3, a4, (__int64)v4) + 5;
      case 0xA:
      case 0x12:
        return 8 * (unsigned int)sub_A884B0((__int64)v4, v4[2342], a3, a4, (__int64)v4) + 6;
      case 0xB:
      case 0x13:
        return 8 * (unsigned int)sub_A884B0((__int64)v4, v4[2343], a3, a4, (__int64)v4) + 7;
    }
    return result;
  }
}

