__int64 __fastcall sub_11600(__int64 a1, __int64 a2, __int64 (__fastcall *a3)(const char *, __int64), __int64 a4)
{
  unsigned __int64 *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned int v12; // ebx
  char v13; // r11
  char v14; // cl
  char v15; // si
  unsigned int v16; // eax
  __int64 result; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int128 v22; // [rsp+0h] [rbp-188h] BYREF
  __int64 v23; // [rsp+10h] [rbp-178h]
  __int64 v24; // [rsp+18h] [rbp-170h]
  __int64 v25; // [rsp+20h] [rbp-168h]
  char v26; // [rsp+28h] [rbp-160h] BYREF
  char v27; // [rsp+29h] [rbp-15Fh]
  unsigned __int16 v28; // [rsp+2Eh] [rbp-15Ah]
  __int64 v29; // [rsp+38h] [rbp-150h]
  __int64 v30; // [rsp+60h] [rbp-128h]
  unsigned __int16 v31; // [rsp+7Eh] [rbp-10Ah]
  unsigned __int64 v32; // [rsp+168h] [rbp-20h] BYREF

  v32 = __readfsqword(0x28u);
  v6 = (unsigned __int64 *)&v26;
  v22 = -1;
  v23 = -1;
  v24 = 0;
  v25 = 0;
  do
  {
    *(_WORD *)v6 = 0;
    v6 += 5;
    *((_WORD *)v6 - 19) = 0;
    *((_WORD *)v6 - 18) = 0;
    *((_DWORD *)v6 - 2) = 0;
    *((_WORD *)v6 - 17) = 0;
    *((_OWORD *)v6 - 2) = 0;
    *(v6 - 2) = 0;
  }
  while ( v6 != &v32 );
  if ( (int)decode_insn(&v22, a2, 0.0) <= 0 )
    return -1;
  v10 = (unsigned int)(unsigned __int16)v24 - 52;
  if ( (unsigned int)v10 > 0xF )
  {
    if ( (unsigned __int16)v24 > 0x52u )
    {
      switch ( (_WORD)v24 )
      {
        case 0x71:
          v18 = a4;
          return *(_QWORD *)(a3("FEPC", v18) + 8);
        case 0xCE:
          if ( v28 > 0x7Fu )
          {
            sub_EDD0((__int64)"Bad register number passed to nec850.get_register_value: %d", v28);
          }
          else if ( *(_QWORD *)(((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, __int64, __int64, __int64, _QWORD, _QWORD, __int64))a3)(
                                  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * v28),
                                  a4,
                                  *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL),
                                  v7,
                                  v8,
                                  v9,
                                  v22,
                                  *((_QWORD *)&v22 + 1),
                                  v23)
                              + 8) == 1 )
          {
            return -1;
          }
          return v30;
        case 0x70:
LABEL_16:
          v18 = a4;
          return *(_QWORD *)(a3("EIPC", v18) + 8);
      }
    }
    else if ( (unsigned __int16)v24 > 0x1Bu )
    {
      switch ( (__int16)v24 )
      {
        case 28:
          v21 = *(_QWORD *)(((__int64 (__fastcall *)(const char *, __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64))a3)(
                              "PSW",
                              a4,
                              v10,
                              v7,
                              v8,
                              v9,
                              v22,
                              *((_QWORD *)&v22 + 1),
                              v23)
                          + 8);
          if ( (v21 & 0x40) != 0 )
            goto LABEL_16;
          v18 = a4;
          if ( (v21 & 0x80u) != 0LL )
            return *(_QWORD *)(a3("FEPC", v18) + 8);
          return *(_QWORD *)(a3("EIPC", v18) + 8);
        case 43:
          goto LABEL_11;
        case 44:
          if ( v28 > 0x7Fu )
          {
            sub_EDD0((__int64)"Bad register number passed to nec850.get_register_value: %d", v28);
            v20 = 0;
          }
          else
          {
            v20 = *(_QWORD *)(((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, __int64, __int64, __int64, _QWORD, _QWORD, __int64))a3)(
                                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8LL * v28),
                                a4,
                                *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL),
                                v7,
                                v8,
                                v9,
                                v22,
                                *((_QWORD *)&v22 + 1),
                                v23)
                            + 8);
          }
          return v29 + v20;
        case 45:
          if ( v27 != 1 )
            goto LABEL_11;
          v19 = v28;
          if ( v28 > 0x7Fu )
            goto LABEL_29;
          goto LABEL_26;
        case 78:
          v19 = v31;
          if ( v31 > 0x7Fu )
          {
LABEL_29:
            sub_EDD0((__int64)"Bad register number passed to nec850.get_register_value: %d", (unsigned __int16)v19);
            result = 0;
          }
          else
          {
LABEL_26:
            result = *(_QWORD *)(((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, __int64, __int64, __int64, _QWORD, _QWORD, __int64))a3)(
                                   *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) + 8 * v19),
                                   a4,
                                   *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL),
                                   v7,
                                   v8,
                                   v9,
                                   v22,
                                   *((_QWORD *)&v22 + 1),
                                   v23)
                               + 8);
          }
          break;
        case 79:
          if ( v27 != 7 )
            return -1;
          goto LABEL_11;
        case 82:
          result = *(_QWORD *)(((__int64 (__fastcall *)(const char *, __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64))a3)(
                                 "CTPC",
                                 a4,
                                 v10,
                                 v7,
                                 v8,
                                 v9,
                                 v22,
                                 *((_QWORD *)&v22 + 1),
                                 v23)
                             + 8);
          break;
        default:
          return -1;
      }
      return result;
    }
    return -1;
  }
  v11 = *(_QWORD *)(((__int64 (__fastcall *)(const char *, __int64, __int64, __int64, __int64, __int64, _QWORD, _QWORD, __int64))a3)(
                      "PSW",
                      a4,
                      v10,
                      v7,
                      v8,
                      v9,
                      v22,
                      *((_QWORD *)&v22 + 1),
                      v23)
                  + 8);
  v12 = v11 & 8;
  v13 = v11 & 1;
  v14 = (v11 & 2) != 0;
  v15 = (v11 & 4) != 0;
  switch ( (__int16)v24 )
  {
    case '4':
      v13 = (v11 & 4) != 0;
      goto LABEL_20;
    case '5':
      v16 = (v12 >> 3) & 1;
      goto LABEL_10;
    case '6':
      goto LABEL_20;
    case '7':
      LOBYTE(v16) = (v11 & 9) != 0;
      goto LABEL_10;
    case '8':
      goto LABEL_19;
    case '9':
      goto LABEL_11;
    case ':':
      v14 ^= v15;
LABEL_19:
      v13 = v14;
      goto LABEL_20;
    case ';':
      v13 |= v15 ^ v14;
      goto LABEL_20;
    case '<':
      LOBYTE(v16) = ((unsigned __int8)(v11 & 4) >> 2) ^ 1;
      goto LABEL_10;
    case '=':
      v16 = (v12 >> 3) ^ 1;
      goto LABEL_10;
    case '>':
      v13 = !(v11 & 1);
      goto LABEL_20;
    case '?':
      LOBYTE(v16) = (v11 & 9) == 0;
      goto LABEL_10;
    case '@':
      LOBYTE(v16) = ((unsigned __int8)(v11 & 2) >> 1) ^ 1;
      goto LABEL_10;
    case 'A':
      v16 = ((unsigned int)v11 >> 4) & 1;
      goto LABEL_10;
    case 'B':
      LOBYTE(v16) = v14 == v15;
LABEL_10:
      if ( (_BYTE)v16 )
        goto LABEL_11;
      return -1;
    case 'C':
      v13 = !(v11 & 1) && v14 == v15;
LABEL_20:
      if ( !v13 )
        return -1;
LABEL_11:
      result = v29;
      break;
    default:
      return -1;
  }
  return result;
}
