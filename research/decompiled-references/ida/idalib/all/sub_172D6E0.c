void __fastcall sub_172D6E0(
        __int64 *a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int8 a6)
{
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rdx
  __int64 v25; // r15
  __int64 v26; // rax
  unsigned __int8 v27; // al
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  __int64 v34; // rdi
  __int64 v35; // rax
  __int64 v36; // rax

  v11 = sub_15F1670(*a1);
  if ( !v11 )
  {
    v25 = sub_1601850(*a1);
    v26 = sub_1A5B7C0(*a1, a2, v25, a3, 0, 0);
    v19 = v26;
    if ( v26 )
    {
      v27 = *(_BYTE *)(v26 + 28) & 0x7F;
      if ( v27 == 20 )
      {
LABEL_5:
        v20 = sub_168B6C0((__int64)a1);
        v24 = sub_A82070(v20, v19, 0, v21, v22, v23);
LABEL_6:
        sub_172C310(a1, a2, v24, a4, a5, a6, 1);
        return;
      }
      if ( (unsigned int)v27 - 58 <= 9 )
      {
        v28 = sub_168B6C0((__int64)a1);
        v32 = *(_QWORD *)(v19 + 48);
        if ( v32 )
          v33 = v32 & 0xFFFFFFFFFFFFFFF0LL;
        else
          v33 = sub_A7AA70(v28, v19, 0, v29, v30, v31) & 0xFFFFFFFFFFFFFFF0LL;
        v34 = *(_QWORD *)v33;
        if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v33 + 16LL) - 35 <= 1
          || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 35 <= 1
          && (v34 = sub_F63050(v34, v19, v33, v29)) != 0 )
        {
          v35 = sub_9C7D40(v34, v19, v33, v29, v30);
          v24 = 0;
          v19 = v35;
          if ( !v35 )
            goto LABEL_6;
          goto LABEL_5;
        }
LABEL_21:
        v24 = 0;
        goto LABEL_6;
      }
      if ( v27 == 63 )
        goto LABEL_21;
    }
    v36 = sub_190BE30(*a1, 0, 0, 0);
    sub_172C560(a1, a2, v36 & 0xFFFFFFFFFFFFFFFELL, a4, a5, a6, 0);
    return;
  }
  v12 = v11;
  v13 = sub_BA85D0(v11);
  if ( v13 )
  {
    v18 = sub_BAB630(v13, a2, v14, v15, v16, v17);
    v19 = v18;
    if ( v18 )
    {
      if ( (*(_BYTE *)(v12 + 58) & 2) != 0 )
      {
        sub_172C560(a1, a2, 0, a4, a5, a6, v18);
        return;
      }
      goto LABEL_5;
    }
  }
}
