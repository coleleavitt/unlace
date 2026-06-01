__int64 __fastcall sub_DC8690(__int64 a1, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  unsigned __int8 v5; // al
  __int64 v6; // rdx
  __int64 v9; // r14
  _QWORD *v10; // r15
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebp
  __int64 v15; // r8
  __int64 v16; // rdi
  char v17; // al
  _BOOL4 v18; // ebp
  unsigned int v19; // eax
  unsigned __int8 **v20; // rax
  unsigned __int8 **v21; // rbp
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // r14
  __int64 v26; // rax
  unsigned int v27; // r14d
  unsigned int v28; // eax

  v3 = *a3;
  if ( (v3 & 2) != 0 )
    return 1;
  v4 = v3 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v3 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
    return 1;
  v5 = *(_BYTE *)(v4 + 28) & 0x7F;
  if ( (unsigned int)v5 - 40 > 6 )
    return 1;
  v6 = *(_QWORD *)(a1 + 416);
  if ( v6 == v4 || v5 != 43 && *(char *)(v4 + 97) < 0 )
    return 1;
  if ( !v6 || (*(_BYTE *)(v6 + 28) & 0x7F) == 0x2B || *(char *)(v6 + 97) >= 0 || (*(_BYTE *)sub_E32240(a1) & 8) == 0 )
  {
    v9 = *(_QWORD *)(v4 + 48);
    v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL);
    v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    v14 = sub_F56AE0(v9, v11);
    v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v17 = *(_BYTE *)(v16 + 16);
    switch ( v17 )
    {
      case 13:
        if ( (((*(_WORD *)(v16 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
        {
          if ( !(_BYTE)v14 )
          {
LABEL_14:
            v14 = 0;
            sub_DC22C0(a1, a2, v4);
            return v14;
          }
          goto LABEL_15;
        }
LABEL_30:
        if ( !(_BYTE)v14 )
          goto LABEL_31;
        return 1;
      case 47:
        v23 = sub_F60F10(v16, v11, v12, v13, v15);
        if ( (*(_BYTE *)(v23 + 74) & 1) != 0 || (*(_QWORD *)(v23 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
          goto LABEL_30;
        break;
      case 10:
        goto LABEL_30;
    }
    if ( (_BYTE)v14 )
    {
LABEL_15:
      if ( (*(_BYTE *)(sub_E32240(a1) + 1) & 8) == 0 )
      {
        v14 = 1;
        v28 = sub_E206C0(*(_QWORD *)(a1 + 400));
        sub_E33B30(a1, v28, 108, 0);
        return v14;
      }
      v18 = (*(_BYTE *)(sub_E32240(a1) + 1) & 0x10) == 0;
      v19 = sub_E206C0(*(_QWORD *)(a1 + 400));
      v20 = (unsigned __int8 **)sub_E33B30(a1, v19, (unsigned int)(v18 + 2430), 1);
      v21 = v20;
      if ( v20 )
      {
        sub_AE9DF0(v20, v4, 0xAu);
        sub_AE9DF0(v21, v9, 8u);
      }
      sub_E33DB0(a1, *(unsigned int *)(v4 + 24), 103);
      return 1;
    }
    v24 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v10 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (_BYTE)v24 != 42 && (unsigned int)(v24 - 43) > 1 )
      goto LABEL_14;
    v25 = sub_F68450(*v10, v11, v12, v13, v15);
    v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 104LL))(*(_QWORD *)(a1 + 24));
    v27 = sub_F56AE0(v25, v26);
    if ( (_BYTE)v27 && (*(_BYTE *)(sub_E32240(a1) + 1) & 0x10) != 0 )
      return v27;
LABEL_31:
    sub_DC22C0(a1, a2, v4);
    return v14;
  }
  return sub_CFEE20(a1, (__int64)a2);
}
