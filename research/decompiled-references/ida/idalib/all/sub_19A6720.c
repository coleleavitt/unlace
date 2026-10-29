unsigned __int64 __fastcall sub_19A6720(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  unsigned __int64 v9; // rbx
  unsigned __int16 v10; // ax
  __int64 v11; // rax
  char v12; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 result; // rax
  __int64 v20; // rax
  __int16 v21; // ax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  unsigned int v25; // edi
  __int64 *v26; // rsi
  __int64 v27; // r8
  unsigned __int64 v28; // r13
  __int64 *v29; // rax
  _QWORD *v30; // rax
  __int64 v31; // rsi
  unsigned __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  unsigned __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // rax
  unsigned int v39; // eax
  unsigned __int64 v40; // rax
  unsigned __int64 v41; // rax
  int v42; // esi
  int v43; // r10d
  __int64 v44; // r8
  __m128 v45[3]; // [rsp+0h] [rbp-38h] BYREF

  v9 = a2;
  v10 = *(_WORD *)a2 & 0x1FF;
  if ( v10 <= 0x75u )
  {
    if ( v10 == 91 )
    {
      if ( ((*(_BYTE *)(a2 + 3) >> 1) & 0x3F) != 0xF )
        goto LABEL_3;
      a3 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
      if ( (*(_WORD *)a3 & 0x1FF) != 0x47 )
        goto LABEL_3;
      a4 = *(_QWORD *)(a3 + 16);
      if ( (*(_BYTE *)(a4 + 28) & 0x7Fu) - 40 > 6 )
        goto LABEL_3;
LABEL_27:
      v23 = *(unsigned int *)(a1 + 4504);
      v24 = *(_QWORD *)(a1 + 4488);
      if ( (_DWORD)v23 )
      {
        v25 = (v23 - 1) & (((unsigned int)a4 >> 9) ^ ((unsigned int)a4 >> 4));
        v26 = (__int64 *)(v24 + 16LL * v25);
        v27 = *v26;
        if ( *v26 == a4 )
        {
LABEL_29:
          sub_17A9350(v45, v26, (_QWORD *)(16 * v23 + v24), a1 + 4488, 1);
          v28 = v45[0].m128_u64[0];
          goto LABEL_30;
        }
        v42 = 1;
        if ( v27 != -4096 )
        {
          do
          {
            v43 = v42 + 1;
            v25 = (v23 - 1) & (v42 + v25);
            v26 = (__int64 *)(v24 + 16LL * v25);
            v44 = *v26;
            if ( *v26 == a4 )
              goto LABEL_29;
            v42 = v43;
          }
          while ( v44 != -4096 );
        }
      }
      sub_17A9350(
        v45,
        (_QWORD *)(v24 + 16LL * (unsigned int)v23),
        (_QWORD *)(v24 + 16LL * (unsigned int)v23),
        a1 + 4488,
        1);
      v28 = v45[0].m128_u64[0];
LABEL_30:
      a2 = *(_QWORD *)(a1 + 4488) + 16LL * *(unsigned int *)(a1 + 4504);
      sub_17A9350(v45, (_QWORD *)a2, (_QWORD *)a2, a1 + 4488, 1);
      if ( v45[0].m128_u64[0] != v28 )
        --*(_DWORD *)(v28 + 8);
      goto LABEL_3;
    }
    if ( v10 != 4 )
      goto LABEL_3;
    if ( *(_BYTE *)(a2 + 2) > 0x1Fu )
      goto LABEL_3;
    a3 = *(_QWORD *)(a2 + 16);
    if ( (*(_WORD *)a3 & 0x1FF) != 0x47 )
      goto LABEL_3;
    a4 = *(_QWORD *)(a3 + 16);
    if ( (*(_BYTE *)(a4 + 28) & 0x7Fu) - 40 > 6 )
      goto LABEL_3;
LABEL_25:
    v22 = *(_QWORD *)(a4 + 48);
    if ( (v22 & 4) != 0 || (byte_8[v22 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0 )
      goto LABEL_3;
    goto LABEL_27;
  }
  if ( v10 <= 0x77u )
  {
    a4 = *(_QWORD *)(a2 + 16);
    v21 = (*(_WORD *)(a2 + 2) >> 3) & 0x3F;
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a4 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0
      || (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 24) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) != 0 )
    {
      a3 = 0;
      if ( (_BYTE)v21 != 21 )
        goto LABEL_3;
    }
    else
    {
      a3 = (unsigned int)(unsigned __int8)v21 - 21;
      if ( (unsigned int)a3 > 0xA )
        goto LABEL_3;
      LOBYTE(a3) = (unsigned int)(unsigned __int8)v21 - 22 <= 9;
    }
    if ( (*(_WORD *)a4 & 0x1FF) == 0x47 )
    {
      a4 = *(_QWORD *)(a4 + 16);
      if ( (*(_BYTE *)(a4 + 28) & 0x7Fu) - 40 <= 6 )
      {
        if ( !(_BYTE)a3 )
          goto LABEL_27;
        goto LABEL_25;
      }
    }
  }
LABEL_3:
  v11 = *(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v11 + 16) == 13 && ((*(_WORD *)(v11 + 18) >> 3) & 0x1FFu) > 0x1F1 )
  {
    a2 = v9;
    v40 = sub_1907C70(a1, (_QWORD *)v9, (__m128i)a7, a8, a3, a4, a5, a6);
    if ( v40 == 1 )
      return v9;
    v9 = v40 & 0xFFFFFFFFFFFFFFFELL;
    v12 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL);
    if ( (v12 & 8) != 0 )
      goto LABEL_6;
