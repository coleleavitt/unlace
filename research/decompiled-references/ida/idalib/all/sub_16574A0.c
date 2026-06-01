__int64 __fastcall sub_16574A0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdi
  char v8; // si
  __int64 v9; // rsi
  unsigned int v10; // ebx
  unsigned __int64 v11; // rax
  _QWORD *v12; // r12
  _QWORD *v13; // rax
  _QWORD *v14; // r14
  __int64 (__fastcall *v15)(__int64); // rax
  __int64 v16; // r15
  __int64 (__fastcall *v17)(__int64); // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD *v21; // rbp
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 (__fastcall *v24)(__int64); // rax
  __int64 v25; // r14
  __int64 (__fastcall *v26)(__int64); // rax
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v30; // rdi
  __int64 (*v31)(void); // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rsi
  unsigned __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  char v37; // al
  char v38; // al
  __int64 v39; // [rsp+0h] [rbp-108h]
  __int64 v40; // [rsp+8h] [rbp-100h]
  _BYTE v41[8]; // [rsp+10h] [rbp-F8h] BYREF
  unsigned __int64 v42; // [rsp+18h] [rbp-F0h]
  __int64 v43; // [rsp+20h] [rbp-E8h]
  __int64 v44; // [rsp+28h] [rbp-E0h]
  unsigned __int64 v45; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v46; // [rsp+38h] [rbp-D0h]
  int v47; // [rsp+40h] [rbp-C8h]
  char v48; // [rsp+48h] [rbp-C0h]
  __int64 v49; // [rsp+50h] [rbp-B8h]
  unsigned __int64 v50; // [rsp+58h] [rbp-B0h]
  __int64 v51; // [rsp+60h] [rbp-A8h] BYREF
  void *v52; // [rsp+68h] [rbp-A0h]
  __int64 v53; // [rsp+78h] [rbp-90h] BYREF
  void *ptr; // [rsp+98h] [rbp-70h]
  __int64 v55; // [rsp+A8h] [rbp-60h] BYREF

  v6 = *(_QWORD *)(a2 + 16);
  v7 = v6 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v6 & 4) != 0 )
    v7 = *(_QWORD *)v7;
  v8 = *(_BYTE *)(v7 + 8) & 0x7F;
  if ( v8 == 62 )
  {
    v40 = a4;
    v39 = a3;
    v6 = sub_B8EAA0(v7);
    a4 = v40;
    a3 = v39;
    v8 = *(_BYTE *)(v6 + 8) & 0x7F;
  }
  v9 = (v8 + 70) & 0x7F;
  LOBYTE(v6) = (unsigned __int8)v9 <= 3u;
  LOBYTE(v9) = a3 != 0;
  LOBYTE(v6) = (a3 != 0) & v6;
  v10 = v6;
  if ( (_BYTE)v6 )
  {
    v10 = 0;
    if ( (*(_BYTE *)(a1[29] + 1LL) & 8) == 0 )
      return v10;
    v43 = a3;
    v44 = a4;
    v51 = a2 | 3;
    v30 = a2 & 0xFFFFFFFFFFFFFFF8LL;
    v42 = a2 & 0xFFFFFFFFFFFFFFF8LL;
    v47 = 0;
    v45 = 0;
    v41[0] = v41[0] & 0xF8 | 7;
    v46 = a1[31] + 2448LL;
    if ( (a4 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v38 = sub_B72F20(v30);
      v30 = v42;
      v49 = 0;
      v48 = v38 & 1 | v48 & 0xFC;
      if ( (v41[0] & 4) == 0 )
        goto LABEL_34;
    }
    else
    {
      v48 &= 0xFCu;
      v49 = 0;
    }
    v30 = sub_1654A20(v30);
LABEL_34:
    v50 = v30;
    v31 = *(__int64 (**)(void))(*(_QWORD *)v30 + 32LL);
    if ( (char *)v31 == (char *)sub_A01140 )
      v32 = sub_B70A60(v30);
    else
      v32 = v31();
    v33 = a1[68];
    v50 = v32;
    sub_1655430((__int64)&v51, v33);
    LOBYTE(v10) = (unsigned int)sub_1657130((__int64)a1, (__int64)&v51, (__int64)v41) != 1;
    if ( ptr != &v55 )
      free(ptr);
    if ( v52 != &v53 )
      free(v52);
    if ( v45 && v46 )
      sub_1580C40(v46, v45);
    return v10;
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) != 0x32
    || (*(_BYTE *)(a2 + 88) & 7) != 0 && (((*(_BYTE *)(a2 + 88) & 7) + 5) & 7u) <= 1 )
  {
    return 1;
  }
  v11 = sub_15F1670((__int64)a1);
  if ( v11 )
  {
    v12 = (_QWORD *)sub_BA85D0(v11);
  }
  else
  {
    v9 = 0;
    v34 = sub_15F1640((__int64)a1, 0);
    if ( !v34 )
      return v10;
    v35 = *(_QWORD *)(v34 + 16);
    v36 = v35 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v35 & 4) != 0 )
      v36 = *(_QWORD *)(v36 + 8);
    if ( (*(_BYTE *)(v36 + 8) & 0x7Fu) - 21 > 1 )
      return v10;
    if ( v36 == 48 )
      return v10;
    v37 = *(_BYTE *)(v36 - 20) & 0x7F;
    if ( v37 != 21 && v37 != 22 )
      return v10;
    v12 = *(_QWORD **)(v36 + 40);
  }
  if ( !v12 )
    return v10;
  v13 = sub_BA8BD0(a2);
  v14 = v13;
  if ( v13 )
  {
    if ( v13 == v12 )
      return 1;
    v15 = *(__int64 (__fastcall **)(__int64))(*v12 + 32LL);
    v16 = v15 == sub_A55E60 ? v12[12] : v15((__int64)v12);
    v17 = *(__int64 (__fastcall **)(__int64))(*v14 + 32LL);
    v18 = v17 == sub_A55E60 ? v14[12] : v17((__int64)v14);
    if ( v16 == v18 )
      return 1;
  }
  if ( (*(_BYTE *)(a2 + 88) & 7) != 1 )
  {
    v21 = sub_BA8BD0(a2);
    if ( v12 != v21 )
    {
      do
      {
        v24 = *(__int64 (__fastcall **)(__int64))(*v21 + 32LL);
        if ( v24 == sub_A55E60 )
          v25 = v21[12];
        else
          v25 = v24((__int64)v21);
        v26 = *(__int64 (__fastcall **)(__int64))(*v12 + 32LL);
        if ( v26 == sub_A55E60 )
          v27 = v12[12];
        else
          v27 = v26((__int64)v12);
        if ( v25 == v27 )
          break;
        v28 = sub_BAB630((__int64)v12, v9, v19, v20, v22, v23);
        v12 = (_QWORD *)v28;
        if ( !v28 )
          return v10;
      }
      while ( v21 != (_QWORD *)v28 );
    }
    return 1;
  }
  return v10;
}
