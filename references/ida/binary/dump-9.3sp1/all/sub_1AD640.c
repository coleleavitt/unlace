__int64 __fastcall sub_1AD640(__int64 a1)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned int v7; // edx
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  __int64 v15; // rbp
  __int64 v16; // r12
  __int64 v17; // r14
  __int64 v18; // r12
  int v19; // eax
  __int64 *v20; // rsi
  _BOOL8 v21; // rdx
  _DWORD *v22; // rsi
  _DWORD *v23; // rcx
  _DWORD *v24; // rax
  bool (__fastcall *v25)(__int64); // rax
  int v26; // ebp
  __int64 v27; // rax
  __int64 v28; // rbp
  __int64 v29; // r12
  __int64 v30; // r13
  int v31; // eax
  __int64 v32; // rbp
  __int64 v33; // r12
  __int64 v34; // r13
  int v35; // eax
  __int64 v36; // rdi
  int v37; // eax
  _DWORD *v38; // rcx
  unsigned int v39; // edx
  char v40; // r8
  unsigned int v41; // esi
  int v42; // eax
  int v43; // eax
  int v44; // edx
  int v45; // edx
  _DWORD *v46; // rcx
  int v47; // [rsp+4h] [rbp-134h]
  char v48; // [rsp+Fh] [rbp-129h]
  __int64 v49; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v50; // [rsp+88h] [rbp-B0h]
  __int64 v51; // [rsp+98h] [rbp-A0h]
  __int64 v52; // [rsp+A0h] [rbp-98h]
  int v53; // [rsp+A8h] [rbp-90h]
  __int64 v54; // [rsp+ACh] [rbp-8Ch]
  __int64 v55; // [rsp+B8h] [rbp-80h]
  __int128 v56; // [rsp+C0h] [rbp-78h]
  __int64 v57; // [rsp+D0h] [rbp-68h]
  __int64 v58; // [rsp+D8h] [rbp-60h]
  unsigned int v59; // [rsp+E0h] [rbp-58h]
  __int64 v60; // [rsp+E4h] [rbp-54h]
  unsigned __int64 v61; // [rsp+F8h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 112) != -1 )
    return 0;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v3 + 280);
  if ( !*(_BYTE *)(v4 + 320) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(v4 + 1496) + 148LL) )
      return 0;
  }
  if ( (unsigned __int8)sub_1A56C0(v3, 1, 0)
    && (*(_BYTE *)(*(_QWORD *)(v4 + 1496) + 606LL) & 0x10) != 0
    && !*(_BYTE *)(v4 + 320)
    || *(int *)(v4 + 68) > 0 )
  {
    return 0;
  }
  *(_QWORD *)(a1 + 104) = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 16LL))(*(_QWORD *)(a1 + 16));
  v5 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(v5 + 288) & 2) != 0 )
  {
    v6 = v5 + 144;
    if ( !*(_QWORD *)(v5 + 264) )
    {
      v7 = 8;
LABEL_11:
      v8 = v5 + 144;
      goto LABEL_23;
    }
  }
  else
  {
    if ( !*(_QWORD *)(v5 + 128) )
    {
      v7 = 8;
      goto LABEL_22;
    }
    v6 = v5 + 8;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v6 + 80) + 112LL) + 200LL))(
         *(_QWORD *)(*(_QWORD *)(v6 + 80) + 112LL),
         **(unsigned int **)(v6 + 112));
  v7 = 8;
  if ( v9 )
    v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(v6 + 80) + 112LL) + 32LL))(
           *(_QWORD *)(*(_QWORD *)(v6 + 80) + 112LL),
           **(unsigned int **)(v6 + 112),
           8);
  if ( *(_QWORD *)(v6 + 120) > 1u && *(_DWORD *)(*(_QWORD *)(v6 + 112) + 4LL) - **(_DWORD **)(v6 + 112) < v7 )
    v7 = round_down_power2();
  v5 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(v5 + 288) & 2) != 0 )
    goto LABEL_11;
LABEL_22:
  v8 = v5 + 8;
