unsigned __int64 __fastcall sub_1D40AC0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5)
{
  unsigned int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  unsigned int v9; // r12d
  unsigned __int64 v10; // rbx
  __int64 *v11; // rcx
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // r12
  __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r15
  __int64 v33; // r13
  __int64 v34; // r14
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // r12
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rbp
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  _QWORD *v57; // rax
  __int64 v58; // [rsp+8h] [rbp-100h]
  __int64 v59[2]; // [rsp+10h] [rbp-F8h] BYREF
  __int64 v60; // [rsp+20h] [rbp-E8h]
  __int64 v61[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v62; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v63[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+50h] [rbp-B8h]
  unsigned __int8 *v65[11]; // [rsp+60h] [rbp-A8h] BYREF
  char v66; // [rsp+B8h] [rbp-50h]
  unsigned int v67; // [rsp+C0h] [rbp-48h]
  char v68; // [rsp+C4h] [rbp-44h]

  v59[0] = a3;
  v61[0] = a2;
  v59[1] = a4;
  v5 = sub_F6CCB0(v59, a5);
  v8 = 0;
  v9 = v5;
  if ( (v59[0] & 8) != 0 )
    v8 = *(__int64 *)((char *)&qword_18 + (v59[0] & 0xFFFFFFFFFFFFFFF0LL));
  v10 = v8 | v59[0] & 7;
  v11 = (__int64 *)(v61[0] & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_QWORD *)&byte_8[v61[0] & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0 )
  {
    v20 = v61[0] & 7
        | *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v61[0] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
        | *(_QWORD *)&byte_8[v61[0] & 0xFFFFFFFFFFFFFFF0LL] & 7LL;
    a2 = (unsigned int)v20 >> 9;
    if ( (unsigned int)v20 >> 9 && (unsigned int)v10 >> 9 && (_DWORD)a2 != (unsigned int)v10 >> 9 )
    {
      sub_168B9F0((__int64)v63, (__int64 *)(*a1 + 8LL), v9, 0xB91u, 0);
      v22 = v59[0];
      if ( v66 )
      {
        sub_AE9DF0(v65, v59[0], 8u);
      }
      else
      {
        if ( !v68 )
        {
LABEL_24:
          sub_15F7200(v63);
          return 0;
        }
        v27 = sub_168B9E0(v63);
        v28 = v64;
        if ( v64 )
          v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 32LL))(v64);
        v62 = v28;
        v29 = sub_1587BC0(v27, &v62, v23, v24, v25, v26);
        sub_AE9DF0((unsigned __int8 **)(*v29 + 32LL * v67 + 8), v22, 8u);
      }
      if ( v66 )
      {
        sub_AE9DF0(v65, v61[0], 8u);
      }
      else if ( v68 )
      {
        v53 = sub_168B9E0(v63);
        v56 = v64;
        if ( v64 )
          v56 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 32LL))(v64);
        v62 = v56;
        v57 = sub_1587BC0(v53, &v62, v51, v52, v54, v55);
        sub_AE9DF0((unsigned __int8 **)(*v57 + 32LL * v67 + 8), v61[0], 8u);
      }
      goto LABEL_24;
    }
    if ( !HIDWORD(v10) )
      goto LABEL_5;
    if ( HIDWORD(v20) )
    {
      sub_168B9F0((__int64)v63, (__int64 *)(*a1 + 8LL), v9, 0x130Eu, 0);
      v21 = v59[0];
      if ( v66 )
      {
        sub_AE9DF0(v65, v59[0], 8u);
      }
      else if ( v68 )
      {
        v48 = sub_168B9E0(v63);
        v49 = v64;
        if ( v64 )
          v49 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v64 + 32LL))(v64);
        v62 = v49;
        v50 = sub_1587BC0(v48, &v62, v44, v45, v46, v47);
        sub_AE9DF0((unsigned __int8 **)(*v50 + 32LL * v67 + 8), v21, 8u);
      }
      goto LABEL_24;
    }
  }
  else if ( !HIDWORD(v10) )
  {
LABEL_5:
    v12 = *v11;
    LODWORD(v13) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    goto LABEL_6;
  }
  v12 = *v11;
  v13 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (*(_BYTE *)(*v11 + 17) & 4) != 0 )
    goto LABEL_6;
  if ( (_BYTE)v13 == 42 )
    goto LABEL_35;
  v15 = *(_QWORD *)(*a1 + 248LL);
  v16 = *v11;
  if ( *(_BYTE *)(v12 + 16) == 34 )
    goto LABEL_11;
  if ( (_BYTE)v13 != 34 )
    goto LABEL_59;
  v16 = sub_F63050(*v11, a2, v13, v11);
  if ( v16 )
  {
LABEL_11:
    v17 = *(_QWORD *)(*(_QWORD *)(v16 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v18 = (unsigned int)*(unsigned __int8 *)(v17 + 16) - 35;
    if ( (unsigned int)v18 > 1 )
      v17 = sub_F63050(v17, a2, v18, v11);
    v13 = *(unsigned __int8 *)(v17 + 19);
    LOBYTE(v13) = (unsigned __int8)v13 >> 2;
    if ( !(_BYTE)v13 )
    {
      v19 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v19 + 16) == 13 && ((*(_WORD *)(v19 + 18) >> 3) & 0x1FF) == 0x1EA )
        goto LABEL_16;
    }
  }
  if ( *(_BYTE *)(v12 + 16) == 34 )
  {
    v40 = v12;
    goto LABEL_54;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
  {
    v40 = sub_F63050(v12, a2, v13, v11);
    if ( v40 )
    {
LABEL_54:
      v41 = *(_QWORD *)(*(_QWORD *)(v40 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      v42 = (unsigned int)*(unsigned __int8 *)(v41 + 16) - 35;
      if ( (unsigned int)v42 > 1 )
        v41 = sub_F63050(v41, a2, v42, v11);
      v13 = *(unsigned __int8 *)(v41 + 19);
      LOBYTE(v13) = (unsigned __int8)v13 >> 2;
      if ( (_BYTE)v13 )
      {
        v43 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v43 + 16) == 13 && ((*(_WORD *)(v43 + 18) >> 3) & 0x1FF) == 0x1EA )
          goto LABEL_16;
      }
    }
  }
LABEL_59:
  a2 = v15;
  if ( !sub_F61990(v12, v15, v13, (__int64)v11, v6, v7) )
  {
    sub_168B9F0((__int64)v63, (__int64 *)(*a1 + 8LL), v9, 0x130Du, 0);
    sub_1605D30((__int64)v63, v61);
    goto LABEL_24;
  }
LABEL_16:
  v12 = *(_QWORD *)(v61[0] & 0xFFFFFFFFFFFFFFF0LL);
  LODWORD(v13) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_6:
  if ( (unsigned int)(v13 - 25) <= 1 )
    return sub_A70E70(*(_QWORD *)(*a1 + 248LL), v61[0], (unsigned int)v10 >> 9);
  v13 = (unsigned int)(v13 - 43);
  if ( (unsigned int)v13 > 1 )
  {
LABEL_35:
    if ( (v10 & 0x1C0) == 0 )
      return sub_1E62D40(*a1, v61[0], v9, v10, 0);
    if ( sub_F6ACC0(v12, a2, v13, (__int64)v11, v6) )
    {
      v30 = (_QWORD *)(v61[0] & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v30 = (_QWORD *)(v61[0] & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(*(_QWORD *)(v61[0] & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
      {
LABEL_49:
        v10 &= 0xFFFFFFFFFFFFFE3FLL;
        return sub_1E62D40(*a1, v61[0], v9, v10, 0);
      }
    }
    v31 = v30[1];
    if ( (v31 & 8) == 0 || (*(_WORD *)((_BYTE *)&qword_18 + (v31 & 0xFFFFFFFFFFFFFFF0LL)) & 0x1C0) == 0 )
      return sub_1E62D40(*a1, v61[0], v9, v10, 0);
    v32 = *v30;
    if ( *(_BYTE *)(*v30 + 16LL) == 16 )
    {
      v33 = *(_QWORD *)(v32 + 24);
      if ( (v33 & 0xFFFFFFFFFFFFFFF0LL) != 0 || (*(_BYTE *)(v32 + 17) & 4) != 0 )
      {
        v34 = 0;
        v63[0] = *(_QWORD *)(v32 + 24);
        v35 = *(_QWORD *)&byte_8[v33 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v35 & 8) != 0 )
          v34 = *(__int64 *)((char *)&qword_18 + (v35 & 0xFFFFFFFFFFFFFFF0LL));
        v36 = *a1;
        v60 = *(_QWORD *)&byte_8[v33 & 0xFFFFFFFFFFFFFFF0LL];
        v58 = *(_QWORD *)(v36 + 248);
        v37 = sub_6D5440(v63);
        v38 = sub_A70F20(v58, v37, v34 & 0xFFFFFFFFFFFFFE3FLL | ((unsigned __int8)v33 | (unsigned __int8)v60) & 7);
        v39 = *a1;
        v63[0] = v38;
        v61[0] = sub_AB5840(
                   *(_QWORD *)(v39 + 248),
                   v38,
                   (*(_BYTE *)(v32 + 18) >> 3) & 3,
                   (*(_BYTE *)(v32 + 17) & 4) != 0,
                   0,
                   *(__int64 **)(v32 + 32),
                   v32 + 48,
                   *(unsigned int *)(v32 + 20));
        return sub_1E62D40(*a1, v61[0], v9, v10, 0);
      }
    }
    sub_168B9F0((__int64)v63, (__int64 *)(*a1 + 8LL), v9, 0xC48u, 0);
    sub_1605D30((__int64)v63, v61);
    sub_15F7200(v63);
    goto LABEL_49;
  }
  if ( (v10 & 2) == 0 )
    return v61[0];
  v10 = 2;
  return sub_1E62D40(*a1, v61[0], v9, v10, 0);
}
