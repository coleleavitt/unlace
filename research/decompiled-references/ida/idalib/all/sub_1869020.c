void __fastcall sub_1869020(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rdx
  unsigned int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // [rsp+0h] [rbp-E8h]
  _QWORD v25[2]; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v26; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v27[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v29; // [rsp+40h] [rbp-A8h] BYREF
  char v30; // [rsp+98h] [rbp-50h]
  unsigned int v31; // [rsp+A0h] [rbp-48h]
  char v32; // [rsp+A4h] [rbp-44h]

  v25[0] = a2;
  v6 = v25;
  sub_1CB44B0(a1, v25);
  v10 = v25[0];
  if ( !v25[0] || (*(_BYTE *)(v25[0] + 28LL) & 0x7Fu) - 34 > 5 )
  {
    sub_168B9F0((__int64)v27, (__int64 *)(a1 + 8), a3, 0xBu, 0);
    sub_15F7200(v27);
    return;
  }
  v11 = *(_QWORD *)(v25[0] + 104LL);
  *(_BYTE *)(v25[0] + 84LL) &= ~0x40u;
  if ( (((unsigned __int8)v11 | (unsigned __int8)(v11 >> 1)) & 1) != 0 )
    goto LABEL_8;
  v6 = (_QWORD *)v10;
  v12 = sub_7053D0((__int64 *)(v10 + 104), v10, v11, v7, v8, v9);
  v13 = (__int64)v12;
  if ( !v12 )
    goto LABEL_8;
  if ( (unsigned int)sub_B77D20((__int64)v12) == 2
    && ((v16 = *(_QWORD *)(v13 + 104), (((unsigned __int8)v16 | (unsigned __int8)(v16 >> 1)) & 1) != 0)
     || (v16 & 0xFFFFFFFFFFFFFFFCLL) == 0)
    || (v6 = v27, (unsigned __int8)sub_B7D390(v13, (__int64)v27, 0, v14)) )
  {
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
LABEL_8:
    v15 = sub_17A23E0(v10, (__int64)v6, v11, v7, v8, v9);
    if ( v15 )
    {
      sub_168B9F0((__int64)v27, (__int64 *)(a1 + 8), *(_DWORD *)(v10 + 24), 0xC65u, 0);
      if ( v30 )
      {
        sub_AE9DF0(&v29, v15, 0xEu);
      }
      else if ( v32 )
      {
        v18 = sub_168B9E0(v27);
        v22 = v28;
        if ( v28 )
        {
          v24 = v18;
          v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28);
          v18 = v24;
        }
        v26 = v22;
        v23 = sub_1587BC0(v18, &v26, v18, v19, v20, v21);
        sub_AE9DF0((unsigned __int8 **)(*v23 + 32LL * v31 + 8), v15, 0xEu);
      }
      sub_15F7200(v27);
      sub_B88650(v10, 1);
    }
    if ( (unsigned __int8)sub_B81C90(v10) )
    {
      sub_168B9F0((__int64)v27, (__int64 *)(a1 + 8), a3, 0xE50u, 0);
      sub_15F7200(v27);
    }
    *(_BYTE *)(v10 + 82) |= 1u;
    sub_B7C8B0(v10, 1, a4);
    return;
  }
  sub_168B9F0((__int64)v27, (__int64 *)(a1 + 8), a3, 0xE4Du, 0);
  sub_15F7200(v27);
  v17 = *(_DWORD *)(v13 + 24);
  if ( !v17 )
    v17 = a3;
  sub_168B9F0((__int64)v27, (__int64 *)(a1 + 8), v17, (*(_BYTE *)(v13 + 29) & 2) == 0 ? 112 : 114, 0);
  sub_15F7200(v27);
  sub_B88650(v10, 1);
}
