__int64 __fastcall sub_1A6E40(__int64 a1)
{
  __int64 v3; // rdi
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rbp
  unsigned int v7; // edx
  __int64 v8; // rcx
  char v9; // al
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // r9d
  __int64 v16; // rbp
  __int64 v17; // r12
  __int64 v18; // r14
  __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // r12
  __int64 v22; // rdi
  __int64 v23; // r14
  __int64 v24; // rbp
  _QWORD *v25; // r15
  __int64 v26; // rdi
  __int64 v27; // rdi
  int v28; // eax
  __int64 *v29; // rsi
  _BOOL8 v30; // rdx
  _DWORD *v31; // rsi
  _DWORD *v32; // rcx
  _DWORD *v33; // rax
  int v34; // ecx
  unsigned __int64 i; // r15
  int tinfo_size; // eax
  bool (__fastcall *v37)(__int64); // rax
  int v38; // ebp
  __int64 v39; // rax
  __int64 v40; // rbp
  __int64 v41; // r12
  __int64 v42; // r13
  int v43; // eax
  __int64 v44; // rbp
  __int64 v45; // r12
  __int64 v46; // r13
  int v47; // eax
  __int64 v48; // rdi
  int v49; // eax
  _DWORD *v50; // rcx
  unsigned int v51; // edx
  char v52; // r8
  unsigned int v53; // esi
  int v54; // eax
  int v55; // eax
  int v56; // edx
  int v57; // edx
  _DWORD *v58; // rcx
  int v59; // [rsp+0h] [rbp-138h]
  int v60; // [rsp+4h] [rbp-134h]
  char v61; // [rsp+Fh] [rbp-129h]
  __int64 v62; // [rsp+20h] [rbp-118h] BYREF
  __int128 v63; // [rsp+28h] [rbp-110h]
  __int64 v64; // [rsp+38h] [rbp-100h]
  __int64 v65; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v66; // [rsp+48h] [rbp-F0h] BYREF
  __int128 v67; // [rsp+50h] [rbp-E8h]
  __int64 v68; // [rsp+60h] [rbp-D8h]
  __int128 v69; // [rsp+68h] [rbp-D0h]
  char v70; // [rsp+78h] [rbp-C0h]
  __int64 v71; // [rsp+80h] [rbp-B8h] BYREF
  __int128 v72; // [rsp+88h] [rbp-B0h]
  __int64 v73; // [rsp+98h] [rbp-A0h]
  __int64 v74; // [rsp+A0h] [rbp-98h]
  int v75; // [rsp+A8h] [rbp-90h]
  __int64 v76; // [rsp+ACh] [rbp-8Ch]
  __int64 v77; // [rsp+B8h] [rbp-80h]
  __int128 v78; // [rsp+C0h] [rbp-78h]
  __int64 v79; // [rsp+D0h] [rbp-68h]
  __int64 v80; // [rsp+D8h] [rbp-60h]
  unsigned int v81; // [rsp+E0h] [rbp-58h]
  __int64 v82; // [rsp+E4h] [rbp-54h]
  unsigned __int64 v83; // [rsp+F8h] [rbp-40h]

  v83 = __readfsqword(0x28u);
  if ( *(_DWORD *)(a1 + 112) != -1 )
    return 0;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = *(_QWORD *)(v3 + 280);
  if ( !*(_BYTE *)(v4 + 320) )
  {
    if ( *(_BYTE *)(*(_QWORD *)(v4 + 1496) + 148LL) )
      return 0;
  }
  if ( (unsigned __int8)sub_19EEC0(v3, 1, 0)
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
  if ( *(_QWORD *)(v6 + 120) > 1u )
  {
    v10 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(v6 + 112) + 4LL) - **(_DWORD **)(v6 + 112));
    if ( (unsigned int)v10 < v7 )
      v7 = round_down_power2(v10);
  }
  v5 = *(_QWORD *)(a1 + 16);
  if ( (*(_BYTE *)(v5 + 288) & 2) != 0 )
    goto LABEL_11;
LABEL_22:
  v8 = v5 + 8;
