__int64 __fastcall sub_18F40B0(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4, double a5)
{
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  __int16 v9; // ax
  __int64 v10; // r15
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rdx
  __int16 v13; // ax
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  _QWORD *v26; // rax
  char v27; // al
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // r14
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int64 v36; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v37; // [rsp+0h] [rbp-F8h]
  __int64 *v38; // [rsp+8h] [rbp-F0h]
  __int64 v39; // [rsp+10h] [rbp-E8h]
  __int64 v40; // [rsp+10h] [rbp-E8h]
  __int64 v41; // [rsp+10h] [rbp-E8h]
  __int64 v42; // [rsp+10h] [rbp-E8h]
  __int64 v43; // [rsp+10h] [rbp-E8h]
  __int64 v44; // [rsp+10h] [rbp-E8h]
  __int64 v45; // [rsp+18h] [rbp-E0h]
  __int64 v46; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v47; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v48[2]; // [rsp+30h] [rbp-C8h] BYREF
  _QWORD *v49; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v50[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v51; // [rsp+A8h] [rbp-50h]
  unsigned int v52; // [rsp+B0h] [rbp-48h]
  char v53; // [rsp+B4h] [rbp-44h]

  v7 = *a3 & 0xFFFFFFFFFFFFFFFELL;
  v8 = v7;
  v9 = *(_WORD *)v7 & 0x1FF;
  if ( v9 == 48 )
  {
    v8 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v7 + 16) & 4) != 0 )
      v8 = *(_QWORD *)(v8 + 40);
    v9 = *(_WORD *)v8 & 0x1FF;
  }
  if ( v9 == 116 )
  {
    v8 = *(_QWORD *)(v8 + 24);
    v9 = *(_WORD *)v8 & 0x1FF;
  }
  v10 = 0;
  if ( v9 == 79 )
  {
    v7 = sub_BFA3B0(v8);
    v10 = sub_BFA560(v8);
  }
  v11 = *a4 & 0xFFFFFFFFFFFFFFFELL;
  v12 = v11;
  v13 = *(_WORD *)v11 & 0x1FF;
  if ( v13 == 48 )
  {
    v12 = *(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(v11 + 16) & 4) != 0 )
      v12 = *(_QWORD *)(v12 + 40);
    v13 = *(_WORD *)v12 & 0x1FF;
  }
  if ( v13 == 116 )
  {
    v12 = *(_QWORD *)(v12 + 24);
    v13 = *(_WORD *)v12 & 0x1FF;
  }
  v36 = 0;
  if ( v13 == 79 )
  {
    v37 = v12;
    v11 = sub_BFA3B0(v12);
    v36 = sub_BFA560(v37);
  }
  v15 = a1 + 8;
  v38 = (__int64 *)(a1 + 8);
  sub_168B9F0((__int64)v48, (__int64 *)(a1 + 8), a2, 0x14A4u, 0);
  if ( v51 )
  {
    v15 = *(_QWORD *)(v7 + 8);
    sub_AE9DF0(v50, v15, 8u);
    v27 = v51;
  }
  else
  {
    if ( !v53 )
    {
      v16 = *(_QWORD *)(v11 + 8);
      goto LABEL_20;
    }
    v40 = *(_QWORD *)(v7 + 8);
    v20 = sub_168B9E0(v48);
    v23 = v40;
    v24 = v20;
    v25 = (__int64)v49;
    if ( v49 )
    {
      v45 = v40;
      v41 = v24;
      v25 = (*(__int64 (__fastcall **)(_QWORD *))(*v49 + 32LL))(v49);
      v23 = v45;
      v24 = v41;
    }
    v42 = v23;
    v47 = v25;
    v26 = sub_1587BC0(v24, &v47, v24, v23, v21, v22);
    v15 = v42;
    sub_AE9DF0((unsigned __int8 **)(*v26 + 32LL * v52 + 8), v42, 8u);
    v27 = v51;
  }
  v16 = *(_QWORD *)(v11 + 8);
  if ( v27 )
  {
    v15 = *(_QWORD *)(v11 + 8);
    sub_AE9DF0(v50, v15, 8u);
    goto LABEL_21;
  }
LABEL_20:
  if ( v53 )
  {
    v43 = v16;
    v28 = sub_168B9E0(v48);
    v32 = v43;
    v33 = v28;
    v34 = (__int64)v49;
    if ( v49 )
    {
      v34 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, __int64, __int64))(*v49 + 32LL))(v49, *v49, v29, v43);
      v32 = v43;
    }
    v44 = v32;
    v47 = v34;
    v35 = sub_1587BC0(v33, &v47, v29, v32, v30, v31);
    v15 = v44;
    sub_AE9DF0((unsigned __int8 **)(*v35 + 32LL * v52 + 8), v44, 8u);
  }
LABEL_21:
  v46 = sub_EEC8C0(*a3 & 0xFFFFFFFFFFFFFFFELL, v15, a5);
  v39 = sub_1587DB0((__int64)v48, &v46);
  v47 = sub_EEC8C0(*a4 & 0xFFFFFFFFFFFFFFFELL, (__int64)&v46, a5);
  sub_1587DB0(v39, &v47);
  sub_15F7200(v48);
  if ( v10 )
  {
    sub_168B9F0((__int64)v48, v38, *(_DWORD *)(v10 + 24), 0x191Au, 0);
    LODWORD(v46) = 0;
    v17 = sub_1587D10((__int64)v48, (int *)&v46);
    v47 = *(_QWORD *)((*a3 & 0xFFFFFFFFFFFFFFFELL) + 8);
    sub_162B6D0(v17, &v47);
    sub_15F7200(v48);
  }
  if ( v36 )
  {
    sub_168B9F0((__int64)v48, v38, *(_DWORD *)(v36 + 24), 0x191Au, 0);
    LODWORD(v46) = 1;
    v18 = sub_1587D10((__int64)v48, (int *)&v46);
    v47 = *(_QWORD *)((*a4 & 0xFFFFFFFFFFFFFFFELL) + 8);
    sub_162B6D0(v18, &v47);
    sub_15F7200(v48);
  }
  return 0;
}
