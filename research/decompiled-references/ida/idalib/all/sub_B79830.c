__int64 __fastcall sub_B79830(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rbx
  unsigned int v4; // ebp
  __int64 v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  _BYTE *v11; // rax
  __int64 v12; // rdi
  char v13; // al
  __int64 v14; // rax

  v2 = *(_BYTE **)(a2 + 2320);
  if ( (v2[1] & 8) == 0 && (v2[47] & 0x20) == 0 && (*v2 & 8) == 0 )
    return 0;
  if ( (*(_BYTE *)(a1 + 28) & 0x7F) == 0x2B )
    return 0;
  v4 = sub_B79700(a1);
  if ( (_BYTE)v4 )
    return 0;
  v5 = *(_QWORD *)(a1 + 48);
  if ( (v2[1] & 0x10) != 0
    && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 43 <= 1 )
  {
    return 1;
  }
  if ( (unsigned __int8)sub_F56AE0(v5, a2) )
  {
    v10 = *(_QWORD *)(a1 + 48);
    if ( (v10 & 4) == 0 )
    {
      v11 = (_BYTE *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (v11[8] & 4) == 0 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        v13 = *(_BYTE *)(v12 + 16);
        switch ( v13 )
        {
          case 13:
            if ( (((*(_WORD *)(v12 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
              goto LABEL_16;
            break;
          case 47:
            v14 = sub_F60F10(v12, a2, v7, v8, v9);
            if ( (*(_BYTE *)(v14 + 74) & 1) == 0 && (*(_QWORD *)(v14 + 128) & 0xFFFFFFFFFFFFFFF8LL) == 0 )
              goto LABEL_16;
            break;
          case 10:
            break;
          default:
            goto LABEL_16;
        }
        if ( (*v2 & 8) == 0 )
          return 1;
LABEL_16:
        if ( (*(_WORD *)v2 & 0x1008) != 0 && (*(_BYTE *)(a1 + 28) & 0x7F) != 0x2B )
          return *(_BYTE *)(a1 + 97) >> 7;
        return 0;
      }
    }
  }
  return v4;
}
