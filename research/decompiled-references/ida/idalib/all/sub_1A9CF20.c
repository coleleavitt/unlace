void __fastcall sub_1A9CF20(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  char *v9; // rcx
  __int64 v10; // rbp
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  _BYTE *v15; // r15
  _BYTE *v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rsi
  _QWORD *v19; // rax
  char *v20; // rdx
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r12
  char *v27; // rcx
  __int64 v28; // rdi
  __int64 *v29; // rdx
  char *v30; // rax
  char *v31; // rax
  __int64 v32; // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // r12
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  _QWORD *v43; // rax
  __int64 v46; // [rsp+30h] [rbp-198h]
  __int64 v47; // [rsp+38h] [rbp-190h]
  __int64 v48; // [rsp+48h] [rbp-180h] BYREF
  _BYTE *v49; // [rsp+50h] [rbp-178h] BYREF
  __int64 v50; // [rsp+58h] [rbp-170h]
  _BYTE v51[64]; // [rsp+60h] [rbp-168h] BYREF
  void *ptr; // [rsp+A0h] [rbp-128h] BYREF
  __int64 v53; // [rsp+A8h] [rbp-120h]
  int v54; // [rsp+B0h] [rbp-118h]
  char v55; // [rsp+B4h] [rbp-114h]
  char v56; // [rsp+B8h] [rbp-110h] BYREF
  _QWORD v57[2]; // [rsp+100h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+110h] [rbp-B8h]
  unsigned __int8 *v59; // [rsp+120h] [rbp-A8h] BYREF
  char v60; // [rsp+178h] [rbp-50h]
  unsigned int v61; // [rsp+180h] [rbp-48h]
  char v62; // [rsp+184h] [rbp-44h]

  v46 = a2;
  v6 = sub_BAB630(a3, a2, a3, a4, a5, a6);
  if ( !v6 )
    return;
  v7 = v6;
  v53 = 8;
  ptr = &v56;
  v54 = 0;
  v55 = 1;
  v10 = sub_B8E970(a2 + 48);
  if ( v10 )
  {
    while ( (*(_BYTE *)(v10 + 28) & 0x7F) != 0x12 || (*(_BYTE *)(v10 + 58) & 2) == 0 )
    {
      v10 = *(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v10 )
        goto LABEL_12;
    }
LABEL_7:
    if ( (unsigned int)sub_BA8080(v10, a2, v8, (__int64)v9, v11, v12) != 3 )
      goto LABEL_8;
    a2 = *(_QWORD *)(v10 + 40);
    if ( !v55 )
      goto LABEL_39;
    v27 = (char *)ptr;
    v11 = HIDWORD(v53);
    v28 = 8LL * HIDWORD(v53);
    v29 = (__int64 *)((char *)ptr + v28);
    if ( ptr != (char *)ptr + v28 )
    {
      v30 = (char *)ptr;
      if ( a2 == *(_QWORD *)ptr )
        goto LABEL_48;
      while ( 1 )
      {
        v30 += 8;
        if ( v29 == (__int64 *)v30 )
          break;
        if ( a2 == *(_QWORD *)v30 )
          goto LABEL_48;
      }
    }
    if ( HIDWORD(v53) < (unsigned int)v53 )
    {
      v11 = (unsigned int)++HIDWORD(v53);
      *v29 = a2;
      v27 = (char *)ptr;
      v30 = (char *)ptr + v28;
    }
    else
    {
LABEL_39:
      v30 = (char *)sub_2236760(&ptr, a2);
      v27 = (char *)ptr;
      if ( !v55 )
      {
        v8 = (unsigned int)v53;
        v9 = (char *)ptr + 8 * (unsigned int)v53;
LABEL_41:
        if ( v9 != v30 && *(_QWORD *)v30 >= 0xFFFFFFFFFFFFFFFELL )
        {
          v31 = v30 + 8;
          do
          {
            v8 = (__int64)v31;
            if ( v9 == v31 )
              break;
            v31 += 8;
          }
          while ( *(_QWORD *)v8 >= 0xFFFFFFFFFFFFFFFELL );
        }
LABEL_8:
        while ( 1 )
        {
          v10 = *(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          if ( !v10 )
            goto LABEL_12;
          while ( (*(_BYTE *)(v10 + 28) & 0x7F) == 0x12 )
          {
            if ( (*(_BYTE *)(v10 + 58) & 2) != 0 )
              goto LABEL_7;
            v10 = *(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF8LL;
            if ( !v10 )
              goto LABEL_12;
          }
        }
      }
    }
LABEL_48:
    v8 = HIDWORD(v53);
    v9 = &v27[8 * HIDWORD(v53)];
    goto LABEL_41;
  }
LABEL_12:
  v49 = v51;
  v50 = 0x800000000LL;
  sub_BAEC60(v7, (__int64)&v49, v8, (__int64)v9, v11, v12);
  v15 = v49;
  v16 = &v49[8 * (unsigned int)v50];
  if ( v49 == v16 )
    goto LABEL_20;
  do
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)v15;
      v18 = *(_QWORD *)(*(_QWORD *)v15 + 40LL);
      if ( v55 )
      {
        v19 = ptr;
        v20 = (char *)ptr + 8 * HIDWORD(v53);
        if ( ptr != v20 )
        {
          while ( v18 != *v19 )
          {
            if ( v20 == (char *)++v19 )
              goto LABEL_26;
          }
          goto LABEL_18;
        }
      }
      else
      {
        if ( sub_2236570(&ptr, v18) )
          goto LABEL_18;
        v18 = *(_QWORD *)(v17 + 40);
      }
LABEL_26:
      v21 = sub_BAA9D0(a3, v18, 1, 0, v13, v14);
      if ( !v21 )
        break;
LABEL_27:
      if ( (unsigned int)sub_B90D60(v21, nullptr, nullptr, 0, 0, v25) != 3 )
        goto LABEL_28;
LABEL_18:
      v15 += 8;
      if ( v15 == v16 )
        goto LABEL_19;
    }
    v32 = *(_QWORD *)(a3 + 120);
    if ( !v32 )
    {
      sub_A794E0((__int64 *)(*(_QWORD *)(a3 + 96) + 88LL), *(_QWORD *)(a3 + 96), v22, v23, v24, v25);
      v32 = *(_QWORD *)(a3 + 120);
    }
    v33 = v32 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v33 )
    {
      v34 = v33;
      if ( (*(_BYTE *)(v33 + 72) & 1) != 0 )
      {
        sub_BA8900(a3);
        v34 = *(_QWORD *)(a3 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v35 = *(_QWORD *)(v34 + 56);
      if ( v35 )
      {
        while ( 1 )
        {
          if ( *(char *)(v35 + 28) >= 0 )
          {
            v36 = *(_QWORD *)(v35 + 40);
            if ( ((v36 & 7) != 0 || (v36 & 0xFFFFFFFFFFFFFFF8LL) == 0) && (*(_BYTE *)(v35 + 8) & 6) == 0 )
              break;
          }
          v35 = *(_QWORD *)(v35 + 128);
          if ( !v35 )
            goto LABEL_28;
        }
LABEL_63:
        v21 = sub_BAA9D0(v35, *(_QWORD *)(v17 + 40), 1, 0, v24, v25);
        if ( v21 )
          goto LABEL_27;
        while ( 1 )
        {
          v35 = *(_QWORD *)(v35 + 128);
          if ( !v35 )
            break;
          if ( *(char *)(v35 + 28) >= 0 )
          {
            v37 = *(_QWORD *)(v35 + 40);
            if ( ((v37 & 7) != 0 || (v37 & 0xFFFFFFFFFFFFFFF8LL) == 0) && (*(_BYTE *)(v35 + 8) & 6) == 0 )
              goto LABEL_63;
          }
        }
      }
    }
LABEL_28:
    sub_168B9F0((__int64)v57, a1, *(_DWORD *)(v46 + 24), 0x1C0Fu, 0);
    v26 = *(_QWORD *)(v17 + 40);
    if ( v60 )
    {
      sub_AE9DF0(&v59, *(_QWORD *)(v17 + 40), 9u);
    }
    else if ( v62 )
    {
      v47 = sub_168B9E0(v57);
      v42 = v58;
      if ( v58 )
        v42 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v58 + 32LL))(v58);
      v48 = v42;
      v43 = sub_1587BC0(v47, &v48, v38, v39, v40, v41);
      sub_AE9DF0((unsigned __int8 **)(*v43 + 32LL * v61 + 8), v26, 9u);
    }
    v15 += 8;
    sub_15F7200(v57);
    sub_168B9F0((__int64)v57, a1, *(_DWORD *)(v17 + 24), 0x1807u, 0);
    sub_15F7200(v57);
  }
  while ( v15 != v16 );
LABEL_19:
  v16 = v49;
LABEL_20:
  if ( v16 != v51 )
    free(v16);
  if ( !v55 )
    free(ptr);
}
