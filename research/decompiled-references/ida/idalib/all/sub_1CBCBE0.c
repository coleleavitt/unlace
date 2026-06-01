__int64 __fastcall sub_1CBCBE0(unsigned int *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rbx
  __int64 v7; // rsi
  __int64 *v9; // rax
  _QWORD *v10; // rax
  __int64 *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  _QWORD *v17; // rbp
  __int64 v18; // r14
  __int64 *v19; // rax

  v6 = a2;
LABEL_2:
  while ( 2 )
  {
    switch ( *(_BYTE *)(v6 + 16) )
    {
      case 0:
      case 1:
      case 8:
      case 9:
      case 0xA:
      case 0xC:
      case 0xD:
      case 0xF:
      case 0x13:
      case 0x18:
      case 0x1C:
      case 0x1E:
      case 0x22:
      case 0x23:
      case 0x24:
      case 0x25:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2D:
      case 0x2E:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
        return 0;
      case 2:
      case 4:
      case 5:
      case 6:
      case 7:
      case 0xB:
      case 0xE:
      case 0x17:
      case 0x1F:
      case 0x20:
      case 0x26:
      case 0x39:
      case 0x3A:
        v7 = *(_QWORD *)(v6 + 32);
        return sub_1CBCE20(a1, v7);
      case 3:
      case 0x2A:
        goto LABEL_8;
      case 0x10:
      case 0x11:
      case 0x19:
      case 0x34:
        return sub_1CBCE20(a1, *(_QWORD *)(v6 + 24));
      case 0x12:
      case 0x15:
        v7 = *(_QWORD *)(v6 + 40);
        return sub_1CBCE20(a1, v7);
      case 0x14:
        return sub_1CBCE40(a1);
      case 0x16:
        if ( (*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          return 0;
        return sub_1CBCE40(a1);
      case 0x1A:
        v17 = (_QWORD *)(v6 + 48);
        v18 = v6 + 48 + 8LL * *(unsigned __int16 *)(v6 + 22);
        if ( v6 + 48 == v18 )
          goto LABEL_37;
        break;
      case 0x1B:
        v11 = (__int64 *)(*(_QWORD *)(v6 + 40) & 0xFFFFFFFFFFFFFFF0LL);
        if ( v11 )
        {
          a2 = *v11;
          if ( (unsigned __int8)sub_1CBCBE0(a1, *v11) )
            return 1;
        }
LABEL_8:
        v9 = (__int64 *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        if ( v9 )
          goto LABEL_9;
        return 0;
      case 0x1D:
        v10 = sub_F61460(v6, a2, (__int64)a3, a4, a5, a6);
        return sub_1CBCA50(a1, (__int64)v10);
      case 0x21:
        if ( (*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL) != 0
          && (unsigned __int8)sub_1CBCBE0(a1, *(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL)) )
        {
          return 1;
        }
        v10 = sub_F61C10(v6);
        if ( v10 )
          return sub_1CBCA50(a1, (__int64)v10);
        return sub_1CBCE40(a1);
      case 0x2B:
        v15 = v6;
        while ( 1 )
        {
          v13 = *(_QWORD *)(v15 + 32);
          if ( (*(_BYTE *)(v15 + 18) & 0x10) == 0 )
            break;
          v15 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
          v16 = (unsigned int)*(unsigned __int8 *)(v15 + 16) - 43;
          if ( (unsigned int)v16 > 1 )
            v15 = sub_F63050(v15, a2, v16, a4);
        }
        goto LABEL_35;
      case 0x2C:
        v12 = v6;
        while ( 1 )
        {
          v13 = *(_QWORD *)(v12 + 32);
          if ( (*(_BYTE *)(v12 + 18) & 0x10) == 0 )
            break;
          v12 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
          v14 = (unsigned int)*(unsigned __int8 *)(v12 + 16) - 43;
          if ( (unsigned int)v14 > 1 )
            v12 = sub_F63050(v12, a2, v14, a4);
        }
LABEL_35:
        a3 = (__int64 *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
        if ( !a3 )
          return 0;
        v6 = *a3;
        continue;
      case 0x2F:
      case 0x30:
        v10 = sub_F60F10(v6, a2, (__int64)a3, a4, a5, a6);
        return sub_1CBCA50(a1, (__int64)v10);
    }
    break;
  }
  while ( 1 )
  {
    v19 = (__int64 *)(*v17 & 0xFFFFFFFFFFFFFFF0LL);
    if ( v19 )
    {
      a2 = *v19;
      if ( (unsigned __int8)sub_1CBCBE0(a1, *v19) )
        return 1;
    }
    if ( (_QWORD *)v18 == ++v17 )
    {
LABEL_37:
      v9 = (__int64 *)(*(_QWORD *)(v6 + 24) & 0xFFFFFFFFFFFFFFF0LL);
      if ( !v9 )
        return 0;
LABEL_9:
      v6 = *v9;
      goto LABEL_2;
    }
  }
}
