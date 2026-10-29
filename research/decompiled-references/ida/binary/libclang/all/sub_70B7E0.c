__int64 __fastcall sub_70B7E0(__int64 a1, __int64 a2)
{
  int v2; // r13d
  unsigned __int64 v3; // r12
  __int64 v4; // r8
  __int64 v5; // rbx
  char v6; // al
  unsigned __int16 v7; // ax
  int v8; // ebx
  int v9; // r12d
  unsigned __int8 v10; // bp
  __int64 v11; // r8
  unsigned __int16 v12; // ax
  int v13; // ecx
  __int64 v14; // rax
  __int64 v16; // rax

  v3 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v4 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_BYTE *)(v5 + 16);
  switch ( v6 )
  {
    case 13:
      v7 = (*(_WORD *)(v5 + 18) >> 3) & 0x1FF;
      if ( ((v7 + 77) & 0x1FFu) > 0x13 )
        goto LABEL_3;
LABEL_18:
      v2 = 0;
      v9 = 0;
      v8 = sub_B100B0(v4);
      v12 = sub_70B280(a1, a2);
      v13 = 0;
      goto LABEL_19;
    case 46:
      v14 = sub_B14A40(*(_QWORD *)(*(_QWORD *)(v4 + 8) & 0xFFFFFFFFFFFFFFF0LL));
      if ( ((*(_BYTE *)(v14 + 74) & 1) != 0 || *(_QWORD *)(v14 + 128) > 7u) && *(char *)(sub_B14A40(v5) + 76) >= 0 )
      {
        v4 = *(_QWORD *)v3;
        goto LABEL_18;
      }
      v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v3 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v16 + 16) == 13 )
      {
        v7 = (*(_WORD *)(v16 + 18) >> 3) & 0x1FF;
LABEL_3:
        if ( v7 > 0x1C6u
          && (v7 <= 0x1C9u
           || v7 > 0x1CCu && (v7 <= 0x1CFu || v7 > 0x1D2u && (v7 <= 0x1D5u || v7 > 0x1D8u && v7 <= 0x1DBu))) )
        {
          v8 = 1;
          v9 = 0;
        }
        else
        {
          v8 = 0;
          v9 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 56LL);
        }
        LOBYTE(v2) = ((v7 + 45) & 0x1FFu) <= 0xB;
        goto LABEL_13;
      }
      break;
    case 10:
      goto LABEL_18;
  }
  v8 = 0;
  v2 = 0;
  v9 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 17288) + 56LL);
LABEL_13:
  v10 = sub_6D6D30(a1, a2);
  v12 = sub_6F6DE0(a1, v11);
  v13 = -v10;
LABEL_19:
  LOWORD(v13) = v13 & 0x1FFF;
  return (((v9 << 15) | (v2 << 14) | v13 | (v8 << 13)) << 16) | (unsigned int)v12;
}

