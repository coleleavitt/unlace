void __fastcall sub_18A3390(__int64 *a1, __int64 **a2, __int64 a3, __int64 a4, char a5)
{
  int v6; // r12d
  unsigned int v7; // r14d
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r15
  char v14; // bp
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ecx
  unsigned int v20; // edx
  unsigned int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r12
  __int64 v27; // rax
  _QWORD *v28; // rax
  _DWORD *v29; // r12
  __int64 (__fastcall *v30)(__int64); // rax
  unsigned int v31; // eax
  unsigned int v32; // r12d
  _DWORD *v33; // r15
  __int64 (__fastcall *v34)(__int64); // rax
  unsigned int v35; // eax
  char *v36; // rsi
  const void *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  __int64 v41; // rcx
  __int64 v42; // r15
  char v43; // al
  unsigned __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  char v47; // al
  unsigned int v48; // ebp
  _QWORD *v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  __int64 v58; // r12
  __int64 v59; // rax
  _QWORD *v60; // rax
  size_t nb; // [rsp+8h] [rbp-100h]
  int n; // [rsp+8h] [rbp-100h]
  size_t na; // [rsp+8h] [rbp-100h]
  char v64; // [rsp+17h] [rbp-F1h]
  __int64 v66[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v67; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v68[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v69; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v70[11]; // [rsp+60h] [rbp-A8h] BYREF
  char v71; // [rsp+B8h] [rbp-50h]
  unsigned int v72; // [rsp+C0h] [rbp-48h]
  char v73; // [rsp+C4h] [rbp-44h]

  v66[0] = a4;
  v64 = a5;
  if ( a5 )
  {
    v44 = sub_168B6D0((__int64)a1);
    v47 = sub_FD3830(*(_QWORD *)(v44 + 32), 0x1CD8u, LODWORD(v66[0]), v44, v45, v46);
    v6 = *((_DWORD *)a2 + 2);
    if ( v47 == 1 )
    {
      if ( v6 == 1 )
        return;
      v64 = 0;
    }
    else
    {
      if ( v6 == 1 )
        return;
      v48 = 1;
      while ( (unsigned __int8)sub_1896130((__int64)a1, **a2, (*a2)[v48], 1u) )
      {
        if ( ++v48 == v6 )
          return;
      }
      if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) == 0 || (v6 = *((_DWORD *)a2 + 2), v6 == 1) )
      {
LABEL_14:
        v20 = v66[0];
LABEL_15:
        v21 = 7384;
        goto LABEL_16;
      }
    }
  }
  else
  {
    v6 = *((_DWORD *)a2 + 2);
    if ( v6 == 1 )
      return;
  }
  v7 = 1;
  while ( 1 )
  {
    v8 = **a2;
    if ( (unsigned __int8)sub_1896130((__int64)a1, v8, (*a2)[v7], 0) )
      goto LABEL_4;
    v13 = **a2;
    if ( (*(_BYTE *)(v13 + 58) & 2) == 0 )
      goto LABEL_9;
    nb = (*a2)[v7];
    v14 = sub_BA7E40(**a2, v8, v9, v10, v11, v12);
    if ( v14 != (unsigned __int8)sub_BA7E40(nb, v8, v15, v16, v17, v18) )
      goto LABEL_9;
    v68[0] = *(_QWORD *)(v13 + 40);
    if ( (v68[0] & 3) != 1 )
      goto LABEL_9;
    v36 = nullptr;
    na = j__strlen("length");
    v37 = (const void *)sub_FDE9A0(v68, 0);
    v41 = na;
    if ( na != v38 )
      goto LABEL_9;
    if ( na )
    {
      v36 = "length";
      if ( memcmp(v37, "length", na) )
        goto LABEL_9;
    }
    v42 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 80) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v43 = *(_BYTE *)(v42 + 16);
    if ( v43 == 13 )
    {
      if ( (((*(_WORD *)(v42 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
        goto LABEL_9;
      goto LABEL_4;
    }
    if ( v43 == 47 )
      break;
    if ( v43 != 10 )
      goto LABEL_9;
LABEL_4:
    if ( ++v7 == v6 )
    {
      if ( !v64 )
        return;
      goto LABEL_14;
    }
  }
  v49 = sub_F60F10(v42, (__int64)v36, v38, v41, v39, v40);
  if ( ((*((_BYTE *)v49 + 74) & 1) != 0 || (v49[16] & 0xFFFFFFFFFFFFFFF8LL) != 0)
    && *((char *)sub_F60F10(v42, (__int64)v36, v50, v51, v52, v53) + 76) >= 0 )
  {
    goto LABEL_4;
  }
LABEL_9:
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) != 0 )
  {
    sub_168B9F0((__int64)v68, a1, v66[0], 0xBD9u, 0);
    if ( v71 )
    {
      sub_AE9DF0(v70, a3, 9u);
    }
    else if ( v73 )
    {
      v58 = sub_168B9E0(v68);
      v59 = v69;
      if ( v69 )
        v59 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 32LL))(v69);
      v67 = v59;
      v60 = sub_1587BC0(v58, &v67, v54, v55, v56, v57);
      sub_AE9DF0((unsigned __int8 **)(*v60 + 32LL * v72 + 8), a3, 9u);
    }
    sub_15884C0((__int64)v68, v66);
    sub_15F7200(v68);
    v19 = 110;
    goto LABEL_22;
  }
  v20 = v66[0];
  if ( v64 )
    goto LABEL_15;
  v21 = 7118;
LABEL_16:
  sub_168B9F0((__int64)v68, a1, v20, v21, 0);
  if ( v71 )
  {
    sub_AE9DF0(v70, a3, 9u);
  }
  else if ( v73 )
  {
    v26 = sub_168B9E0(v68);
    v27 = v69;
    if ( v69 )
      v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v69 + 32LL))(v69);
    v67 = v27;
    v28 = sub_1587BC0(v26, &v67, v22, v23, v24, v25);
    sub_AE9DF0((unsigned __int8 **)(*v28 + 32LL * v72 + 8), a3, 9u);
  }
  sub_15884C0((__int64)v68, v66);
  sub_15F7200(v68);
  v19 = 119;
LABEL_22:
  sub_168B9F0((__int64)v68, a1, *(_DWORD *)(**a2 + 24), v19, 0);
  v29 = (_DWORD *)**a2;
  v30 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL);
  if ( v30 == sub_9C4AE0 )
  {
    v31 = sub_BA8020((__int64)v29);
    v67 = __PAIR64__(v31, v29[6]);
  }
  else
  {
    v67 = v30((__int64)v29);
  }
  sub_1587DB0((__int64)v68, &v67);
  sub_15F7200(v68);
  n = *((_DWORD *)a2 + 2);
  if ( n != 1 )
  {
    v32 = 1;
    do
    {
      while ( 1 )
      {
        sub_168B9F0((__int64)v68, a1, *(_DWORD *)((*a2)[v32] + 24), 0x63u, 0);
        v33 = (_DWORD *)(*a2)[v32];
        v34 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL);
        if ( v34 != sub_9C4AE0 )
          break;
        v35 = sub_BA8020((__int64)v33);
        ++v32;
        v67 = __PAIR64__(v35, v33[6]);
        sub_1587DB0((__int64)v68, &v67);
        sub_15F7200(v68);
        if ( v32 == n )
          return;
      }
      ++v32;
      v67 = v34((__int64)v33);
      sub_1587DB0((__int64)v68, &v67);
      sub_15F7200(v68);
    }
    while ( n != v32 );
  }
}
