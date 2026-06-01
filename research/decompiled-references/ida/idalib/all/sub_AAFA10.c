__int64 __fastcall sub_AAFA10(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned int v8; // ebp
  unsigned __int64 v9; // r13
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // rax
  int *v13; // rdx
  __int64 (*v14)(); // rcx
  __int64 v15; // rax
  __int64 v17; // rax
  __int16 v18; // ax
  __int64 (*v19)(); // rax
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rbp

  while ( 2 )
  {
    v4 = a2;
    sub_A97D20((__int64)a1, a2);
    v8 = v7;
    v9 = HIDWORD(v7);
    while ( 1 )
    {
      if ( (unsigned __int8)(*(_BYTE *)(a2 + 16) - 2) <= 4u )
        goto LABEL_2;
      v10 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v11 = *(unsigned __int8 *)(v10 + 16);
      if ( (unsigned __int8)(v11 - 2) > 4u )
        goto LABEL_7;
      v12 = sub_F63050(a2, v4, (unsigned int)(v11 - 2), v5);
      if ( !v12 )
        break;
      a2 = v12;
LABEL_2:
      a2 = *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    }
    v10 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    LOBYTE(v11) = *(_BYTE *)(v10 + 16);
LABEL_7:
    v13 = (int *)a1[2181];
    if ( (_BYTE)v11 == 33 )
    {
      a2 = *(_QWORD *)(sub_A63B40(a1, v13[36]) & 0xFFFFFFFFFFFFFFF0LL);
      continue;
    }
    break;
  }
  v14 = *(__int64 (**)())(*(_QWORD *)v13 + 824LL);
  if ( v14 != sub_A55F10 )
  {
    if ( ((unsigned __int8 (__fastcall *)(_QWORD))v14)(a1[2181]) )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      LOBYTE(v11) = *(_BYTE *)(v10 + 16);
      goto LABEL_11;
    }
    return v8;
  }
LABEL_11:
  if ( (_BYTE)v11 != 48 )
  {
    if ( *(_BYTE *)(a2 + 16) != 14 )
    {
      if ( (_BYTE)v11 != 14 )
        goto LABEL_18;
      v21 = sub_F63050(a2, sub_A55F10, v13, v14);
      if ( !v21 )
      {
LABEL_17:
        v10 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
        LOBYTE(v11) = *(_BYTE *)(v10 + 16);
LABEL_18:
        if ( (_BYTE)v11 == 47 )
        {
          v17 = sub_F60F10(v10, sub_A55F10, v13, v14, v6);
          a2 = *(_QWORD *)(sub_6F3660(v17) & 0xFFFFFFFFFFFFFFF0LL);
          v10 = *(_QWORD *)(*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
          LOBYTE(v11) = *(_BYTE *)(v10 + 16);
        }
        if ( (_BYTE)v11 == 13 )
        {
          v18 = (*(_WORD *)(v10 + 18) >> 3) & 0x1FF;
          if ( v18 == 482
            || ((v18 + 66) & 0x1F7) == 0
            || v18 == 483
            && (v19 = *(__int64 (**)())(*(_QWORD *)a1[2181] + 832LL), v19 != sub_A55F20)
            && (unsigned __int8)v19() )
          {
            if ( !(_DWORD)v9 )
            {
              v20 = sub_A97D20((__int64)a1, a2);
              if ( v8 < v20 )
                return v20;
            }
          }
        }
        return v8;
      }
      a2 = v21;
    }
    a2 = *(_QWORD *)(*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    goto LABEL_17;
  }
  v15 = sub_F60F10(v10, sub_A55F10, v13, v14, v6);
  if ( (_DWORD)v9 == 1 || *(char *)(v15 + 28) < 0 )
    return v8;
  v22 = *(_QWORD *)(sub_EDE580(a1, v15) + 24);
  return (unsigned int)sub_A97FD0((__int64)a1) * (unsigned int)v22;
}
