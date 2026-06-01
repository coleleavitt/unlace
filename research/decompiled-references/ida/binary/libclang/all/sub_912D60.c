__int64 __fastcall sub_912D60(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  char v3; // r13
  __int64 v4; // r14
  __int64 v5; // rax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rax
  _BYTE *v14; // rdx
  __int64 v15; // rdi
  __int64 *v16; // r14
  __int64 v17; // r12
  _BYTE *v18; // rax
  _QWORD v20[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 *v21; // [rsp+18h] [rbp-50h]
  unsigned int v22; // [rsp+20h] [rbp-48h]
  int v23; // [rsp+30h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = *(_BYTE *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = *(_QWORD *)(a1 + 184);
  v5 = sub_A1A5A0(v4, 56);
  sub_A1C070(v20, v5);
  sub_A1A5E0(v4, 56);
  v6 = sub_9E26A0(a1, a2, v20);
  if ( !(_BYTE)v6 )
    goto LABEL_24;
  v7 = v23;
  if ( v23 )
  {
    if ( v23 == 1 )
      goto LABEL_26;
LABEL_15:
    if ( (unsigned int)(v7 - 2) <= 1 )
      BUG();
    v8 = v21;
    v15 = *(_QWORD *)v21[4];
    if ( (v15 & 2) != 0 )
      goto LABEL_27;
    goto LABEL_17;
  }
  v8 = v21;
  if ( !v21 )
  {
    v10 = 0x400000001LL;
    goto LABEL_9;
  }
  if ( !v22 )
  {
    v9 = v21[4];
LABEL_6:
    if ( v22 != *(_DWORD *)(v9 + 16) && v22 )
    {
      v10 = **(_QWORD **)((char *)v8 + v22 + 32);
      if ( (v10 & 2) != 0 )
        goto LABEL_11;
    }
    else
    {
      v10 = *(_QWORD *)v9;
      if ( (*(_QWORD *)v9 & 2) != 0 )
        goto LABEL_11;
    }
LABEL_9:
    v11 = v10 & 0xFFFFFFFFFFFFFFFCLL;
    if ( !v11 || (*(_BYTE *)(v11 + 28) & 0x7Fu) - 47 > 2 )
    {
LABEL_11:
      v12 = sub_8E5480((__int64)v20);
      v13 = v20[0];
      if ( *(_BYTE *)(v12 + 51) )
      {
        v14 = (char *)v8 + v22 + 72;
        if ( v22 == v20[0] )
          goto LABEL_29;
      }
      goto LABEL_28;
    }
    goto LABEL_19;
  }
  sub_A1DB00(v20);
  v7 = v23;
  if ( v23 != 1 )
  {
    if ( !v23 )
    {
      v8 = v21;
      v9 = v21[4];
      goto LABEL_6;
    }
    goto LABEL_15;
  }
LABEL_26:
  v8 = v21;
  v15 = *v21;
  if ( (*v21 & 2) != 0 )
  {
LABEL_27:
    v13 = v20[0];
LABEL_28:
    v14 = (char *)v8 + v13 + 40;
LABEL_29:
    *v14 = v3;
    goto LABEL_24;
  }
LABEL_17:
  v11 = v15 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v11 || (*(_BYTE *)(v11 + 28) & 0x7Fu) - 47 > 2 )
    goto LABEL_27;
LABEL_19:
  sub_781830(v11);
  v16 = v21;
  v17 = v20[0];
  if ( v23 || !*(_BYTE *)(sub_8E5480((__int64)v20) + 51) || (v18 = (char *)v16 + v22 + 72, v22 != v17) )
    v18 = (char *)v16 + v17 + 40;
  *v18 = v3;
LABEL_24:
  sub_A1C0C0(v20);
  return v6;
}

