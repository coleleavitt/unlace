__int64 __fastcall sub_CC60(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r12
  unsigned __int64 v11; // rax
  char v12; // r14
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r10
  unsigned int v17; // r15d
  const char *v18; // rsi
  __int64 v19; // rdi
  const char *v20; // rsi
  _QWORD *v22; // r14
  char v23; // al
  unsigned __int64 v24; // r10
  bool v25; // al
  unsigned __int64 v26; // r10
  char v27; // al
  bool v28; // al
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rax
  unsigned __int64 v32; // rbx
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // rbx
  __int64 v35; // rbx
  int flags; // eax
  unsigned __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // rdi
  unsigned __int64 j; // r14
  unsigned __int64 v41; // r14
  __int64 v42; // rax
  char v43; // al
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // r8d
  int v48; // r9d
  unsigned __int64 v49; // [rsp+10h] [rbp-138h]
  int v50; // [rsp+18h] [rbp-130h]
  unsigned __int64 v51; // [rsp+18h] [rbp-130h]
  unsigned __int64 v52; // [rsp+28h] [rbp-120h]
  unsigned int i; // [rsp+28h] [rbp-120h]
  unsigned int v54; // [rsp+38h] [rbp-110h] BYREF
  unsigned int v55; // [rsp+3Ch] [rbp-10Ch] BYREF
  __int64 v56; // [rsp+40h] [rbp-108h] BYREF
  __int64 v57; // [rsp+48h] [rbp-100h] BYREF
  __m128i v58; // [rsp+50h] [rbp-F8h] BYREF
  __m128i v59; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v60; // [rsp+70h] [rbp-D8h]
  __int128 v61; // [rsp+78h] [rbp-D0h]
  __int64 v62; // [rsp+88h] [rbp-C0h]
  _BYTE v63[24]; // [rsp+90h] [rbp-B8h] BYREF
  __int128 v64; // [rsp+A8h] [rbp-A0h]
  __int64 v65; // [rsp+B8h] [rbp-90h]
  __m128i si128; // [rsp+C0h] [rbp-88h]
  __int128 v67; // [rsp+D0h] [rbp-78h]
  _BYTE v68[24]; // [rsp+E0h] [rbp-68h] BYREF
  __int128 v69; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v70; // [rsp+108h] [rbp-40h]

  v70 = __readfsqword(0x28u);
  a1[10] = 0;
  v7 = getseg();
  if ( !v7 )
    goto LABEL_35;
  v8 = *(_QWORD *)(v7 + 8) - a3;
  v9 = 2LL * *(_QWORD *)(a1[5] + 368LL);
  if ( v8 < v9 )
    goto LABEL_35;
  if ( !(unsigned __int8)sub_4AA0(a1, a3, a3 + v9, 0) )
    goto LABEL_35;
  if ( !(unsigned __int8)sub_4D90(a1, 0, a1 + 6, 0, 0) )
    goto LABEL_35;
  if ( !(unsigned __int8)sub_4D90(a1, *(_DWORD *)(a1[5] + 368LL), a1 + 7, 0, 0) )
    goto LABEL_35;
  v10 = a1[6];
  if ( v10 )
  {
    v11 = 2LL * *(_QWORD *)(a1[5] + 368LL);
    if ( v10 < v11 )
      goto LABEL_35;
    v10 -= v11;
    if ( !(unsigned __int8)is_mapped() && !(unsigned __int8)is_spec_ea() )
      goto LABEL_35;
  }
  if ( !sub_B6C0(a1[5], (__int64)(a1 + 12), a1[7]) )
    goto LABEL_35;
  if ( a1[6] )
  {
    if ( !(unsigned __int8)is_spec_ea() )
    {
      v22 = (_QWORD *)getseg();
      if ( !v22
        || (~((unsigned __int16)get_flags_ex() >> 8) & 6) == 0
        || get_fchunk()
        || a1[6] - *v22 < (unsigned __int64)(2LL * *(_QWORD *)(a1[5] + 368LL)) && (unsigned __int8)is_loaded() )
      {
        goto LABEL_35;
      }
    }
  }
  v12 = sub_4ED0(a2, 5u, *a1);
  if ( !v12 )
    sub_5060(a2, 5, a1);
  v13 = v8;
  v14 = a1[1];
  v15 = *(_QWORD *)(a1[5] + 368LL);
  v16 = v13 - 2 * v15;
  if ( v16 < v15 || (v49 = v16, !(unsigned __int8)is_mapped()) )
  {
    v50 = 0;
    goto LABEL_16;
  }
  v65 = a1[5];
  LODWORD(v67) = 0;
  *((_QWORD *)&v67 + 1) = 0;
  memset(v63, 0, sizeof(v63));
  v64 = 0;
  si128 = (__m128i)-1LL;
  memset(v68, 0, sizeof(v68));
  v69 = 0;
  if ( !(unsigned __int8)sub_BB70(v65, &v56, v14) || v56 == v14 || v56 == *a1 )
    goto LABEL_61;
  v23 = is_mapped();
  v24 = v49;
  if ( v23 && *a1 != v56 )
  {
    v25 = sub_BB40(a2);
    v26 = v49;
    if ( v25 )
    {
      v27 = sub_4ED0(a2, 5u, v56);
      v26 = v49;
      if ( v27 )
        goto LABEL_96;
    }
    v51 = v26;
    v28 = sub_BB40(a2);
    v24 = v51;
    if ( !v28 )
    {
      v43 = sub_CC60((unsigned int)v63, a2, v56, a4, v29, v30);
      v24 = v51;
      if ( v43 )
      {
LABEL_96:
        v59.m128i_i64[1] = 2;
        v59.m128i_i64[0] = v56;
        sub_BF30(a1 + 9, &v59);
        v50 = 1;
        v14 += *(_QWORD *)(a1[5] + 368LL);
        goto LABEL_62;
      }
    }
  }
  v31 = a1[5];
  v60 = 0;
  v52 = v24;
  v62 = v31;
  v59 = 0;
  v61 = 0;
  if ( v24 <= 8 )
  {
LABEL_61:
    v50 = 0;
LABEL_62:
    if ( *(_QWORD *)&v68[16] )
    {
      *(_QWORD *)&v69 = 0;
      qfree();
    }
    if ( *((_QWORD *)&v67 + 1) )
    {
      *(_QWORD *)v68 = 0;
      qfree();
    }
    if ( *(_QWORD *)&v63[16] )
    {
      *(_QWORD *)&v64 = 0;
      qfree();
    }
    goto LABEL_16;
  }
  if ( !(unsigned __int8)sub_4AA0((unsigned __int64 *)&v59, v14, v14 + 8, 0)
    || !(unsigned __int8)sub_4D20(&v59, 0, &v54)
    || !(unsigned __int8)sub_4D20(&v59, 4u, &v55)
    || v54 > 0x1F
    || v55 - 1 > 0xFFFFFE
    || v52 - 8 < 2 * *(_QWORD *)(a1[5] + 368LL) * (unsigned __int64)v55 )
  {
    if ( v60 )
    {
      *(_QWORD *)&v61 = 0;
      qfree();
    }
    goto LABEL_61;
  }
  v14 = v59.m128i_u64[1];
  for ( i = 0; i < v55; ++i )
  {
    *(_QWORD *)&v61 = 0;
    v45 = a1[5];
    v59 = (__m128i)-1LL;
    v56 = -1;
    v46 = *(_QWORD *)(v45 + 368);
    v57 = -1;
    if ( !(unsigned __int8)sub_4AA0((unsigned __int64 *)&v59, v14, 2 * v46 + v14, 0)
      || !(unsigned __int8)sub_4D90(&v59, 0, &v56, 0, 0)
      || !(unsigned __int8)is_mapped() && !(unsigned __int8)is_spec_ea()
      || !(unsigned __int8)sub_4D90(&v59, *(_DWORD *)(a1[5] + 368LL), &v57, 0, 0)
      || sub_BB40(a2) && !sub_4ED0(a2, 5u, v56)
      || *a1 == v56
      || (unsigned __int8)is_mapped()
      && !(unsigned __int8)is_spec_ea()
      && !sub_BB40(a2)
      && !(unsigned __int8)sub_CC60((unsigned int)v63, a2, v56, a4, v47, v48) )
    {
      v14 = a1[1];
      a1[10] = 0;
      v50 = 0;
      goto LABEL_113;
    }
    v44 = v57;
    if ( *(_DWORD *)(*(_QWORD *)(v62 + 24) + 24LL) != 8 )
      v44 = (int)v57;
    v58.m128i_i64[1] = v44;
    v58.m128i_i64[0] = v56;
    sub_BF30(a1 + 9, &v58);
    v14 = v59.m128i_u64[1];
  }
  if ( a1[10] )
  {
    v50 = 2;
    *((_DWORD *)a1 + 16) = v54;
  }
  else
  {
    v50 = 0;
  }
LABEL_113:
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree();
  }
  sub_BC60(v63);
