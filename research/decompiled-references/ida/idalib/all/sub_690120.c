unsigned __int64 __fastcall sub_690120(__m128i *a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // r14
  char *v5; // r12
  char *v6; // rdx
  _QWORD *v7; // r13
  __int64 v8; // rax
  char **v9; // r15
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 *v12; // rax
  __m128i *v13; // rbp
  __int64 v14; // rax
  __m128i *v15; // rbx
  unsigned __int64 v16; // rdx
  __m128i *v17; // r10
  const __m128i *v18; // rax
  __m128i v19; // xmm0
  __int64 v21; // rax
  size_t v22; // r12
  __int64 v23; // rbp
  unsigned __int64 v24; // r14
  char *v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  size_t v28; // r13
  __int64 v29; // rbp
  unsigned __int64 v30; // r14
  char *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  size_t v34; // r12
  __int64 v35; // rbp
  unsigned __int64 v36; // r13
  char *v37; // rsi
  __int64 v38; // rax
  char **v39; // [rsp+0h] [rbp-88h]
  __int64 m128i_i64; // [rsp+8h] [rbp-80h]
  __int64 v41; // [rsp+10h] [rbp-78h]
  __int64 v42; // [rsp+18h] [rbp-70h]
  void *v43; // [rsp+20h] [rbp-68h] BYREF
  __int128 v44; // [rsp+28h] [rbp-60h]
  _BYTE src[10]; // [rsp+3Eh] [rbp-4Ah] BYREF
  _QWORD v46[8]; // [rsp+48h] [rbp-40h] BYREF

  v4 = a2;
  v5 = (char *)a2 + a4;
  v41 = a3;
  v6 = (char *)(a3 - (_QWORD)a2);
  v42 = a4;
  v7 = v6;
  v46[0] = __readfsqword(0x28u);
  v8 = a1[112].m128i_i64[1];
  v9 = *(char ***)(v8 + 48);
  v39 = &v9[*(_QWORD *)(v8 + 56)];
  while ( v39 != v9 )
  {
    while ( 1 )
    {
      v6 = *v9;
      v10 = *(_QWORD *)*v9;
      if ( v10 != -1 )
      {
        *(_QWORD *)v6 = (char *)v7 + v10;
        v6 = *v9;
      }
      v11 = *((_QWORD *)v6 + 1);
      if ( v11 != -1 )
      {
        *((_QWORD *)v6 + 1) = (char *)v7 + v11;
        v6 = *v9;
      }
      v12 = *((__int64 **)v6 + 2);
      a2 = &v12[2 * *((_QWORD *)v6 + 3)];
      if ( v12 != a2 )
      {
        do
        {
          v6 = (char *)*v12;
          if ( *v12 >= (unsigned __int64)v4 && v6 < v5 )
          {
            v6 = &v6[(_QWORD)v7];
            *v12 = (__int64)v6;
          }
          v12 += 2;
        }
        while ( a2 != v12 );
        v13 = *((__m128i **)*v9 + 2);
        v14 = *((_QWORD *)*v9 + 3);
        v15 = &v13[v14];
        if ( v13 != &v13[v14] )
          break;
      }
LABEL_18:
      if ( v39 == ++v9 )
        goto LABEL_19;
    }
    if ( (v14 * 16) >> 4 )
    {
      _BitScanReverse64(&v16, (v14 * 16) >> 4);
      m128i_i64 = 16LL * *((_QWORD *)*v9 + 3);
      sub_68F0E0(*((__m128i **)*v9 + 2), (unsigned __int64 *)&v13[v14], 2LL * (int)(63 - (v16 ^ 0x3F)));
      if ( m128i_i64 > 256 )
      {
        m128i_i64 = (__int64)v13[16].m128i_i64;
        sub_68ED60(v13, v13 + 16);
        v17 = v13 + 16;
        do
        {
          while ( 1 )
          {
            v6 = (char *)v17->m128i_i64[0];
            a1 = (__m128i *)v17->m128i_i64[1];
            v18 = v17 - 1;
            if ( v17->m128i_i64[0] < (unsigned __int64)v17[-1].m128i_i64[0] )
              break;
            a2 = (__int64 *)v17++;
            *a2 = (__int64)v6;
            a2[1] = (__int64)a1;
            if ( v15 == v17 )
              goto LABEL_18;
          }
          do
          {
            v19 = _mm_loadu_si128(v18);
            a2 = (__int64 *)v18--;
            v18[2] = v19;
          }
          while ( (unsigned __int64)v6 < v18->m128i_i64[0] );
          ++v17;
          *a2 = (__int64)v6;
          a2[1] = (__int64)a1;
        }
        while ( v15 != v17 );
        goto LABEL_18;
      }
    }
    else
    {
      sub_68F0E0(*((__m128i **)*v9 + 2), (unsigned __int64 *)&v13[v14], -2);
    }
    a2 = (__int64 *)v15;
    a1 = v13;
    ++v9;
    sub_68ED60(v13, v15);
  }
LABEL_19:
  if ( (unsigned __int8)must_journal(a1, a2, v6) )
  {
    v44 = 0;
    v43 = nullptr;
    v21 = pack_dq(src, v46, v4) - (_QWORD)src;
    v22 = v21;
    if ( !v21 )
      goto LABEL_32;
    v23 = v44;
    v24 = v44 + v21;
    if ( __CFADD__((_QWORD)v44, v21) )
    {
      if ( (unsigned __int64)v44 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v44 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v44 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_31;
      }
      v24 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v25 = (char *)v43;
    v26 = v44;
    if ( *((_QWORD *)&v44 + 1) < v24 )
    {
      v43 = (void *)qvector_reserve(&v43, v43, v24, 1);
      v25 = (char *)v43;
      v26 = v44;
    }
    memset(&v25[v26], 0, v24 - v26);
    *(_QWORD *)&v44 = v24;
LABEL_31:
    memcpy((char *)v43 + v23, src, v22);
LABEL_32:
    v27 = pack_dq(src, v46, v41) - (_QWORD)src;
    v28 = v27;
    if ( !v27 )
      goto LABEL_38;
    v29 = v44;
    v30 = v44 + v27;
    if ( __CFADD__((_QWORD)v44, v27) )
    {
      if ( (unsigned __int64)v44 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v44 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v44 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_37;
      }
      v30 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v31 = (char *)v43;
    v32 = v44;
    if ( *((_QWORD *)&v44 + 1) < v30 )
    {
      v43 = (void *)qvector_reserve(&v43, v43, v30, 1);
      v31 = (char *)v43;
      v32 = v44;
    }
    memset(&v31[v32], 0, v30 - v32);
    *(_QWORD *)&v44 = v30;
LABEL_37:
    memcpy((char *)v43 + v29, src, v28);
LABEL_38:
    v33 = pack_dq(src, v46, v42) - (_QWORD)src;
    v34 = v33;
    if ( !v33 )
      goto LABEL_44;
    v35 = v44;
    v36 = v33 + v44;
    if ( __CFADD__(v33, (_QWORD)v44) )
    {
      if ( (unsigned __int64)v44 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v44 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v44 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_43;
      }
      v36 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v37 = (char *)v43;
    v38 = v44;
    if ( *((_QWORD *)&v44 + 1) < v36 )
    {
      v43 = (void *)qvector_reserve(&v43, v43, v36, 1);
      v37 = (char *)v43;
      v38 = v44;
    }
    memset(&v37[v38], 0, v36 - v38);
    *(_QWORD *)&v44 = v36;
LABEL_43:
    memcpy((char *)v43 + v35, src, v34);
LABEL_44:
    add_undo_record(202, v43, v44);
    if ( v43 )
    {
      *(_QWORD *)&v44 = 0;
      qfree(v43);
    }
  }
  return v46[0] - __readfsqword(0x28u);
}
