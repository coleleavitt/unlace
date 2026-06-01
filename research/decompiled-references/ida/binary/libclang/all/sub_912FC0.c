__int64 __fastcall sub_912FC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  unsigned int v4; // edx
  __int64 v5; // r13
  __int64 v6; // rax
  unsigned int v7; // ebx
  int v8; // eax
  _QWORD *v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  unsigned __int64 v12; // rdi
  _QWORD *v13; // r14
  __int64 v14; // r13
  __int64 v15; // r12
  __int64 v17; // rax
  __int64 v18; // r12
  void *v19; // [rsp+0h] [rbp-A8h] BYREF
  unsigned int v20; // [rsp+8h] [rbp-A0h]
  char v21; // [rsp+Ch] [rbp-9Ch]
  int v22; // [rsp+10h] [rbp-98h]
  void *v23; // [rsp+20h] [rbp-88h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-80h]
  char v25; // [rsp+2Ch] [rbp-7Ch]
  int v26; // [rsp+30h] [rbp-78h]
  __int64 v27[3]; // [rsp+40h] [rbp-68h] BYREF
  _QWORD *v28; // [rsp+58h] [rbp-50h]
  unsigned int v29; // [rsp+60h] [rbp-48h]
  int v30; // [rsp+70h] [rbp-38h]

  v2 = *(_QWORD *)(a1 + 184);
  v3 = sub_A1A5A0(v2, 24);
  v4 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = 0;
  v20 = v4;
  v19 = *(void **)v3;
  LOBYTE(v4) = *(_BYTE *)(v3 + 12);
  LODWORD(v3) = *(_DWORD *)(v3 + 16);
  v21 = v4;
  v22 = v3;
  sub_A1A5E0(v2, 24);
  v5 = *(_QWORD *)(a1 + 184);
  v6 = sub_A1A5A0(v5, 56);
  sub_A1C070(v27, v6);
  sub_A1A5E0(v5, 56);
  v7 = sub_9E26A0(a1, a2, v27);
  if ( !(_BYTE)v7 )
    goto LABEL_18;
  v8 = v30;
  if ( v30 )
  {
    if ( v30 != 1 )
    {
LABEL_30:
      if ( (unsigned int)(v8 - 2) <= 1 )
        BUG();
      v9 = v28;
      goto LABEL_5;
    }
    goto LABEL_23;
  }
  v9 = v28;
  if ( !v28 )
  {
    v10 = 64;
    goto LABEL_6;
  }
  if ( !v29 )
  {
LABEL_5:
    v10 = v9[4];
    goto LABEL_6;
  }
  sub_A1DB00(v27);
  v8 = v30;
  if ( v30 == 1 )
  {
LABEL_23:
    v11 = *v28;
    if ( (*v28 & 2) == 0 )
      goto LABEL_7;
LABEL_24:
    v17 = sub_8FA0E0(v27);
    v18 = v17;
    if ( *(_DWORD *)(v17 + 8) <= 0x40u && v20 <= 0x40 )
    {
      *(_QWORD *)v17 = v19;
      *(_DWORD *)(v17 + 8) = v20;
    }
    else
    {
      sub_2585EA0(v17, &v19);
    }
    *(_BYTE *)(v18 + 12) = v21;
    *(_DWORD *)(v18 + 16) = v22;
    goto LABEL_18;
  }
  if ( v30 )
    goto LABEL_30;
  v10 = v28[4];
  if ( v29 != *(_DWORD *)(v10 + 16) && v29 )
    v10 = *(_QWORD *)((char *)v28 + v29 + 32);
LABEL_6:
  v11 = *(_QWORD *)v10;
  if ( (*(_QWORD *)v10 & 2) != 0 )
    goto LABEL_24;
LABEL_7:
  v12 = v11 & 0xFFFFFFFFFFFFFFFCLL;
  if ( !v12 || (*(_BYTE *)(v12 + 28) & 0x7Fu) - 47 > 2 )
    goto LABEL_24;
  sub_781830(v12);
  v24 = v20;
  if ( v20 > 0x40 )
    sub_2585B30(&v23);
  else
    v23 = v19;
  v13 = v28;
  v14 = v27[0];
  v25 = v21;
  v26 = v22;
  if ( v30 || !*(_BYTE *)(sub_8E5480((__int64)v27) + 51) || (v15 = (__int64)v13 + v29 + 72, v29 != v14) )
    v15 = (__int64)v13 + v14 + 40;
  if ( *(_DWORD *)(v15 + 8) > 0x40u && *(_QWORD *)v15 )
    operator delete[](*(void **)v15);
  *(_QWORD *)v15 = v23;
  *(_DWORD *)(v15 + 8) = v24;
  *(_BYTE *)(v15 + 12) = v25;
  *(_DWORD *)(v15 + 16) = v26;
LABEL_18:
  sub_A1C0C0(v27);
  if ( v20 > 0x40 && v19 )
    operator delete[](v19);
  return v7;
}

