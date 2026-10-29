__int64 __fastcall sub_9D7A30(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r13
  __int64 v8; // rcx
  unsigned int v9; // ebp
  int v10; // eax
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 v13; // rbx
  char v14; // cl
  int v15; // eax
  char v16; // dl
  __int64 v17; // rax
  char v18; // al
  unsigned __int8 **v19; // rax
  _QWORD **v21; // rdi
  __int64 (__fastcall *v22)(__int64); // rax
  char v23; // al
  unsigned __int8 **v24; // rax
  unsigned __int8 **v25; // rbx
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  int v28; // eax
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // [rsp+8h] [rbp-40h] BYREF
  __int64 v34; // [rsp+10h] [rbp-38h] BYREF
  char v35; // [rsp+18h] [rbp-30h]

  v5 = a2;
  v9 = sub_A1C2E0(a3);
  if ( (_BYTE)v9 )
    return v9;
  v10 = *(_DWORD *)(a3 + 48);
  if ( v10 == 1 )
  {
    v11 = **(_QWORD **)(a3 + 24);
    if ( (v11 & 2) != 0 )
      goto LABEL_18;
  }
  else
  {
    if ( (unsigned int)(v10 - 2) <= 1 )
      BUG();
    v11 = **(_QWORD **)(*(_QWORD *)(a3 + 24) + 32LL);
    if ( (v11 & 2) != 0 )
      goto LABEL_18;
  }
  v12 = v11 & 0xFFFFFFFFFFFFFFFCLL;
  v13 = v12;
  if ( !v12 )
    goto LABEL_18;
  v14 = *(_BYTE *)(v12 + 28);
  v15 = v14 & 0x7F;
  v8 = v14 & 0x7F;
  if ( (unsigned int)(v15 - 38) > 6 )
    goto LABEL_18;
  if ( (_BYTE)v8 != 41 && *(char *)(v13 + 97) < 0 )
    goto LABEL_12;
  v16 = *(_BYTE *)(v13 + 96);
  a2 = v16 & 7;
  if ( (v16 & 7) != 0 )
  {
    if ( (*(_BYTE *)(v13 + 96) & 7) != 5 )
      goto LABEL_38;
    if ( v15 != 44 && v15 != 38 )
      goto LABEL_43;
    v30 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
      v30 = *(_QWORD *)(v30 + 8);
    if ( !v30 )
    {
LABEL_43:
      if ( (_BYTE)v8 != 41 )
        goto LABEL_12;
      goto LABEL_18;
    }
    v31 = *(_BYTE *)(sub_79C2A0(v30) + 8) & 0x7F;
    if ( (unsigned __int8)v31 > 0x10u )
    {
      if ( (((_BYTE)v31 + 96) & 0x7Fu) <= 5 )
        goto LABEL_50;
    }
    else
    {
      v32 = 65922;
      if ( _bittest64(&v32, v31) )
      {
LABEL_50:
        a2 = *(_BYTE *)(v13 + 96) & 7;
LABEL_38:
        if ( (unsigned __int8)a2 <= 3u )
          goto LABEL_12;
        goto LABEL_18;
      }
    }
    if ( (*(_BYTE *)(v13 + 28) & 0x7F) != 0x29 )
      goto LABEL_12;
    goto LABEL_50;
  }
  v17 = *(_QWORD *)(v13 + 48);
  a2 = *(_QWORD *)&byte_8[v17 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (a2 & 8) != 0 )
  {
    v18 = a2 | v17;
    a2 &= 0xFFFFFFFFFFFFFFF0LL;
    if ( (unsigned int)((*(_QWORD *)(a2 + 24) | (unsigned __int64)(v18 & 7)) >> 9) == 3 )
      goto LABEL_12;
  }
  v8 = (unsigned int)v8 & 0xFFFFFFFD;
  if ( (_BYTE)v8 != 41 )
  {
    v27 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
      v27 = *(_QWORD *)(v27 + 8);
    v28 = *(_BYTE *)(sub_79C2A0(v27) + 8) & 0x7F;
    if ( v28 == 22 || !v28 )
      goto LABEL_12;
    if ( (*(_BYTE *)(v13 + 28) & 0x7F) != 0x29 )
    {
      v29 = *(_QWORD *)(v13 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(v13 + 16) & 4) != 0 )
        v29 = *(_QWORD *)v29;
      if ( ((*(_BYTE *)(v29 + 8) + 72) & 0x7Fu) <= 3 )
        goto LABEL_12;
    }
    v16 = *(_BYTE *)(v13 + 96);
  }
  if ( (v16 & 0x18) != 0 )
  {
LABEL_12:
    v33 = sub_A16CE0(*(_QWORD *)(a1 + 200), v5);
    if ( sub_77BD20((_QWORD *)v13, (unsigned __int64 *)&v34) )
    {
      v19 = (unsigned __int8 **)sub_A2E0C0(a1, &v33, 2299, 1);
      if ( v19 )
        sub_8356A0(v19, v13, 0xAu);
      sub_A2DD70(a1, *(unsigned int *)(v13 + 24), 105);
    }
    else
    {
      sub_9D4270(a1, v5, (unsigned int *)v13);
    }
    return v9;
  }
LABEL_18:
  v21 = *(_QWORD ***)(a1 + 24);
  v22 = (__int64 (__fastcall *)(__int64))(*v21)[3];
  if ( v22 == sub_8D7F10 )
    v23 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 (__fastcall *)(__int64), __int64))(*v21[3] + 24LL))(
            v21[3],
            a2,
            sub_8D7F10,
            v8);
  else
    v23 = ((__int64 (__fastcall *)(_QWORD **, __int64, __int64 (__fastcall *)(__int64), __int64))v22)(
            v21,
            a2,
            sub_8D7F10,
            v8);
  if ( !v23 )
  {
    v33 = sub_A16CE0(*(_QWORD *)(a1 + 200), v5);
    v24 = (unsigned __int8 **)sub_A2E0C0(a1, &v33, 2171, 0);
    v25 = v24;
    if ( v24 )
    {
      sub_9B5410(v24, a4);
      sub_9B5410(v25, 1);
      v26 = sub_A1A2D0(*(_QWORD *)(a1 + 200), v5);
      v35 = 1;
      v34 = v26;
      sub_839C90((__int64 *)v25, &v34);
    }
    else
    {
      sub_A1A2D0(*(_QWORD *)(a1 + 200), v5);
    }
  }
  return v9;
}

