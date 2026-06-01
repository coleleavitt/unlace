void __fastcall sub_18A0E80(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __m128 a7)
{
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rbx
  unsigned __int64 v15; // r10
  __int64 v16; // r15
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbp
  __int64 v19; // r15
  char *v20; // rcx
  __int64 v21; // rsi
  char *v22; // rdx
  char *v23; // rax
  char *v24; // rcx
  char *v25; // rax
  char *v26; // rdx
  char *v27; // rcx
  __int64 v28; // rsi
  char *v29; // rdx
  char *v30; // rax
  char *v31; // rcx
  char *v32; // rax
  char *v33; // rdx
  unsigned __int64 v34; // [rsp+8h] [rbp-1E0h]
  unsigned __int64 v35; // [rsp+8h] [rbp-1E0h]
  __int64 v36; // [rsp+18h] [rbp-1D0h]
  char v37; // [rsp+2Fh] [rbp-1B9h] BYREF
  void *ptr; // [rsp+30h] [rbp-1B8h] BYREF
  __int64 v39; // [rsp+38h] [rbp-1B0h]
  int v40; // [rsp+40h] [rbp-1A8h]
  char v41; // [rsp+44h] [rbp-1A4h]
  __int64 v42; // [rsp+48h] [rbp-1A0h] BYREF
  void *v43; // [rsp+90h] [rbp-158h] BYREF
  __int64 v44; // [rsp+98h] [rbp-150h]
  int v45; // [rsp+A0h] [rbp-148h]
  char v46; // [rsp+A4h] [rbp-144h]
  __int64 v47; // [rsp+A8h] [rbp-140h] BYREF
  void *v48[2]; // [rsp+F0h] [rbp-F8h] BYREF
  int v49; // [rsp+100h] [rbp-E8h]
  char v50; // [rsp+104h] [rbp-E4h]
  __int64 v51; // [rsp+108h] [rbp-E0h] BYREF
  void *v52[2]; // [rsp+150h] [rbp-98h] BYREF
  int v53; // [rsp+160h] [rbp-88h]
  char v54; // [rsp+164h] [rbp-84h]
  __int64 v55; // [rsp+168h] [rbp-80h] BYREF

  v8 = sub_BADE20(a2, a2, a3, a4, a5, a6);
  if ( !v8 )
    return;
  v13 = *(_QWORD *)(v8 + 88);
  v36 = v13;
  if ( !v13 )
    return;
  v39 = 8;
  v14 = sub_BAB630(v13, a2, v9, v10, v11, v12);
  v40 = 0;
  ptr = &v42;
  v41 = 1;
  v43 = &v47;
  v44 = 8;
  v45 = 0;
  v46 = 1;
  v15 = sub_B8E970(a2 + 48);
  if ( v15 )
  {
    while ( (*(_BYTE *)(v15 + 28) & 0x7F) != 0x12 || (*(_BYTE *)(v15 + 58) & 2) == 0 )
    {
      v15 = *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v15 )
        goto LABEL_14;
    }
LABEL_8:
    v16 = *(_QWORD *)(v15 + 40);
    if ( v14 )
    {
      v34 = v15;
      v17 = sub_BAD910(v14, *(_QWORD *)(v15 + 40), 1, 0, 1, 0);
      v15 = v34;
      if ( v17 )
        goto LABEL_10;
    }
    if ( !v41 )
      goto LABEL_39;
    v20 = (char *)ptr;
    v21 = 8LL * HIDWORD(v39);
    v22 = (char *)ptr + v21;
    if ( ptr != (char *)ptr + v21 )
    {
      v23 = (char *)ptr;
      if ( v16 == *(_QWORD *)ptr )
        goto LABEL_63;
      while ( 1 )
      {
        v23 += 8;
        if ( v22 == v23 )
          break;
        if ( *(_QWORD *)v23 == v16 )
          goto LABEL_63;
      }
    }
    if ( HIDWORD(v39) < (unsigned int)v39 )
    {
      ++HIDWORD(v39);
      *(_QWORD *)v22 = v16;
      v20 = (char *)ptr;
      v23 = (char *)ptr + v21;
    }
    else
    {
LABEL_39:
      v35 = v15;
      v23 = (char *)sub_2236760(&ptr, v16);
      v20 = (char *)ptr;
      v15 = v35;
      if ( !v41 )
      {
        v24 = (char *)ptr + 8 * (unsigned int)v39;
LABEL_41:
        if ( v24 != v23 && *(_QWORD *)v23 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v25 = v23 + 8;
          do
          {
            v26 = v25;
            if ( v24 == v25 )
              break;
            v25 += 8;
          }
          while ( *(_QWORD *)v26 >= 0xFFFFFFFFFFFFFFFELL );
        }
LABEL_10:
        while ( 1 )
        {
          v15 = *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v15 )
            goto LABEL_14;
          while ( (*(_BYTE *)(v15 + 28) & 0x7F) == 0x12 )
          {
            if ( (*(_BYTE *)(v15 + 58) & 2) != 0 )
              goto LABEL_8;
            v15 = *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v15 )
              goto LABEL_14;
          }
        }
      }
    }
