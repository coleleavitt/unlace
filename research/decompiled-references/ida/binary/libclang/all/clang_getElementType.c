__int64 __fastcall clang_getElementType(
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
  __int64 v9; // rsi
  __int64 v10; // rax

  v9 = 0;
  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) > 0xF )
  {
    v10 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL);
    if ( v10 )
    {
      switch ( *(_BYTE *)(v10 + 16) )
      {
        case 2:
        case 4:
        case 5:
        case 6:
        case 0xE:
        case 0x38:
        case 0x39:
          v9 = *(_QWORD *)(v10 + 32);
          break;
        default:
          break;
      }
    }
  }
  sub_690DD0(a1, v9, a9);
  return a1;
}

