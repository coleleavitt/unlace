__int64 __fastcall sub_9D4860(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  char v5; // cl
  int v6; // eax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // r13
  _QWORD *v14; // r15
  __int64 v15; // rsi
  char v16; // r14
  __int64 v17; // rdi
  char v18; // al
  __int64 v20; // rax
  char v21; // al
  unsigned __int64 v22; // rdi
  int v23; // eax
  unsigned __int64 v24; // rax
  __int64 v25; // rax
  int v26; // eax
  __int64 v27; // r13
  __int64 v28; // rax
  _BOOL4 v29; // r14d
  unsigned int v30; // eax
  unsigned __int8 **v31; // rax
  unsigned __int8 **v32; // rbp
  unsigned __int64 v33; // rdi
  unsigned __int64 v34; // rax
  unsigned int v35; // eax

  if ( (*a3 & 2) != 0 )
    return 1;
  v3 = *a3 & 0xFFFFFFFFFFFFFFFCLL;
  v4 = v3;
  if ( !v3 )
    return 1;
  v5 = *(_BYTE *)(v3 + 28);
  v6 = v5 & 0x7F;
  v7 = v5 & 0x7F;
  if ( (unsigned int)(v6 - 38) > 6 )
    return 1;
  v8 = *(unsigned __int8 *)(v4 + 96);
  v11 = *(_BYTE *)(v4 + 96) & 7;
  if ( (v8 & 7) == 0 )
  {
    v20 = *(_QWORD *)(v4 + 48);
    v11 = *(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v11 & 8) != 0 )
    {
      v21 = v11 | v20;
      v11 &= 0xFFFFFFFFFFFFFFF0LL;
      if ( (unsigned int)((*(_QWORD *)(v11 + 24) | (unsigned __int64)(v21 & 7)) >> 9) == 3 )
        goto LABEL_7;
    }
    v7 = (unsigned int)v7 & 0xFFFFFFFD;
    if ( (_BYTE)v7 != 41 )
    {
      v22 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
        v22 = *(_QWORD *)(v22 + 8);
      v23 = *(_BYTE *)(sub_79C2A0(v22) + 8) & 0x7F;
      if ( !v23 || v23 == 22 )
        goto LABEL_7;
      if ( (*(_BYTE *)(v4 + 28) & 0x7F) != 0x29 )
      {
        v24 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
        v8 = *(_QWORD *)(v4 + 16) & 4LL;
        if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
          v24 = *(_QWORD *)v24;
        if ( ((*(_BYTE *)(v24 + 8) + 72) & 0x7Fu) <= 3 )
          goto LABEL_53;
      }
      LOBYTE(v8) = *(_BYTE *)(v4 + 96);
    }
    if ( (v8 & 0x18) == 0 )
      return 1;
    goto LABEL_7;
  }
  if ( (v8 & 7) != 5 )
    goto LABEL_6;
  if ( v6 != 44 && v6 != 38 )
    goto LABEL_52;
  v33 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v4 + 16) & 4) != 0 )
    v33 = *(_QWORD *)(v33 + 8);
  if ( !v33 )
  {
LABEL_52:
    if ( (_BYTE)v7 == 41 )
      return 1;
    goto LABEL_53;
  }
  v34 = *(_BYTE *)(sub_79C2A0(v33) + 8) & 0x7F;
  if ( (unsigned __int8)v34 > 0x10u )
  {
    if ( (((_BYTE)v34 + 96) & 0x7Fu) <= 5 )
      goto LABEL_60;
    goto LABEL_63;
  }
  v8 = 65922;
  if ( !_bittest64(&v8, v34) )
  {
LABEL_63:
    if ( (*(_BYTE *)(v4 + 28) & 0x7F) == 0x29 )
      goto LABEL_60;
LABEL_53:
    v12 = *(_QWORD *)(a1 + 216);
    if ( v4 == v12 )
      return 1;
LABEL_9:
    if ( *(char *)(v4 + 97) < 0 )
      return 1;
    goto LABEL_10;
  }
LABEL_60:
  v11 = *(_BYTE *)(v4 + 96) & 7;
LABEL_6:
  if ( (unsigned __int8)v11 > 3u )
    return 1;
LABEL_7:
  v12 = *(_QWORD *)(a1 + 216);
  if ( v12 == v4 )
    return 1;
  v8 = *(_BYTE *)(v4 + 28) & 0x7F;
  if ( (_BYTE)v8 != 41 )
    goto LABEL_9;
LABEL_10:
  if ( v12 )
  {
    v8 = *(_BYTE *)(v12 + 28) & 0x7F;
    if ( (_BYTE)v8 != 41 && *(char *)(v12 + 97) < 0 && (*(_BYTE *)sub_A2CB40(a1) & 8) != 0 )
    {
      sub_9BCCD0(a1, a2);
      return 0;
    }
  }
  v13 = *(_QWORD *)(v4 + 48);
  v14 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
  v15 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(a1 + 24) + 104LL))(
          *(_QWORD *)(a1 + 24),
          v11,
          v8,
          v7);
  v16 = sub_B05C30(v13, v15);
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v18 = *(_BYTE *)(v17 + 16);
  switch ( v18 )
  {
    case 13:
      if ( (((*(_WORD *)(v17 + 18) >> 3) + 77) & 0x1FFu) > 0x13 )
      {
        if ( !v16 )
        {
LABEL_16:
          sub_9D4530(a1, a2, v4);
          return 0;
        }
        goto LABEL_46;
      }
      goto LABEL_19;
    case 46:
      v25 = sub_B14A40(v17);
      if ( (*(_BYTE *)(v25 + 74) & 1) != 0 || *(_QWORD *)(v25 + 128) > 7u )
      {
LABEL_19:
        if ( !v16 )
          goto LABEL_16;
        return 1;
      }
      break;
    case 10:
      goto LABEL_19;
  }
  if ( v16 )
  {
LABEL_46:
    if ( (*(_BYTE *)(sub_A2CB40(a1) + 1) & 8) != 0 )
    {
      v29 = (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) == 0;
      v30 = sub_A1A260(*(_QWORD *)(a1 + 200), a2);
      v31 = (unsigned __int8 **)sub_A2E050(a1, v30, (unsigned int)(v29 + 2228), 1);
      v32 = v31;
      if ( v31 )
      {
        sub_8356A0(v31, v4, 0xAu);
        sub_9B5660(v32, v13);
      }
      sub_A2DD70(a1, *(unsigned int *)(v4 + 24), 105);
    }
    else
    {
      v35 = sub_A1A260(*(_QWORD *)(a1 + 200), a2);
      sub_A2E050(a1, v35, 110, 0);
    }
    return 1;
  }
  v26 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v14 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (_BYTE)v26 != 41 && (unsigned int)(v26 - 42) > 1 )
    goto LABEL_16;
  v27 = sub_B167E0(*v14, v15);
  v28 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
  if ( !(unsigned __int8)sub_B05C30(v27, v28) || (*(_BYTE *)(sub_A2CB40(a1) + 1) & 0x10) == 0 )
    goto LABEL_16;
  return 1;
}

