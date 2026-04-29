__int64 __fastcall sub_7010(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rdx
  char v5; // al
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int16 v10; // [rsp+Ch] [rbp-2Ch] BYREF
  unsigned __int16 v11; // [rsp+Eh] [rbp-2Ah]
  unsigned int v12; // [rsp+10h] [rbp-28h]
  unsigned int v13; // [rsp+14h] [rbp-24h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v4 = *(unsigned __int16 *)(a2 + 64);
  *(_BYTE *)(a2 + 41) = 8;
  if ( (_WORD)v4 && (unsigned __int8)sub_13D40(a1, 1, v4, 0, &v10) )
  {
    *(_WORD *)(a2 + 66) = v10;
    switch ( a3 )
    {
      case 0:
        if ( (_BYTE)v10 == 7 )
          goto LABEL_22;
        if ( (unsigned __int8)v10 > 7u )
        {
          if ( (_BYTE)v10 == 8 )
          {
LABEL_12:
            *(_QWORD *)(a2 + 48) = v12;
            return 1;
          }
        }
        else if ( (unsigned __int8)(v10 - 3) <= 1u )
        {
          goto LABEL_12;
        }
        break;
      case 1:
        if ( (unsigned __int8)(v10 - 5) > 1u )
          break;
        goto LABEL_18;
      case 2:
        if ( (_BYTE)v10 != 9 )
          break;
        if ( (~HIBYTE(v10) & 0x70) == 0 )
          goto LABEL_17;
        goto LABEL_14;
      case 3:
        if ( (_BYTE)v10 != 10 )
          break;
        goto LABEL_16;
      case 4:
        if ( (_BYTE)v10 != 11 )
          break;
LABEL_16:
        if ( (~HIBYTE(v10) & 0xB0) != 0 )
          goto LABEL_14;
LABEL_17:
        *(_DWORD *)(a2 + 28) = v11;
LABEL_18:
        v8 = v13;
        v9 = v12;
        *(_QWORD *)(a2 + 56) = v13;
        *(_QWORD *)(a2 + 48) = v9 | (v8 << 32);
        return 1;
      case 5:
        if ( (_BYTE)v10 != 7 )
          break;
LABEL_22:
        v7 = 786444;
        if ( (v10 & 0x1000) == 0 )
          goto LABEL_14;
        goto LABEL_11;
      case 6:
        if ( (_BYTE)v10 != 7 )
          break;
        v7 = 196619;
        if ( (v10 & 0x400) == 0 )
          goto LABEL_14;
        goto LABEL_11;
      case 7:
        if ( (_BYTE)v10 != 7 )
          break;
        if ( (v10 & 0x1400) == 0 )
          goto LABEL_14;
        v7 = ((v10 & 0x1000) != 0) + 655371LL;
LABEL_11:
        *(_QWORD *)(a2 + 56) = v7;
        *(_DWORD *)(a2 + 28) = v11;
        goto LABEL_12;
      case 8:
        if ( (_BYTE)v10 != 18 )
          break;
LABEL_14:
        v5 = *(_BYTE *)(a2 + 72);
        goto LABEL_4;
      default:
        sub_6E90((__int64)"Illegal CIC call (%x)", a3);
        return 0;
    }
  }
  if ( !*(_BYTE *)(a1 + 33344) )
    return 0;
  v5 = *(_BYTE *)(a2 + 72) + 1;
LABEL_4:
  *(_BYTE *)(a2 + 72) = v5 + 1;
  *(_WORD *)(a2 + 56) = *(_WORD *)(a2 + 64);
  return 1;
}