LABEL_63:
    v24 = &v20[8 * HIDWORD(v39)];
    goto LABEL_41;
  }
LABEL_14:
  v18 = sub_B8E970(a2 + 48);
  if ( !v18 )
    goto LABEL_25;
  while ( (*(_BYTE *)(v18 + 28) & 0x7F) != 0x12 || (*(_BYTE *)(v18 + 58) & 2) != 0 )
  {
    v18 = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v18 )
      goto LABEL_25;
  }
LABEL_19:
  v19 = *(_QWORD *)(v18 + 40);
  if ( !v14 || !sub_BAD910(v14, *(_QWORD *)(v18 + 40), 0, 0, 1, 0) )
  {
    if ( !v46 )
      goto LABEL_54;
    v27 = (char *)v43;
    v28 = 8LL * HIDWORD(v44);
    v29 = (char *)v43 + v28;
    if ( v43 != (char *)v43 + v28 )
    {
      v30 = (char *)v43;
      if ( v19 == *(_QWORD *)v43 )
        goto LABEL_65;
      while ( 1 )
      {
        v30 += 8;
        if ( v29 == v30 )
          break;
        if ( *(_QWORD *)v30 == v19 )
          goto LABEL_65;
      }
    }
    if ( HIDWORD(v44) < (unsigned int)v44 )
    {
      ++HIDWORD(v44);
      *(_QWORD *)v29 = v19;
      v27 = (char *)v43;
      v30 = (char *)v43 + v28;
    }
    else
    {
LABEL_54:
      v30 = (char *)sub_2236760(&v43, v19);
      v27 = (char *)v43;
      if ( !v46 )
      {
        v31 = (char *)v43 + 8 * (unsigned int)v44;
LABEL_56:
        if ( v31 != v30 && *(_QWORD *)v30 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v32 = v30 + 8;
          do
          {
            v33 = v32;
            if ( v31 == v32 )
              break;
            v32 += 8;
          }
          while ( *(_QWORD *)v33 >= 0xFFFFFFFFFFFFFFFELL );
        }
        goto LABEL_21;
      }
    }
LABEL_65:
    v31 = &v27[8 * HIDWORD(v44)];
    goto LABEL_56;
  }
LABEL_21:
  while ( 1 )
  {
    v18 = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v18 )
      break;
    while ( (*(_BYTE *)(v18 + 28) & 0x7F) == 0x12 )
    {
      if ( (*(_BYTE *)(v18 + 58) & 2) == 0 )
        goto LABEL_19;
      v18 = *(_QWORD *)(v18 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v18 )
        goto LABEL_25;
    }
  }
LABEL_25:
  if ( HIDWORD(v39) != v40 || HIDWORD(v44) != v45 )
  {
    v37 = 0;
    v48[1] = byte_8;
    v48[0] = &v51;
    v52[0] = &v55;
    v49 = 0;
    v50 = 1;
    v52[1] = byte_8;
    v53 = 0;
    v54 = 1;
    sub_18A0470(
      a1,
      (unsigned __int64)&ptr,
      (__int64)&v43,
      (__int64)v48,
      (__int64)v52,
      a2,
      a7,
      v36,
      (__int64)&v37,
      0,
      1u);
    if ( v54 )
    {
      if ( v50 )
        goto LABEL_29;
LABEL_70:
      free(v48[0]);
      if ( v46 )
      {
LABEL_30:
        if ( v41 )
          return;
LABEL_66:
        free(ptr);
        return;
      }
      goto LABEL_67;
    }
    free(v52[0]);
    if ( !v50 )
      goto LABEL_70;
  }
LABEL_29:
  if ( v46 )
    goto LABEL_30;
LABEL_67:
  free(v43);
  if ( !v41 )
    goto LABEL_66;
}