LABEL_17:
    v20 = *(_QWORD *)(v9 + 8);
    if ( (*(_BYTE *)(v9 + 1) & 6) != 0 )
    {
      v29 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(*v29 + 16) == 47 )
      {
        v30 = sub_F60F10(*v29, a2, a3, a4, a5, a6);
        if ( (*((_BYTE *)v30 + 74) & 1) == 0 && (v30[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          return sub_160A600(
                   a1,
                   v9,
                   *(_QWORD *)(*(_QWORD *)(a1 + 248) + 18632LL),
                   0x18u,
                   0,
                   0,
                   *(double *)a7.m128_u64,
                   *(double *)a8.m128_u64,
                   0)
               & 0xFFFFFFFFFFFFFFFELL;
      }
      v31 = v9;
      v32 = sub_19179A0(a1, (_QWORD *)v9, 1u, a4, a5, a6, a7, a8);
      if ( v32 != 1 )
      {
        v36 = v32 & 0xFFFFFFFFFFFFFFFELL;
        v37 = *(_QWORD *)(v36 + 8);
        v9 = v36;
        v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v37 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
        if ( *(_BYTE *)(v38 + 16) != 13 || ((*(_WORD *)(v38 + 18) >> 3) & 0x1FF) != 0x1B3 )
        {
          v39 = sub_C00A40(v9, v31, v33, v34, v35);
          sub_1E63CF0(a1, v39, v37, 1, 3968);
        }
      }
    }
    else if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                           & 0xFFFFFFFFFFFFFFF0LL)
                                               + 16LL)
            - 25 <= 1 )
    {
      return sub_190ABA0(a1, (_QWORD *)v9, 1, a4, a5, a6, (__m128i)a7, a8);
    }
    return v9;
  }
  v12 = *(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL);
  if ( (v12 & 8) == 0 )
    goto LABEL_17;
LABEL_6:
  if ( (v12 & 0x10) == 0 || !sub_BFB330(v9) )
  {
    sub_18C38A0(a1, v9);
    goto LABEL_9;
  }
  v41 = sub_19146F0(a1, (_QWORD *)v9, v13, v14, v15, v16, a7, a8);
  if ( v41 == 1 )
    return v9;
  v9 = v41 & 0xFFFFFFFFFFFFFFFELL;
LABEL_9:
  if ( !*(_BYTE *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 39) )
    return v9;
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 0x40) == 0 )
    return v9;
  if ( (*(_BYTE *)(v9 + 1) & 6) != 0 )
    return v9;
  v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v17 + 16) == 13 && ((*(_WORD *)(v17 + 18) >> 3) & 0x1FF) == 0x1B3 )
    return v9;
  v18 = sub_1A0BEA0(a1, v9);
  result = v18 & 0xFFFFFFFFFFFFFFFELL;
  if ( v18 == 1 )
    return v9;
  return result;
}
