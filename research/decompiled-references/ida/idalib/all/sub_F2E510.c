__int64 __fastcall sub_F2E510(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // rdi
  char v8; // al
  __int64 v9; // rax
  __int64 v10; // rdx
  const char *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  char v16; // al
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD v22[4]; // [rsp+8h] [rbp-20h] BYREF

  v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2[4] + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = *(_BYTE *)(v7 + 16);
  switch ( v8 )
  {
    case 13:
      if ( (((*(_WORD *)(v7 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
        break;
LABEL_13:
      sub_995540(*(_QWORD *)(a1 + 1096), " Kind=ArraySubscript GetterForArray=\"");
      v9 = a2[5];
      v10 = *(_QWORD *)(a1 + 1096);
      if ( v9 )
        goto LABEL_4;
      goto LABEL_14;
    case 47:
      v21 = sub_F60F10(v7, a2, a3, a4, a5);
      if ( (*(_BYTE *)(v21 + 74) & 1) != 0 || (*(_QWORD *)(v21 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        goto LABEL_13;
      break;
    case 10:
      goto LABEL_13;
  }
  sub_995540(*(_QWORD *)(a1 + 1096), " Kind=DictionarySubscript GetterForDictionary=\"");
  v9 = a2[5];
  v10 = *(_QWORD *)(a1 + 1096);
  if ( v9 )
  {
LABEL_4:
    v11 = (const char *)v10;
    v22[0] = *(_QWORD *)(v9 + 40);
    sub_FDEEB0(v22, v10);
    goto LABEL_5;
  }
LABEL_14:
  v11 = "(null)";
  sub_995540(v10, "(null)");
LABEL_5:
  v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2[4] + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                  & 0xFFFFFFFFFFFFFFF0LL);
  v16 = *(_BYTE *)(v15 + 16);
  switch ( v16 )
  {
    case 13:
      if ( (((*(_WORD *)(v15 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
        break;
LABEL_10:
      sub_995540(*(_QWORD *)(a1 + 1096), "\" SetterForArray=\"");
      v17 = a2[6];
      v18 = *(_QWORD *)(a1 + 1096);
      if ( v17 )
        goto LABEL_8;
      return sub_995540(v18, "(null)");
    case 47:
      v20 = sub_F60F10(v15, v11, v12, v13, v14);
      if ( (*(_BYTE *)(v20 + 74) & 1) != 0 || (*(_QWORD *)(v20 + 128) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        goto LABEL_10;
      break;
    case 10:
      goto LABEL_10;
  }
  sub_995540(*(_QWORD *)(a1 + 1096), "\" SetterForDictionary=\"");
  v17 = a2[6];
  v18 = *(_QWORD *)(a1 + 1096);
  if ( v17 )
  {
LABEL_8:
    v22[0] = *(_QWORD *)(v17 + 40);
    return sub_FDEEB0(v22, v18);
  }
  return sub_995540(v18, "(null)");
}
