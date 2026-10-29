unsigned __int64 __fastcall sub_189F870(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        char a7)
{
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // r8
  __int64 *v15; // rdx
  __int64 v16; // r10
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rbp
  unsigned int v22; // ecx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdi
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp+0h] [rbp-D8h]
  __int64 v38; // [rsp+0h] [rbp-D8h]
  __int64 v39; // [rsp+0h] [rbp-D8h]
  __int64 v40; // [rsp+0h] [rbp-D8h]
  __int64 v41; // [rsp+0h] [rbp-D8h]
  __int64 v42; // [rsp+0h] [rbp-D8h]
  __int64 v43; // [rsp+8h] [rbp-D0h]
  __int64 *v44; // [rsp+8h] [rbp-D0h]
  __int64 *v45; // [rsp+8h] [rbp-D0h]
  __int64 *v46; // [rsp+8h] [rbp-D0h]
  _BYTE v47[200]; // [rsp+10h] [rbp-C8h] BYREF

  v12 = sub_168B6C0((__int64)a1);
  v15 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL);
  v16 = v12;
  v17 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v17 & 8) != 0 )
  {
    v13 = v17 & 0xFFFFFFFFFFFFFFF0LL;
    if ( (*(_DWORD *)((char *)&qword_18 + (*(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL))
        | *(_DWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL] & 7u) >> 9 )
    {
      v43 = v16;
      v22 = 3053;
LABEL_10:
      sub_168B9F0((__int64)v47, a1, a5, v22, 0);
      sub_15F7200(v47);
      v16 = v43;
LABEL_11:
      v23 = sub_B731A0(v16, *(_QWORD *)(*a1 + 544), a4, a5, a6, a3, a2, 0);
      *(_BYTE *)(v23 + 97) |= 2u;
      v20 = v23;
      if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) != 0 )
        sub_189F360(a1, v20);
      goto LABEL_6;
    }
  }
  if ( a7 )
    goto LABEL_11;
  v18 = *v15;
  if ( (*(_BYTE *)(*v15 + 17) & 4) == 0 )
  {
    if ( *(_BYTE *)(v18 + 16) == 34
      || (v37 = v16,
          v18 = sub_1894090(*v15, a2, (__int64)v15, v13),
          v16 = v37,
          v15 = (__int64 *)(a3 & 0xFFFFFFFFFFFFFFF0LL),
          v18) )
    {
      v24 = *(_QWORD *)(*(_QWORD *)(v18 + 32) & 0xFFFFFFFFFFFFFFF0LL);
      v25 = (unsigned int)*(unsigned __int8 *)(v24 + 16) - 35;
      if ( (unsigned int)v25 > 1 )
      {
        v44 = v15;
        v40 = v16;
        v24 = sub_F63050(v24, a2, v15, v25);
        v15 = v44;
        v16 = v40;
      }
      v26 = *(unsigned __int8 *)(v24 + 19);
      LOBYTE(v26) = (unsigned __int8)v26 >> 2;
      if ( (_BYTE)v26 )
      {
        v27 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v24 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v27 + 16) == 13 && ((*(_WORD *)(v27 + 18) >> 3) & 0x1FF) == 0x1E9 )
        {
          v43 = v16;
          v22 = 3937;
          goto LABEL_10;
        }
      }
    }
    v28 = *v15;
    if ( *(_BYTE *)(*v15 + 16) != 34 )
    {
      v46 = v15;
      v42 = v16;
      v28 = sub_1894090(*v15, a2, (__int64)v15, v26);
      v16 = v42;
      v15 = v46;
      if ( !v28 )
        goto LABEL_36;
    }
    v29 = *(_QWORD *)(*(_QWORD *)(v28 + 32) & 0xFFFFFFFFFFFFFFF0LL);
    v30 = (unsigned int)*(unsigned __int8 *)(v29 + 16) - 35;
    if ( (unsigned int)v30 > 1 )
    {
      v45 = v15;
      v41 = v16;
      v29 = sub_F63050(v29, a2, v15, v30);
      v15 = v45;
      v16 = v41;
    }
    v31 = *(unsigned __int8 *)(v29 + 19);
    LOBYTE(v31) = (unsigned __int8)v31 >> 2;
    if ( (_BYTE)v31
      || (v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v29 + 24) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                          & 0xFFFFFFFFFFFFFFF0LL),
          *(_BYTE *)(v32 + 16) != 13)
      || ((*(_WORD *)(v32 + 18) >> 3) & 0x1FF) != 0x1E9 )
    {
LABEL_36:
      v33 = *v15;
      v34 = *(_QWORD *)(*v15 + 8) & 0xFFFFFFFFFFFFFFF0LL;
      if ( *(_BYTE *)(*(_QWORD *)v34 + 16LL) != 34 )
        goto LABEL_31;
      if ( *(_BYTE *)(v33 + 16) != 34 )
      {
        v38 = v16;
        v35 = sub_F63050(v33, a2, v34, v31);
        v16 = v38;
        v33 = v35;
      }
      v39 = v16;
      v36 = sub_F67A50(v33, a2, v34, v31, v14);
      v16 = v39;
      if ( !v36 )
      {
LABEL_31:
        v43 = v16;
        v22 = 3423;
        goto LABEL_10;
      }
    }
  }
  v19 = sub_B731A0(v16, *(_QWORD *)(*a1 + 544), a4, a5, a6, a3, a2, 0);
  *(_BYTE *)(v19 + 97) |= 2u;
  v20 = v19;
  if ( (*(_BYTE *)(sub_168B6E0((__int64)a1) + 107) & 4) != 0 && (unsigned __int8)sub_189F360(a1, v20) )
LABEL_6:
    sub_B88650(v20, 1);
  return v20;
}
