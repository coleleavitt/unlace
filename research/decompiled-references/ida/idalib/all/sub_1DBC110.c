unsigned __int64 __fastcall sub_1DBC110(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5)
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
  __int64 v32; // r13
  __int64 v33; // rax
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r12
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rbp
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // r15
  unsigned __int64 v59; // rax
  _QWORD *v60; // rsi
  __int64 v61; // rdx
  __int64 v62[2]; // [rsp+0h] [rbp-F8h] BYREF
  __int64 v63; // [rsp+10h] [rbp-E8h]
  __int64 v64[2]; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v65; // [rsp+28h] [rbp-D0h] BYREF
  _QWORD v66[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v67; // [rsp+40h] [rbp-B8h]
  unsigned __int8 *v68[11]; // [rsp+50h] [rbp-A8h] BYREF
  char v69; // [rsp+A8h] [rbp-50h]
  unsigned int v70; // [rsp+B0h] [rbp-48h]
  char v71; // [rsp+B4h] [rbp-44h]

  v62[0] = a3;
  v64[0] = a2;
  v62[1] = a4;
  v5 = sub_F6CCB0(v62, a5);
  v8 = 0;
  v9 = v5;
  if ( (v62[0] & 8) != 0 )
    v8 = *(__int64 *)((char *)&qword_18 + (v62[0] & 0xFFFFFFFFFFFFFFF0LL));
  v10 = v8 | v62[0] & 7;
  v11 = (__int64 *)(v64[0] & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_QWORD *)&byte_8[v64[0] & 0xFFFFFFFFFFFFFFF0LL] & 8) != 0 )
  {
    v20 = v64[0] & 7
        | *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v64[0] & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
        | *(_QWORD *)&byte_8[v64[0] & 0xFFFFFFFFFFFFFFF0LL] & 7LL;
    a2 = (unsigned int)v20 >> 9;
    if ( (unsigned int)v20 >> 9 && (unsigned int)v10 >> 9 && (_DWORD)a2 != (unsigned int)v10 >> 9 )
    {
      sub_168B9F0((__int64)v66, (__int64 *)(*a1 + 8LL), v9, 0xB91u, 0);
      v22 = v62[0];
      if ( v69 )
      {
        sub_AE9DF0(v68, v62[0], 8u);
      }
      else
      {
        if ( !v71 )
        {
LABEL_24:
          sub_15F7200(v66);
          return 0;
        }
        v27 = sub_168B9E0(v66);
        v28 = v67;
        if ( v67 )
          v28 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v67 + 32LL))(v67);
        v65 = v28;
        v29 = sub_1587BC0(v27, &v65, v23, v24, v25, v26);
        sub_AE9DF0((unsigned __int8 **)(*v29 + 32LL * v70 + 8), v22, 8u);
      }
      if ( v69 )
      {
        sub_AE9DF0(v68, v64[0], 8u);
      }
      else if ( v71 )
      {
        v51 = sub_168B9E0(v66);
        v54 = v67;
        if ( v67 )
          v54 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v67 + 32LL))(v67);
        v65 = v54;
        v55 = sub_1587BC0(v51, &v65, v49, v50, v52, v53);
        sub_AE9DF0((unsigned __int8 **)(*v55 + 32LL * v70 + 8), v64[0], 8u);
      }
      goto LABEL_24;
    }
    if ( !HIDWORD(v10) )
      goto LABEL_5;
    if ( HIDWORD(v20) )
    {
      sub_168B9F0((__int64)v66, (__int64 *)(*a1 + 8LL), v9, 0x130Eu, 0);
      v21 = v62[0];
      if ( v69 )
      {
        sub_AE9DF0(v68, v62[0], 8u);
      }
      else if ( v71 )
      {
        v46 = sub_168B9E0(v66);
        v47 = v67;
        if ( v67 )
          v47 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v67 + 32LL))(v67);
        v65 = v47;
        v48 = sub_1587BC0(v46, &v65, v42, v43, v44, v45);
        sub_AE9DF0((unsigned __int8 **)(*v48 + 32LL * v70 + 8), v21, 8u);
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
    goto LABEL_60;
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
    v38 = v12;
    goto LABEL_55;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
  {
    v38 = sub_F63050(v12, a2, v13, v11);
    if ( v38 )
    {
LABEL_55:
      v39 = *(_QWORD *)(*(_QWORD *)(v38 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      v40 = (unsigned int)*(unsigned __int8 *)(v39 + 16) - 35;
      if ( (unsigned int)v40 > 1 )
        v39 = sub_F63050(v39, a2, v40, v11);
      v13 = *(unsigned __int8 *)(v39 + 19);
      LOBYTE(v13) = (unsigned __int8)v13 >> 2;
      if ( (_BYTE)v13 )
      {
        v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v41 + 16) == 13 && ((*(_WORD *)(v41 + 18) >> 3) & 0x1FF) == 0x1EA )
          goto LABEL_16;
      }
    }
  }