LABEL_23:
  v10 = *(_QWORD *)(v8 + 80);
  v51 = v5 + 96;
  v11 = *(_QWORD *)(v10 + 112);
  v49 = 0;
  v52 = 0;
  LODWORD(v11) = *(_DWORD *)(v11 + 80);
  v57 = v5 + 120;
  v59 = v7;
  v53 = v11;
  v54 = 0xFFFFFFFFLL;
  v55 = 0;
  v58 = 0;
  v60 = 0xFFFFFFFFLL;
  v50 = 0;
  v56 = 0;
  v48 = sub_19D620(&v49, v4);
  if ( v48 )
    v48 = *(_QWORD *)(a1 + 104) == (int)v54;
  v15 = *(_QWORD *)(a1 + 16);
  LODWORD(v16) = 0;
  v17 = *(_QWORD *)(v15 + 280);
  if ( (unsigned __int8)*(_QWORD *)(v17 + 328) )
  {
    if ( !(unsigned __int8)get_tinfo_details() )
    {
      if ( !under_debugger )
        sub_383060(51529);
      BUG();
    }
    v47 = *(_DWORD *)(*(_QWORD *)(v17 + 1504) + 80LL);
    if ( !*(_BYTE *)(v17 + 320) )
      goto LABEL_43;
    v18 = sub_194CC0(v17);
    if ( v18 > *(_QWORD *)(v17 + 144) )
    {
      v16 = (v18 + v47 - 1 - (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 16LL))(v15, 12)) / v47;
LABEL_30:
      cleanup_argloc();
      clear_tinfo_t();
      v15 = *(_QWORD *)(a1 + 16);
      goto LABEL_31;
    }
    v37 = sub_13D380((_QWORD *)v17);
    if ( v37 == -1 )
      goto LABEL_43;
    v38 = (_DWORD *)(*(_QWORD *)(v17 + 432) + 104LL * v37);
    v39 = v38[2];
    v40 = *(_BYTE *)(*(_QWORD *)(v17 + 1496) + 145LL);
    v41 = v39;
    if ( *v38 == 3 )
    {
      v42 = 0;
      if ( v40 )
        goto LABEL_94;
    }
    else
    {
      v41 = HIWORD(v39);
      v42 = 0;
      if ( v40 )
        goto LABEL_94;
      if ( *v38 == 4 )
        v39 = (unsigned __int16)v39;
    }
    v43 = v38[22];
    if ( !v39 )
      v43 /= 2;
    v42 = v43 - 1;
LABEL_94:
    v44 = v42 + v41;
    v22 = *(_DWORD **)(v15 + 96);
    v45 = -v47 & v44;
    v46 = &v22[*(_QWORD *)(v15 + 104)];
    if ( v22 != v46 )
    {
      v24 = *(_DWORD **)(v15 + 96);
      while ( v45 != *v24 )
      {
        if ( v46 == ++v24 )
          goto LABEL_38;
      }
      if ( v46 != v24 )
        goto LABEL_99;
    }
LABEL_38:
    v22 = *(_DWORD **)(v15 + 120);
    v23 = &v22[*(_QWORD *)(v15 + 128)];
    if ( v22 != v23 )
    {
      v24 = *(_DWORD **)(v15 + 120);
      while ( v45 != *v24 )
      {
        if ( v23 == ++v24 )
          goto LABEL_43;
      }
      if ( v24 != v23 )
      {
LABEL_99:
        LODWORD(v16) = v24 - v22 + 1;
        goto LABEL_30;
      }
    }
LABEL_43:
    LODWORD(v16) = 0;
    goto LABEL_30;
  }
