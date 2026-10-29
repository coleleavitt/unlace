__int64 __fastcall sub_185CDC0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbp
  bool v9; // zf
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // r15
  __int64 v20; // rbp
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // r8
  _QWORD *v39; // rdi
  unsigned __int64 v40; // rax
  __int64 v41; // rax
  void (*v42)(); // rdx
  void (*v43)(); // rdx
  int v46; // [rsp+0h] [rbp-98h]
  __int64 v47; // [rsp+0h] [rbp-98h]
  __int16 v48; // [rsp+Ch] [rbp-8Ch]
  unsigned __int64 v49; // [rsp+18h] [rbp-80h] BYREF
  _BYTE v50[120]; // [rsp+20h] [rbp-78h] BYREF

  v7 = a3 + 72;
  v9 = a3 == 0;
  v10 = 0;
  if ( !v9 )
    v10 = v7;
  sub_183ABA0((__int64)v50, a1, v10, a4, a5, a6);
  v13 = *(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  v14 = (unsigned int)*(unsigned __int8 *)(v13 + 16) - 25;
  if ( (unsigned int)v14 > 1 )
    v13 = sub_F63050(v13, a1, v14, v11);
  v15 = *(_QWORD *)(sub_F68450(*(_QWORD *)(*(_QWORD *)(v13 + 24) & 0xFFFFFFFFFFFFFFF0LL), a1, v14, v11, v12)
                  & 0xFFFFFFFFFFFFFFF0LL);
  v17 = (unsigned int)*(unsigned __int8 *)(v15 + 16) - 25;
  if ( (unsigned int)v17 > 1 )
    v15 = sub_F63050(v15, a1, v17, v16);
  v18 = *(_WORD *)(v15 + 20) >> 2;
  v48 = *(_WORD *)(v15 + 20) >> 2;
  v19 = sub_B72690(v7);
  if ( v19 )
    v19 -= 64LL;
  v20 = sub_B96F60(v19);
  v23 = v20;
  if ( !(unsigned __int8)sub_B771C0(v20, v18, v21, v22) && *(_BYTE *)(v20 + 81) >> 5 != 2 )
  {
    v18 = v48 & 0x3F;
    v23 = sub_B9BEF0(v19, v18);
  }
  v24 = sub_B77B50(a3);
  if ( !v24 )
  {
LABEL_16:
    if ( *(char *)(v20 + 28) < 0 )
      return sub_185CCD0(v50, v18);
    sub_1910D40(a1, a2, v20, 1);
    if ( v20 != v23 )
    {
      v26 = *(_QWORD *)(a1 + 248);
      sub_B8C4D0(v23, v26);
      *(_BYTE *)(v23 + 29) |= 8u;
      v29 = sub_C1D490(a3, v26, v27, v28);
      *(_QWORD *)(v23 + 48) = sub_F68450(*(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL), v26, v30, v31, v32);
      v46 = *(_DWORD *)(a3 + 24);
      v33 = sub_EEE9A0(16, *(_QWORD **)(a1 + 248), 8u);
      v34 = v46;
      v35 = v33;
      LOWORD(v33) = *(_WORD *)v33 & 0xFE00;
      LOBYTE(v33) = v33 | 0xF9;
      *(_WORD *)v35 = v33;
      if ( unk_2CD7484 )
      {
        sub_EE9B50(249);
        v34 = v46;
      }
      *(_BYTE *)(v35 + 1) &= ~2u;
      *(_DWORD *)(v35 + 8) = v34;
      *(_DWORD *)(v35 + 12) = v34;
      *(_DWORD *)(v35 + 4) = 0;
      sub_B74930(v23, v35);
    }
    goto LABEL_21;
  }
  v18 = sub_B77A30(v20);
  v25 = sub_1E04120(a1, v18, v24, a2, 3);
  v20 = v25;
  if ( !v25 )
    return sub_185CCD0(v50, v18);
  if ( v23 != v25 )
  {
    v18 = sub_B77A30(v23);
    v23 = sub_1E04120(a1, v18, v24, a2, 3);
    if ( !v23 )
      return sub_185CCD0(v50, v18);
    goto LABEL_16;
  }
  if ( *(char *)(v23 + 28) < 0 )
    return sub_185CCD0(v50, v18);
  sub_1910D40(a1, a2, v23, 1);
LABEL_21:
  v36 = sub_190BDA0(a1, v23, *(_QWORD *)(v23 + 48), 1, *(unsigned int *)(a3 + 24), 0);
  v37 = sub_1C46CA0(a1, *(unsigned int *)(a3 + 24), v36, 0);
  v38 = *(unsigned int *)(a3 + 24);
  v39 = *(_QWORD **)(a1 + 248);
  v49 = v37 & 0xFFFFFFFFFFFFFFFELL;
  v40 = sub_EEF560(v39, &v49, 1, 0, v38, v38);
  sub_B74930(a3, v40);
  v18 = *(_QWORD *)(a1 + 248);
  sub_B8C4D0(a3, v18);
  *(_BYTE *)(a3 + 29) |= 8u;
  v41 = sub_15F1120(a1);
  if ( v41 )
  {
    v42 = *(void (**)())(*(_QWORD *)v41 + 88LL);
    if ( v42 != nullsub_438 )
    {
      v47 = v41;
      v18 = a3;
      ((void (__fastcall *)(__int64, __int64))v42)(v41, a3);
      v41 = v47;
    }
    if ( v20 != v23 )
    {
      v43 = *(void (**)())(*(_QWORD *)v41 + 88LL);
      if ( v43 != nullsub_438 )
      {
        v18 = v23;
        ((void (__fastcall *)(__int64, __int64))v43)(v41, v23);
      }
    }
  }
  return sub_185CCD0(v50, v18);
}
