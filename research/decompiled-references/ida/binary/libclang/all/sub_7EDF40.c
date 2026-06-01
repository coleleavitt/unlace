__int64 __fastcall sub_7EDF40(__int64 *a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 *v3; // rsi
  __int64 v4; // rbx
  __int64 *v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 result; // rax
  __int16 v10; // r12
  _QWORD *v11; // rbx
  _QWORD *v12; // r12
  __int64 v13; // rsi
  unsigned int v14; // r12d
  __int64 v15; // r13
  __int64 v16; // rbx
  __int64 v17; // r13
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // r13
  __int64 v21; // rbx
  __int64 v22; // rsi
  _BYTE v23[48]; // [rsp-48h] [rbp-48h] BYREF
  __int64 v24; // [rsp-18h] [rbp-18h]

  while ( 2 )
  {
    if ( (a2 & 0xFFFFFFFFFFFFFFF8LL) <= 0xF )
      return 1;
    v3 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
    v24 = v2;
    v4 = *v3;
    v5 = a1;
    switch ( *(_BYTE *)(*v3 + 16) )
    {
      case 0:
      case 1:
      case 5:
      case 7:
      case 9:
      case 0xB:
      case 0xE:
      case 0x1B:
      case 0x1E:
      case 0x21:
      case 0x25:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x38:
      case 0x39:
        goto LABEL_7;
      case 2:
      case 3:
        if ( !(unsigned __int8)sub_7EDF40(a1, *(_QWORD *)(v4 + 32)) )
          return 0;
        if ( (*(_BYTE *)(v4 + 19) & 2) == 0 )
          return 1;
        v8 = *(_QWORD *)(*(_QWORD *)(v4 + 40) + 16LL);
        if ( !v8 )
          return 1;
        return sub_7EBA80(a1, v8);
      case 4:
        if ( !(unsigned __int8)sub_7EDF40(a1, *(_QWORD *)(v4 + 32)) )
          return 0;
        v8 = *(_QWORD *)(v4 + 40);
        if ( !v8 )
          return 1;
        return sub_7EBA80(a1, v8);
      case 6:
        if ( !(unsigned __int8)sub_7EDF40(a1, *(_QWORD *)(v4 + 32)) )
          return 0;
        v8 = *(_QWORD *)(v4 + 40);
        return sub_7EBA80(a1, v8);
      case 8:
        goto LABEL_20;
      case 0xC:
        v7 = *(_QWORD *)(v4 + 56);
        if ( !v7 )
          goto LABEL_7;
        goto LABEL_6;
      case 0xF:
      case 0x32:
        v8 = *(_QWORD *)(v4 + 24);
        return sub_7EBA80(a1, v8);
      case 0x10:
        v14 = sub_7EDF40(a1, *(_QWORD *)(v4 + 24));
        if ( !(_BYTE)v14 )
          return 0;
        if ( !*(_QWORD *)(v4 + 32) )
          return 1;
        v20 = v4 + 48 + 24LL * *(unsigned int *)(v4 + 20);
        if ( v4 + 48 == v20 )
          return v14;
        v21 = v4 + 48;
        while ( 1 )
        {
          result = sub_7EE760(a1, v21);
          if ( !(_BYTE)result )
            break;
          v21 += 24;
          if ( v20 == v21 )
            return v14;
        }
        return result;
      case 0x11:
        if ( (unsigned __int8)sub_7EE690(a1, *(_QWORD *)(v4 + 40)) )
          goto LABEL_16;
        return 0;
      case 0x12:
        if ( (unsigned __int8)sub_7EBA80(a1, *(_QWORD *)(v4 + 32)) )
          goto LABEL_20;
        return 0;
      case 0x13:
        v8 = sub_B07330(*v3);
        return sub_7EBA80(a1, v8);
      case 0x14:
        return sub_7EE440(a1, *(_QWORD *)(v4 + 32));
      case 0x15:
        v22 = *(_QWORD *)(v4 + 32);
        if ( v22 && !(unsigned __int8)sub_7EBA80(a1, v22) )
          return 0;
        goto LABEL_20;
      case 0x16:
        v14 = sub_7EE440(a1, *(_QWORD *)(v4 + 32));
        if ( !(_BYTE)v14 )
          return 0;
        v15 = v4 + 48 + 24LL * *(unsigned int *)(v4 + 20);
        if ( v4 + 48 == v15 )
          return v14;
        v16 = v4 + 48;
        while ( 1 )
        {
          result = sub_7EE760(a1, v16);
          if ( !(_BYTE)result )
            break;
          v16 += 24;
          if ( v15 == v16 )
            return v14;
        }
        return result;
      case 0x17:
        v7 = *(_QWORD *)(v4 + 40);
        if ( !v7 )
          goto LABEL_7;
        goto LABEL_6;
      case 0x18:
        v13 = *(_QWORD *)(v4 + 32);
        if ( v13 && !(unsigned __int8)sub_7EE440(a1, v13) )
          return 0;
LABEL_20:
        a2 = *(_QWORD *)(v4 + 40);
        goto LABEL_8;
      case 0x19:
      case 0x1D:
      case 0x33:
LABEL_16:
        a2 = *(_QWORD *)(v4 + 24);
        goto LABEL_8;
      case 0x1A:
        return sub_7EE4C0(a1, *v3);
      case 0x1F:
        v6 = *(_QWORD *)(v4 + 40);
        if ( v6 && !(unsigned __int8)sub_7EBA80(a1, v6) )
          return 0;
        v7 = *(_QWORD *)(v4 + 48);
        if ( !v7 )
          goto LABEL_7;
LABEL_6:
        if ( (unsigned __int8)sub_7EBA80(a1, v7) )
        {
LABEL_7:
          a2 = *(_QWORD *)(v4 + 32);
LABEL_8:
          a1 = v5;
          v2 = v24;
          continue;
        }
        return 0;
      case 0x20:
        if ( (unsigned __int8)sub_7EDF40(a1, *(_QWORD *)(v4 + 40) & 0xFFFFFFFFFFFFFFF0LL) )
          goto LABEL_7;
        return 0;
      case 0x22:
        if ( v4 != *(_QWORD *)(*(_QWORD *)(v4 + 24) & 0xFFFFFFFFFFFFFFF0LL)
          && !(unsigned __int8)sub_7EDF40(a1, *(_QWORD *)(v4 + 24)) )
        {
          return 0;
        }
        v10 = *(_WORD *)(v4 + 18);
        v11 = (_QWORD *)(v4 + 48);
        v12 = (_QWORD *)((char *)v11 + (v10 & 0x3F8));
        if ( v11 == v12 )
          return 1;
        while ( (unsigned __int8)sub_7EDF40(a1, *v11) )
        {
          if ( v12 == ++v11 )
            return 1;
        }
        return 0;
      case 0x26:
        if ( !(unsigned __int8)sub_7EDF40(a1, *(_QWORD *)(v4 + 40)) )
          return 0;
        v8 = *(_QWORD *)(v4 + 48);
        return sub_7EBA80(a1, v8);
      case 0x2A:
        v19 = *v3;
        while ( (*(_BYTE *)(v19 + 18) & 0x10) != 0 )
        {
          v19 = *(_QWORD *)(*(_QWORD *)(v19 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v19 + 16) - 42 > 1 )
            v19 = sub_B0D320(v19);
        }
        goto LABEL_82;
      case 0x2B:
        v19 = *v3;
        while ( (*(_BYTE *)(v19 + 18) & 0x10) != 0 )
        {
          v19 = *(_QWORD *)(*(_QWORD *)(v19 + 32) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (unsigned int)*(unsigned __int8 *)(v19 + 16) - 42 > 1 )
            v19 = sub_B0D320(v19);
        }
LABEL_82:
        a2 = *(_QWORD *)(v19 + 32);
        goto LABEL_8;
      case 0x2C:
        sub_B150D0(v23, *v3);
        return sub_7EE760(a1, v23);
      case 0x2D:
        if ( (*(_BYTE *)(v4 + 18) & 8) != 0 )
          a2 = *(_QWORD *)(v4 + 48);
        else
          a2 = *(_QWORD *)(v4 + 8);
        goto LABEL_8;
      case 0x30:
        v14 = sub_7EE690(a1, *(_QWORD *)(v4 + 32));
        if ( !(_BYTE)v14 )
          return 0;
        v17 = v4 + 48 + 24LL * *(unsigned int *)(v4 + 20);
        if ( v4 + 48 == v17 )
          return v14;
        v18 = v4 + 48;
        while ( 1 )
        {
          result = sub_7EE760(a1, v18);
          if ( !(_BYTE)result )
            break;
          v18 += 24;
          if ( v17 == v18 )
            return v14;
        }
        return result;
      case 0x35:
        if ( !(unsigned __int8)sub_7EDF40(a1, *(_QWORD *)(v4 + 24)) )
          return 0;
        goto LABEL_7;
      default:
        return 1;
    }
  }
}

