unsigned __int64 __fastcall sub_79FBA0(__int64 a1, _QWORD *a2, unsigned __int8 a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v4; // r14
  __int64 v7; // rbx
  __int64 v8; // r12
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rax
  _BYTE *v11; // rsi
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // [rsp+Ch] [rbp-3Ch]

  result = a3;
  v4 = a2[2];
  v14 = a3;
  if ( v4 )
  {
    v7 = 0x1F00003F03FF01FFLL;
    v8 = 8388688;
    do
    {
      v9 = *(_BYTE *)(v4 + 28) & 0x7F;
      if ( (*(_BYTE *)(v4 + 28) & 0x7Fu) - 16 <= 0x3E )
      {
        v10 = (_QWORD *)(*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL);
        if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
          v10 = (_QWORD *)*v10;
        if ( a2 == v10 )
        {
          if ( !sub_792DE0(v4) )
          {
            if ( *(char *)(v4 + 29) >= 0 )
              goto LABEL_28;
            if ( (*(_BYTE *)(a1 + 8) & 0x7F) == 0 )
            {
              v13 = sub_79A2E0(a1);
              if ( (*(_BYTE *)(v13 + 28) & 0x7F) != 0 )
                v13 = sub_793320(v13);
              if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 88) + 2160LL) + 1LL) & 8) == 0 )
LABEL_28:
                sub_79F480(a1, v4, a3);
            }
          }
          v9 = *(_BYTE *)(v4 + 28) & 0x7F;
        }
      }
      if ( (unsigned __int8)v9 <= 0x3Cu && _bittest64(&v7, v9) )
      {
        switch ( (char)v9 )
        {
          case 0:
          case 1:
          case 2:
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
            v11 = (_BYTE *)(v4 + 40);
            goto LABEL_11;
          case 9:
          case 10:
          case 11:
          case 12:
          case 13:
          case 14:
          case 15:
          case 25:
          case 26:
          case 27:
          case 28:
          case 29:
          case 30:
          case 31:
          case 38:
          case 39:
          case 40:
          case 41:
          case 42:
          case 43:
          case 44:
          case 45:
          case 46:
          case 47:
          case 48:
          case 49:
          case 50:
          case 51:
          case 52:
          case 53:
          case 54:
          case 55:
          case 56:
          case 57:
          case 58:
          case 59:
          case 60:
            v11 = (_BYTE *)(v4 + 64);
            goto LABEL_11;
          case 16:
          case 17:
          case 18:
          case 19:
          case 20:
          case 21:
          case 22:
          case 23:
            v11 = (_BYTE *)(v4 + 48);
            goto LABEL_11;
          case 24:
            v11 = (_BYTE *)(v4 + 56);
            goto LABEL_11;
          case 32:
          case 33:
          case 34:
          case 35:
          case 36:
          case 37:
            v11 = (_BYTE *)(v4 + 72);
LABEL_11:
            v12 = v11[8] & 0x7F;
            if ( (_BYTE)v12 == 60 )
            {
              if ( (char)v11[12] >= 0 )
                goto LABEL_14;
            }
            else if ( (unsigned __int8)v12 <= 0x17u
                   && (_bittest64(&v8, v12) || (_BYTE)v12 == 22 && (v11[9] & 0x20) != 0) )
            {
LABEL_14:
              sub_79FBA0(a1, v11, v14);
              break;
            }
            break;
          default:
            break;
        }
      }
      result = *(_QWORD *)(v4 + 8);
      v4 = result & 0xFFFFFFFFFFFFFFF8LL;
    }
    while ( result > 7 );
  }
  return result;
}