LABEL_23:
  v11 = *(_QWORD *)(v8 + 80);
  v73 = v5 + 96;
  v12 = *(_QWORD *)(v11 + 112);
  v71 = 0;
  v74 = 0;
  LODWORD(v12) = *(_DWORD *)(v12 + 80);
  v79 = v5 + 120;
  v81 = v7;
  v75 = v12;
  v76 = 0xFFFFFFFFLL;
  v77 = 0;
  v80 = 0;
  v82 = 0xFFFFFFFFLL;
  v72 = 0;
  v78 = 0;
  v61 = sub_196E20(&v71, v4);
  if ( v61 )
    v61 = *(_QWORD *)(a1 + 104) == (int)v76;
  v16 = *(_QWORD *)(a1 + 16);
  LODWORD(v17) = 0;
  v18 = *(_QWORD *)(v16 + 280);
  v19 = *(_QWORD *)(v18 + 328);
  if ( (_BYTE)v19 )
  {
    v62 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 16;
    v63 = 0;
    v67 = 0;
    v69 = 0;
    if ( !(unsigned __int8)get_tinfo_details(v19, 12, &v62) )
    {
      if ( !under_debugger )
        sub_37B760(51529);
      BUG();
    }
    v60 = *(_DWORD *)(*(_QWORD *)(v18 + 1504) + 80LL);
    if ( !*(_BYTE *)(v18 + 320) )
      goto LABEL_57;
    v20 = v70 & 0xF0;
    if ( (v70 & 0xF0) == 0xC0 )
      v20 = HIDWORD(v64);
    if ( (unsigned int)(v20 - 208) <= 0x2F )
      goto LABEL_57;
    v21 = sub_18E600(v18);
    if ( v21 > *(_QWORD *)(v18 + 144) )
    {
      v17 = (v21 + v60 - 1 - (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16)) / v60;
LABEL_33:
      if ( v68 )
      {
        *(_QWORD *)&v69 = 0;
        qfree(v68);
      }
      cleanup_argloc(&v66);
      clear_tinfo_t(&v65);
      v22 = v62;
      if ( v62 )
      {
        v23 = v63;
        if ( (_QWORD)v63 )
        {
          v24 = 0;
          do
          {
            v25 = (_QWORD *)(v22 + 80 * v24);
            clear_tinfo_t(v25 + 8);
            v26 = v25[5];
            if ( v26 )
            {
              v25[6] = 0;
              qfree(v26);
            }
            v27 = v25[2];
            if ( v27 )
            {
              v25[3] = 0;
              qfree(v27);
            }
            ++v24;
            cleanup_argloc(v25);
            v22 = v62;
          }
          while ( v23 != v24 );
        }
        *(_QWORD *)&v63 = 0;
        qfree(v22);
      }
      v16 = *(_QWORD *)(a1 + 16);
      goto LABEL_45;
    }
    v49 = sub_136CC0((_QWORD *)v18);
    if ( v49 == -1 )
      goto LABEL_57;
    v50 = (_DWORD *)(*(_QWORD *)(v18 + 432) + 104LL * v49);
    v51 = v50[2];
    v52 = *(_BYTE *)(*(_QWORD *)(v18 + 1496) + 145LL);
    v53 = v51;
    if ( *v50 == 3 )
    {
      v54 = 0;
      if ( v52 )
        goto LABEL_118;
    }
    else
    {
      v53 = HIWORD(v51);
      v54 = 0;
      if ( v52 )
        goto LABEL_118;
      if ( *v50 == 4 )
        v51 = (unsigned __int16)v51;
    }
    v55 = v50[22];
    if ( !v51 )
      v55 /= 2;
    v54 = v55 - 1;
LABEL_118:
    v56 = v54 + v53;
    v31 = *(_DWORD **)(v16 + 96);
    v57 = -v60 & v56;
    v58 = &v31[*(_QWORD *)(v16 + 104)];
    if ( v31 != v58 )
    {
      v33 = *(_DWORD **)(v16 + 96);
      while ( v57 != *v33 )
      {
        if ( v58 == ++v33 )
          goto LABEL_52;
      }
      if ( v58 != v33 )
        goto LABEL_123;
    }
LABEL_52:
    v31 = *(_DWORD **)(v16 + 120);
    v32 = &v31[*(_QWORD *)(v16 + 128)];
    if ( v31 != v32 )
    {
      v33 = *(_DWORD **)(v16 + 120);
      while ( v57 != *v33 )
      {
        if ( v32 == ++v33 )
          goto LABEL_57;
      }
      if ( v33 != v32 )
      {
LABEL_123:
        LODWORD(v17) = v33 - v31 + 1;
        goto LABEL_33;
      }
    }
LABEL_57:
    v34 = 0;
    LODWORD(v17) = 0;
    for ( i = 0; i < (unsigned __int64)v63; i = v59 + 1 )
    {
      v59 = v34;
      tinfo_size = get_tinfo_size(0, *(_QWORD *)(v62 + 80 * i + 64), 0);
      if ( *(_BYTE *)(v18 + 320) == 1
        || tinfo_size != 1
        || i != (_QWORD)v63 - 1LL
        || *(int *)(v18 + 68) > 0
        || *(_DWORD *)(v62 + 80 * i) != 1 )
      {
        LODWORD(v17) = (v60 - 1 + tinfo_size) / v60 + v17;
      }
      v34 = v59 + 1;
    }
    goto LABEL_33;
  }
