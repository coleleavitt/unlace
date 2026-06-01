__int64 __fastcall sub_189E7F0(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        __m128 a7,
        char a8)
{
  __int64 *v9; // r13
  char v12; // r9
  char v13; // dl
  int v14; // eax
  unsigned int v15; // ecx
  unsigned __int64 v16; // rdi
  __int64 v17; // rax
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 *v21; // rax
  __int64 *v22; // r14
  __int16 v23; // ax
  char v24; // bl
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int16 v28; // ax
  _QWORD *v29; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 *v35; // rbp
  unsigned __int64 v36; // rdi
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned __int64 v40; // rdi
  __int64 v41; // rcx
  __int64 v42; // r8
  _BOOL8 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 *v52; // [rsp+0h] [rbp-F8h]
  char v53; // [rsp+0h] [rbp-F8h]
  unsigned int v54; // [rsp+0h] [rbp-F8h]
  bool v55; // [rsp+0h] [rbp-F8h]
  __int64 v56; // [rsp+0h] [rbp-F8h]
  unsigned __int8 v58; // [rsp+Ch] [rbp-ECh]
  __int64 v59; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v60; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v61; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v62; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v63[200]; // [rsp+30h] [rbp-C8h] BYREF

  v9 = a2;
  v12 = a8;
  if ( !(_BYTE)a5 )
    goto LABEL_14;
  v13 = *(_BYTE *)(a3 + 97) & 0x10;
  if ( (*(_BYTE *)(a4 + 97) & 0x10) != 0 )
  {
    v14 = (*(_DWORD *)(a4 + 96) >> 13) & 0x7F;
    if ( !v13 )
      goto LABEL_5;
  }
  else
  {
    v14 = 0;
    if ( !v13 )
      goto LABEL_14;
  }
  v14 ^= (*(_DWORD *)(a3 + 96) >> 13) & 0x7F;
LABEL_5:
  if ( (v14 & 0xFFFFFFBF) != 0 )
  {
    if ( !a8 )
      return 0;
    v15 = 6695;
    v52 = (__int64 *)(a1 + 8);
    if ( !a6 )
      v15 = 6700;
    sub_168B9F0((__int64)v63, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), v15, 0);
    v16 = *(_QWORD *)(a3 + 56) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a3 + 56) & 4) != 0 )
      v16 = *(_QWORD *)(v16 + 32);
    v62 = sub_18945B0(v16, a7);
    v17 = sub_1587DB0((__int64)v63, &v62);
    v61 = a2[5];
    sub_15894B0(v17, &v61);
    sub_15F7200(v63);
    sub_168B9F0((__int64)v63, v52, *(_DWORD *)(a4 + 24), 0x70u, 0);
    v18 = *(_QWORD *)(a4 + 56) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a4 + 56) & 4) != 0 )
      v18 = *(_QWORD *)(v18 + 32);
    a2 = &v62;
    v62 = sub_18945B0(v18, a7);
    sub_1587DB0((__int64)v63, &v62);
    sub_15F7200(v63);
    v12 = a8;
  }
