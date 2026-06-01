unsigned __int64 __fastcall sub_4DB1C0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rdx
  __int64 v4; // rsi
  _QWORD *v5; // rcx
  unsigned __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // r14
  unsigned __int64 v9; // rbp
  __int64 v10; // rbx
  char *v11; // rax
  void *v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rdx
  char *v15; // rsi
  char *v16; // r15
  const char *v17; // r14
  char *v18; // rax
  _QWORD *v19; // rax
  _QWORD *v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rdx
  _QWORD *v23; // rax
  char *v24; // rdx
  __int64 v25; // rbp
  __int64 v26; // rbx
  char *v27; // rax
  void *v28; // rdi
  _QWORD *v29; // rax
  _QWORD *v30; // rdi
  __int64 v31; // rcx
  __int64 v32; // rdx
  size_t v34; // rax
  size_t v35; // r13
  void *v36; // rax
  unsigned __int64 v37; // rbx
  char *v38; // rbp
  __m128i *v39; // rax
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v42; // rdx
  __int64 *v43; // r8
  _BOOL8 v44; // rdi
  __int64 i; // r14
  char *v46; // rax
  void *v47; // rdi
  char *v48; // r8
  __int128 v49; // xmm0
  __int64 v50; // rcx
  char *v51; // rdx
  char *v52; // rsi
  void *v53; // rax
  __m128i *v54; // [rsp+8h] [rbp-F0h]
  __int64 *v55; // [rsp+8h] [rbp-F0h]
  size_t n; // [rsp+10h] [rbp-E8h]
  size_t na; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v58; // [rsp+18h] [rbp-E0h]
  _QWORD *m128i_i64; // [rsp+20h] [rbp-D8h]
  __int64 v60; // [rsp+28h] [rbp-D0h]
  _QWORD *v61; // [rsp+38h] [rbp-C0h]
  char v63; // [rsp+47h] [rbp-B1h]
  __int64 v64; // [rsp+50h] [rbp-A8h]
  char *v65; // [rsp+58h] [rbp-A0h]
  char *s[2]; // [rsp+60h] [rbp-98h] BYREF
  void *ptr; // [rsp+70h] [rbp-88h] BYREF
  __int128 v68; // [rsp+78h] [rbp-80h]
  unsigned __int64 v69; // [rsp+90h] [rbp-68h]
  unsigned __int64 v70; // [rsp+B8h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v70 = __readfsqword(0x28u);
  v5 = *(_QWORD **)(a1 + 1720);
  v6 = v3 + v4;
  *(__m128i *)s = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v6);
  v61 = v5;
  v60 = (__int64)(v5 + 13);
  if ( v3 < v6 )
  {
    m128i_i64 = v5 + 13;
    v63 = 1;
    while ( 1 )
    {
      ptr = nullptr;
      v68 = 0;
      v58 = unpack_dq(s);
      v7 = unpack_dd(s);
      v8 = v68;
      v9 = v7;
      v10 = 0;
      if ( (_QWORD)v68 )
      {
        do
        {
          v11 = (char *)ptr + 24 * v10;
          v12 = *(void **)v11;
          if ( *(_QWORD *)v11 )
          {
            *((_QWORD *)v11 + 1) = 0;
            qfree(v12);
          }
          ++v10;
        }
        while ( v8 != v10 );
      }
      *(_QWORD *)&v68 = 0;
      if ( *((_QWORD *)&v68 + 1) < v9 )
        break;
      if ( v9 )
        goto LABEL_9;
LABEL_17:
      if ( a3 )
      {
        if ( v63 )
        {
          v19 = (_QWORD *)v61[14];
          if ( v19 )
          {
            v20 = (_QWORD *)v60;
            do
            {
              while ( 1 )
              {
                v21 = v19[2];
                v22 = v19[3];
                if ( v19[4] < v58 )
                  break;
                v20 = v19;
                v19 = (_QWORD *)v19[2];
                if ( !v21 )
                  goto LABEL_24;
              }
              v19 = (_QWORD *)v19[3];
            }
            while ( v22 );
LABEL_24:
            m128i_i64 = v20;
            v23 = v20;
            if ( v20 != (_QWORD *)v60 )
            {
              if ( v58 < v20[4] )
                v23 = (_QWORD *)v60;
              m128i_i64 = v23;
            }
          }
          else
          {
            m128i_i64 = (_QWORD *)v60;
          }
          v63 = 0;
        }
      }
      else
      {
        v37 = v68;
        v38 = nullptr;
        v69 = v58;
        if ( (_QWORD)v68 )
        {
          v38 = (char *)qalloc_or_throw(24 * v68);
          v48 = v38;
          v49 = 0;
          v50 = 0;
          do
          {
            v51 = (char *)ptr;
            *(_OWORD *)(v48 + 8) = v49;
            *(_QWORD *)v48 = 0;
            v52 = &v51[24 * v50];
            if ( *((_QWORD *)v52 + 1) )
            {
              v65 = v48;
              v64 = v50;
              na = *((_QWORD *)v52 + 1);
              v53 = (void *)qalloc_or_throw(na);
              *((_QWORD *)v65 + 2) = na;
              *(_QWORD *)v65 = v53;
              memcpy(v53, *(const void **)v52, na);
              v48 = v65;
              v49 = 0;
              v50 = v64;
              *((_QWORD *)v65 + 1) = na;
            }
            ++v50;
            v48 += 24;
          }
          while ( v37 != v50 );
        }
        v39 = (__m128i *)operator new(0x40u);
        v39[2].m128i_i64[1] = (__int64)v38;
        v54 = v39;
        v39[2].m128i_i64[0] = v58;
        v39[3] = _mm_unpacklo_epi64((__m128i)v37, (__m128i)v37);
        v41 = sub_4C7B00(v61 + 12, m128i_i64, v58, v40);
        v43 = (__int64 *)v54;
        m128i_i64 = v41;
        if ( v42 )
        {
          v44 = v41 || v60 == v42 || v58 < *(_QWORD *)(v42 + 32);
          std::_Rb_tree_insert_and_rebalance(v44, v54, v42, v60);
          ++v61[17];
          m128i_i64 = v54->m128i_i64;
        }
        else if ( v54 )
        {
          if ( v38 )
          {
            if ( v37 )
            {
              for ( i = 0; i != v37; ++i )
              {
                v46 = &v38[24 * i];
                v47 = *(void **)v46;
                if ( *(_QWORD *)v46 )
                {
                  *((_QWORD *)v46 + 1) = 0;
                  qfree(v47);
                }
                v38 = (char *)v54[2].m128i_i64[1];
              }
              v43 = (__int64 *)v54;
            }
            v43[6] = 0;
            v55 = v43;
            qfree(v38);
            v43 = v55;
          }
          operator delete(v43, 0x40u);
        }
      }
      v24 = (char *)ptr;
      if ( ptr )
      {
        v25 = v68;
        if ( (_QWORD)v68 )
        {
          v26 = 0;
          do
          {
            v27 = &v24[24 * v26];
            v28 = *(void **)v27;
            if ( *(_QWORD *)v27 )
            {
              *((_QWORD *)v27 + 1) = 0;
              qfree(v28);
              v24 = (char *)ptr;
            }
            ++v26;
          }
          while ( v25 != v26 );
        }
        *(_QWORD *)&v68 = 0;
        qfree(v24);
      }
      if ( s[0] >= s[1] )
        goto LABEL_37;
    }
    ptr = (void *)qvector_reserve(&ptr, ptr, v9, 24);
LABEL_9:
    v13 = 0;
    do
    {
      v14 = v68;
      v15 = (char *)ptr;
      if ( *((_QWORD *)&v68 + 1) < (unsigned __int64)(v68 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v68 + 1, 24);
        v14 = v68;
        v15 = (char *)ptr;
      }
      v16 = &v15[24 * v14];
      *(_QWORD *)v16 = 0;
      v17 = s[0];
      *(_OWORD *)(v16 + 8) = 0;
      *(_QWORD *)&v68 = v68 + 1;
      v18 = (char *)v17;
      do
      {
        if ( v18 >= s[1] )
          goto LABEL_15;
        ++v18;
      }
      while ( *(v18 - 1) );
      s[0] = v18;
      if ( !v17 || (v34 = strlen(v17), (v35 = v34) == 0) )
      {
LABEL_15:
        *((_QWORD *)v16 + 1) = 0;
        goto LABEL_16;
      }
      n = v34 + 1;
      v36 = (void *)qvector_reserve(v16, *(_QWORD *)v16, v34 + 1, 1);
      *(_QWORD *)v16 = v36;
      *((_QWORD *)v16 + 1) = n;
      memmove(v36, v17, v35);
      *(_BYTE *)(*(_QWORD *)v16 + v35) = 0;
LABEL_16:
      ++v13;
    }
    while ( v9 != v13 );
    goto LABEL_17;
  }
  m128i_i64 = v5 + 13;
LABEL_37:
  if ( a3 )
  {
    v29 = (_QWORD *)v61[14];
    if ( v29 )
    {
      v30 = (_QWORD *)v60;
      do
      {
        while ( 1 )
        {
          v31 = v29[2];
          v32 = v29[3];
          if ( v58 >= v29[4] )
            break;
          v30 = v29;
          v29 = (_QWORD *)v29[2];
          if ( !v31 )
            goto LABEL_43;
        }
        v29 = (_QWORD *)v29[3];
      }
      while ( v32 );
LABEL_43:
      v60 = (__int64)v30;
    }
    sub_4DA510((__int64)(v61 + 12), (__int64)m128i_i64, v60);
  }
  return v70 - __readfsqword(0x28u);
}
