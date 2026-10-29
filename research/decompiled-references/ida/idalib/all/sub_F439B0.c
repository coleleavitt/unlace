void __fastcall sub_F439B0(__int64 a1, unsigned __int64 a2, double a3)
{
  char v4; // al
  __int64 v5; // r12
  const char *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r13
  const char *v14; // rsi
  __int64 v15; // r12
  __int64 v16; // r12
  char v17; // r14
  __int64 v18; // r13
  unsigned __int8 v19; // al
  char v20; // r14
  char v21; // al
  __int64 v22; // rdi
  __int64 v23; // rdi

  v4 = *(_BYTE *)(a1 + 1104);
  v5 = *(_QWORD *)(a1 + 1096);
  if ( a2 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v5 + 24LL))(*(_QWORD *)(a1 + 1096), 5, 1, 0);
      v13 = *(_QWORD *)(a1 + 1096);
      v14 = (const char *)sub_EE9730((_WORD *)a2);
      sub_995540(v13, v14);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
    }
    else
    {
      v7 = (const char *)sub_EE9730((_WORD *)a2);
      sub_995540(v5, v7);
    }
    sub_F29AE0(a1, a2);
    v8 = sub_EEC8C0(a2, a2, a3);
    sub_F2A050(a1, v8);
    if ( ((*(_WORD *)a2 + 509) & 0x1FFu) > 0x7E )
    {
LABEL_5:
      sub_F43390(a1, a2, v9, v10, v11, v12);
      return;
    }
    sub_F2A610(a1, *(_QWORD *)(a2 + 8));
    if ( (*(_DWORD *)a2 & 0x40000) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 1096);
      if ( *(_BYTE *)(a1 + 1104) )
      {
        (*(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v15 + 24LL))(
          *(_QWORD *)(a1 + 1096),
          1,
          1,
          0);
        sub_995540(*(_QWORD *)(a1 + 1096), " contains-errors");
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 32LL))(v15);
      }
      else
      {
        sub_995540(*(_QWORD *)(a1 + 1096), " contains-errors");
      }
    }
    v16 = *(_QWORD *)(a1 + 1096);
    v17 = *(_BYTE *)(a1 + 1104);
    v18 = v16;
    if ( v17 )
    {
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(*(_QWORD *)(a1 + 1096), 6, 0, 0);
      v21 = (*(_BYTE *)(a2 + 1) >> 1) & 3;
      if ( v21 != 1 )
      {
        if ( v21 != 2 )
          goto LABEL_15;
        v18 = *(_QWORD *)(a1 + 1096);
        goto LABEL_13;
      }
      v23 = *(_QWORD *)(a1 + 1096);
    }
    else
    {
      v19 = *(_BYTE *)(a2 + 1);
      v9 = (v19 >> 1) & 3;
      if ( (_BYTE)v9 != 1 )
      {
        if ( (_BYTE)v9 != 2 )
        {
LABEL_28:
          switch ( (v19 >> 3) & 7 )
          {
            case 1:
              v20 = 0;
LABEL_36:
              sub_995540(v18, " bitfield");
              goto LABEL_23;
            case 2:
              v20 = 0;
LABEL_34:
              sub_995540(v18, " vectorcomponent");
              goto LABEL_23;
            case 3:
              v20 = 0;
LABEL_32:
              sub_995540(v18, " objcproperty");
              goto LABEL_23;
            case 4:
              v20 = 0;
LABEL_22:
              v22 = v16;
              v16 = v18;
              sub_995540(v22, " objcsubscript");
              goto LABEL_23;
            case 5:
              v20 = 0;
LABEL_38:
              sub_995540(v18, " matrixcomponent");
LABEL_23:
              if ( v20 )
LABEL_24:
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
              break;
            default:
              goto LABEL_5;
          }
          goto LABEL_5;
        }
LABEL_13:
        sub_995540(v18, " xvalue");
        goto LABEL_14;
      }
      v23 = *(_QWORD *)(a1 + 1096);
    }
    sub_995540(v23, " lvalue");
LABEL_14:
    if ( !v17 )
    {
LABEL_16:
      v16 = *(_QWORD *)(a1 + 1096);
      v20 = *(_BYTE *)(a1 + 1104);
      v18 = v16;
      if ( v20 )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(
          *(_QWORD *)(a1 + 1096),
          6,
          0,
          0);
        switch ( (*(_BYTE *)(a2 + 1) >> 3) & 7 )
        {
          case 1:
            v18 = *(_QWORD *)(a1 + 1096);
            goto LABEL_36;
          case 2:
            v18 = *(_QWORD *)(a1 + 1096);
            goto LABEL_34;
          case 3:
            v18 = *(_QWORD *)(a1 + 1096);
            goto LABEL_32;
          case 4:
            v16 = *(_QWORD *)(a1 + 1096);
            goto LABEL_22;
          case 5:
            v18 = *(_QWORD *)(a1 + 1096);
            goto LABEL_38;
          default:
            goto LABEL_24;
        }
      }
      v19 = *(_BYTE *)(a2 + 1);
      goto LABEL_28;
    }
LABEL_15:
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
    goto LABEL_16;
  }
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(*(_QWORD *)(a1 + 1096), 4, 0, 0);
    sub_995540(*(_QWORD *)(a1 + 1096), "<<<NULL>>>");
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5);
  }
  else
  {
    sub_995540(*(_QWORD *)(a1 + 1096), "<<<NULL>>>");
  }
}
