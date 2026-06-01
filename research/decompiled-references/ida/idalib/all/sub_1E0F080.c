unsigned __int64 __fastcall sub_1E0F080(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __m128 a5)
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
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // r8
  _QWORD *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // r13
  __int64 v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // r13
  __int64 v34; // r15
  __int64 v35; // rdx
  unsigned __int64 v36; // rsi
  unsigned __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rbp
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49[2]; // [rsp+0h] [rbp-F8h] BYREF
  unsigned __int64 v50; // [rsp+10h] [rbp-E8h]
  __int64 v51; // [rsp+18h] [rbp-E0h] BYREF
  __int64 v52; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v53; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v54[200]; // [rsp+30h] [rbp-C8h] BYREF

  v49[0] = a3;
  v51 = a2;
  v49[1] = a4;
  v6 = sub_F6CCB0(v49, a5);
  v9 = 0;
  v10 = v6;
  if ( (v49[0] & 8) != 0 )
    v9 = *(__int64 *)((char *)&qword_18 + (v49[0] & 0xFFFFFFFFFFFFFFF0LL));
  v11 = v9 | v49[0] & 7;
  v12 = (__int64 *)(v51 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_QWORD *)&byte_8[v51 & 0xFFFFFFFFFFFFFFF0LL] & 8) == 0 )
  {
    if ( !HIDWORD(v11) )
    {
LABEL_5:
      v13 = *v12;
      LODWORD(v14) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
      goto LABEL_6;
    }
    goto LABEL_8;
  }
  v21 = v51 & 7
      | *(__int64 *)((char *)&qword_18 + (*(_QWORD *)&byte_8[v51 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
      | *(_QWORD *)&byte_8[v51 & 0xFFFFFFFFFFFFFFF0LL] & 7LL;
  a2 = (unsigned int)v21 >> 9;
  if ( !((unsigned int)v21 >> 9) || !((unsigned int)v11 >> 9) || (_DWORD)a2 == (unsigned int)v11 >> 9 )
  {
    if ( !HIDWORD(v11) )
      goto LABEL_5;
    if ( HIDWORD(v21) )
    {
      sub_168B9F0((__int64)v54, (__int64 *)(*a1 + 8LL), v10, 0x130Eu, 0);
      v53 = v49[0];
      sub_162B6D0((__int64)v54, &v53);
      sub_15F7200(v54);
      return 0;
    }
LABEL_8:
    v13 = *v12;
    v14 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (*(_BYTE *)(*v12 + 17) & 4) != 0 )
      goto LABEL_6;
    if ( (_BYTE)v14 == 42 )
      goto LABEL_29;
    v16 = *(_QWORD *)(*a1 + 248LL);
    v17 = *v12;
    if ( *(_BYTE *)(v13 + 16) == 34 )
      goto LABEL_11;
    if ( (_BYTE)v14 != 34 )
      goto LABEL_57;
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
      v38 = v13;
      goto LABEL_52;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 34 )
    {
      v38 = sub_F63050(v13, a2, v14, v12);
      if ( v38 )
      {
LABEL_52:
        v39 = *(_QWORD *)(*(_QWORD *)(v38 + 32) & 0xFFFFFFFFFFFFFFF0LL);
        v40 = (unsigned int)*(unsigned __int8 *)(v39 + 16) - 35;
        if ( (unsigned int)v40 > 1 )
          v39 = sub_F63050(v39, a2, v40, v12);
        v14 = *(unsigned __int8 *)(v39 + 19);
        LOBYTE(v14) = (unsigned __int8)v14 >> 2;
        if ( (_BYTE)v14 )
        {
          v41 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL);
          if ( *(_BYTE *)(v41 + 16) == 13 && ((*(_WORD *)(v41 + 18) >> 3) & 0x1FF) == 0x1EA )
            goto LABEL_16;
        }
      }
    }
LABEL_57:
    a2 = v16;
    if ( !sub_F61990(v13, v16, v14, (__int64)v12, v7, v8) )
    {
      sub_168B9F0((__int64)v54, (__int64 *)(*a1 + 8LL), v10, 0x130Du, 0);
      sub_1605D30((__int64)v54, &v51);
      sub_15F7200(v54);
      return 0;
    }
LABEL_16:
    v13 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL);
    LODWORD(v14) = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
LABEL_6:
    if ( (unsigned int)(v14 - 25) <= 1 )
      return sub_A70E70(*(_QWORD *)(*a1 + 248LL), v51, (unsigned int)v11 >> 9);
    v14 = (unsigned int)(v14 - 43);
    if ( (unsigned int)v14 <= 1 )
    {
      if ( (v11 & 2) == 0 )
        return v51;
      v11 = 2;
      return sub_1E62D40(*a1, v51, v10, v11, 0);
    }
