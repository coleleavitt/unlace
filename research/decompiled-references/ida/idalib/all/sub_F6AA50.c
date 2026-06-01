__int64 __fastcall sub_F6AA50(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int8 v6; // al
  __int64 *v8; // rax
  __int64 v9; // rax

  while ( 2 )
  {
    v6 = *(_BYTE *)(a1 + 16);
    if ( v6 == 53 )
      return a1;
LABEL_3:
    switch ( v6 )
    {
      case 0u:
      case 1u:
      case 0x18u:
        goto LABEL_7;
      case 2u:
      case 3u:
      case 4u:
      case 5u:
      case 6u:
      case 7u:
      case 0xAu:
      case 0xBu:
      case 0xDu:
      case 0xEu:
      case 0x12u:
      case 0x13u:
      case 0x14u:
      case 0x15u:
      case 0x16u:
      case 0x17u:
      case 0x19u:
      case 0x1Au:
      case 0x1Bu:
      case 0x1Cu:
      case 0x1Du:
      case 0x1Fu:
      case 0x20u:
      case 0x22u:
      case 0x23u:
      case 0x24u:
      case 0x26u:
      case 0x29u:
      case 0x2Au:
      case 0x2Bu:
      case 0x2Cu:
      case 0x2Du:
      case 0x2Fu:
      case 0x30u:
      case 0x32u:
      case 0x37u:
      case 0x39u:
      case 0x3Au:
        return 0;
      case 8u:
        a1 = *(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 9u:
      case 0xCu:
      case 0x28u:
        a1 = *(_QWORD *)(*(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 0xFu:
        if ( (BYTE1(**(_DWORD **)(a1 + 24)) & 0x80u) != 0 )
          return 0;
        a1 = *(_QWORD *)(sub_F56680(a1) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 0x10u:
      case 0x11u:
        v8 = (__int64 *)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL);
        if ( !v8 )
          return 0;
        goto LABEL_9;
      case 0x1Eu:
        a1 = *(_QWORD *)(*(_QWORD *)(a1 + 24) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 0x21u:
        if ( !sub_F62DD0(a1) )
          return 0;
        a1 = *(_QWORD *)(sub_F62E50(a1) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 0x25u:
        a1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 0x27u:
        if ( (*(_BYTE *)(a1 + 17) & 2) != 0 || !(unsigned int)sub_F56710(a1) )
          return 0;
        a1 = *(_QWORD *)(sub_F56930(a1) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 0x2Eu:
        if ( (*(_BYTE *)(a1 + 18) & 8) != 0 )
          v9 = *(_QWORD *)(a1 + 48);
        else
          v9 = *(_QWORD *)(a1 + 8);
        goto LABEL_8;
      case 0x31u:
        if ( (*(_BYTE *)(a1 + 17) & 4) != 0 && !sub_F56690(a1) )
          return 0;
        a1 = *(_QWORD *)(sub_F56980(a1) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 0x33u:
        if ( (**(_DWORD **)(a1 + 24) & 0x10000) != 0 )
          return 0;
        a1 = *(_QWORD *)(sub_F64EA0(a1, a2, a3, v6, a5) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 0x34u:
        a1 = *(_QWORD *)(sub_F64D80(a1, a2, a3, v6, a5) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      case 0x36u:
        if ( (*(_BYTE *)(a1 + 17) & 4) == 0 )
        {
LABEL_7:
          v9 = *(_QWORD *)(a1 + 40);
LABEL_8:
          v8 = (__int64 *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
LABEL_9:
          a1 = *v8;
          continue;
        }
        return 0;
      case 0x38u:
        a1 = *(_QWORD *)(sub_F5DBF0(a1) & 0xFFFFFFFFFFFFFFF0LL);
        continue;
      default:
        goto LABEL_3;
    }
  }
}
