void __fastcall sub_184F560(__int64 a1, __int64 a2, char a3, unsigned __int8 a4, __int64 a5)
{
  char v5; // al
  char v6; // r12
  unsigned int v7; // edx
  unsigned int *v8; // r13
  __int64 v9; // r12
  unsigned int v10; // r14d
  __int64 v11; // rbp
  __int64 v12; // rax
  unsigned int *v13; // r15
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _BYTE *v17; // rax
  unsigned __int8 v18; // al
  unsigned int v19; // eax
  char v20; // r14
  int v21; // eax
  unsigned int v22; // eax
  __int64 v23; // rax
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned int v34; // eax
  char v37; // [rsp+3Bh] [rbp-DDh]
  unsigned __int8 v38[8]; // [rsp+3Ch] [rbp-DCh] BYREF
  int v39; // [rsp+44h] [rbp-D4h] BYREF
  __int64 v40; // [rsp+48h] [rbp-D0h] BYREF
  _DWORD v41[50]; // [rsp+50h] [rbp-C8h] BYREF

  v38[0] = a4;
  v5 = sub_147B3A0(a2, v41);
  if ( !v5 )
    return;
  v6 = v5;
  v41[0] = 0;
  sub_147B3A0(a2, v41);
  v7 = *(_DWORD *)(*(_QWORD *)(a2 + 128) + 144LL * v41[0] + 72);
  if ( !v7 )
    return;
  v37 = v6;
  v8 = nullptr;
  v9 = *(_QWORD *)(a2 + 128) + 144LL * v41[0];
  v10 = 0;
  do
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(v9 + 96) + 32LL * v10;
      v13 = *(unsigned int **)(v12 + 16);
      if ( !v13 || !v13[25] )
        goto LABEL_6;
      if ( !v10 )
        break;
      sub_168B9F0((__int64)v41, (__int64 *)(a1 + 8), v13[6], 0xEC5u, 0);
      v11 = sub_15890D0((__int64)v41, v38);
      v40 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v13 + 16LL))(v13);
      sub_1587DB0(v11, &v40);
      sub_15F7200(v41);
      v7 = *(_DWORD *)(v9 + 72);
LABEL_6:
      if ( ++v10 >= v7 )
        goto LABEL_11;
    }
    v10 = 1;
    v8 = *(unsigned int **)(v12 + 16);
  }
  while ( v7 > 1 );
LABEL_11:
  if ( !v8 )
    return;
  if ( sub_B74820((__int64)v8) )
  {
    sub_168B9F0((__int64)v41, (__int64 *)(a1 + 8), v8[6], 0xEC0u, 0);
    v40 = (*(__int64 (__fastcall **)(unsigned int *))(*(_QWORD *)v8 + 16LL))(v8);
    sub_1587DB0((__int64)v41, &v40);
    sub_15F7200(v41);
  }
  v17 = *(_BYTE **)a2;
  if ( (**(_BYTE **)a2 & 7) == 3 )
    goto LABEL_30;
  if ( *(_DWORD *)(a2 + 96) != 7 )
    goto LABEL_16;
  if ( sub_15AC4A0(a2) )
  {
LABEL_30:
    v24 = sub_B73090((__int64)v8);
    sub_168B9F0((__int64)v41, (__int64 *)(a1 + 8), v24, 0xEC7u, 0);
    v40 = *(_QWORD *)(a2 + 88);
    v25 = sub_1587DB0((__int64)v41, &v40);
    v39 = 0;
    v26 = sub_1587D10(v25, &v39);
    sub_15890D0(v26, v38);
    sub_15F7200(v41);
    *(_BYTE *)(a2 + 720) |= 1u;
  }
  v17 = *(_BYTE **)a2;
LABEL_16:
  if ( (v17[4] & 2) != 0 )
  {
    v31 = sub_B73090((__int64)v8);
    sub_168B9F0((__int64)v41, (__int64 *)(a1 + 8), v31, 0xEC7u, 0);
    v40 = *(_QWORD *)(a2 + 88);
    v32 = sub_1587DB0((__int64)v41, &v40);
    v39 = 1;
    v33 = sub_1587D10(v32, &v39);
    sub_15890D0(v33, v38);
    sub_15F7200(v41);
    *(_BYTE *)(a2 + 720) |= 1u;
    v17 = *(_BYTE **)a2;
  }
  if ( *((_DWORD *)v17 + 66) )
  {
    v27 = sub_16A2930(a1, a2 + 8, 0, v14, v15, v16);
    if ( !v27 || (*(_BYTE *)(v27 + 8) & 0x7Fu) - 59 > 2 )
    {
      v28 = sub_B73090((__int64)v8);
      sub_168B9F0((__int64)v41, (__int64 *)(a1 + 8), v28, 0xEC7u, 0);
      v40 = *(_QWORD *)(a2 + 88);
      v29 = sub_1587DB0((__int64)v41, &v40);
      v39 = 2;
      v30 = sub_1587D10(v29, &v39);
      sub_15890D0(v30, v38);
      sub_15F7200(v41);
      *(_BYTE *)(a2 + 720) |= 1u;
    }
  }
  v18 = v38[0];
  if ( v38[0] )
  {
    if ( *(_DWORD *)(v9 + 84) )
    {
      v19 = sub_B73090((__int64)v8);
      sub_168B9F0((__int64)v41, (__int64 *)(a1 + 8), v19, 0xEC6u, 0);
      v40 = *(_QWORD *)(a2 + 88);
      sub_1587DB0((__int64)v41, &v40);
      sub_15F7200(v41);
      v18 = v38[0];
      goto LABEL_22;
    }
  }
  else
  {
LABEL_22:
    v20 = v18 | (a5 == 0);
    if ( !v20 && ((*(_BYTE *)(a5 + 8) + 70) & 0x7Fu) <= 3 )
    {
      v21 = a3 & 7;
      if ( v21 != 7 )
      {
        if ( v21 == 3 )
        {
          v34 = sub_B73090((__int64)v8);
          sub_168B9F0((__int64)v41, (__int64 *)(a1 + 8), v34, 0xEC3u, 0);
        }
        else
        {
          if ( v21 != 4 )
            return;
          v20 = v37;
          v22 = sub_B73090((__int64)v8);
          sub_168B9F0((__int64)v41, (__int64 *)(a1 + 8), v22, 0xEC3u, 0);
        }
        LOBYTE(v39) = v20;
        v23 = sub_1588420((__int64)v41, (unsigned __int8 *)&v39);
        v40 = *(_QWORD *)(a2 + 88);
        sub_1587DB0(v23, &v40);
        sub_15F7200(v41);
        *(_BYTE *)(a2 + 720) |= 1u;
      }
    }
  }
}
