__int64 __fastcall sub_867720(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  bool v3; // r13
  __int64 v7; // rax
  __int64 v8; // r14
  char v9; // dl
  unsigned __int8 v10; // al
  __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  int v14; // eax
  unsigned __int64 v15; // rax
  unsigned int v16; // r15d
  __int64 v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rbp
  __int64 v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rsi
  int v25; // ecx
  __int64 v26; // r8
  int v27; // ecx
  unsigned int v28; // edx
  __int64 *v29; // rax
  __int64 v30; // r9
  __int64 v31; // r8
  __int64 v33; // rdi
  _QWORD *v34; // r15
  __int64 v35; // r15
  unsigned int v36; // eax
  unsigned int v37; // ecx
  __int64 v38; // rax
  unsigned int i; // edx
  unsigned __int8 **v40; // rax
  int v41; // eax
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // rax
  __int64 v44; // rdx
  _QWORD *v45; // rax
  _QWORD *v46; // rdi
  _QWORD *v47; // rdx
  __int64 v48; // rax
  int v49; // eax
  int v50; // r10d
  __int64 v51; // rax
  unsigned __int64 v52; // [rsp+8h] [rbp-60h]
  unsigned __int8 **v53; // [rsp+8h] [rbp-60h]
  _DWORD *v54; // [rsp+18h] [rbp-50h] BYREF
  __int64 v55; // [rsp+20h] [rbp-48h] BYREF
  __int64 v56; // [rsp+28h] [rbp-40h]

  v3 = 0;
  if ( (*(_BYTE *)(sub_A2CB40(*a1) + 2) & 1) != 0 )
    v3 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 48)
                                                                              & 0xFFFFFFFFFFFFFFF0LL)
                                                                  + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 42 <= 1;
  v7 = *(_QWORD *)(*a1 + 32);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v7 + 24);
    if ( v8 )
    {
      if ( (*(_BYTE *)(v8 + 80) & 0x7Fu) - 33 <= 3 )
      {
        v20 = *(_QWORD *)(sub_79A2E0(v8 + 72) + 16);
        v21 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF8LL);
        if ( (v20 & 4) != 0 )
          v21 = (_QWORD *)*v21;
        if ( v21 )
        {
          v22 = v21[8];
          if ( v22 )
          {
            if ( (*(_BYTE *)(v22 + 10) & 0x20) != 0
              && (unsigned int)sub_780B80(v8) == 42
              && (*(_WORD *)a2 & 0x1FF) == 0x48
              && *(char *)(a2 + 2) < 0 )
            {
              v23 = *a1;
              if ( *(_BYTE *)(*a1 + 962) )
                return 0;
              v24 = *(_QWORD *)(v23 + 32);
              v25 = *(_DWORD *)(v24 + 232);
              v26 = *(_QWORD *)(v24 + 216);
              if ( v25 )
              {
                v27 = v25 - 1;
                v28 = v27 & (((unsigned int)a3 >> 9) ^ ((unsigned int)a3 >> 4));
                v29 = (__int64 *)(v26 + 16LL * v28);
                v30 = *v29;
                if ( a3 == *v29 )
                {
LABEL_40:
                  v31 = v29[1];
                  if ( v31 )
                    return sub_867340(
                             v23,
                             (_DWORD *)a2,
                             a1[1],
                             *(_QWORD *)(v24 + 24),
                             v31,
                             (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 48)
                                                                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                                                                      + 8LL)
                                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                                              + 16LL)
                           - 42 <= 1);
                }
                else
                {
                  v49 = 1;
                  while ( v30 != -4096 )
                  {
                    v50 = v49 + 1;
                    v51 = v27 & (v28 + v49);
                    v28 = v51;
                    v29 = (__int64 *)(v26 + 16 * v51);
                    v30 = *v29;
                    if ( a3 == *v29 )
                      goto LABEL_40;
                    v49 = v50;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v9 = *(_BYTE *)(a3 + 96);
  v10 = v9 & 7;
  if ( (v9 & 7) != 0 )
  {
    if ( (*(_BYTE *)(a3 + 96) & 7) != 5 )
      goto LABEL_45;
    v41 = *(_BYTE *)(a3 + 28) & 0x7F;
    if ( v41 != 38 && v41 != 44 )
    {
      if ( (*(_BYTE *)(a3 + 28) & 0x7F) != 0x29 )
        goto LABEL_18;
      goto LABEL_46;
    }
    v42 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
      v42 = *(_QWORD *)(v42 + 8);
    if ( !v42 )
      goto LABEL_18;
    v43 = *(_BYTE *)(sub_79C2A0(v42) + 8) & 0x7F;
    if ( (unsigned __int8)v43 > 0x10u )
    {
      if ( (((_BYTE)v43 + 96) & 0x7Fu) <= 5 )
        goto LABEL_80;
    }
    else
    {
      v44 = 65922;
      if ( _bittest64(&v44, v43) )
      {
LABEL_80:
        v10 = *(_BYTE *)(a3 + 96) & 7;
LABEL_45:
        if ( v10 <= 3u )
          goto LABEL_18;
        goto LABEL_46;
      }
    }
    if ( (*(_BYTE *)(a3 + 28) & 0x7F) != 0x29 )
      goto LABEL_18;
    goto LABEL_80;
  }
  v11 = *(_QWORD *)(a3 + 48);
  v12 = *(_QWORD *)&byte_8[v11 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v12 & 8) != 0
    && (unsigned int)((*(__int64 *)((char *)&qword_18 + (v12 & 0xFFFFFFFFFFFFFFF0LL))
                     | (unsigned __int64)(((unsigned __int8)v11 | (unsigned __int8)v12) & 7)) >> 9) == 3 )
  {
LABEL_19:
    v16 = 0;
    v17 = 0;
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                      & 0xFFFFFFFFFFFFFFF0LL)
                                          + 16LL)
       - 42 > 1 )
    {
LABEL_63:
      sub_69F1C0((__int64)&v55, a3, 0, 0);
      sub_823790(a1[1], v55, v56, 0);
      return 1;
    }
    goto LABEL_20;
  }
  if ( (*(_BYTE *)(a3 + 28) & 0x7D) != 0x29 )
  {
    v13 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
    {
      v14 = *(_BYTE *)(sub_79C2A0(*(_QWORD *)(v13 + 8)) + 8) & 0x7F;
      if ( !v14 )
        goto LABEL_18;
    }
    else
    {
      v14 = *(_BYTE *)(sub_79C2A0(v13) + 8) & 0x7F;
      if ( !v14 )
      {
LABEL_18:
        v11 = *(_QWORD *)(a3 + 48);
        goto LABEL_19;
      }
    }
    if ( v14 == 22 )
      goto LABEL_18;
    if ( (*(_BYTE *)(a3 + 28) & 0x7F) != 0x29 )
    {
      v15 = *(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL;
      if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
        v15 = *(_QWORD *)v15;
      if ( ((*(_BYTE *)(v15 + 8) + 72) & 0x7Fu) <= 3 )
        goto LABEL_18;
    }
    v9 = *(_BYTE *)(a3 + 96);
  }
  if ( (v9 & 0x18) != 0 )
    goto LABEL_18;
LABEL_46:
  v17 = *(_QWORD *)(*a1 + 32);
  v33 = *(_QWORD *)(v17 + 24);
  if ( !v33 )
    goto LABEL_18;
  v34 = (_QWORD *)(*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)(a3 + 16) & 4) != 0 )
  {
    v34 = (_QWORD *)*v34;
    if ( !v34 )
      goto LABEL_18;
  }
  else if ( !v34 )
  {
    goto LABEL_18;
  }
  v52 = sub_79CC40(v33 + 72);
  if ( v52 != sub_79CC40((__int64)v34) )
    goto LABEL_18;
  if ( (*(_BYTE *)(a3 + 28) & 0x7F) == 0x29 )
  {
    v35 = *(_QWORD *)(v17 + 48);
    if ( !v35 )
      goto LABEL_18;
    v36 = (unsigned __int8)(*(_WORD *)(a3 + 98) >> 4);
    if ( v36 == 255 )
      v36 = sub_77D6D0(a3);
    v37 = *(_DWORD *)(v17 + 56);
    a3 = *(_QWORD *)(*(_QWORD *)(v35 + 120) + 8LL * v36);
    v38 = *(_QWORD *)(*a1 + 32);
    for ( i = *(_DWORD *)(v38 + 176); v37 < i; i = *(_DWORD *)(v38 + 176) )
      v38 = *(_QWORD *)(v38 + 16);
    v16 = *(_DWORD *)(v17 + 60);
    if ( v37 != i )
      v38 = 0;
    v17 = v38;
  }
  else
  {
    v45 = *(_QWORD **)(v17 + 88);
    v46 = (_QWORD *)(v17 + 80);
    if ( v45 )
    {
      while ( 1 )
      {
        if ( a3 < v45[4] )
        {
          v47 = (_QWORD *)v45[2];
          v46 = v45;
          if ( !v47 )
            break;
        }
        else
        {
          v47 = (_QWORD *)v45[3];
          if ( !v47 )
            break;
        }
        v45 = v47;
      }
    }
    if ( *(_QWORD **)(v17 + 96) == v46 )
    {
      v16 = 0;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 48)
                                                                                & 0xFFFFFFFFFFFFFFF0LL)
                                                                    + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 42 > 1 )
        goto LABEL_28;
      goto LABEL_20;
    }
    v48 = std::_Rb_tree_decrement();
    v16 = 0;
    if ( a3 == *(_QWORD *)(v48 + 32) )
      v16 = *(_DWORD *)(v48 + 40);
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 42 > 1 )
    goto LABEL_27;
