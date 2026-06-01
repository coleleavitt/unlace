unsigned __int64 __fastcall sub_F6AEA0(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  bool v12; // al
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-20h]
  __int64 v18; // [rsp+8h] [rbp-20h]
  __int64 v19; // [rsp+8h] [rbp-20h]
  __int64 v20; // [rsp+8h] [rbp-20h]
  __int64 v21; // [rsp+8h] [rbp-20h]
  __int64 v22; // [rsp+8h] [rbp-20h]
  __int64 v23; // [rsp+8h] [rbp-20h]
  __int64 v24; // [rsp+8h] [rbp-20h]
  __int64 v25; // [rsp+8h] [rbp-20h]

  v5 = 0;
  while ( 2 )
  {
    v6 = a1 & 0xFFFFFFFFFFFFFFF0LL;
    v5 |= a1 & 7;
    if ( (a1 & 8) != 0 )
    {
      v5 |= *(__int64 *)((char *)&qword_18 + (a1 & 0xFFFFFFFFFFFFFFF0LL));
      v6 = *(_QWORD *)v6;
    }
    switch ( *(_BYTE *)(v6 + 16) )
    {
      case 0:
      case 1:
      case 0x18:
        goto LABEL_8;
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 0xA:
      case 0xB:
      case 0xD:
      case 0xE:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x19:
      case 0x1A:
      case 0x1B:
      case 0x1C:
      case 0x1D:
      case 0x1F:
      case 0x20:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x26:
      case 0x29:
      case 0x2A:
      case 0x2B:
      case 0x2C:
      case 0x2D:
      case 0x2F:
      case 0x30:
      case 0x32:
      case 0x37:
      case 0x39:
      case 0x3A:
        return v6;
      case 8:
        goto LABEL_11;
      case 9:
      case 0xC:
      case 0x28:
        a1 = *(_QWORD *)(v6 + 32);
        continue;
      case 0xF:
        if ( (BYTE1(**(_DWORD **)(v6 + 24)) & 0x80u) != 0 )
          return v6;
        v20 = v5;
        v11 = sub_F56680(v6);
        v5 = v20;
        a1 = v11;
        continue;
      case 0x10:
      case 0x11:
        a1 = *(_QWORD *)(v6 + 24);
        if ( (a1 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
          continue;
        return v6;
      case 0x1E:
        a1 = *(_QWORD *)(v6 + 24);
        continue;
      case 0x21:
        v25 = v5;
        if ( !sub_F62DD0(v6) )
          return v6;
        v16 = sub_F62E50(v6);
        v5 = v25;
        a1 = v16;
        continue;
      case 0x25:
        goto LABEL_12;
      case 0x27:
        if ( (*(_BYTE *)(v6 + 17) & 2) != 0 )
          return v6;
        v18 = v5;
        if ( !(unsigned int)sub_F56710(v6) )
          return v6;
        v9 = sub_F56930(v6);
        v5 = v18;
        a1 = v9;
        continue;
      case 0x2E:
        if ( (*(_BYTE *)(v6 + 18) & 8) != 0 )
LABEL_11:
          a1 = *(_QWORD *)(v6 + 48);
        else
LABEL_12:
          a1 = *(_QWORD *)(v6 + 8);
        continue;
      case 0x31:
        if ( (*(_BYTE *)(v6 + 17) & 4) != 0 )
        {
          v21 = v5;
          v12 = sub_F56690(v6);
          v5 = v21;
          if ( !v12 )
            return v6;
        }
        v22 = v5;
        v13 = sub_F56980(v6);
        v5 = v22;
        a1 = v13;
        continue;
      case 0x33:
        if ( (**(_DWORD **)(v6 + 24) & 0x10000) != 0 )
          return v6;
        v23 = v5;
        v14 = sub_F64EA0(v6, a2, v5, a4, a5);
        v5 = v23;
        a1 = v14;
        continue;
      case 0x34:
        v24 = v5;
        v15 = sub_F64D80(v6, a2, v5, a4, a5);
        v5 = v24;
        a1 = v15;
        continue;
      case 0x35:
        v19 = v5;
        v10 = sub_F5DAC0(v6);
        v5 = v19;
        a1 = v10;
        continue;
      case 0x36:
        if ( (*(_BYTE *)(v6 + 17) & 4) == 0 )
        {
LABEL_8:
          a1 = *(_QWORD *)(v6 + 40);
          continue;
        }
        return v6;
      case 0x38:
        v17 = v5;
        v8 = sub_F5DBF0(v6);
        v5 = v17;
        a1 = v8;
        continue;
      default:
        continue;
    }
  }
}
