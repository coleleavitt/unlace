void __fastcall sub_17A3D60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // r13
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r14
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rsi
  __int64 v25; // rdx
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // [rsp-8h] [rbp-38h] BYREF
  __int64 v31; // [rsp+0h] [rbp-30h]

  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2320LL) + 1LL) & 8) == 0 )
    return;
  v5 = *(_QWORD *)(sub_B8C1B0(a2 + 64) + 16);
  if ( (v5 & 4) != 0 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFF8LL) + 8LL) & 0x7Fu) - 59 > 2 )
      goto LABEL_4;
  }
  else if ( (*(_BYTE *)((v5 & 0xFFFFFFFFFFFFFFF8LL) + 8) & 0x7Fu) - 59 > 2 )
  {
LABEL_4:
    v6 = (_QWORD *)(*(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v6 = (_QWORD *)*v6;
    sub_1A2F990(&v30, a1, v6);
    if ( v31 )
    {
      v7 = *(_QWORD *)(a1 + 248);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 232) + 152LL) > 0xB532B7Fu )
      {
        v9 = *(unsigned __int16 *)(a3 + 16);
      }
      else
      {
        v8 = *(_QWORD *)(a3 + 32);
        v9 = 1;
        if ( v8 )
          v9 = *(unsigned __int16 *)(v8 + 14);
      }
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v31 + 48LL))(v31, a2, v9);
      sub_AB9320(v7, a2, v10, v11, v12, v13);
    }
    return;
  }
  sub_995750(a2);
  if ( !v14 )
  {
    v15 = *(_QWORD *)(a2 + 120);
    if ( (v15 & 4) != 0 || (v15 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
    {
      v16 = *(_QWORD *)(a1 + 248);
      v17 = sub_B72690(a2 + 64);
      v22 = sub_AB31E0(v16, v17, v18, v19, v20, v21);
      v23 = *(_QWORD *)(a1 + 248);
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 232) + 152LL) > 0xB532B7Fu )
      {
        v25 = *(unsigned __int16 *)(a3 + 16);
      }
      else
      {
        v24 = *(_QWORD *)(a3 + 32);
        v25 = 1;
        if ( v24 )
          v25 = *(unsigned __int16 *)(v24 + 14);
      }
      v26 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v22 + 48LL))(v22, a2, v25);
      sub_AB9320(v23, a2, v26, v27, v28, v29);
    }
  }
}
