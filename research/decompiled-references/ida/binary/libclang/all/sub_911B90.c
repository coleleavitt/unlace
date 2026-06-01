__int64 __fastcall sub_911B90(__int64 a1, __int64 a2)
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
  __int64 *v17; // r14
  __int64 v18; // r12
  _WORD *v19; // rax
  _QWORD v21[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 *v22; // [rsp+18h] [rbp-50h]
  unsigned int v23; // [rsp+20h] [rbp-48h]
  int v24; // [rsp+30h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(unsigned __int16 *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v21, v5);
  sub_A1A5E0(v4, 56);
  v6 = sub_9E26A0(a1, a2, v21);
  if ( !(_BYTE)v6 )
    goto LABEL_24;
  v7 = v24;
  if ( v24 )
  {
    if ( v24 == 1 )
      goto LABEL_26;
LABEL_13:
    if ( (unsigned int)(v7 - 2) <= 1 )
      BUG();
    v8 = v22;
    v14 = *(_QWORD *)v22[4];
    if ( (v14 & 2) != 0 )
      goto LABEL_27;
    goto LABEL_15;
  }
  v8 = v22;
  if ( !v22 )
  {
    v10 = 0x400000001LL;
    goto LABEL_34;
  }
  if ( !v23 )
  {
    v9 = v22[4];
LABEL_6:
    if ( v23 != *(_DWORD *)(v9 + 16) && v23 )
    {
      v10 = **(_QWORD **)((char *)v8 + v23 + 32);
      if ( (v10 & 2) != 0 )
        goto LABEL_9;
    }
    else
    {
      v10 = *(_QWORD *)v9;
      if ( (*(_QWORD *)v9 & 2) != 0 )
        goto LABEL_9;
    }
LABEL_34:
    v15 = v10 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v15 || (*(_BYTE *)(v15 + 28) & 0x7Fu) - 47 > 2 )
    {
LABEL_9:
      v11 = sub_8E5480((__int64)v21);
      v12 = v21[0];
      if ( *(_BYTE *)(v11 + 51) )
      {
        v13 = (_WORD *)((char *)v8 + v23 + 72);
        if ( v23 == v21[0] )
          goto LABEL_29;
      }
      goto LABEL_28;
    }
    goto LABEL_17;
  }
  sub_A1DB00(v21);
  v7 = v24;
  if ( v24 != 1 )
  {
    if ( !v24 )
    {
      v8 = v22;
      v9 = v22[4];
      goto LABEL_6;
    }
    goto LABEL_13;
  }
LABEL_26:
  v8 = v22;
  v14 = *v22;
  if ( (*v22 & 2) != 0 )
  {
LABEL_27:
    v12 = v21[0];
LABEL_28:
    v13 = (_WORD *)((char *)v8 + v12 + 40);
LABEL_29:
    *v13 = v3;
    goto LABEL_24;
  }
LABEL_15:
  v15 = v14 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v15 || (*(_BYTE *)(v15 + 28) & 0x7Fu) - 47 > 2 )
    goto LABEL_27;
LABEL_17:
  v16 = sub_781830(v15);
  if ( v16 <= 0xF )
    v3 &= (1 << v16) - 1;
  v17 = v22;
  v18 = v21[0];
  if ( v24 || !*(_BYTE *)(sub_8E5480((__int64)v21) + 51) || (v19 = (_WORD *)((char *)v17 + v23 + 72), v23 != v18) )
    v19 = (_WORD *)((char *)v17 + v18 + 40);
  *v19 = v3;
LABEL_24:
  sub_A1C0C0(v21);
  return v6;
}

