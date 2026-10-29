unsigned __int64 __fastcall sub_F64F00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r12
  __int64 v9; // rax
  char v10; // cl
  __int64 v11; // rbx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  char v14; // cl
  unsigned __int64 v15; // rax
  char v16; // cl
  unsigned __int64 v17; // rbx
  bool v18; // al
  __int64 v19; // [rsp+8h] [rbp-20h]
  __int64 v20; // [rsp+8h] [rbp-20h]

  v5 = a1 & 7;
  v6 = a1 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (a1 & 8) != 0 )
  {
    v5 |= *(__int64 *)((char *)&qword_18 + (a1 & 0xFFFFFFFFFFFFFFF0LL));
    v6 = *(_QWORD *)v6;
  }
  v7 = v6;
  while ( 2 )
  {
    switch ( *(_BYTE *)(v6 + 16) )
    {
      case 0:
      case 1:
      case 0x18:
        goto LABEL_7;
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
        return v7;
      case 8:
        goto LABEL_17;
      case 9:
      case 0xC:
      case 0x28:
        v9 = *(_QWORD *)(v6 + 32);
        goto LABEL_8;
      case 0xF:
        if ( (BYTE1(**(_DWORD **)(v6 + 24)) & 0x80u) != 0 )
          return v7;
        v19 = v5;
        v15 = sub_F56680(v6);
        goto LABEL_21;
      case 0x10:
      case 0x11:
        v13 = *(_QWORD *)(v6 + 24);
        v6 = v13 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (v13 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          return v7;
        v14 = v13;
        v12 = v13 & 8;
        a4 = v14 & 7;
        goto LABEL_9;
      case 0x1E:
        v9 = *(_QWORD *)(v6 + 24);
        goto LABEL_8;
      case 0x21:
        v19 = v5;
        if ( !sub_F62DD0(v6) )
          return v7;
        v15 = sub_F62E50(v6);
        goto LABEL_21;
      case 0x25:
        goto LABEL_18;
      case 0x27:
        if ( (*(_BYTE *)(v6 + 17) & 2) != 0 )
          return v7;
        v19 = v5;
        if ( !(unsigned int)sub_F56710(v6) )
          return v7;
        v15 = sub_F56930(v6);
        goto LABEL_21;
      case 0x2E:
        if ( (*(_BYTE *)(v6 + 18) & 8) != 0 )
LABEL_17:
          v9 = *(_QWORD *)(v6 + 48);
        else
LABEL_18:
          v9 = *(_QWORD *)(v6 + 8);
        goto LABEL_8;
      case 0x31:
        if ( (*(_BYTE *)(v6 + 17) & 4) != 0 )
        {
          v20 = v5;
          v18 = sub_F56690(v6);
          v5 = v20;
          if ( !v18 )
            return v7;
        }
        v19 = v5;
        v15 = sub_F56980(v6);
        goto LABEL_21;
      case 0x33:
        if ( (**(_DWORD **)(v6 + 24) & 0x10000) != 0 )
          return v7;
        v19 = v5;
        v15 = sub_F64EA0(v6, a2, v5, a4, a5);
        goto LABEL_21;
      case 0x34:
        v19 = v5;
        v15 = sub_F64D80(v6, a2, v5, a4, a5);
        goto LABEL_21;
      case 0x35:
        v19 = v5;
        v15 = sub_F5DAC0(v6);
        goto LABEL_21;
      case 0x36:
        if ( (*(_BYTE *)(v6 + 17) & 4) == 0 )
        {
LABEL_7:
          v9 = *(_QWORD *)(v6 + 40);
LABEL_8:
          v10 = v9;
          v11 = v9;
          v12 = v9 & 8;
          a4 = v10 & 7;
          v6 = v11 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_9:
          if ( v12 )
          {
            a4 |= *(_QWORD *)(v6 + 24);
            v6 = *(_QWORD *)v6;
          }
          if ( a4 )
          {
            v5 |= a4;
            v7 = v6;
          }
          continue;
        }
        return v7;
      case 0x38:
        v19 = v5;
        v15 = sub_F5DBF0(v6);
LABEL_21:
        v16 = v15;
        v17 = v15;
        v5 = v19;
        v12 = v15 & 8;
        a4 = v16 & 7;
        v6 = v17 & 0xFFFFFFFFFFFFFFF0LL;
        goto LABEL_9;
      default:
        v6 = 0;
        continue;
    }
  }
}
