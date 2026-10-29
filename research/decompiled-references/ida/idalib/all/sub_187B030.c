__int64 __fastcall sub_187B030(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rbx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // r15d
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  char v29; // bp
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // r14
  unsigned __int64 v35; // r15
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  char v40; // r12
  unsigned __int64 v41; // r15
  int v42; // r12d
  _QWORD *v43; // rax
  unsigned __int64 v44; // rax
  __int64 v45; // rbp
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rbp
  unsigned __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rbp
  unsigned __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // [rsp+8h] [rbp-F0h] BYREF
  bool v65; // [rsp+13h] [rbp-E5h] BYREF
  int v66; // [rsp+14h] [rbp-E4h] BYREF
  unsigned __int64 v67; // [rsp+18h] [rbp-E0h] BYREF
  unsigned __int64 v68; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v69; // [rsp+28h] [rbp-D0h] BYREF
  _BYTE v70[200]; // [rsp+30h] [rbp-C8h] BYREF

  v2 = *(_QWORD *)a1;
  v64 = a2;
  v3 = *(_QWORD *)(a2 + 48);
  v67 = sub_A71450(*(_QWORD *)(v2 + 248), v3);
  v8 = sub_F63270(*(_QWORD *)(v67 & 0xFFFFFFFFFFFFFFF0LL), v3, v4, v5, v6, v7);
  v9 = sub_B72690(*(_QWORD *)(a1 + 8) + 72LL);
  if ( !v9 )
    BUG();
  if ( *(_BYTE *)(v9 + 9) >> 5 == 2 )
  {
    v3 = v64;
    if ( (unsigned __int8)sub_186AF60(a1, v64, v67) )
      return 1;
  }
  v10 = sub_B72690(*(_QWORD *)(a1 + 8) + 72LL);
  if ( !v10 )
    BUG();
  if ( *(_BYTE *)(v10 + 9) >> 5 == 2 )
  {
    v3 = v64;
    if ( (unsigned __int8)sub_187AD20(a1, v64) )
      return 1;
  }
  v11 = *(_DWORD *)(a1 + 16);
  if ( !v11 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v67 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 43 <= 1
      && ((*(_BYTE *)(v64 + 68) & 0xC) == 0xC || (*(_BYTE *)(v64 + 68) & 0xC) == 0) )
    {
      v12 = *(unsigned __int8 *)(a1 + 35);
      if ( !(_BYTE)v12 )
        return 1;
      sub_168B9F0((__int64)v70, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(v64 + 24), 0x1712u, 0);
      LOBYTE(v66) = *(_QWORD *)(a1 + 24) != 0;
      goto LABEL_74;
    }
    v14 = sub_B72690(*(_QWORD *)(a1 + 8) + 72LL);
    if ( !v14 )
      BUG();
    if ( *(_BYTE *)(v14 + 9) >> 5 != 2 && ((v67 & 1) != 0 || (byte_8[v67 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0) )
    {
      v18 = *(_BYTE *)(v64 + 68) & 0xC;
      if ( (_BYTE)v18 == 12 || (*(_BYTE *)(v64 + 68) & 0xC) == 0 )
      {
        if ( !v8
          || (v3 = v8[13], sub_7052B0((__int64 *)(v3 + 96), v3, v18, v15, v16, v17), (*(_BYTE *)(v8[16] + 3LL) & 2) != 0)
          && ((v3 = v8[13], sub_7052B0((__int64 *)(v3 + 96), v3, v19, v20, v21, v22),
                            (*(_BYTE *)(v8[16] + 8LL) & 2) != 0)
           || (unsigned __int8)sub_B9BFC0((__int64)v8, v3, v51, v52, v53, v54)) )
        {
          v12 = *(unsigned __int8 *)(a1 + 35);
          if ( !(_BYTE)v12 )
            return 1;
          sub_168B9F0((__int64)v70, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(v64 + 24), 0x1712u, 0);
          v65 = *(_QWORD *)(a1 + 24) != 0;
          goto LABEL_70;
        }
      }
    }
    v23 = sub_B72690(*(_QWORD *)(a1 + 8) + 72LL);
    if ( !v23 )
      BUG();
    if ( *(_BYTE *)(v23 + 9) >> 5 == 2 && (v67 & 1) == 0 && (byte_8[v67 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0 )
      *(_BYTE *)(a1 + 40) = 0;
    goto LABEL_13;
  }
  if ( v11 != 1 )
  {
    if ( *(_BYTE *)(a1 + 33) )
    {
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v67 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 43 <= 1 )
      {
        v12 = *(unsigned __int8 *)(a1 + 35);
        if ( !(_BYTE)v12 )
          return 1;
        sub_168B9F0((__int64)v70, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(v64 + 24), 0x170Eu, 0);
        LOBYTE(v66) = ((*(_DWORD *)(a1 + 16) - 2) & 0xFFFFFFFD) == 0;
LABEL_74:
        v60 = sub_1588420((__int64)v70, (unsigned __int8 *)&v66);
        v61 = sub_B72690(*(_QWORD *)(a1 + 8) + 72LL);
        if ( v61 )
          v61 -= 64LL;
        v69 = v61;
        v62 = sub_1852F10(v60, (__int64 *)&v69);
        v63 = sub_185C9E0(v62, &v64);
        v47 = sub_1605D30(v63, (__int64 *)&v67);
        LODWORD(v68) = 0;
        goto LABEL_77;
      }
      if ( !v8 )
      {
        if ( (v67 & 1) != 0 || (byte_8[v67 & 0xFFFFFFFFFFFFFFF0LL] & 1) != 0 )
        {
          v12 = *(unsigned __int8 *)(a1 + 35);
          if ( !(_BYTE)v12 )
            return 1;
          sub_168B9F0((__int64)v70, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(v64 + 24), 0x170Eu, 0);
          v65 = ((*(_DWORD *)(a1 + 16) - 2) & 0xFFFFFFFD) == 0;
LABEL_70:
          v55 = sub_1588420((__int64)v70, (unsigned __int8 *)&v65);
          v56 = sub_B72690(*(_QWORD *)(a1 + 8) + 72LL);
          if ( v56 )
            v56 -= 64LL;
          v68 = v56;
          v57 = sub_1852F10(v55, (__int64 *)&v68);
          v58 = sub_185C9E0(v57, &v64);
          v69 = *(_QWORD *)(v64 + 48);
          v59 = sub_162B6D0(v58, (__int64 *)&v69);
          v66 = 1;
          sub_1587D10(v59, &v66);
          sub_15F7200(v70);
          return v12;
        }
        return 0;
      }
LABEL_31:
      v24 = sub_B72690(*(_QWORD *)(a1 + 8) + 72LL);
      if ( !v24 )
        BUG();
      if ( *(_BYTE *)(v24 + 9) >> 5 == 2 || *((_BYTE *)v8 + 73) >> 5 != 2 || (*((_BYTE *)v8 + 75) & 1) == 0 )
        return (unsigned int)sub_1877D00(
                               (__int64 *)a1,
                               (int)v8,
                               v64 | 4,
                               (*(_DWORD *)&byte_8[v67 & 0xFFFFFFFFFFFFFFF0LL] | v67) & 7);
      v29 = 1;
      v34 = sub_B7E900((__int64)v8, v3, v25, v26, v27, v28);
      if ( v34 )
      {
LABEL_42:
        v35 = sub_A71450(*(_QWORD *)(*(_QWORD *)a1 + 248LL), *(_QWORD *)(v34 + 48));
        if ( (unsigned __int8)sub_186AF60(a1, v34, v35) )
          return 1;
        v3 = v34;
        if ( (unsigned __int8)sub_187AD20(a1, v34) )
          return 1;
        v40 = v35;
        v41 = v35 & 0xFFFFFFFFFFFFFFF0LL;
        v42 = v40 & 7;
        if ( (v42 & 1) == 0 && (*(_BYTE *)(v41 + 8) & 1) == 0 )
          v29 = 0;
        v43 = sub_F63270(*(_QWORD *)v41, v34, v36, v37, v38, v39);
        if ( v43 )
        {
          v3 = (__int64)v43;
          v12 = sub_1877D00((__int64 *)a1, (int)v43, v34 | 4, *(_QWORD *)(v41 + 8) & 7 | v42);
          if ( (_BYTE)v12 )
            return v12;
        }
        while ( 1 )
        {
          v44 = *(_QWORD *)(v34 + 8) & 0xFFFFFFFFFFFFFFF8LL;
          v34 = v44;
          if ( !v44 )
            break;
          if ( (*(_BYTE *)(v44 + 28) & 0x7Fu) - 49 <= 2 )
            goto LABEL_42;
        }
      }
      if ( !*(_DWORD *)(a1 + 16) && v29 && sub_B7E900((__int64)v8, v3, v30, v31, v32, v33) )
      {
        v12 = *(unsigned __int8 *)(a1 + 35);
        if ( !(_BYTE)v12 )
          return 1;
        sub_168B9F0((__int64)v70, (__int64 *)(*(_QWORD *)a1 + 8LL), *((_DWORD *)v8 + 6), 0x1711u, 0);
        LOBYTE(v66) = *(_QWORD *)(a1 + 24) != 0;
        v45 = sub_1588420((__int64)v70, (unsigned __int8 *)&v66);
        v46 = sub_B72690(*(_QWORD *)(a1 + 8) + 72LL);
        if ( v46 )
          v46 -= 64LL;
        v69 = v46;
        v47 = sub_1852F10(v45, (__int64 *)&v69);
        LODWORD(v68) = 1;
LABEL_77:
        sub_1587D10(v47, (int *)&v68);
        sub_15F7200(v70);
        return v12;
      }
      return 0;
    }
LABEL_13:
    if ( !v8 )
      return 0;
    goto LABEL_31;
  }
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v67 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 44 )
    goto LABEL_13;
  v12 = *(unsigned __int8 *)(a1 + 35);
  if ( !(_BYTE)v12 )
    return 1;
  sub_168B9F0((__int64)v70, (__int64 *)(*(_QWORD *)a1 + 8LL), *(_DWORD *)(v64 + 24), 0x170Fu, 0);
  v48 = sub_B72690(*(_QWORD *)(a1 + 8) + 72LL);
  if ( v48 )
    v48 -= 64LL;
  v69 = v48;
  v49 = sub_1852F10((__int64)v70, (__int64 *)&v69);
  v50 = sub_185C9E0(v49, &v64);
  sub_1605D30(v50, (__int64 *)&v67);
  sub_15F7200(v70);
  return v12;
}