LABEL_60:
  a2 = v15;
  if ( !sub_F61990(v12, v15, v13, (__int64)v11, v6, v7) )
  {
    sub_168B9F0((__int64)v66, (__int64 *)(*a1 + 8LL), v9, 0x130Du, 0);
    sub_1605D30((__int64)v66, v64);
    goto LABEL_24;
  }
LABEL_16:
  v12 = *(_QWORD *)(v64[0] & 0xFFFFFFFFFFFFFFF0LL);
  LODWORD(v13) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_6:
  if ( (unsigned int)(v13 - 25) <= 1 )
    return sub_A70E70(*(_QWORD *)(*a1 + 248LL), v64[0], (unsigned int)v10 >> 9);
  v13 = (unsigned int)(v13 - 43);
  if ( (unsigned int)v13 > 1 )
  {
LABEL_35:
    if ( (v10 & 0x1C0) == 0 )
      return sub_1E62D40(*a1, v64[0], v9, v10, 0);
    if ( sub_F6ACC0(v12, a2, v13, (__int64)v11, v6) )
    {
      v30 = (_QWORD *)(v64[0] & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v30 = (_QWORD *)(v64[0] & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(*(_QWORD *)(v64[0] & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
        goto LABEL_50;
    }
    v31 = v30[1];
    if ( (v31 & 8) == 0 || (*(_WORD *)((_BYTE *)&qword_18 + (v31 & 0xFFFFFFFFFFFFFFF0LL)) & 0x1C0) == 0 )
      return sub_1E62D40(*a1, v64[0], v9, v10, 0);
    v32 = *v30;
    if ( *(_BYTE *)(*v30 + 16LL) == 16 )
    {
      v33 = *(_QWORD *)(v32 + 24);
      if ( (v33 & 0xFFFFFFFFFFFFFFF0LL) != 0 || (*(_BYTE *)(v32 + 17) & 4) != 0 )
      {
        v66[0] = *(_QWORD *)(v32 + 24);
        v34 = *(_QWORD *)&byte_8[v33 & 0xFFFFFFFFFFFFFFF0LL];
        if ( (v34 & 8) != 0 )
        {
          v56 = v33 & 7
              | *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v33 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
              | *(_QWORD *)&byte_8[v33 & 0xFFFFFFFFFFFFFFF0LL] & 7LL;
          v57 = *a1;
          v63 = v56;
          v58 = *(_QWORD *)(v57 + 248);
          v34 = v56 & 0xFFFFFFFFFFFFFE3FLL;
          v59 = sub_6D5440(v66);
          v35 = v59;
          if ( (v63 & 0xFFFFFFFFFFFFFE38LL) != 0 )
          {
            v60 = (_QWORD *)(v59 & 0xFFFFFFFFFFFFFFF0LL);
            v61 = v34 | v59 & 7;
            if ( (v59 & 8) != 0 )
            {
              v61 |= *(__int64 *)((char *)&qword_18 + (v59 & 0xFFFFFFFFFFFFFFF0LL));
              v60 = (_QWORD *)*v60;
            }
            v36 = sub_A70C40(v58, (__int64)v60, v61);
            goto LABEL_46;
          }
        }
        else
        {
          LODWORD(v34) = ((unsigned __int8)v34 | (unsigned __int8)v33) & 7;
          v35 = sub_6D5440(v66);
        }
        v36 = v35 & 0xFFFFFFFFFFFFFFF8LL | v35 & 7 | (unsigned int)v34;
LABEL_46:
        v37 = *a1;
        v66[0] = v36;
        v64[0] = sub_AB5840(
                   *(_QWORD *)(v37 + 248),
                   v36,
                   (*(_BYTE *)(v32 + 18) >> 3) & 3,
                   (*(_BYTE *)(v32 + 17) & 4) != 0,
                   0,
                   *(__int64 **)(v32 + 32),
                   v32 + 48,
                   *(unsigned int *)(v32 + 20));
        return sub_1E62D40(*a1, v64[0], v9, v10, 0);
      }
    }
    sub_168B9F0((__int64)v66, (__int64 *)(*a1 + 8LL), v9, 0xC48u, 0);
    sub_1605D30((__int64)v66, v64);
    sub_15F7200(v66);
LABEL_50:
    v10 &= 0xFFFFFFFFFFFFFE3FLL;
    return sub_1E62D40(*a1, v64[0], v9, v10, 0);
  }
  if ( (v10 & 2) == 0 )
    return v64[0];
  v10 = 2;
  return sub_1E62D40(*a1, v64[0], v9, v10, 0);
}