LABEL_31:
  if ( *(_DWORD *)(v15 + 8) != 3 )
    LODWORD(v16) = v16 - *(_DWORD *)(v15 + 48);
  if ( v48 )
  {
    if ( *(_BYTE *)(v4 + 320) )
    {
      if ( !*(_BYTE *)(v4 + 328) )
      {
        v19 = *(_QWORD *)(v15 + 24);
        if ( v19 >= (int)v16 )
          goto LABEL_36;
      }
    }
    else
    {
      v19 = *(_QWORD *)(v51 + 8) - v50;
      if ( v19 >= (int)v16 )
      {
LABEL_36:
        *(_DWORD *)(a1 + 112) = v19;
LABEL_37:
        v20 = &v49;
        v21 = 0;
        goto LABEL_46;
      }
    }
    *(_DWORD *)(a1 + 112) = v16;
    goto LABEL_37;
  }
  if ( !*(_BYTE *)(v4 + 328) && (int)v16 < *(_DWORD *)(v15 + 24) )
    LODWORD(v16) = *(_DWORD *)(v15 + 24);
  *(_DWORD *)(a1 + 112) = v16;
  v20 = nullptr;
  v21 = (*(_DWORD *)(v4 + 72) & 0xFFFFFFF0) != 208 && (*(_DWORD *)(v4 + 72) & 0xFFFFFFF0) != 64;
LABEL_46:
  if ( !(unsigned __int8)sub_1ACB10(a1, v20, v21, v12, v13, v14) )
  {
    v36 = *(_QWORD *)(a1 + 64);
    if ( v36 )
    {
      *(_QWORD *)(a1 + 72) = 0;
      qfree(v36);
      *(_QWORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 80) = 0;
    }
  }
  v25 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
  if ( v25 != sub_194BA0 )
  {
    if ( v25(a1) )
    {
      if ( !v48 )
      {
        if ( !*(_QWORD *)(a1 + 72) )
          goto LABEL_52;
        goto LABEL_50;
      }
      goto LABEL_64;
    }
    goto LABEL_76;
  }
  if ( !*(_QWORD *)(a1 + 72) )
  {
LABEL_76:
    if ( v55 )
    {
      *(_QWORD *)&v56 = 0;
      qfree(v55);
    }
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree(v49);
    }
    return 0;
  }
  if ( v48 )
  {
LABEL_64:
    if ( (int)v50 > 0 )
    {
      v28 = 0;
      v29 = 8LL * (unsigned int)(v50 - 1) + 8;
      do
      {
        v30 = v52;
        sub_11D5A0(*(_QWORD *)(v49 + v28));
        v31 = *(_DWORD *)(v30 + 24);
        v28 += 8;
        BYTE1(v31) &= ~2u;
        LOBYTE(v31) = v31 | 0x80;
        *(_DWORD *)(v30 + 24) = v31;
      }
      while ( v29 != v28 );
    }
    if ( v49 )
    {
      *(_QWORD *)&v50 = 0;
      qfree(v49);
      v49 = 0;
      *((_QWORD *)&v50 + 1) = 0;
    }
    if ( (int)v56 > 0 )
    {
      v32 = 0;
      v33 = 8LL * (unsigned int)(v56 - 1) + 8;
      do
      {
        v34 = v58;
        sub_11D5A0(*(_QWORD *)(v55 + v32));
        v35 = *(_DWORD *)(v34 + 24);
        v32 += 8;
        BYTE1(v35) &= ~2u;
        LOBYTE(v35) = v35 | 0x80;
        *(_DWORD *)(v34 + 24) = v35;
      }
      while ( v32 != v33 );
    }
    if ( v55 )
    {
      *(_QWORD *)&v56 = 0;
      qfree(v55);
      v55 = 0;
      *((_QWORD *)&v56 + 1) = 0;
    }
    if ( !*(_QWORD *)(a1 + 72) )
      goto LABEL_54;
  }
LABEL_50:
  v26 = 0;
  v27 = 0;
  do
  {
    sub_1A4EB0(a1, (__int64 *)(*(_QWORD *)(a1 + 64) + 40 * v27));
    v27 = ++v26;
  }
  while ( (unsigned __int64)v26 < *(_QWORD *)(a1 + 72) );
LABEL_52:
  if ( v55 )
  {
    *(_QWORD *)&v56 = 0;
    qfree(v55);
  }
LABEL_54:
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49);
  }
  return 1;
}
