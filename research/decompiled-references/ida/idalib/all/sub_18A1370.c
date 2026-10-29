void __fastcall sub_18A1370(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  __int64 *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // r14
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  void *v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 *v24; // rbx
  __int64 *v25; // r13
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  unsigned __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // r15
  unsigned __int64 v39; // rax
  __int64 v40; // rdx
  bool v41; // al
  __int64 v42; // rax
  __int64 v43; // r14
  char *v44; // rbx
  char *v45; // r12
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rdx
  unsigned __int64 v49; // rax
  __int64 v50; // rsi
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned __int64 v54; // r15
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // r15
  __int64 v62; // rax
  _QWORD *v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // r9
  __int64 v68; // r12
  __int64 v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // r9
  __int64 v75; // r12
  __int64 v76; // rax
  _QWORD *v77; // rax
  __int64 v78; // [rsp+8h] [rbp-120h]
  bool v79; // [rsp+27h] [rbp-101h] BYREF
  __int64 v80; // [rsp+28h] [rbp-100h] BYREF
  void *ptr; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v82; // [rsp+38h] [rbp-F0h]
  _BYTE v83[32]; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v84[200]; // [rsp+60h] [rbp-C8h] BYREF

  v7 = *(_QWORD *)(a2 + 104);
  if ( v7 )
  {
    v8 = (__int64 *)(v7 & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v8 )
    {
LABEL_4:
      v78 = a2;
      goto LABEL_5;
    }
  }
  else
  {
    sub_A79820((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), a3, a4, a5, a6);
    v8 = (__int64 *)(*(_QWORD *)(a2 + 104) & 0xFFFFFFFFFFFFFFF8LL);
    if ( !v8 )
    {
      if ( *(_QWORD *)(a2 + 104) )
        goto LABEL_4;
      sub_A79820((__int64 *)(*(_QWORD *)(a2 + 96) + 88LL), *(_QWORD *)(a2 + 96), 0, v27, v28, v29);
      v8 = (__int64 *)(*(_QWORD *)(a2 + 104) & 0xFFFFFFFFFFFFFFF8LL);
      if ( !v8 )
        goto LABEL_4;
      goto LABEL_27;
    }
  }
  if ( *v8 == a2 )
    goto LABEL_4;
LABEL_27:
  v78 = *v8;
  if ( !*v8 )
    goto LABEL_4;
LABEL_5:
  v9 = *(_QWORD *)(a3 + 88);
  ptr = v83;
  v82 = 0x400000000LL;
  v10 = sub_B8E970(v78 + 48);
  v13 = (_QWORD *)v10;
  if ( v10 )
  {
    if ( (*(_BYTE *)(v10 + 28) & 0x7F) == 0x12 )
    {
LABEL_53:
      if ( (v13[7] & 0x80000LL) == 0 )
      {
        v50 = v13[5];
        v51 = sub_BAA9D0(v9, v50, (v13[7] & 0x20000LL) != 0, 0, v11, v12);
        v54 = v51;
        if ( v51 )
        {
          if ( (unsigned __int8)sub_BA7E40(v51, v50, v52, v53, v11, v12) )
          {
            v55 = (unsigned int)v82;
            v56 = (unsigned int)v82 + 1LL;
            if ( v56 > HIDWORD(v82) )
            {
              sub_2237220(&ptr, v83, v56, 8);
              v55 = (unsigned int)v82;
            }
            *((_QWORD *)ptr + v55) = v54;
            LODWORD(v82) = v82 + 1;
          }
        }
      }
      while ( 1 )
      {
        v49 = v13[1] & 0xFFFFFFFFFFFFFFF8LL;
        v13 = (_QWORD *)v49;
        if ( !v49 )
          break;
        if ( (*(_BYTE *)(v49 + 28) & 0x7F) == 0x12 )
          goto LABEL_53;
      }
    }
    else
    {
      while ( 1 )
      {
        v14 = v13[1] & 0xFFFFFFFFFFFFFFF8LL;
        v13 = (_QWORD *)v14;
        if ( !v14 )
          break;
        if ( (*(_BYTE *)(v14 + 28) & 0x7F) == 0x12 )
          goto LABEL_53;
      }
    }
  }
  v15 = sub_B8E970(v78 + 48);
  v20 = v15;
  if ( !v15 )
  {
LABEL_15:
    if ( (_DWORD)v82 )
      goto LABEL_41;
    goto LABEL_16;
  }
  if ( (*(_BYTE *)(v15 + 28) & 0x7F) != 0x4B )
  {
    do
    {
      v21 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v20 = v21;
      if ( !v21 )
        goto LABEL_15;
    }
    while ( (*(_BYTE *)(v21 + 28) & 0x7F) != 0x4B );
  }
LABEL_33:
  LOBYTE(v16) = (*(_BYTE *)(v20 + 73) & 0x40) != 0;
  v35 = (unsigned int)((_DWORD)v16 + 1);
  v36 = *(_QWORD *)(v20 + 40) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(v20 + 40) & 7) != 0 )
    v36 = 0;
  v37 = sub_BAD570(v9, v36, v35, v17, v18, v19);
  v38 = v37;
  if ( v37 && (unsigned __int8)sub_BA9790(v37) )
  {
    v47 = (unsigned int)v82;
    v17 = HIDWORD(v82);
    v48 = (unsigned int)v82 + 1LL;
    if ( v48 > HIDWORD(v82) )
    {
      sub_2237220(&ptr, v83, v48, 8);
      v47 = (unsigned int)v82;
    }
    v16 = ptr;
    *((_QWORD *)ptr + v47) = v38;
    LODWORD(v82) = v82 + 1;
  }
  while ( 1 )
  {
    v39 = *(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v20 = v39;
    if ( !v39 )
      break;
    if ( (*(_BYTE *)(v39 + 28) & 0x7F) == 0x4B )
      goto LABEL_33;
  }
  if ( (_DWORD)v82 )
  {
LABEL_41:
    sub_168B9F0((__int64)v84, (__int64 *)(a1 + 8), *(_DWORD *)(a3 + 24), 0x1104u, 0);
    v40 = *(_QWORD *)(a3 + 40);
    v41 = 1;
    if ( (v40 & 7) == 0 )
      v41 = (v40 & 0xFFFFFFFFFFFFFFF8LL) == 0;
    v79 = v41;
    v42 = sub_1588420((__int64)v84, (unsigned __int8 *)&v79);
    v43 = v42;
    if ( *(_BYTE *)(v42 + 120) )
    {
      sub_1894370((unsigned __int8 **)(v42 + 32), a3);
    }
    else
    {
      if ( !*(_BYTE *)(v42 + 132) )
      {
LABEL_45:
        sub_15F7200(v84);
        v44 = (char *)ptr;
        v45 = (char *)ptr + 8 * (unsigned int)v82;
        if ( ptr != v45 )
        {
          do
          {
            v46 = *(_QWORD *)v44;
            v44 += 8;
            sub_168B9F0((__int64)v84, (__int64 *)(a1 + 8), *(_DWORD *)(v46 + 24), 0x171Du, 0);
            sub_15F7200(v84);
          }
          while ( v45 != v44 );
          v45 = (char *)ptr;
        }
        if ( v45 != v83 )
          free(v45);
        return;
      }
      v61 = sub_168B9E0((_QWORD *)v42);
      v62 = *(_QWORD *)(v43 + 16);
      if ( v62 )
        v62 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v62 + 32LL))(*(_QWORD *)(v43 + 16));
      v80 = v62;
      v63 = sub_1587BC0(v61, &v80, v57, v58, v59, v60);
      sub_1894370((unsigned __int8 **)(*v63 + 32LL * *(unsigned int *)(v43 + 128) + 8), a3);
    }
    if ( *(_BYTE *)(v43 + 120) )
    {
      sub_1894370((unsigned __int8 **)(v43 + 32), v78);
    }
    else
    {
      if ( !*(_BYTE *)(v43 + 132) )
        goto LABEL_45;
      v75 = sub_168B9E0((_QWORD *)v43);
      v76 = *(_QWORD *)(v43 + 16);
      if ( v76 )
        v76 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v76 + 32LL))(*(_QWORD *)(v43 + 16));
      v80 = v76;
      v77 = sub_1587BC0(v75, &v80, v71, v72, v73, v74);
      sub_1894370((unsigned __int8 **)(*v77 + 32LL * *(unsigned int *)(v43 + 128) + 8), v78);
    }
    if ( *(_BYTE *)(v43 + 120) )
    {
      sub_1894370((unsigned __int8 **)(v43 + 32), v9);
    }
    else if ( *(_BYTE *)(v43 + 132) )
    {
      v68 = sub_168B9E0((_QWORD *)v43);
      v69 = *(_QWORD *)(v43 + 16);
      if ( v69 )
        v69 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v69 + 32LL))(*(_QWORD *)(v43 + 16));
      v80 = v69;
      v70 = sub_1587BC0(v68, &v80, v64, v65, v66, v67);
      sub_1894370((unsigned __int8 **)(*v70 + 32LL * *(unsigned int *)(v43 + 128) + 8), v9);
    }
    goto LABEL_45;
  }
