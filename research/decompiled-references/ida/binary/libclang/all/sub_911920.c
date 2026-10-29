__int64 __fastcall sub_911920(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  int v3; // r13d
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  _WORD *v13; // rdx
  __int64 v14; // rdi
  unsigned __int64 v15; // rdi
  unsigned int v16; // eax
  char v17; // cl
  int v18; // edx
  int v19; // eax
  __int64 *v20; // r14
  __int64 v21; // r12
  _WORD *v22; // rax
  _QWORD v24[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 *v25; // [rsp+18h] [rbp-50h]
  unsigned int v26; // [rsp+20h] [rbp-48h]
  int v27; // [rsp+30h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(unsigned __int16 *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v24, v5);
  sub_A1A5E0(v4, 56);
  v6 = sub_9E26A0(a1, a2, v24);
  if ( !(_BYTE)v6 )
    goto LABEL_26;
  v7 = v27;
  if ( v27 )
  {
    if ( v27 == 1 )
      goto LABEL_28;
LABEL_13:
    if ( (unsigned int)(v7 - 2) <= 1 )
      BUG();
    v8 = v25;
    v14 = *(_QWORD *)v25[4];
    if ( (v14 & 2) != 0 )
      goto LABEL_29;
    goto LABEL_15;
  }
  v8 = v25;
  if ( !v25 )
  {
    v10 = 0x400000001LL;
    goto LABEL_36;
  }
  if ( !v26 )
  {
    v9 = v25[4];
LABEL_6:
    if ( v26 != *(_DWORD *)(v9 + 16) && v26 )
    {
      v10 = **(_QWORD **)((char *)v8 + v26 + 32);
      if ( (v10 & 2) != 0 )
        goto LABEL_9;
    }
    else
    {
      v10 = *(_QWORD *)v9;
      if ( (*(_QWORD *)v9 & 2) != 0 )
        goto LABEL_9;
    }
LABEL_36:
    v15 = v10 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v15 || (*(_BYTE *)(v15 + 28) & 0x7Fu) - 47 > 2 )
    {
LABEL_9:
      v11 = sub_8E5480((__int64)v24);
      v12 = v24[0];
      if ( *(_BYTE *)(v11 + 51) )
      {
        v13 = (_WORD *)((char *)v8 + v26 + 72);
        if ( v26 == v24[0] )
          goto LABEL_31;
      }
      goto LABEL_30;
    }
    goto LABEL_17;
  }
  sub_A1DB00(v24);
  v7 = v27;
  if ( v27 != 1 )
  {
    if ( !v27 )
    {
      v8 = v25;
      v9 = v25[4];
      goto LABEL_6;
    }
    goto LABEL_13;
  }
LABEL_28:
  v8 = v25;
  v14 = *v25;
  if ( (*v25 & 2) != 0 )
  {
LABEL_29:
    v12 = v24[0];
LABEL_30:
    v13 = (_WORD *)((char *)v8 + v12 + 40);
LABEL_31:
    *v13 = v3;
    goto LABEL_26;
  }
LABEL_15:
  v15 = v14 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v15 || (*(_BYTE *)(v15 + 28) & 0x7Fu) - 47 > 2 )
    goto LABEL_29;
LABEL_17:
  v16 = sub_781830(v15);
  v17 = v16;
  if ( v16 <= 0xF )
  {
    v18 = v3 & ((1 << v16) - 1);
    v19 = v18 | -(1 << v16);
    if ( ((unsigned __int16)(1 << (v17 - 1)) & (unsigned __int16)v3) != 0 )
      LOWORD(v18) = v19;
    LOWORD(v3) = v18;
  }
  v20 = v25;
  v21 = v24[0];
  if ( v27 || !*(_BYTE *)(sub_8E5480((__int64)v24) + 51) || (v22 = (_WORD *)((char *)v20 + v26 + 72), v26 != v21) )
    v22 = (_WORD *)((char *)v20 + v21 + 40);
  *v22 = v3;
LABEL_26:
  sub_A1C0C0(v24);
  return v6;
}

