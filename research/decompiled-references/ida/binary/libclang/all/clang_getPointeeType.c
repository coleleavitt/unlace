__int64 __fastcall clang_getPointeeType(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  __int64 v10; // rsi
  __int64 v11; // rdi

  v10 = a8;
  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) > 0xF && (v11 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL)) != 0 )
  {
    while ( 2 )
    {
      switch ( *(_BYTE *)(v11 + 16) )
      {
        case 0xB:
        case 0x20:
        case 0x21:
        case 0x29:
          goto LABEL_10;
        case 0x10:
        case 0x11:
          if ( (*(_QWORD *)(v11 + 24) & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
          {
            v11 = *(_QWORD *)(*(_QWORD *)(v11 + 24) & 0xFFFFFFFFFFFFFFF0LL);
            if ( v11 )
              continue;
          }
          break;
        case 0x2A:
        case 0x2B:
          while ( (*(_BYTE *)(v11 + 18) & 0x10) != 0 )
          {
            v11 = *(_QWORD *)(*(_QWORD *)(v11 + 32) & 0xFFFFFFFFFFFFFFF0LL);
            if ( (unsigned int)*(unsigned __int8 *)(v11 + 16) - 42 > 1 )
              v11 = sub_B0D320(v11);
          }
LABEL_10:
          v10 = *(_QWORD *)(v11 + 32);
          break;
        default:
          v10 = 0;
          break;
      }
      break;
    }
    sub_690DD0(a1, v10, a9);
    return a1;
  }
  else
  {
    sub_690DD0(a1, 0, a9);
    return a1;
  }
}