LABEL_16:
  v17 = sub_4AA0(a1, *a1, v14, 0);
  if ( !(_BYTE)v17 )
  {
    a1[10] = 0;
LABEL_35:
    a1[3] = 0;
    *(_OWORD *)a1 = -1;
    return 0;
  }
  if ( !v12 )
  {
    if ( a1[6] && v10 && !(unsigned __int8)is_spec_ea() && (unsigned __int8)is_loaded() )
    {
      v65 = a1[5];
      si128 = _mm_load_si128((const __m128i *)&xmmword_11030);
      memset(v68, 0, sizeof(v68));
      memset(v63, 0, sizeof(v63));
      v64 = 0;
      v67 = -1;
      if ( !sub_4ED0(v65 + 120, 6u, v10) && (sub_BB40(a1[5] + 120LL) || !(unsigned __int8)sub_DA90(v63, a2, v10, a4, 0)) )
      {
        a1[10] = 0;
        a1[3] = 0;
        *(_OWORD *)a1 = -1;
        sub_BCB0(v63);
        return 0;
      }
      sub_BCB0(v63);
    }
    if ( (a4 & 0x10) != 0 )
    {
      memset(v63, 0, sizeof(v63));
      sub_C000(a1, (__int64 *)v63, 0);
      if ( *(_QWORD *)&v63[8] > 1u )
        sub_10940(a2, *a1, v63);
      v32 = *a1;
      v33 = sub_10380(a1[5], *a1, 4, "reference to RTTI's type class", 2LL * *(_QWORD *)(a1[5] + 368LL)) + v32;
      v34 = sub_10380(a1[5], v33, 4, "reference to type's name", 0) + v33;
      if ( v50 == 1 )
      {
        sub_10380(a1[5], v34, 4, "reference to parent's type name", 0);
      }
      else if ( v50 == 2 )
      {
        v37 = sub_10380(a1[5], v34, 2, "attribute", 0) + v34;
        v38 = sub_10380(a1[5], v37, 1, "count of base classes", 0);
        v39 = a1[5];
        for ( j = v37 + v38; a1[1] >= j + 2LL * *(_QWORD *)(v39 + 368); j = v42 + v41 )
        {
          v41 = sub_10380(v39, j, 4, "base class' type descriptor", 0) + j;
          v42 = sub_10380(a1[5], v41, 7, "base class' attributes", 0);
          v39 = a1[5];
        }
      }
      v35 = -1;
      if ( a1[3] )
        v35 = a1[7];
      if ( (unsigned __int8)is_mapped() )
      {
        flags = get_flags_ex();
        if ( (flags & 0x600) != 0x400 || (flags & 0xF0000000) != 0x50000000 )
          create_strlit();
        sub_102C0(v35, "type descriptor name", 1);
      }
      if ( *(_QWORD *)v63 )
      {
        *(_QWORD *)&v63[8] = 0;
        qfree();
      }
    }
    if ( (a4 & 0x20) != 0 )
    {
      memset(v63, 0, sizeof(v63));
      if ( (unsigned __int8)sub_BE60(a1, (__int64 *)v63) )
      {
        v18 = &haystack;
        if ( *(_QWORD *)&v63[8] )
          v18 = *(const char **)v63;
        v19 = -1;
        if ( a1[3] )
          v19 = a1[7];
        sub_10260(v19, v18);
      }
      if ( (unsigned __int8)sub_BD90(a1, (__int64 *)v63) )
      {
        v20 = &haystack;
        if ( *(_QWORD *)&v63[8] )
          v20 = *(const char **)v63;
        sub_10260(*a1, v20);
      }
      if ( *(_QWORD *)v63 )
      {
        *(_QWORD *)&v63[8] = 0;
        qfree();
      }
    }
  }
  return v17;
}
