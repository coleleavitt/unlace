__int64 __fastcall sub_15F3100(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v3; // r13d
  int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rsi
  _BOOL8 v7; // rdx
  __int64 v8; // rax
  char *v9; // r14
  __int64 v10; // rbx
  char *v11; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // rdi
  unsigned __int8 v14; // al
  int v15; // edx
  __int64 v16; // r13
  unsigned __int64 v17; // rax
  char *v19; // r15
  unsigned __int64 v20; // rdi
  unsigned __int8 v21; // al
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rdi
  unsigned __int8 v24; // al
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rdi
  unsigned __int8 v27; // al
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rdi
  unsigned __int8 v30; // al
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  unsigned __int64 v33; // rdi
  unsigned __int8 v34; // al
  unsigned __int64 v35; // rax
  __int64 v36; // rdx
  unsigned __int64 v37; // rdi
  unsigned __int8 v38; // al
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // [rsp+0h] [rbp-E8h] BYREF
  void *ptr; // [rsp+8h] [rbp-E0h]
  __int64 v43; // [rsp+10h] [rbp-D8h]
  _BYTE v44[64]; // [rsp+18h] [rbp-D0h] BYREF
  void *v45[2]; // [rsp+58h] [rbp-90h]
  __int64 v46; // [rsp+68h] [rbp-80h]
  __int64 v47; // [rsp+70h] [rbp-78h]
  __int64 v48; // [rsp+78h] [rbp-70h]
  int v49; // [rsp+80h] [rbp-68h]
  __int64 v50; // [rsp+88h] [rbp-60h] BYREF
  __int128 v51; // [rsp+90h] [rbp-58h]
  bool v52; // [rsp+A0h] [rbp-48h]
  bool v53; // [rsp+A1h] [rbp-47h]
  char v54; // [rsp+A2h] [rbp-46h]
  bool v55; // [rsp+A3h] [rbp-45h]
  bool v56; // [rsp+A4h] [rbp-44h]
  char v57; // [rsp+A5h] [rbp-43h]
  __int16 v58; // [rsp+A6h] [rbp-42h]

  v2 = a2;
  v3 = sub_1A3A250();
  v4 = *(_DWORD *)(a2 + 88);
  if ( *(_DWORD *)(a2 + 56) )
    v5 = 0;
  else
    v5 = *(_QWORD *)(a2 + 64);
  v48 = v5;
  v43 = 0x800000000LL;
  ptr = v44;
  *(_OWORD *)v45 = 0;
  v49 = v4;
  v41 = 0;
  v46 = 0;
  v47 = a1;
  sub_B85890(&v50, v5);
  v52 = v3 != 0;
  v53 = v3 == 2;
  v51 = 0;
  v55 = v3 == 0;
  v56 = v3 == 0;
  v58 = 0;
  v54 = 1;
  v57 = 0;
  sub_1A395A0(&v41);
  v6 = v2 + 8;
  v7 = *(_DWORD *)(*(_QWORD *)v2 + 264LL) == 0;
  LODWORD(v2) = 0;
  v8 = sub_16A2930(a1, v6, v7);
  if ( !v8 )
    goto LABEL_12;
  sub_1A48440(a1, &v41, v8, 0);
  v9 = (char *)ptr;
  v10 = 8LL * (unsigned int)v43;
  v11 = (char *)ptr + v10;
  v12 = v10 >> 3;
  v2 = v10 >> 5;
  if ( v2 )
  {
    v13 = *(_QWORD *)ptr & 0xFFFFFFFFFFFFFFF8LL;
    v14 = *(_BYTE *)(v13 + 28) & 0x7F;
    v15 = v14;
    if ( (unsigned int)v14 - 18 <= 0x3F )
    {
      v16 = 0x80200000003FLL;
      v2 = (__int64)ptr + 32 * v2;
      while ( 1 )
      {
        if ( (unsigned int)(v15 - 53) <= 1 || (unsigned int)(v15 - 76) <= 1 )
          v14 = *(_BYTE *)(sub_B72ED0(v13) + 28) & 0x7F;
        v17 = (v14 + 94) & 0x7F;
        if ( (unsigned __int8)v17 > 0x2Fu || !_bittest64(&v16, v17) )
          break;
        v19 = v9 + 8;
        v20 = *((_QWORD *)v9 + 1) & 0xFFFFFFFFFFFFFFF8LL;
        v21 = *(_BYTE *)(v20 + 28) & 0x7F;
        if ( (unsigned int)v21 - 18 > 0x3F )
          goto LABEL_47;
        if ( (unsigned int)v21 - 53 <= 1 || ((v21 + 52) & 0x7Fu) <= 1 )
          v21 = *(_BYTE *)(sub_B72ED0(v20) + 28) & 0x7F;
        v22 = (v21 + 94) & 0x7F;
        if ( (unsigned __int8)v22 > 0x2Fu )
          goto LABEL_47;
        if ( !_bittest64(&v16, v22) )
          goto LABEL_47;
        v19 = v9 + 16;
        v23 = *((_QWORD *)v9 + 2) & 0xFFFFFFFFFFFFFFF8LL;
        v24 = *(_BYTE *)(v23 + 28) & 0x7F;
        if ( (unsigned int)v24 - 18 > 0x3F )
          goto LABEL_47;
        if ( (unsigned int)v24 - 53 <= 1 || ((v24 + 52) & 0x7Fu) <= 1 )
          v24 = *(_BYTE *)(sub_B72ED0(v23) + 28) & 0x7F;
        v25 = (v24 + 94) & 0x7F;
        if ( (unsigned __int8)v25 > 0x2Fu )
          goto LABEL_47;
        if ( !_bittest64(&v16, v25) )
          goto LABEL_47;
        v19 = v9 + 24;
        v26 = *((_QWORD *)v9 + 3) & 0xFFFFFFFFFFFFFFF8LL;
        v27 = *(_BYTE *)(v26 + 28) & 0x7F;
        if ( (unsigned int)v27 - 18 > 0x3F )
          goto LABEL_47;
        if ( (unsigned int)v27 - 53 <= 1 || ((v27 + 52) & 0x7Fu) <= 1 )
          v27 = *(_BYTE *)(sub_B72ED0(v26) + 28) & 0x7F;
        v28 = (v27 + 94) & 0x7F;
        if ( (unsigned __int8)v28 > 0x2Fu || !_bittest64(&v16, v28) )
        {
LABEL_47:
          LOBYTE(v2) = v11 == v19;
          if ( !v55 )
            goto LABEL_22;
          goto LABEL_13;
        }
        v9 += 32;
        if ( v9 == (char *)v2 )
        {
          v12 = (v11 - v9) >> 3;
          goto LABEL_53;
        }
        v13 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFFF8LL;
        v14 = *(_BYTE *)(v13 + 28) & 0x7F;
        v15 = v14;
        if ( (unsigned int)v14 - 18 > 0x3F )
          goto LABEL_11;
      }
    }
    goto LABEL_11;
  }
LABEL_53:
  if ( v12 != 2 )
  {
    if ( v12 != 3 )
    {
      LODWORD(v2) = 1;
      if ( v12 != 1 )
        goto LABEL_12;
      goto LABEL_56;
    }
    v33 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFFF8LL;
    v34 = *(_BYTE *)(v33 + 28) & 0x7F;
    if ( (unsigned int)v34 - 18 > 0x3F )
      goto LABEL_11;
    if ( (unsigned int)v34 - 53 <= 1 || ((v34 + 52) & 0x7Fu) <= 1 )
      v34 = *(_BYTE *)(sub_B72ED0(v33) + 28) & 0x7F;
    v35 = (v34 + 94) & 0x7F;
    if ( (unsigned __int8)v35 > 0x2Fu )
      goto LABEL_11;
    v36 = 0x80200000003FLL;
    if ( !_bittest64(&v36, v35) )
      goto LABEL_11;
    v9 += 8;
  }
  v37 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFFF8LL;
  v38 = *(_BYTE *)(v37 + 28) & 0x7F;
  if ( (unsigned int)v38 - 18 > 0x3F )
    goto LABEL_11;
  if ( (unsigned int)v38 - 53 <= 1 || ((v38 + 52) & 0x7Fu) <= 1 )
    v38 = *(_BYTE *)(sub_B72ED0(v37) + 28) & 0x7F;
  v39 = (v38 + 94) & 0x7F;
  if ( (unsigned __int8)v39 > 0x2Fu )
    goto LABEL_11;
  v40 = 0x80200000003FLL;
  if ( !_bittest64(&v40, v39) )
    goto LABEL_11;
  v9 += 8;
LABEL_56:
  v29 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFFF8LL;
  v30 = *(_BYTE *)(v29 + 28) & 0x7F;
  if ( (unsigned int)v30 - 18 > 0x3F )
    goto LABEL_11;
  if ( ((v30 + 52) & 0x7Fu) <= 1 || (unsigned int)v30 - 53 <= 1 )
    v30 = *(_BYTE *)(sub_B72ED0(v29) + 28) & 0x7F;
  v31 = (v30 + 94) & 0x7F;
  if ( (unsigned __int8)v31 > 0x2Fu || (v32 = 0x80200000003FLL, LODWORD(v2) = 1, !_bittest64(&v32, v31)) )
LABEL_11:
    LOBYTE(v2) = v11 == v9;
LABEL_12:
  if ( !v55 )
  {
LABEL_22:
    if ( !v56 || (_DWORD)v41 != 5 )
      goto LABEL_16;
LABEL_24:
    sub_1A445B0(v47, &v41);
    goto LABEL_16;
  }
LABEL_13:
  if ( (_DWORD)v41 == 5 )
  {
    if ( !v56 )
      goto LABEL_16;
    goto LABEL_24;
  }
  if ( v45[1] && (*(_BYTE *)(*(_QWORD *)(v47 + 232) + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v47, &v41);
    goto LABEL_22;
  }
LABEL_16:
  if ( v45[0] )
    sub_1A39780(v45[0]);
  if ( ptr != v44 )
    free(ptr);
  return (unsigned int)v2;
}
