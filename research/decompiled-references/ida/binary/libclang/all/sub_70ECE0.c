__int64 __fastcall sub_70ECE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // r15
  unsigned __int64 v4; // r13
  __int64 v6; // r8
  __int64 v7; // rbx
  char v8; // al
  unsigned __int16 v9; // ax
  __int16 v10; // bx
  __int16 v11; // r13
  unsigned __int8 v12; // r12
  __int64 v13; // r8
  __int16 v14; // ax
  int v15; // edx
  __int64 v16; // rax
  __int64 v18; // rax
  _WORD v19[30]; // [rsp+Ch] [rbp-3Ch] BYREF

  v4 = a3 & 0xFFFFFFFFFFFFFFF0LL;
  v6 = *(_QWORD *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_BYTE *)(v7 + 16);
  switch ( v8 )
  {
    case 13:
      v9 = (*(_WORD *)(v7 + 18) >> 3) & 0x1FF;
      if ( ((v9 + 77) & 0x1FFu) > 0x13 )
        goto LABEL_3;
LABEL_18:
      v11 = 0;
      v3 = 0;
      v10 = sub_B100B0(v6);
      v14 = sub_70B280(a2, a3);
      LOWORD(v15) = 0;
      goto LABEL_19;
    case 46:
      v16 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL));
      if ( ((*(_BYTE *)(v16 + 74) & 1) != 0 || *(_QWORD *)(v16 + 128) > 7u) && *(char *)(sub_B14A40(v7) + 76) >= 0 )
      {
        v6 = *(_QWORD *)v4;
        goto LABEL_18;
      }
      v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v18 + 16) == 13 )
      {
        v9 = (*(_WORD *)(v18 + 18) >> 3) & 0x1FF;
LABEL_3:
        if ( v9 > 0x1C6u
          && (v9 <= 0x1C9u
           || v9 > 0x1CCu && (v9 <= 0x1CFu || v9 > 0x1D2u && (v9 <= 0x1D5u || v9 > 0x1D8u && v9 <= 0x1DBu))) )
        {
          v10 = 1;
          v11 = 0;
        }
        else
        {
          v10 = 0;
          v11 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 17288) + 56LL);
        }
        LOBYTE(v3) = ((v9 + 45) & 0x1FFu) <= 0xB;
        goto LABEL_13;
      }
      break;
    case 10:
      goto LABEL_18;
  }
  v10 = 0;
  v3 = 0;
  v11 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 17288) + 56LL);
LABEL_13:
  v12 = sub_6D6D30(a2, a3);
  v14 = sub_6F6DE0(a2, v13);
  v15 = -v12;
LABEL_19:
  v19[0] = v14;
  v19[1] = (v11 << 15) | (v3 << 14) | v15 & 0x1FFF | (v10 << 13);
  sub_256F750(a1, v19);
  return a1;
}

