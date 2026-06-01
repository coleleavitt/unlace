void __fastcall sub_17BAC80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int16 v8; // ax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  char v12; // bp
  __int64 v13; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // r15
  unsigned __int8 v16; // r15
  unsigned __int16 v17; // ax
  unsigned __int8 v18; // bp
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rbp
  __int64 v23; // rdx
  _QWORD *v24; // r15
  unsigned __int64 v25; // rcx
  char v26; // al
  __int64 v27; // rax
  unsigned __int8 v28; // al
  __int64 v29; // rax
  __int64 v30; // rsi
  unsigned __int8 v31; // al
  __int64 v32; // rax
  __int64 v33; // rsi
  unsigned __int8 v34; // al
  char v35; // bp
  __int64 *v36; // r13
  __int64 v37; // rax
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rcx
  void *v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rdi
  __int64 v45; // rcx
  __int64 v46; // rcx
  unsigned int v47; // eax
  char v48; // al
  __int64 v49; // rax
  unsigned int v50; // eax
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  void *v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rcx
  __int64 v60; // rax
  __int64 v61; // rbp
  __int64 v62; // rax
  int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rbp
  __int64 v67; // r8
  __int64 v68; // r9
  void *v69; // rax
  _QWORD *v70; // rax
  __int64 v71; // [rsp+8h] [rbp-100h]
  unsigned __int64 v72; // [rsp+8h] [rbp-100h]
  __int64 v73; // [rsp+8h] [rbp-100h]
  unsigned __int8 v74; // [rsp+10h] [rbp-F8h]
  __int64 v75; // [rsp+10h] [rbp-F8h]
  unsigned __int8 v76; // [rsp+10h] [rbp-F8h]
  unsigned __int8 v77; // [rsp+10h] [rbp-F8h]
  __int64 v78; // [rsp+10h] [rbp-F8h]
  unsigned __int8 v79; // [rsp+10h] [rbp-F8h]
  __int64 v80; // [rsp+18h] [rbp-F0h]
  __int64 v81; // [rsp+18h] [rbp-F0h]
  __int64 v82; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v83; // [rsp+28h] [rbp-E0h] BYREF
  void *v84; // [rsp+30h] [rbp-D8h] BYREF
  unsigned int v85; // [rsp+38h] [rbp-D0h]
  void *v86; // [rsp+40h] [rbp-C8h] BYREF
  int v87; // [rsp+48h] [rbp-C0h]
  _QWORD *v88; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v89[11]; // [rsp+60h] [rbp-A8h] BYREF
  char v90; // [rsp+B8h] [rbp-50h]
  unsigned int v91; // [rsp+C0h] [rbp-48h]
  char v92; // [rsp+C4h] [rbp-44h]

  v8 = sub_F6A600(*(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5);
  v12 = v8;
  if ( !HIBYTE(v8) )
    goto LABEL_2;
  v16 = v8;
  v17 = sub_F6A600(*(_QWORD *)(*(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL), a2, v9, v10, v11);
  if ( HIBYTE(v17) )
  {
    v18 = v17;
    if ( (_BYTE)v17 == v16 )
      goto LABEL_2;
    sub_168B9F0((__int64)&v86, (__int64 *)(a3 + 8), *(_DWORD *)(a1 + 24), 0x1BBBu, 0);
    v20 = *(_BYTE *)(a1 + 97) & 0x10;
    if ( (*(_BYTE *)(a1 + 97) & 0x10) != 0 )
      v20 = (*(_DWORD *)(a1 + 96) >> 19) & 1;
    if ( v90 )
    {
      v50 = v18;
      BYTE1(v50) = v20;
      sub_FC65C0(v89, v50, v20, v19);
    }
    else
    {
      if ( !v92 )
      {
        if ( (*(_BYTE *)(a2 + 97) & 0x10) != 0 )
        {
          LODWORD(v21) = (*(_DWORD *)(a2 + 96) >> 19) & 1;
LABEL_14:
          v74 = v21;
          if ( v92 )
          {
            v51 = sub_168B9E0(&v86);
            v54 = v74;
            v55 = v51;
            v56 = v88;
            if ( v88 )
            {
              v81 = v55;
              v56 = (void *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v88 + 32LL))(v88, *v88, v74);
              v55 = v81;
              v54 = v74;
            }
            v79 = v54;
            v84 = v56;
            v57 = sub_1587BC0(v55, (__int64 *)&v84, v54, v55, v52, v53);
            v58 = *v57 + 32LL * v91;
            LODWORD(v57) = v16;
            BYTE1(v57) = v79;
            sub_FC65C0((unsigned __int8 **)(v58 + 8), (unsigned int)v57, v79, v59);
          }
        }
LABEL_15:
        sub_15F7200(&v86);
        sub_168B9F0((__int64)&v86, (__int64 *)(a3 + 8), *(_DWORD *)(a2 + 24), 0x70u, 0);
        sub_15F7200(&v86);
        goto LABEL_2;
      }
      v76 = v20;
      v37 = sub_168B9E0(&v86);
      v40 = v76;
      v41 = v37;
      v42 = v88;
      if ( v88 )
      {
        v80 = v41;
        v42 = (void *)(*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD))(*v88 + 32LL))(v88, *v88, v76);
        v41 = v80;
        v40 = v76;
      }
      v77 = v40;
      v84 = v42;
      v43 = sub_1587BC0(v41, (__int64 *)&v84, v40, v41, v38, v39);
      v44 = *v43 + 32LL * v91;
      LODWORD(v43) = v18;
      BYTE1(v43) = v77;
      sub_FC65C0((unsigned __int8 **)(v44 + 8), (unsigned int)v43, v77, v45);
    }
    v21 = *(_BYTE *)(a2 + 97) & 0x10;
    if ( (*(_BYTE *)(a2 + 97) & 0x10) != 0 )
      v21 = (*(_DWORD *)(a2 + 96) >> 19) & 1;
    if ( !v90 )
      goto LABEL_14;
    v47 = v16;
    BYTE1(v47) = v21;
    sub_FC65C0(v89, v47, v21, v46);
    goto LABEL_15;
  }
  *(_QWORD *)(a1 + 48) = sub_A719E0(*(_QWORD *)(a3 + 248), v12, *(_QWORD *)(a1 + 48), *(_QWORD *)(a1 + 48));
