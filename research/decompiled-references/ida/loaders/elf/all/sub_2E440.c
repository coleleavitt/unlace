unsigned __int64 __fastcall sub_2E440(__int64 *a1, const char *m128i_i8, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  __m128i *v6; // r13
  __int64 v8; // rbx
  __m128i *v9; // rbp
  unsigned __int64 v10; // rdx
  const __m128i *v11; // rbx
  __m128i v12; // xmm1
  __m128i *v13; // rax
  __m128i v14; // xmm0
  __m128i *v15; // rcx
  char v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  _QWORD *v19; // r13
  unsigned __int64 v20; // rbp
  __int64 v21; // rdi
  int qword; // r14d
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r14
  const char *v33; // rdi
  __m128i *v34; // rcx
  __int64 v35; // [rsp+8h] [rbp-B0h]
  __int64 v36; // [rsp+10h] [rbp-A8h]
  __int64 v37; // [rsp+18h] [rbp-A0h]
  __int64 v38; // [rsp+28h] [rbp-90h] BYREF
  const char *v39; // [rsp+30h] [rbp-88h] BYREF
  __int128 v40; // [rsp+38h] [rbp-80h]
  __int64 v41; // [rsp+50h] [rbp-68h] BYREF
  __m128i si128; // [rsp+58h] [rbp-60h]
  __int64 v43; // [rsp+68h] [rbp-50h]
  __int64 v44; // [rsp+70h] [rbp-48h]
  unsigned __int64 v45; // [rsp+78h] [rbp-40h]

  v5 = a1[20];
  v6 = (__m128i *)a1[19];
  v45 = __readfsqword(0x28u);
  v8 = 16 * v5;
  v9 = &v6[v5];
  if ( v9 == v6 )
    goto LABEL_9;
  if ( !(v8 >> 4) )
  {
    sub_2CB10(v6, (unsigned __int64 *)v9, -2);
    goto LABEL_52;
  }
  _BitScanReverse64(&v10, v8 >> 4);
  sub_2CB10(v6, (unsigned __int64 *)v9, 2LL * (int)v10);
  if ( v8 <= 256 )
  {
LABEL_52:
    m128i_i8 = (const char *)v9;
    sub_2CA40(v6, v9);
    v5 = a1[20];
    goto LABEL_9;
  }
  v11 = v6 + 16;
  m128i_i8 = v6[16].m128i_i8;
  sub_2CA40(v6, v6 + 16);
  do
  {
    while ( 1 )
    {
      v12 = _mm_loadu_si128(v11);
      v13 = (__m128i *)&v11[-1];
      if ( v12.m128i_i64[0] < (unsigned __int64)v11[-1].m128i_i64[0] )
        break;
      v34 = (__m128i *)v11++;
      *v34 = v12;
      if ( v9 == v11 )
        goto LABEL_8;
    }
    do
    {
      v14 = _mm_loadu_si128(v13);
      v15 = v13--;
      v13[2] = v14;
    }
    while ( v12.m128i_i64[0] < (unsigned __int64)v13->m128i_i64[0] );
    ++v11;
    *v15 = v12;
  }
  while ( v9 != v11 );
LABEL_8:
  v5 = a1[20];
LABEL_9:
  v16 = *(_BYTE *)(a1[8] + 617);
  if ( v16 )
  {
    v17 = 8;
    v18 = 8;
  }
  else
  {
    v17 = 4;
    v18 = 4;
  }
  if ( !v5 )
    return v45 - __readfsqword(0x28u);
  v19 = (_QWORD *)a1[19];
  v20 = 0;
  v37 = 2 * v18;
  v35 = (int)v17;
  v21 = *v19;
LABEL_23:
  if ( v16 )
    qword = get_qword(v21);
  else
    qword = get_dword(v21, m128i_i8, v17, v18, a5);
  v23 = a1[8];
  v24 = *v19 + v35;
  v41 = 0;
  v25 = *(_QWORD *)(v23 + 456) & v24;
  v43 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_6BEB0);
  v44 = 0;
  if ( (unsigned __int8)get_fixup(&v41, v25) && (v41 & 0x200000000LL) != 0 )
  {
    if ( (v41 & 0x100000000LL) != 0 )
    {
      v26 = si128.m128i_i64[0];
    }
    else
    {
      v26 = 0;
      if ( si128.m128i_i64[1] != -1 )
        v26 = 16 * sel2para();
    }
    v27 = v43 + v26;
    v36 = v27;
    if ( v19[1] == v27 && v27 != -1 )
      goto LABEL_27;
  }
  m128i_i8 = &byte_4;
  if ( (get_flags_ex(v25, 4) & 0xF00000) == 0 && !(v16 ? get_qword(v25) : (unsigned int)get_dword(v25, 4, v28, v18, a5)) )
  {
    if ( qword == 1 )
    {
      v36 = *a1;
    }
    else
    {
      if ( qword != 2 )
        goto LABEL_21;
      v36 = *(_QWORD *)(a1[5] + 16);
    }
    if ( v36 == -1 )
      goto LABEL_21;
LABEL_27:
    v29 = sub_2E280(a1, qword);
    v38 = 0;
    v30 = v29;
    if ( (unsigned __int8)get_type_by_tid(&v38) && v37 == get_tinfo_size(0, v38, 0) )
    {
      create_data(*v19, 1610612736, v37, v30);
      m128i_i8 = (const char *)v36;
      v40 = 0;
      v39 = nullptr;
      get_ea_name(&v39, v36, 0, 0);
      if ( (unsigned __int64)v40 > 1 )
      {
        m128i_i8 = &byte_4;
        if ( (get_flags_ex(*v19, 4) & 0x4000) == 0 )
        {
          v33 = &s1;
          if ( (_QWORD)v40 )
            v33 = v39;
          if ( (unsigned __int8)is_uname(v33) )
          {
            m128i_i8 = &s1;
            if ( (_QWORD)v40 )
              m128i_i8 = v39;
            sub_428B0(*v19, m128i_i8, 0, "_tlsind");
          }
        }
      }
      if ( v39 )
      {
        *(_QWORD *)&v40 = 0;
        qfree(v39);
      }
      ++v20;
      clear_tinfo_t(&v38);
      if ( v20 < a1[20] )
        goto LABEL_22;
    }
    else
    {
      clear_tinfo_t(&v38);
    }
    return v45 - __readfsqword(0x28u);
  }
LABEL_21:
  while ( ++v20 < a1[20] )
  {
LABEL_22:
    v17 = a1[19];
    v19 = (_QWORD *)(v17 + 16 * v20);
    v21 = *v19;
    if ( *(v19 - 2) != *v19 )
      goto LABEL_23;
  }
  return v45 - __readfsqword(0x28u);
}

