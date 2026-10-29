__int64 __fastcall sub_1521110(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  __int64 v4; // rax
  unsigned int v6; // ecx

  if ( !a3 )
  {
    switch ( a2 )
    {
      case 15LL:
        if ( *(_QWORD *)a1 == 0x61657268745F7369LL
          && *(_DWORD *)(a1 + 8) == 1869373284
          && *(_WORD *)(a1 + 12) == 24931
          && *(_BYTE *)(a1 + 14) == 108 )
        {
          v6 = 20;
          return v6 | 0x100000000LL;
        }
        return a4;
      case 9LL:
        if ( *(_QWORD *)a1 != 0x61626F6C675F7369LL || *(_BYTE *)(a1 + 8) != 108 )
          return a4;
        v6 = 21;
        break;
      case 8LL:
        if ( *(_QWORD *)a1 != 0x6C61636F6C5F7369LL )
          return a4;
        v6 = 22;
        break;
      default:
        if ( a2 != 12 || *(_QWORD *)a1 != 0x6D617261705F7369LL || *(_DWORD *)(a1 + 8) != 1919251557 )
          return a4;
        v6 = 23;
        break;
    }
    return v6 | 0x100000000LL;
  }
  v4 = a2 == 12 && *(_QWORD *)a1 == 0x6D617261705F7369LL && *(_DWORD *)(a1 + 8) == 1919251557;
  return (v4 << 32) | 0x18;
}
