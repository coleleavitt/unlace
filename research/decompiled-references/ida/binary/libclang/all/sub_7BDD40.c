unsigned __int64 __fastcall sub_7BDD40(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r12
  _QWORD *v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rbp
  char v7; // al
  __int64 v8; // rax
  char v9; // dl
  unsigned __int64 result; // rax
  unsigned __int64 v11; // r12
  _QWORD *v12; // rdi
  __int64 v13; // rdi

  v2 = sub_798D40(a1);
  v3 = v2;
  if ( *(char *)(a1 + 58) >= 0 || (result = sub_6C2920(v2, a1)) == 0 )
  {
    v4 = (_QWORD *)(*(_QWORD *)(a1 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a1 + 16) & 4) != 0 )
      v4 = (_QWORD *)*v4;
    v5 = sub_79A2E0((__int64)v4);
    v6 = v5;
    if ( *(char *)(v5 + 28) < 0 )
      goto LABEL_8;
    v7 = *(_BYTE *)(v5 + 28) & 0x7F;
    switch ( v7 )
    {
      case 18:
        v8 = sub_6C1B40(v3, v6);
        if ( !v8 )
          goto LABEL_8;
        break;
      case 21:
        v8 = sub_6C1BC0(v3, v6);
        if ( !v8 )
        {
LABEL_8:
          v9 = *(_BYTE *)(a1 + 58);
          if ( (v9 & 0x40) != 0 )
            return sub_7BDA60(v6, *(_QWORD *)(a1 + 40), (v9 & 2) != 0, 1);
          else
            return a1;
        }
        break;
      case 19:
        v13 = *(_QWORD *)(v6 + 88);
        if ( !v13 || *(char *)(v13 + 28) < 0 )
          goto LABEL_8;
        v11 = sub_7BD3E0(v13, *(_QWORD *)(a1 + 40), (*(_BYTE *)(a1 + 58) & 2) != 0);
        goto LABEL_16;
      case 20:
        v8 = sub_7BB6B0(v6);
        if ( !v8 )
          goto LABEL_8;
        break;
      default:
        goto LABEL_8;
    }
    if ( *(char *)(v8 + 28) < 0 )
      goto LABEL_8;
    v11 = sub_7BD3E0(v8, *(_QWORD *)(a1 + 40), (*(_BYTE *)(a1 + 58) & 2) != 0);
LABEL_16:
    if ( v11 )
    {
      v12 = (_QWORD *)(*(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v11 + 16) & 4) != 0 )
        v12 = (_QWORD *)*v12;
      if ( *(char *)(sub_79A2E0((__int64)v12) + 28) >= 0 )
        return v11;
    }
    goto LABEL_8;
  }
  return result;
}