LABEL_45:
  if ( *(_DWORD *)(v16 + 8) != 3 )
    LODWORD(v17) = v17 - *(_DWORD *)(v16 + 48);
  if ( v61 )
  {
    if ( *(_BYTE *)(v4 + 320) )
    {
      if ( !*(_BYTE *)(v4 + 328) )
      {
        v28 = *(_QWORD *)(v16 + 24);
        if ( v28 >= (int)v17 )
          goto LABEL_50;
      }
    }
    else
    {
      v28 = *(_QWORD *)(v73 + 8) - v72;
      if ( v28 >= (int)v17 )
      {
LABEL_50:
        *(_DWORD *)(a1 + 112) = v28;
LABEL_51:
        v29 = &v71;
        v30 = 0;
        goto LABEL_67;
      }
    }
    *(_DWORD *)(a1 + 112) = v17;
    goto LABEL_51;
  }
  if ( !*(_BYTE *)(v4 + 328) && (int)v17 < *(_DWORD *)(v16 + 24) )
    LODWORD(v17) = *(_DWORD *)(v16 + 24);
  *(_DWORD *)(a1 + 112) = v17;
  v29 = nullptr;
  v30 = (*(_DWORD *)(v4 + 72) & 0xFFFFFFF0) != 208 && (*(_DWORD *)(v4 + 72) & 0xFFFFFFF0) != 64;
LABEL_67:
  if ( !(unsigned __int8)sub_1A6310(a1, v29, v30, v13, v14, v15) )
  {
    v48 = *(_QWORD *)(a1 + 64);
    if ( v48 )
    {
      *(_QWORD *)(a1 + 72) = 0;
      qfree(v48);
      *(_QWORD *)(a1 + 64) = 0;
      *(_QWORD *)(a1 + 80) = 0;
    }
  }
  v37 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL);
  if ( v37 != sub_18E4E0 )
  {
    if ( v37(a1) )
    {
      if ( !v61 )
      {
        if ( !*(_QWORD *)(a1 + 72) )
          goto LABEL_73;
        goto LABEL_71;
      }
      goto LABEL_88;
    }
    goto LABEL_100;
  }
  if ( !*(_QWORD *)(a1 + 72) )
  {
LABEL_100:
    if ( v77 )
    {
      *(_QWORD *)&v78 = 0;
      qfree(v77);
    }
    if ( v71 )
    {
      *(_QWORD *)&v72 = 0;
      qfree(v71);
    }
    return 0;
  }
  if ( v61 )
  {
LABEL_88:
    if ( (int)v72 > 0 )
    {
      v40 = 0;
      v41 = 8LL * (unsigned int)(v72 - 1) + 8;
      do
      {
        v42 = v74;
        sub_116EE0(*(_QWORD *)(v71 + v40));
        v43 = *(_DWORD *)(v42 + 24);
        v40 += 8;
        BYTE1(v43) &= ~2u;
        LOBYTE(v43) = v43 | 0x80;
        *(_DWORD *)(v42 + 24) = v43;
      }
      while ( v41 != v40 );
    }
    if ( v71 )
    {
      *(_QWORD *)&v72 = 0;
      qfree(v71);
      v71 = 0;
      *((_QWORD *)&v72 + 1) = 0;
    }
    if ( (int)v78 > 0 )
    {
      v44 = 0;
      v45 = 8LL * (unsigned int)(v78 - 1) + 8;
      do
      {
        v46 = v80;
        sub_116EE0(*(_QWORD *)(v77 + v44));
        v47 = *(_DWORD *)(v46 + 24);
        v44 += 8;
        BYTE1(v47) &= ~2u;
        LOBYTE(v47) = v47 | 0x80;
        *(_DWORD *)(v46 + 24) = v47;
      }
      while ( v44 != v45 );
    }
    if ( v77 )
    {
      *(_QWORD *)&v78 = 0;
      qfree(v77);
      v77 = 0;
      *((_QWORD *)&v78 + 1) = 0;
    }
    if ( !*(_QWORD *)(a1 + 72) )
      goto LABEL_75;
  }
LABEL_71:
  v38 = 0;
  v39 = 0;
  do
  {
    sub_19E6B0(a1, (__int64 *)(*(_QWORD *)(a1 + 64) + 40 * v39));
    v39 = ++v38;
  }
  while ( (unsigned __int64)v38 < *(_QWORD *)(a1 + 72) );
LABEL_73:
  if ( v77 )
  {
    *(_QWORD *)&v78 = 0;
    qfree(v77);
  }
LABEL_75:
  if ( v71 )
  {
    *(_QWORD *)&v72 = 0;
    qfree(v71);
  }
  return 1;
}