LABEL_20:
  if ( (*(_BYTE *)(sub_A2CB40(*a1) + 1) & 0x10) == 0 )
  {
    v40 = (unsigned __int8 **)sub_A2E240(*a1, a2, 2229, 1);
    if ( v40 )
    {
      v53 = v40;
      sub_8356A0(v40, a3, 0xAu);
      sub_8356A0(v53, *(_QWORD *)(a3 + 48), 8u);
    }
    sub_A2DD70(*a1, *(unsigned int *)(a3 + 24), 105);
  }
  if ( !(unsigned __int8)sub_836260(*a1, (_DWORD *)a2, (_QWORD *)a3, v17, v16, (__int64 *)&v54) )
    return 0;
  v18 = *a1;
  if ( *v54 > 1u )
  {
    sub_824D00(a1[1], *(_QWORD **)(v18 + 16), (__int64)v54);
    return 1;
  }
  if ( !*(_BYTE *)(v18 + 962) && !v3 )
  {
    sub_A2E130(v18, a2, 2298, 0);
    return 0;
  }
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 48) & 0xFFFFFFFFFFFFFFF0LL)
                                                                + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 42 > 1
    || !v3 )
  {
    return 0;
  }
LABEL_27:
  if ( !v17 )
    goto LABEL_63;
LABEL_28:
  v19 = a1[1];
  sub_69F1C0((__int64)&v55, a3, *(_DWORD *)(v17 + 176), v16);
  sub_823790(v19, v55, v56, 0);
  return 1;
}

