unsigned __int64 __fastcall sub_1D89660(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5)
{
  unsigned int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned int v10; // r12d
  unsigned __int64 v11; // rbx
  __int64 *v12; // rcx
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v16; // r14
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rbp
  __int64 v23; // rbp
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r12
  __int64 v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // r8
  _QWORD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r14
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // rdi
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // r13
  __int64 v41; // r15
  __int64 v42; // rdx
  unsigned __int64 v43; // rsi
  unsigned __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // r12
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rbp
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  _QWORD *v62; // rax
  __int64 v63[2]; // [rsp+0h] [rbp-F8h] BYREF
  unsigned __int64 v64; // [rsp+10h] [rbp-E8h]
  __int64 v65[2]; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v66; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v67[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v68; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v69[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v70; // [rsp+A8h] [rbp-50h]
  unsigned int v71; // [rsp+B0h] [rbp-48h]
  char v72; // [rsp+B4h] [rbp-44h]

  v63[0] = a3;
  v65[0] = a2;
  v63[1] = a4;
  v6 = sub_F6CCB0(v63, a5);
  v9 = 0;
  v10 = v6;
  if ( (v63[0] & 8) != 0 )
    v9 = *(__int64 *)((char *)&qword_18 + (v63[0] & 0xFFFFFFFFFFFFFFF0LL));
  v11 = v9 | v63[0] & 7;
  v12 = (__int64 *)(v65[0] & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_QWORD *)&byte_8[v65[0] & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0 )
  {
    v21 = v65[0] & 7
        | *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v65[0] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
        | *(_QWORD *)&byte_8[v65[0] & 0xFFFFFFFFFFFFFFF0LL] & 7LL;
    a2 = (unsigned int)v21 >> 9;
    if ( (unsigned int)v21 >> 9 && (unsigned int)v11 >> 9 && (_DWORD)a2 != (unsigned int)v11 >> 9 )
    {
      sub_168B9F0((__int64)v67, (__int64 *)(*a1 + 8LL), v10, 0xB91u, 0);
      v23 = v63[0];
      if ( v70 )
      {
        sub_AE9DF0(v69, v63[0], 8u);
      }
      else
      {
        if ( !v72 )
        {
LABEL_24:
          sub_15F7200(v67);
          return 0;
        }
        v28 = sub_168B9E0(v67);
        v29 = v68;
        if ( v68 )
          v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v68 + 32LL))(v68);
        v66 = v29;
        v30 = sub_1587BC0(v28, &v66, v24, v25, v26, v27);
        sub_AE9DF0((unsigned __int8 **)(*v30 + 32LL * v71 + 8), v23, 8u);
      }
      if ( v70 )
      {
        sub_AE9DF0(v69, v65[0], 8u);
      }
      else if ( v72 )
      {
        v58 = sub_168B9E0(v67);
        v61 = v68;
        if ( v68 )
          v61 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v68 + 32LL))(v68);
        v66 = v61;
        v62 = sub_1587BC0(v58, &v66, v56, v57, v59, v60);
        sub_AE9DF0((unsigned __int8 **)(*v62 + 32LL * v71 + 8), v65[0], 8u);
      }
      goto LABEL_24;
    }
    if ( !HIDWORD(v11) )
      goto LABEL_5;
    if ( HIDWORD(v21) )
    {
      sub_168B9F0((__int64)v67, (__int64 *)(*a1 + 8LL), v10, 0x130Eu, 0);
      v22 = v63[0];
      if ( v70 )
      {
        sub_AE9DF0(v69, v63[0], 8u);
      }
      else if ( v72 )
      {
        v53 = sub_168B9E0(v67);
        v54 = v68;
        if ( v68 )
          v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v68 + 32LL))(v68);
        v66 = v54;
        v55 = sub_1587BC0(v53, &v66, v49, v50, v51, v52);
        sub_AE9DF0((unsigned __int8 **)(*v55 + 32LL * v71 + 8), v22, 8u);
      }
      goto LABEL_24;
    }
  }
  else if ( !HIDWORD(v11) )
  {
LABEL_5:
    v13 = *v12;
    LODWORD(v14) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    goto LABEL_6;
  }
  v13 = *v12;
  v14 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
  if ( (*(_BYTE *)(*v12 + 17) & 4) != 0 )
    goto LABEL_6;
  if ( (_BYTE)v14 == 42 )
    goto LABEL_35;
  v16 = *(_QWORD *)(*a1 + 248LL);
  v17 = *v12;
  if ( *(_BYTE *)(v13 + 16) == 34 )
    goto LABEL_11;
  if ( (_BYTE)v14 != 34 )
    goto LABEL_63;
  v17 = sub_F63050(*v12, a2, v14, v12);
  if ( v17 )
  {
LABEL_11:
    v18 = *(_QWORD *)(*(_QWORD *)(v17 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v19 = (unsigned int)*(unsigned __int8 *)(v18 + 16) - 35;
    if ( (unsigned int)v19 > 1 )
      v18 = sub_F63050(v18, a2, v19, v12);
    v14 = *(unsigned __int8 *)(v18 + 19);
    LOBYTE(v14) = (unsigned __int8)v14 >> 2;
    if ( !(_BYTE)v14 )
    {
      v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v18 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                      & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(v20 + 16) == 13 && ((*(_WORD *)(v20 + 18) >> 3) & 0x1FF) == 0x1EA )
        goto LABEL_16;
    }
  }
  if ( *(_BYTE *)(v13 + 16) == 34 )
  {
    v45 = v13;
    goto LABEL_58;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
  {
    v45 = sub_F63050(v13, a2, v14, v12);
    if ( v45 )
    {
LABEL_58:
      v46 = *(_QWORD *)(*(_QWORD *)(v45 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      v47 = (unsigned int)*(unsigned __int8 *)(v46 + 16) - 35;
      if ( (unsigned int)v47 > 1 )
        v46 = sub_F63050(v46, a2, v47, v12);
      v14 = *(unsigned __int8 *)(v46 + 19);
      LOBYTE(v14) = (unsigned __int8)v14 >> 2;
      if ( (_BYTE)v14 )
      {
        v48 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v46 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v48 + 16) == 13 && ((*(_WORD *)(v48 + 18) >> 3) & 0x1FF) == 0x1EA )
          goto LABEL_16;
      }
    }
  }
LABEL_63:
  a2 = v16;
  if ( !sub_F61990(v13, v16, v14, (__int64)v12, v7, v8) )
  {
    sub_168B9F0((__int64)v67, (__int64 *)(*a1 + 8LL), v10, 0x130Du, 0);
    sub_1605D30((__int64)v67, v65);
    goto LABEL_24;
  }
LABEL_16:
  v13 = *(_QWORD *)(v65[0] & 0xFFFFFFFFFFFFFFF0LL);
  LODWORD(v14) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_6:
  if ( (unsigned int)(v14 - 25) <= 1 )
    return sub_A70E70(*(_QWORD *)(*a1 + 248LL), v65[0], (unsigned int)v11 >> 9);
  v14 = (unsigned int)(v14 - 43);
  if ( (unsigned int)v14 > 1 )
  {
LABEL_35:
    if ( (v11 & 0x1C0) == 0 )
      return sub_1E62D40(*a1, v65[0], v10, v11, 0);
    if ( sub_F6ACC0(v13, a2, v14, (__int64)v12, v7) )
    {
      v32 = (_QWORD *)(v65[0] & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v32 = (_QWORD *)(v65[0] & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(*(_QWORD *)(v65[0] & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
      {
LABEL_53:
        v11 &= 0xFFFFFFFFFFFFFE3FLL;
        return sub_1E62D40(*a1, v65[0], v10, v11, 0);
      }
    }
    v33 = v32[1];
    if ( (v33 & 8) == 0 || (*(_WORD *)((_BYTE *)&qword_18 + (v33 & 0xFFFFFFFFFFFFFFF0LL)) & 0x1C0) == 0 )
      return sub_1E62D40(*a1, v65[0], v10, v11, 0);
    v34 = *v32;
    if ( *(_BYTE *)(*v32 + 16LL) == 16 )
    {
      v35 = *(_QWORD *)(v34 + 24);
      if ( (v35 & 0xFFFFFFFFFFFFFFF0LL) != 0 || (*(_BYTE *)(v34 + 17) & 4) != 0 )
      {
        v36 = *(_QWORD *)&byte_8[*(_QWORD *)(v34 + 24) & 0xFFFFFFFFFFFFFFF0LL];
        v37 = *(_QWORD *)(v34 + 24);
        v38 = 0;
        if ( (v36 & 8) != 0 )
          v38 = *(__int64 *)((char *)&qword_18 + (v36 & 0xFFFFFFFFFFFFFFF0LL));
        v39 = *(_QWORD *)(*(_QWORD *)(v34 + 24) & 0xFFFFFFFFFFFFFFF0LL);
        v40 = v38 | ((unsigned __int8)v35 | (unsigned __int8)v36) & 7;
        v64 = v40 & 0xFFFFFFFFFFFFFE3FLL;
        v41 = *(_QWORD *)(*a1 + 248LL);
        v42 = *(_QWORD *)(v39 + 8) & 7LL | (*(__int64 *)(v39 + 8) >> 3) & 1;
        if ( v42 )
          v43 = sub_F64F00(v37, v39, v42, v38, v31) & 0xFFFFFFFFFFFFFFF0LL;
        else
          v43 = v39 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (v40 & 0xFFFFFFFFFFFFFE38LL) != 0 )
          v44 = sub_A70C40(v41, v43, v64);
        else
          v44 = (unsigned int)v40 & 0xFFFFFE3F | v43;
        v65[0] = sub_AB5840(
                   *(_QWORD *)(*a1 + 248LL),
                   v44,
                   (*(_BYTE *)(v34 + 18) >> 3) & 3,
                   (*(_BYTE *)(v34 + 17) & 4) != 0,
                   0,
                   *(__int64 **)(v34 + 32),
                   v34 + 48,
                   *(unsigned int *)(v34 + 20));
        return sub_1E62D40(*a1, v65[0], v10, v11, 0);
      }
    }
    sub_168B9F0((__int64)v67, (__int64 *)(*a1 + 8LL), v10, 0xC48u, 0);
    sub_1605D30((__int64)v67, v65);
    sub_15F7200(v67);
    goto LABEL_53;
  }
  if ( (v11 & 2) == 0 )
    return v65[0];
  v11 = 2;
  return sub_1E62D40(*a1, v65[0], v10, v11, 0);
}