LABEL_16:
  v22 = *(_QWORD *)(v78 + 104);
  if ( v22 )
  {
    v23 = v22 & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v23 )
      goto LABEL_21;
    goto LABEL_18;
  }
  sub_A79820((__int64 *)(*(_QWORD *)(v78 + 96) + 88LL), *(_QWORD *)(v78 + 96), (__int64)v16, v17, v18, v19);
  v33 = *(_QWORD *)(v78 + 104);
  v23 = v33 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v33 & 0xFFFFFFFFFFFFFFF8LL) != 0 )
  {
LABEL_18:
    v24 = *(__int64 **)(v23 + 8);
    v25 = &v24[*(unsigned int *)(v23 + 16)];
    goto LABEL_20;
  }
  if ( !v33 )
  {
    sub_A79820((__int64 *)(*(_QWORD *)(v78 + 96) + 88LL), *(_QWORD *)(v78 + 96), 0, v30, v31, v32);
    v34 = *(_QWORD *)(v78 + 104) & 0xFFFFFFFFFFFFFFF8LL;
    if ( v34 )
    {
      v24 = *(__int64 **)(v34 + 8);
      v25 = nullptr;
LABEL_20:
      while ( v25 != v24 )
      {
        v26 = *v24++;
        sub_18A1370(a1, v26, a3);
      }
    }
  }
LABEL_21:
  if ( ptr != v83 )
    free(ptr);
}