LABEL_14:
  v59 = *(_QWORD *)(a3 + 48);
  v60 = *(_QWORD *)(a4 + 48);
  if ( v12 && a6 )
  {
    v19 = v9[2] & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v9[2] & 4) != 0 )
      v19 = *(_QWORD *)v19;
    v20 = *(_BYTE *)(v19 + 8) & 0x7F;
    v21 = (__int64 *)(v59 & 0xFFFFFFFFFFFFFFF0LL);
    v22 = (__int64 *)(v60 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (_BYTE)v20 != 21 )
    {
      v23 = sub_F6A600(*v21, (__int64)a2, v20, a4, a5);
      v53 = v23;
      v24 = HIBYTE(v23);
      v28 = sub_F6A600(*v22, (__int64)a2, v25, v26, v27);
      if ( v24 == HIBYTE(v28) && v24 && v53 != (_BYTE)v28 && v53 != 2 && (_BYTE)v28 != 2 && ((_BYTE)v28 || v53 != 1) )
      {
        sub_168B9F0((__int64)v63, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x82u, 0);
        v43 = 0;
        if ( (*(_BYTE *)(a3 + 97) & 0x10) != 0 )
          v43 = (*(_DWORD *)(a3 + 96) & 0x80000) != 0;
        v55 = v43;
        LOBYTE(v62) = sub_F6A600(*(_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF0LL), a1 + 8, v43, v41, v42);
        BYTE1(v62) = v55;
        v45 = sub_189E1F0((__int64)v63, (unsigned __int16 *)&v62, v55, v44);
        v48 = 0;
        v56 = v45;
        if ( (*(_BYTE *)(a4 + 97) & 0x10) != 0 )
          v48 = (*(_DWORD *)(a4 + 96) >> 19) & 1;
        v58 = v48;
        LOBYTE(v61) = sub_F6A600(*(_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0LL), (__int64)&v62, v48, v46, v47);
        BYTE1(v61) = v58;
        sub_189E1F0(v56, (unsigned __int16 *)&v61, v58, v49);
        sub_15F7200(v63);
        a2 = (__int64 *)(a1 + 8);
        sub_168B9F0((__int64)v63, (__int64 *)(a1 + 8), *(_DWORD *)(a4 + 24), 0x70u, 0);
        sub_15F7200(v63);
      }
      v22 = (__int64 *)(v60 & 0xFFFFFFFFFFFFFFF0LL);
      v21 = (__int64 *)(v59 & 0xFFFFFFFFFFFFFFF0LL);
    }
    v29 = (_QWORD *)(v22[1] & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_QWORD *)(v21[1] & 0xFFFFFFFFFFFFFFF0LL) == *v29 )
      return 1;
    v32 = *v21;
    v33 = 6696;
    if ( *(_BYTE *)(*v21 + 16) != 34 )
      goto LABEL_49;
LABEL_27:
    v34 = *v22;
    v54 = v33;
    if ( *(_BYTE *)(*v22 + 16) == 34 )
      goto LABEL_28;
    goto LABEL_51;
  }
  v31 = v59 & 0xFFFFFFFFFFFFFFF0LL;
  v22 = (__int64 *)(v60 & 0xFFFFFFFFFFFFFFF0LL);
  v29 = (_QWORD *)(*(_QWORD *)&byte_8[v60 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_QWORD *)(*(_QWORD *)&byte_8[v59 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL) == *v29 )
    return 1;
  if ( !v12 )
    return 0;
  v32 = *(_QWORD *)v31;
  v33 = 6701;
  if ( *(_BYTE *)(*(_QWORD *)v31 + 16LL) == 34 )
    goto LABEL_27;
LABEL_49:
  v54 = v33;
  v50 = sub_1894090(v32, (__int64)a2, (__int64)v29, v33);
  v33 = v54;
  v32 = v50;
  if ( !v50 )
    goto LABEL_30;
  v34 = *(_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v34 + 16) == 34 )
    goto LABEL_28;
LABEL_51:
  v51 = sub_1894090(v34, (__int64)a2, v34, v33);
  LODWORD(v33) = v54;
  v34 = v51;
  if ( !v51 )
    goto LABEL_30;
LABEL_28:
  if ( !(unsigned __int8)sub_1894760(*(_QWORD *)(a1 + 248), v32, v34, 1, a5) )
  {
    LODWORD(v33) = (a6 == 0) + 7137;
LABEL_30:
    v35 = (__int64 *)(a1 + 8);
    sub_168B9F0((__int64)v63, v35, *(_DWORD *)(a3 + 24), v33, 0);
    v36 = *(_QWORD *)(a3 + 56) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a3 + 56) & 4) != 0 )
      v36 = *(_QWORD *)(v36 + 32);
    v62 = sub_18945B0(v36, a7);
    v37 = sub_1587DB0((__int64)v63, &v62);
    v61 = v9[5];
    v38 = sub_15894B0(v37, &v61);
    v39 = sub_1605D30(v38, &v60);
    sub_1605D30(v39, &v59);
    sub_15F7200(v63);
    sub_168B9F0((__int64)v63, v35, *(_DWORD *)(a4 + 24), (a6 == 0) + 112, 0);
    v40 = *(_QWORD *)(a4 + 56) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a4 + 56) & 4) != 0 )
      v40 = *(_QWORD *)(v40 + 32);
    v62 = sub_18945B0(v40, a7);
    sub_1587DB0((__int64)v63, &v62);
    sub_15F7200(v63);
  }
  return 0;
}
