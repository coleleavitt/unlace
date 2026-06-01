__int64 __fastcall sub_1AA36B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // rbp
  __int64 v6; // rdi
  unsigned int v7; // ebx
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 *v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  _QWORD *v28; // r12
  __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdi
  __int64 v37; // rbp
  __int64 v38; // rsi
  __int64 v39; // rbp
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rdi
  __int64 v49; // r15
  unsigned __int64 v50; // rax
  _QWORD *v51; // rax
  __int64 v52; // rax
  unsigned int v53; // eax
  unsigned __int64 v54; // rdx
  __int64 v55; // rax

  v5 = (__int64 *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  v6 = *(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v6 + 17) & 4) != 0 )
    return 1;
  LOBYTE(v9) = sub_9EC890(v6, a2, a3, a4, a5);
  v7 = v9;
  if ( (_BYTE)v9 || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v5 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 42 )
    return 1;
  v14 = sub_F63270(*v5, a2, v10, v11, v12, v13);
  if ( !v14 )
    return v7;
  v15 = sub_B8E970((__int64)(v14 + 8));
  if ( !v15 )
    return v7;
  if ( (*(_BYTE *)(v15 + 28) & 0x7Fu) - 64 <= 2 )
  {
LABEL_11:
    v17 = *(_QWORD *)(v15 + 72);
    v18 = *(_QWORD *)(v17 + 40);
    if ( (v18 & 7) != 0
      || (v19 = v18 & 0xFFFFFFFFFFFFFFF8LL) == 0
      || (v20 = *(_QWORD *)(v19 + 16), *(_DWORD *)v20 != 17)
      || *(_QWORD *)(v20 + 16) ^ 0x726F746172657469LL | *(_QWORD *)(v20 + 24) ^ 0x726F67657461635FLL
      || *(_BYTE *)(v20 + 32) != 121 )
    {
      while ( 1 )
      {
        v54 = *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v15 = v54;
        if ( !v54 )
          return v7;
        if ( (*(_BYTE *)(v54 + 28) & 0x7Fu) - 64 <= 2 )
          goto LABEL_11;
      }
    }
    v21 = (__int64 *)(*(_QWORD *)(v17 + 80) & 0xFFFFFFFFFFFFFFF8LL);
    if ( (*(_QWORD *)(v17 + 80) & 4) != 0 )
    {
      v22 = v21[1];
      if ( (v22 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v7;
    }
    else
    {
      v22 = *v21;
      if ( (v22 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
        return v7;
    }
    v23 = sub_F63270(
            *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL),
            0x726F746172657469LL,
            *(_QWORD *)(v17 + 80) & 4LL,
            0x726F67657461635FLL,
            v20 + 16,
            0);
    v28 = v23;
    if ( !v23 )
      return v7;
    v29 = v23[5];
    if ( (v29 & 7) != 0
      || (v30 = v29 & 0xFFFFFFFFFFFFFFF8LL) == 0
      || (v31 = *(_QWORD *)(v30 + 16), *(_DWORD *)v31 != 26)
      || (v24 = *(_QWORD *)(v31 + 16) ^ 0x615F6D6F646E6172LL,
          (v25 = v24 | *(_QWORD *)(v31 + 24) ^ 0x74695F7373656363LL) != 0)
      || *(_QWORD *)(v31 + 32) != 0x745F726F74617265LL
      || *(_WORD *)(v31 + 40) != 26465
      || (v55 = sub_B916A0((unsigned __int64)(v28 + 8), v31 + 16, v24, 0, v26, v27), !sub_B8EBA0(v55)) )
    {
      sub_7052B0((__int64 *)(v28[13] + 96LL), v28[13], v24, v25, v26, v27);
      v36 = v28[16];
      if ( (*(_BYTE *)(v36 + 24) & 1) != 0 )
        v37 = sub_B96980(v36);
      else
        v37 = *(_QWORD *)(v36 + 24);
      sub_7052B0((__int64 *)(v28[13] + 96LL), v28[13], v32, v33, v34, v35);
      v38 = v28[13];
      v39 = v37 + 24LL * *(unsigned int *)(v28[16] + 16LL);
      sub_7052B0((__int64 *)(v38 + 96), v38, v40, v41, v42, v43);
      v48 = v28[16];
      if ( (*(_BYTE *)(v48 + 24) & 1) != 0 )
        v49 = sub_B96980(v48);
      else
        v49 = *(_QWORD *)(v48 + 24);
      if ( v49 != v39 )
      {
        while ( 1 )
        {
          v50 = *(_QWORD *)(**(_QWORD **)(v49 + 16) & 0xFFFFFFFFFFFFFFF0LL);
          if ( (*(_BYTE *)(v50 + 8) & 0xF) != 0 )
            v50 = sub_F64F00(**(_QWORD **)(v49 + 16), v38, v44, v45, v46);
          v51 = sub_F63270(*(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL), v38, v44, v45, v46, v47);
          v44 = v51[5];
          if ( (v44 & 7) == 0 )
          {
            v44 &= 0xFFFFFFFFFFFFFFF8LL;
            if ( v44 )
            {
              v44 = *(_QWORD *)(v44 + 16);
              if ( *(_DWORD *)v44 == 26 )
              {
                v45 = v44 + 16;
                v38 = *(_QWORD *)(v44 + 16) ^ 0x615F6D6F646E6172LL | *(_QWORD *)(v44 + 24) ^ 0x74695F7373656363LL;
                if ( !v38 && *(_QWORD *)(v44 + 32) == 0x745F726F74617265LL && *(_WORD *)(v44 + 40) == 26465 )
                {
                  v52 = sub_B916A0((unsigned __int64)(v51 + 8), 0, v44, v45, v46, v47);
                  LOBYTE(v53) = sub_B8EBA0(v52);
                  if ( (_BYTE)v53 )
                    break;
                }
              }
            }
          }
          v49 += 24;
          if ( v49 == v39 )
            return v7;
        }
        return v53;
      }
      return v7;
    }
    return 1;
  }
  while ( 1 )
  {
    v16 = *(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF8LL;
    v15 = v16;
    if ( !v16 )
      return v7;
    if ( (*(_BYTE *)(v16 + 28) & 0x7Fu) - 64 <= 2 )
      goto LABEL_11;
  }
}
