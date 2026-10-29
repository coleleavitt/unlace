__int64 __fastcall sub_A8A3C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r12
  __int64 v5; // r8
  __int64 v6; // rbp
  char v7; // al
  unsigned __int16 v8; // ax
  char v9; // r13
  int v10; // ebp
  bool v11; // r12
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  char v16; // bp
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  __int16 v22; // bx
  __int64 v23; // r8

  v4 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  v5 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  v7 = *(_BYTE *)(v6 + 16);
  switch ( v7 )
  {
    case 13:
      v8 = (*(_WORD *)(v6 + 18) >> 3) & 0x1FF;
      if ( ((v8 + 76) & 0x1FFu) > 0x13 )
        goto LABEL_3;
LABEL_16:
      v16 = sub_F41400(v5);
      return ((v16 & 1) << 29) | (unsigned int)(unsigned __int16)sub_A884B0(a1, a2, v17, v18, v19);
    case 47:
      v12 = sub_F3D1D0(*(_QWORD *)(*(_QWORD *)(v5 + 8) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, v5);
      if ( ((*(_BYTE *)(v12 + 74) & 1) != 0 || (*(_QWORD *)(v12 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0)
        && *(char *)(sub_F3D1D0(v6, a2, v13, v14, v15) + 76) >= 0 )
      {
        v5 = *(_QWORD *)v4;
        goto LABEL_16;
      }
      v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v4 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v21 + 16) == 13 )
      {
        v8 = (*(_WORD *)(v21 + 18) >> 3) & 0x1FF;
LABEL_3:
        if ( v8 <= 0x1C7u
          || v8 > 0x1CAu && (v8 <= 0x1CDu || v8 > 0x1D0u && (v8 <= 0x1D3u || v8 > 0x1D6u && ((v8 + 38) & 0x1FFu) > 2)) )
        {
          v9 = 0;
          v10 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 17448) + 56LL);
        }
        else
        {
          v9 = 1;
          v10 = 0;
        }
        v11 = ((v8 + 44) & 0x1FFu) <= 0xB;
        goto LABEL_20;
      }
      break;
    case 10:
      goto LABEL_16;
  }
  v9 = 0;
  v11 = 0;
  v10 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 17448) + 56LL);
LABEL_20:
  v22 = (unsigned __int8)sub_A44820(a1, a2);
  return (v10 << 31)
       | (v11 << 30)
       | ((v9 & 1) << 29)
       | ((-v22 & 0x1FFF) << 16)
       | (unsigned int)(unsigned __int16)sub_A73FE0(a1, v23);
}

