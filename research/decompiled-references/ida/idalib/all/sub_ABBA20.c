unsigned __int64 __fastcall sub_ABBA20(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v8; // r12
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  __int64 (__fastcall *v13)(__int64); // rax
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // r9
  __int64 v17; // r8
  unsigned __int64 v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  char v22; // al
  unsigned __int64 v23; // r8
  char v24; // r10
  char v25; // di
  char v26; // si
  char v27; // al
  char v28; // r10
  char v29; // di
  char v30; // si
  char v31; // dl
  char v32; // si
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // [rsp+0h] [rbp-F8h]
  unsigned __int64 v36; // [rsp+8h] [rbp-F0h]
  char v37; // [rsp+8h] [rbp-F0h]
  __int64 v38; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v39; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v40; // [rsp+18h] [rbp-E0h]
  __int64 v41; // [rsp+28h] [rbp-D0h] BYREF
  void *ptr; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+38h] [rbp-C0h]
  _BYTE v44[184]; // [rsp+40h] [rbp-B8h] BYREF

  v6 = a4;
  v35 = a1 + 17;
  if ( a3 )
  {
    v8 = a3;
    if ( a4 )
    {
      ptr = v44;
      v43 = 0x2000000000LL;
      sub_F6B2E0(&ptr, a2, a3, a4);
      v41 = 0;
      v9 = sub_2223360(a1 + 17, &ptr, &v41, off_2B41340);
      if ( v9 )
      {
        v10 = v9 - 24;
        if ( v10 )
          goto LABEL_5;
      }
      goto LABEL_9;
    }
    v6 = sub_E900C0(a3);
    ptr = v44;
    v43 = 0x2000000000LL;
    sub_F6B2E0(&ptr, a2, v8, v6);
    v41 = 0;
    v34 = sub_2223360(a1 + 17, &ptr, &v41, off_2B41340);
    if ( !v34 )
      goto LABEL_34;
  }
  else
  {
    v33 = *(_QWORD *)(a4 + 48);
    if ( !v33 )
      v33 = sub_A7AA70((__int64)a1, a4, 0, a4, a5, a6);
    v8 = sub_E91A00(a1, 0, *(_QWORD *)(v33 & 0xFFFFFFFFFFFFFFF0LL));
    ptr = v44;
    v43 = 0x2000000000LL;
    sub_F6B2E0(&ptr, a2, v8, v6);
    v41 = 0;
    v34 = sub_2223360(a1 + 17, &ptr, &v41, off_2B41340);
    if ( !v34 )
      goto LABEL_9;
  }
  v10 = v34 - 24;
  if ( v10 )
  {
LABEL_5:
    v11 = v10 & 0xFFFFFFFFFFFFFFF0LL;
    goto LABEL_6;
  }
LABEL_34:
  if ( !v6 )
  {
    v15 = sub_AB7570(a1, v8);
    goto LABEL_12;
  }
LABEL_9:
  v13 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL);
  if ( v13 == sub_A01140 )
    v14 = sub_B70A60(v6);
  else
    v14 = v13(v6);
  v15 = sub_E91A00(a1, 0, *(_QWORD *)(v14 + 48));
LABEL_12:
  v16 = a2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) & 0xFFFFFFFFFFFFFFF0LL) == *(_QWORD *)(*(_QWORD *)(a2
                                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                                    + 8LL)
    && v8 == v15 )
  {
    v39 = 0;
    v17 = 0;
  }
  else
  {
    v38 = sub_ABBA20(
            a1,
            *(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
          | ((unsigned __int8)a2 | (unsigned __int8)*(_QWORD *)&byte_8[a2 & 0xFFFFFFFFFFFFFFF0LL]) & 7,
            v15,
            v6);
    sub_2223360(a1 + 17, &ptr, &v41, off_2B41340);
    v17 = v38;
    v16 = a2 & 0xFFFFFFFFFFFFFFF0LL;
    v39 = v38 & 0xFFFFFFFFFFFFFFF0LL;
  }
  v40 = v17;
  v36 = v16;
  v18 = sub_A6FFD0(a1 + 294, 48, 4u);
  v37 = *(_BYTE *)(*(_QWORD *)v36 + 17LL) & 0x1F;
  v22 = sub_E91240(v8, 48, v19, v20, v21);
  *(_QWORD *)v18 = v18;
  v23 = v40;
  v24 = v22 & 8;
  *(_QWORD *)(v18 + 24) = 0;
  if ( (v22 & 8) != 0 )
    v24 = 16;
  v25 = v22 & 4;
  *(_QWORD *)(v18 + 32) = a2;
  if ( (v22 & 4) != 0 )
    v25 = 12;
  *(_QWORD *)(v18 + 40) = v8;
  v26 = v22 & 2;
  if ( (v22 & 2) != 0 )
    v26 = 2;
  v27 = v26 | v25 | v24 | v22 & 1;
  v28 = v27 & 0x10;
  if ( (v27 & 0x10) != 0 )
    v28 = 16;
  v29 = v27 & 0xC;
  if ( (v27 & 0xC) != 0 )
    v29 = 4;
  v30 = v27 & 2;
  if ( (v27 & 2) != 0 )
    v30 = 2;
  if ( !v39 )
    v23 = v18 & 0xFFFFFFFFFFFFFFF0LL;
  v31 = v30 | v29 | v28 | v37 | v27 & 1;
  v32 = *(_BYTE *)(v18 + 17);
  *(_BYTE *)(v18 + 18) &= 0xF8u;
  *(_QWORD *)(v18 + 8) = v23;
  *(_BYTE *)(v18 + 17) = v32 & 0xE0 | v31;
  *(_WORD *)(v18 + 16) = *(_WORD *)(v18 + 16) & 0x1F00 | 0x21;
  sub_A6A720((__int64)(a1 + 1), v18);
  sub_2223210(v35, v18 + 24, v41, off_2B41340);
  v11 = v18 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_6:
  if ( ptr != v44 )
    free(ptr);
  return v11;
}
