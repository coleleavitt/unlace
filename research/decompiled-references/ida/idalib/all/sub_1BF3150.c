__m128i *__fastcall sub_1BF3150(
        __m128i *a1,
        __m128 *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int8 a6,
        __m128 a7,
        __m128 a8,
        unsigned __int8 a9)
{
  unsigned __int64 v11; // r12
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rsi
  int v22; // eax
  unsigned __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // r12d
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdi
  char v33; // cl
  char v34; // al
  char v35; // si
  __int64 v36; // rax
  int v37; // esi
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rdx
  __int16 v45; // ax
  char v46; // al
  __int64 v47; // rax
  char v48; // dl
  unsigned __int64 v49; // [rsp-8h] [rbp-140h]
  unsigned int v50; // [rsp+4h] [rbp-134h]
  bool v52; // [rsp+17h] [rbp-121h] BYREF
  _BYTE v53[4]; // [rsp+18h] [rbp-120h] BYREF
  int v54; // [rsp+1Ch] [rbp-11Ch] BYREF
  __int64 v55; // [rsp+20h] [rbp-118h] BYREF
  __int64 v56; // [rsp+28h] [rbp-110h] BYREF
  __int64 v57[6]; // [rsp+30h] [rbp-108h] BYREF
  __m128i v58[2]; // [rsp+60h] [rbp-D8h] BYREF
  void *ptr; // [rsp+80h] [rbp-B8h]
  __int64 v60; // [rsp+90h] [rbp-A8h] BYREF

  v11 = a4 & 0xFFFFFFFFFFFFFFF0LL;
  a1->m128i_i64[1] = 0;
  a1[3].m128i_i64[1] = 0;
  v14 = a1[1].m128i_i64[0] & 0xFFFFF80400000000LL | 0x2000000000LL;
  a1->m128i_i32[0] = 5;
  a1[1].m128i_i64[0] = v14;
  v15 = *(_QWORD *)(a3 + 8);
  a1[1].m128i_i64[0] = a3;
  a1[1].m128i_i32[2] = 0;
  a1[2].m128i_i64[0] = v15;
  a1[2].m128i_i64[1] = a4;
  v16 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  v50 = a5;
  v17 = (unsigned int)*(unsigned __int8 *)(v16 + 16) - 43;
  if ( (unsigned int)v17 > 1 )
    v16 = sub_F63050(v16, a2, v17, a4);
  v18 = sub_9B4870(v16, (__int64)a2, v17, a4, a5);
  v21 = a2[15].m128_i64[1];
  v55 = v18;
  v56 = *(_QWORD *)(a3 + 8);
  if ( *(_QWORD *)(v21 + 19080) == (*(_QWORD *)&byte_8[v56 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
                                  | ((unsigned __int8)*(_QWORD *)&byte_8[v56 & 0xFFFFFFFFFFFFFFF0LL]
                                   | (unsigned __int8)v56)
                                  & 7) )
  {
    v36 = sub_1BE7B70(a2, (_WORD *)a3, a4, 0, v58, nullptr, *(double *)a7.m128_u64, a8);
    if ( v36 )
      v56 = *(_QWORD *)(v36 + 48);
    v21 = a2[15].m128_i64[1];
  }
  v52 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v11 + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 44;
  v54 = sub_C0EB40(a3, v21, nullptr, v19, v20);
  v22 = sub_1BE5E80((__int64)a2, v50, v55, v56, (__int64)v53);
  v57[0] = (__int64)a1;
  v25 = v22;
  v57[1] = (__int64)v53;
  v57[2] = (__int64)&v56;
  v57[3] = (__int64)&v55;
  v57[4] = (__int64)&v52;
  v57[5] = (__int64)&v54;
  if ( !v52 )
  {
    if ( !(_WORD)v54 && v22 == 2 )
    {
      sub_1BC69F0(v57, 1);
      return a1;
    }
    if ( !a6
      && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 48 )
    {
      if ( (unsigned __int8)sub_1E63330(a2, v50, v56, 1, 0) == 1 || v25 )
      {
        if ( v52 )
          goto LABEL_17;
      }
      else
      {
        if ( (unsigned __int8)sub_1BF2AA0((__int64)a2, (__int64)a1, a4, v50, a3, v56, *(double *)a7.m128_u64, a8, 0, a9) )
          return a1;
        if ( v52 )
          goto LABEL_20;
      }
    }
    if ( (v55 & 1) == 0 && (v23 = v55 & 0xFFFFFFFFFFFFFFF0LL, (byte_8[v55 & 0xFFFFFFFFFFFFFFF0LL] & 1) == 0)
      || (v55 & 4) != 0
      || (byte_8[v55 & 0xFFFFFFFFFFFFFFF0LL] & 4) != 0 )
    {
      if ( (_WORD)v54 && v25 )
        sub_1BCD210((__int64)a1, 3, a3, a4);
      return a1;
    }
  }
LABEL_17:
  if ( v25 == 2 )
  {
    if ( (_WORD)v54 == 1 )
    {
      v35 = 1;
      if ( (*(_BYTE *)(a2[14].m128_u64[1] + 1) & 0x10) != 0 )
        goto LABEL_35;
      v44 = v56;
    }
    else
    {
      if ( (unsigned __int16)v54 > 1u )
      {
        v34 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                       + 16LL);
        if ( v34 != 48 && (unsigned __int8)(v34 - 2) > 4u )
        {
LABEL_21:
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                            & 0xFFFFFFFFFFFFFFF0LL)
                                                + 16LL)
             - 25 <= 1 )
            return a1;
          goto LABEL_22;
        }
        v35 = (*(_BYTE *)(a2[14].m128_u64[1] + 1) & 0x10) != 0;
LABEL_35:
        sub_1BC69F0(v57, v35);
        return a1;
      }
      v44 = v56;
      if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                        & 0xFFFFFFFFFFFFFFF0LL)
                                            + 16LL)
         - 25 > 1 )
        goto LABEL_21;
      if ( (*(_BYTE *)(a2[14].m128_u64[1] + 1) & 0x10) != 0 )
      {
        v35 = 1;
        goto LABEL_35;
      }
    }
    v35 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v44 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL) != 48;
    goto LABEL_35;
  }
  if ( a6 == 1 || v25 )
  {
    v37 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                         & 0xFFFFFFFFFFFFFFF0LL)
                             + 16LL);
    v23 = (unsigned int)(v37 - 25);
    if ( (unsigned int)v23 <= 1 )
      return a1;
    if ( v25 == 1 )
    {
      v38 = *(_QWORD *)&byte_8[v55 & 0xFFFFFFFFFFFFFFF0LL];
      v39 = 0;
      if ( (v38 & 8) != 0 )
        v39 = *(__int64 *)((char *)&qword_18 + (v38 & 0xFFFFFFFFFFFFFFF0LL));
      v40 = 0;
      v41 = v39 | ((unsigned __int8)v38 | (unsigned __int8)v55) & 7;
      v42 = *(_QWORD *)&byte_8[v56 & 0xFFFFFFFFFFFFFFF0LL];
      if ( (v42 & 8) != 0 )
        v40 = *(__int64 *)((char *)&qword_18 + (v42 & 0xFFFFFFFFFFFFFFF0LL));
      v43 = a2[15].m128_i64[1];
      v58[0].m128i_i64[0] = v41 & 0xFFFFFFFFFFFFFE07LL;
      if ( !sub_16A8C50(
              (unsigned __int64 *)v58,
              v40 & 0xFFFFFFFFFFFFFE07LL | ((unsigned __int8)v56 | (unsigned __int8)v42) & 7,
              v43) )
        return a1;
LABEL_23:
      if ( v52 && !(unsigned __int16)sub_C0EB40(a3, a2[15].m128_i64[1], nullptr, v23, v24) )
      {
        sub_1BCD210((__int64)a1, 4, a3, a4);
        return a1;
      }
LABEL_24:
      sub_1BEC140(v58, (__int64)a2, a3, v55, a6, 0, a7, a8, 0, 0, 0, 0);
      sub_1BD9390(a1, v58);
      if ( (v58[0].m128i_i32[0] & 0x7FFFFFFF) == 3 && ptr != &v60 )
        free(ptr);
      if ( (a1->m128i_i32[0] & 0x7FFFFFFF) == 0 )
      {
        a1[1].m128i_i8[4] = a1[1].m128i_i8[4] & 0xDF | (32 * !v52);
        v45 = a1[1].m128i_i16[2] & 0xFC37;
        LOBYTE(v45) = v45 | 0x88;
        a1[1].m128i_i16[2] = v45;
        return a1;
      }
      if ( (a1->m128i_i32[0] & 0x7FFFFFFF) != 2 )
        return a1;
      v29 = sub_C1D490(a1[8].m128i_i64[1], (__int64)v58, v27, v28) & 0xFFFFFFFFFFFFFFF0LL;
      v32 = *(_QWORD *)v29;
      if ( *(_BYTE *)(*(_QWORD *)v29 + 16LL) == 43 )
      {
        v33 = v52;
        if ( v52 )
        {
LABEL_29:
          sub_1BCD210((__int64)a1, 0, a3, a4);
          return a1;
        }
      }
      else
      {
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v32 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 43 )
        {
          v33 = 1;
          v48 = !v52;
          goto LABEL_80;
        }
        v47 = sub_F63050(v32, v58, v30, v31);
        v33 = v52;
        if ( v52 )
        {
          v48 = 0;
          if ( v47 )
            goto LABEL_29;
LABEL_80:
          a1[5].m128i_i8[4] = (v33 << 7) | (32 * (v48 & 1)) | a1[5].m128i_i8[4] & 0x5F;
          a1[5].m128i_i16[2] = a1[5].m128i_i16[2] & 0xF8B7 | 8;
          return a1;
        }
        v33 = v47 == 0;
      }
      v48 = 1;
      goto LABEL_80;
    }
    if ( !v25
      && a6
      && ((_BYTE)v37 == 48
       || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL) == 48) )
    {
      return a1;
    }
LABEL_22:
    if ( v25 <= 0 )
      goto LABEL_24;
    goto LABEL_23;
  }
LABEL_20:
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v56 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 48 )
    goto LABEL_21;
  if ( (unsigned __int8)sub_1E63330(a2, v50, v56, 1, 0) )
    goto LABEL_21;
  v46 = sub_1BF2AA0((__int64)a2, (__int64)a1, a4, v50, a3, v56, *(double *)a7.m128_u64, a8, 1, a9);
  v23 = v49;
  if ( !v46 )
    goto LABEL_21;
  if ( (a1->m128i_i32[0] & 0x7FFFFFFF) == 2 && v52 && a1[5].m128i_i8[0] == 1 )
    goto LABEL_29;
  return a1;
}