LABEL_29:
    if ( (v11 & 0x1C0) == 0 )
      return sub_1E62D40(*a1, v51, v10, v11, 0);
    if ( sub_F6ACC0(v13, a2, v14, (__int64)v12, v7) )
    {
      v25 = (_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL);
    }
    else
    {
      v25 = (_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(*(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
      {
LABEL_47:
        v11 &= 0xFFFFFFFFFFFFFE3FLL;
        return sub_1E62D40(*a1, v51, v10, v11, 0);
      }
    }
    v26 = v25[1];
    if ( (v26 & 8) == 0 || (*(_WORD *)((_BYTE *)&qword_18 + (v26 & 0xFFFFFFFFFFFFFFF0LL)) & 0x1C0) == 0 )
      return sub_1E62D40(*a1, v51, v10, v11, 0);
    v27 = *v25;
    if ( *(_BYTE *)(*v25 + 16LL) == 16 )
    {
      v28 = *(_QWORD *)(v27 + 24);
      if ( (v28 & 0xFFFFFFFFFFFFFFF0LL) != 0 || (*(_BYTE *)(v27 + 17) & 4) != 0 )
      {
        v29 = *(_QWORD *)&byte_8[*(_QWORD *)(v27 + 24) & 0xFFFFFFFFFFFFFFF0LL];
        v30 = *(_QWORD *)(v27 + 24);
        v31 = 0;
        if ( (v29 & 8) != 0 )
          v31 = *(__int64 *)((char *)&qword_18 + (v29 & 0xFFFFFFFFFFFFFFF0LL));
        v32 = *(_QWORD *)(*(_QWORD *)(v27 + 24) & 0xFFFFFFFFFFFFFFF0LL);
        v33 = v31 | ((unsigned __int8)v28 | (unsigned __int8)v29) & 7;
        v50 = v33 & 0xFFFFFFFFFFFFFE3FLL;
        v34 = *(_QWORD *)(*a1 + 248LL);
        v35 = *(_QWORD *)(v32 + 8) & 7LL | (*(__int64 *)(v32 + 8) >> 3) & 1;
        if ( v35 )
          v36 = sub_F64F00(v30, v32, v35, v31, v24) & 0xFFFFFFFFFFFFFFF0LL;
        else
          v36 = v32 & 0xFFFFFFFFFFFFFFF0LL;
        if ( (v33 & 0xFFFFFFFFFFFFFE38LL) != 0 )
          v37 = sub_A70C40(v34, v36, v50);
        else
          v37 = (unsigned int)v33 & 0xFFFFFE3F | v36;
        v51 = sub_AB5840(
                *(_QWORD *)(*a1 + 248LL),
                v37,
                (*(_BYTE *)(v27 + 18) >> 3) & 3,
                (*(_BYTE *)(v27 + 17) & 4) != 0,
                0,
                *(__int64 **)(v27 + 32),
                v27 + 48,
                *(unsigned int *)(v27 + 20));
        return sub_1E62D40(*a1, v51, v10, v11, 0);
      }
    }
    sub_168B9F0((__int64)v54, (__int64 *)(*a1 + 8LL), v10, 0xC48u, 0);
    sub_1605D30((__int64)v54, &v51);
    sub_15F7200(v54);
    goto LABEL_47;
  }
  sub_168B9F0((__int64)v54, (__int64 *)(*a1 + 8LL), v10, 0xB91u, 0);
  v52 = v49[0];
  v22 = sub_162B6D0((__int64)v54, &v52);
  v23 = v22;
  if ( *(_BYTE *)(v22 + 120) )
  {
    sub_AE9DF0((unsigned __int8 **)(v22 + 32), v51, 8u);
  }
  else if ( *(_BYTE *)(v22 + 132) )
  {
    v44 = sub_168B9E0((_QWORD *)v22);
    v47 = *(_QWORD *)(v23 + 16);
    if ( v47 )
      v47 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v47 + 32LL))(*(_QWORD *)(v23 + 16));
    v53 = v47;
    v48 = sub_1587BC0(v44, &v53, v42, v43, v45, v46);
    sub_AE9DF0((unsigned __int8 **)(*v48 + 32LL * *(unsigned int *)(v23 + 128) + 8), v51, 8u);
  }
  sub_15F7200(v54);
  return 0;
}
