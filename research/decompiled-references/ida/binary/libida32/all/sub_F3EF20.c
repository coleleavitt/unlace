__int64 __fastcall sub_F3EF20(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v9; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  unsigned int v14; // eax
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ebx
  unsigned __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v25; // rdx
  __int64 v26; // rcx
  _QWORD *v27; // rbp
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30[6]; // [rsp+8h] [rbp-30h] BYREF

  v6 = *a1;
  v7 = *a1 & 0xFFFFFFFFFFFFFFF0LL;
  if ( v7 )
  {
    v9 = *(_QWORD *)v7;
    v11 = v6;
    v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v12 + 16) == 5 )
    {
LABEL_12:
      v30[0] = sub_A4D710(a2, v11);
      return (unsigned int)sub_F3EF20(v30, a2);
    }
    v13 = 0;
    LOBYTE(v14) = sub_F3E930(v9, nullptr, v12, a4, a5, a6);
    v18 = v14;
    if ( !(_BYTE)v14 )
    {
      v19 = *a1 & 0xFFFFFFFFFFFFFFF0LL;
      v20 = *(_QWORD *)&byte_8[v19];
      if ( (v20 & 8) == 0
        || (v15 = v20 & 0xFFFFFFFFFFFFFFF0LL,
            (((*(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[*a1 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
             | *(_QWORD *)&byte_8[*a1 & 0xFFFFFFFFFFFFFFF0LL] & 7uLL) >> 6)
           & 6) == 0) )
      {
        if ( (v21 = *(_QWORD *)(*(_QWORD *)v19 + 8LL), v22 = *(_QWORD *)(a2 + 2320), (*(_BYTE *)(v22 + 16) & 1) == 0)
          && *(char *)(v22 + 15) >= 0
          || (v13 = *(_QWORD *)(*(_QWORD *)v19 + 8LL), !(unsigned __int8)sub_A739A0(a2, v13, v19, v15, v16)) )
        {
          v23 = *(_QWORD *)(v21 & 0xFFFFFFFFFFFFFFF0LL);
          switch ( *(_BYTE *)(v23 + 16) )
          {
            case 2:
            case 6:
              v11 = *a1;
              goto LABEL_12;
            case 0xA:
            case 0xB:
            case 0xD:
            case 0xE:
            case 0x21:
            case 0x22:
            case 0x2A:
            case 0x2F:
            case 0x39:
            case 0x3A:
              return 1;
            case 0x30:
              v18 = 1;
              v27 = sub_F3D150(*(_QWORD **)(v23 + 24), v13, v23, v15, v16, v17);
              if ( (*((_BYTE *)v27 + 28) & 0x7Fu) - 59 <= 2 )
              {
                sub_6E4DB0((__int64 *)(v27[13] + 96LL), v27[13], v25, v26, v28, v29);
                return *(_BYTE *)(v27[16] + 1LL) & 1;
              }
              return v18;
            default:
              return v18;
          }
        }
      }
    }
  }
  return 0;
}

