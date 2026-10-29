unsigned __int64 __fastcall sub_BADF80(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // r13
  _QWORD *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r12
  char v12; // al
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v16; // rbp
  _QWORD *v17; // rdi
  __int64 v18; // rdi

  v3 = sub_B8C330(a1);
  v4 = v3;
  if ( *(char *)(a1 + 58) >= 0 || (a2 = a1, (result = sub_A63040(v3, a1)) == 0) )
  {
    v5 = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
      v5 = (_QWORD *)*v5;
    v6 = sub_B8C1B0((__int64)v5);
    v11 = v6;
    if ( *(char *)(v6 + 28) < 0 )
      goto LABEL_8;
    v12 = *(_BYTE *)(v6 + 28) & 0x7F;
    switch ( v12 )
    {
      case 20:
        v13 = sub_A85A20(v4, v11);
        if ( !v13 )
          goto LABEL_8;
        break;
      case 23:
        v13 = sub_A85B50(v4, v11);
        if ( !v13 )
        {
LABEL_8:
          if ( (*(_BYTE *)(a1 + 58) & 0x40) != 0 )
            return sub_BAA9D0(v11, *(_QWORD *)(a1 + 40), (*(_BYTE *)(a1 + 58) & 2) != 0, 1, v9, v10);
          else
            return a1;
        }
        break;
      case 21:
        v18 = *(_QWORD *)(v11 + 88);
        if ( !v18 || *(char *)(v18 + 28) < 0 )
          goto LABEL_8;
        v16 = sub_BAAB00(v18, *(_QWORD *)(a1 + 40), (*(_BYTE *)(a1 + 58) & 2) != 0, v8, v9, v10);
        goto LABEL_16;
      case 22:
        v13 = sub_BADE20(v11, a2, v7, v8, v9, v10);
        if ( !v13 )
          goto LABEL_8;
        break;
      default:
        goto LABEL_8;
    }
    if ( *(char *)(v13 + 28) < 0 )
      goto LABEL_8;
    v16 = sub_BAAB00(v13, *(_QWORD *)(a1 + 40), (*(_BYTE *)(a1 + 58) & 2) != 0, v14, v9, v10);
LABEL_16:
    if ( v16 )
    {
      v17 = (_QWORD *)(*(_QWORD *)(v16 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v16 + 16) & 4) != 0 )
        v17 = (_QWORD *)*v17;
      if ( *(char *)(sub_B8C1B0((__int64)v17) + 28) >= 0 )
        return v16;
    }
    goto LABEL_8;
  }
  return result;
}