LABEL_2:
  v13 = *(_QWORD *)(*(_QWORD *)(a2 + 48) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v13 + 16) != 1 )
    return;
  v14 = *(_QWORD *)(a1 + 48) & 0xFFFFFFFFFFFFFFF0LL;
  v15 = *(_QWORD *)v14;
  if ( *(_BYTE *)(*(_QWORD *)v14 + 16LL) != 1 )
    return;
  v86 = *(void **)(v15 + 40);
  sub_F5E9A0(&v86);
  v71 = *(_QWORD *)(*(_QWORD *)((unsigned __int64)v86 & 0xFFFFFFFFFFFFFFF0LL) + 32LL);
  v86 = *(void **)(v13 + 40);
  sub_F5E9A0(&v86);
  if ( *(_QWORD *)(*(_QWORD *)((unsigned __int64)v86 & 0xFFFFFFFFFFFFFFF0LL) + 32LL) != v71 )
    return;
  v22 = *(_QWORD *)(v13 + 32);
  v23 = *(_QWORD *)(v15 + 32);
  v24 = *(_QWORD **)(a3 + 248);
  v82 = v22;
  v25 = v22 & 0xFFFFFFFFFFFFFFF0LL;
  v83 = v23;
  v26 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v26 == 5
    || v26 == 42
    || (v75 = v23, v27 = sub_A72040(v24, v22), v25 = v22 & 0xFFFFFFFFFFFFFFF0LL, v23 = v75, v27)
    && *(_BYTE *)(v27 + 16) == 6
    && ((*(_WORD *)(v27 + 18) >> 6) & 7) == 2 )
  {
    v72 = v25;
    v48 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL);
    if ( v48 == 5 )
      return;
    if ( v48 == 42 )
      return;
    v78 = v23;
    v49 = sub_A72040(v24, v23);
    v23 = v78;
    v25 = v72;
    if ( v49 )
    {
      if ( *(_BYTE *)(v49 + 16) == 6 && ((*(_WORD *)(v49 + 18) >> 6) & 7) == 2 )
        return;
    }
  }
  v28 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v25 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( v28 != 6 )
  {
    if ( (unsigned int)v28 - 2 <= 1
      && (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 2 <= 1 )
    {
      v29 = sub_A72040(v24, v23);
      if ( !v29 || (unsigned int)*(unsigned __int8 *)(v29 + 16) - 2 > 1 )
        BUG();
      v30 = *(_QWORD *)(v29 + 40);
      v31 = *(_BYTE *)(v29 + 19);
      if ( (v31 & 2) != 0 )
      {
        v87 = *(_DWORD *)(v30 + 8);
        if ( (unsigned int)v87 > 0x40 )
          sub_2205510(&v86);
        else
          v86 = *(void **)v30;
      }
      else
      {
        v87 = 8 * ((v31 >> 2) & 0x1F);
        if ( v87 > 64 )
          sub_2205470(&v86, v30, 0);
        else
          v86 = (void *)v30;
      }
      v32 = sub_A72040(v24, v22);
      if ( !v32 || (unsigned int)*(unsigned __int8 *)(v32 + 16) - 2 > 1 )
        BUG();
      v33 = *(_QWORD *)(v32 + 40);
      v34 = *(_BYTE *)(v32 + 19);
      if ( (v34 & 2) != 0 )
      {
        v85 = *(_DWORD *)(v33 + 8);
        if ( v85 <= 0x40 )
        {
          v84 = *(void **)v33;
          goto LABEL_34;
        }
        sub_2205510(&v84);
        v63 = v85;
      }
      else
      {
        v63 = 8 * ((v34 >> 2) & 0x1F);
        v85 = v63;
        if ( v63 > 64 )
        {
          sub_2205470(&v84, v33, 0);
          v63 = v85;
        }
        else
        {
          v84 = (void *)v33;
        }
      }
      if ( (unsigned int)v63 > 0x40 )
      {
        v35 = sub_2205D70(&v84, &v86);
        if ( v84 )
          operator delete[](v84);
        goto LABEL_35;
      }
LABEL_34:
      v35 = v84 == v86;
LABEL_35:
      if ( (unsigned int)v87 > 0x40 && v86 )
        operator delete[](v86);
LABEL_38:
      if ( v35 )
        return;
      goto LABEL_39;
    }
    if ( v28 == 4
      && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 4 )
    {
      return;
    }
LABEL_62:
    v35 = v22 == v23;
    goto LABEL_38;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v23 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 6 )
    goto LABEL_62;
  v73 = v23;
  v60 = sub_A72040(v24, v22);
  v61 = v60;
  if ( v60 && *(_BYTE *)(v60 + 16) != 6 )
    v61 = 0;
  v62 = sub_A72040(v24, v73);
  if ( !v62 || *(_BYTE *)(v62 + 16) != 6 )
    BUG();
  if ( (((*(_WORD *)(v61 + 18) >> 6) & 7) == 2) != (((*(_WORD *)(v62 + 18) >> 6) & 7) == 2) )
  {
LABEL_39:
    v36 = (__int64 *)(a3 + 8);
    sub_168B9F0((__int64)&v86, v36, *(_DWORD *)(a1 + 24), 0x1B7Cu, 0);
    if ( v90 )
    {
      sub_AE9DF0(v89, a1, 0xAu);
    }
    else if ( v92 )
    {
      v66 = sub_168B9E0(&v86);
      v69 = v88;
      if ( v88 )
        v69 = (void *)(*(__int64 (__fastcall **)(_QWORD *))(*v88 + 32LL))(v88);
      v84 = v69;
      v70 = sub_1587BC0(v66, (__int64 *)&v84, v64, v65, v67, v68);
      sub_AE9DF0((unsigned __int8 **)(*v70 + 32LL * v91 + 8), a1, 0xAu);
    }
    sub_1605D30((__int64)&v86, &v83);
    sub_15F7200(&v86);
    sub_168B9F0((__int64)&v86, v36, *(_DWORD *)(a2 + 24), 0x188Cu, 0);
    sub_1605D30((__int64)&v86, &v82);
    sub_15F7200(&v86);
  }
}
