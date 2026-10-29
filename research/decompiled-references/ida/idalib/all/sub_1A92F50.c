unsigned __int64 __fastcall sub_1A92F50(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4, int a5)
{
  __int64 v7; // r12
  __int64 v8; // rsi
  char v10; // r13
  __int64 v11; // rdi
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rbp
  __int64 v14; // r8
  char v15; // r14
  char v16; // dl
  char v17; // r11
  char v18; // r14
  __int64 v19; // r9
  char v20; // r11
  char v21; // r10
  char v22; // bp
  char v23; // r13
  char v24; // dl
  __int64 v25; // rsi
  unsigned __int64 v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  void **v41; // r13
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  char v46; // [rsp+4h] [rbp-84h]
  char v47; // [rsp+10h] [rbp-78h]
  char v48; // [rsp+14h] [rbp-74h]
  __int64 v49; // [rsp+18h] [rbp-70h]
  __int64 v50; // [rsp+20h] [rbp-68h]
  char v51; // [rsp+28h] [rbp-60h]
  unsigned int v52; // [rsp+2Ch] [rbp-5Ch]
  void *ptr; // [rsp+30h] [rbp-58h] BYREF
  __int64 v54; // [rsp+38h] [rbp-50h]
  _BYTE v55[72]; // [rsp+40h] [rbp-48h] BYREF

  v7 = a2;
  v8 = a2 + 48;
  v10 = *(_BYTE *)(a3 + 58);
  v11 = *(_QWORD *)(a3 + 40);
  v12 = *(_QWORD *)(a3 + 56);
  v13 = v12 >> 16;
  v14 = *(_QWORD *)(a3 + 80);
  v15 = *(_BYTE *)(a3 + 29) >> 1;
  v16 = v12 >> 33;
  v17 = BYTE2(v12) >> 5;
  v18 = v15 & 1;
  v19 = *(_QWORD *)(a3 + 88);
  v20 = v17 & 1;
  v46 = v16 & 1;
  v21 = (v13 & 8) != 0;
  v22 = (v13 & 4) != 0;
  v23 = (v10 & 2) != 0;
  v24 = *(_BYTE *)(a3 + 59) & 3;
  if ( v7 )
    v7 = v8;
  if ( !a5 )
  {
    v52 = a4;
    v50 = v14;
    v51 = *(_BYTE *)(a3 + 59) & 3;
    v49 = *(_QWORD *)(a3 + 88);
    v48 = v21;
    v47 = v20;
    a5 = sub_BA8020(a3);
    a4 = v52;
    v14 = v50;
    v24 = v51;
    v19 = v49;
    v21 = v48;
    v20 = v47;
  }
  v25 = a4;
  if ( !a4 )
    v25 = *(unsigned int *)(a3 + 24);
  v26 = sub_BA7B60(a1, v25, a5, v11, v14, v19, v7, v23, v22, v21, 1, v18, v20, v24, v46);
  sub_BA8080(v26, v25, v27, v28, v29, v30);
  if ( (*(_BYTE *)(a3 + 29) & 1) != 0 )
  {
    v41 = (void **)sub_B8C3D0(a3, v25, v31, v32, v33, v34);
    v42 = sub_B8C330(v26);
    sub_B8C0D0(v26, v41, v42, v43, v44, v45);
  }
  *(_QWORD *)(v26 + 120) = *(_QWORD *)(a3 + 120);
  v35 = *(_QWORD *)(a3 + 128);
  ptr = v55;
  *(_QWORD *)(v26 + 128) = v35;
  v54 = 0x100000000LL;
  sub_BA7F10(a3, (__int64)&ptr);
  sub_BA9CC0(
    v26,
    (__int64)a1,
    *(const void **)(a3 + 96),
    *(unsigned int *)(a3 + 104),
    (unsigned __int64)ptr,
    (unsigned int)v54);
  sub_B90130(v26, v7, v36, v37, v38, v39);
  *(_BYTE *)(v26 + 58) &= ~0x20u;
  if ( ptr != v55 )
    free(ptr);
  return v26;
}
