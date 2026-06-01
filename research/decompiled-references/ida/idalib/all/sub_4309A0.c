unsigned __int64 __fastcall sub_4309A0(__int64 *a1, __m128i *a2, unsigned __int64 *a3, __int64 a4)
{
  __m128i *v4; // rbp
  __int64 *v5; // rbx
  __int64 m128i_i64; // r13
  __int64 *v7; // rsi
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r15
  _QWORD *v13; // rsi
  __int64 v14; // rdx
  _QWORD *v15; // rcx
  __int64 *v16; // r10
  __int64 *v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rax
  __int64 *v20; // r8
  __m128i *v21; // r10
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 *v24; // r10
  _BOOL8 v25; // rdi
  __int64 v26; // r15
  _QWORD *v27; // rax
  bool v28; // zf
  const __m128i *i; // r15
  __m128i *v30; // rdx
  __int64 v31; // rcx
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // r14
  __m128i *v34; // rsi
  _QWORD *v35; // rax
  __m128i *v36; // r8
  bool v37; // r9
  __m128i *v38; // r10
  _QWORD *v39; // rax
  void **v40; // r13
  void **v41; // r14
  void *v42; // rdi
  unsigned __int64 v44; // rax
  void **v45; // r14
  _QWORD *v46; // r15
  void **v47; // rbx
  void *v48; // rdi
  __int64 v49; // r13
  __int64 v50; // rsi
  __int64 v51; // rax
  unsigned __int64 v52; // rax
  __int64 v53; // r10
  _QWORD *v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rax
  __m128i *v58; // [rsp+0h] [rbp-E0h]
  bool v60; // [rsp+8h] [rbp-D8h]
  char v61; // [rsp+17h] [rbp-C9h]
  __m128i *v63; // [rsp+28h] [rbp-B8h]
  __int64 *v64; // [rsp+28h] [rbp-B8h]
  __m128i *v65; // [rsp+28h] [rbp-B8h]
  __int64 *v66; // [rsp+28h] [rbp-B8h]
  _QWORD *v67; // [rsp+28h] [rbp-B8h]
  __int64 *v68; // [rsp+28h] [rbp-B8h]
  __int64 v69; // [rsp+28h] [rbp-B8h]
  __int64 *v70; // [rsp+30h] [rbp-B0h]
  void *ptr; // [rsp+38h] [rbp-A8h] BYREF
  __int128 v72; // [rsp+40h] [rbp-A0h]
  __int128 v73; // [rsp+50h] [rbp-90h]
  char *v74; // [rsp+60h] [rbp-80h]
  __int64 v75; // [rsp+68h] [rbp-78h]
  int v76; // [rsp+78h] [rbp-68h] BYREF
  __int64 *v77; // [rsp+80h] [rbp-60h]
  const __m128i *v78; // [rsp+88h] [rbp-58h]
  int *v79; // [rsp+90h] [rbp-50h]
  __int64 v80; // [rsp+98h] [rbp-48h]
  unsigned __int64 v81; // [rsp+A0h] [rbp-40h]

  v4 = a2 + 4;
  v5 = (__int64 *)a2;
  m128i_i64 = (__int64)a2[4].m128i_i64;
  v7 = (__int64 *)a2[4].m128i_i64[1];
  v8 = *a3;
  v81 = __readfsqword(0x28u);
  v78 = (const __m128i *)&v76;
  ptr = nullptr;
  v74 = nullptr;
  v75 = 0;
  v76 = 0;
  v77 = nullptr;
  v79 = &v76;
  v80 = 0;
  v72 = 0;
  v73 = 0;
  if ( !v7 )
  {
    sub_3CB990((__int64)&ptr, nullptr);
    goto LABEL_56;
  }
  do
  {
    while ( 1 )
    {
      v9 = v7[2];
      v10 = v7[3];
      if ( v7[4] < v8 )
        break;
      m128i_i64 = (__int64)v7;
      v7 = (__int64 *)v7[2];
      if ( !v9 )
        goto LABEL_6;
    }
    v7 = (__int64 *)v7[3];
  }
  while ( v10 );
LABEL_6:
  if ( v4 == (__m128i *)m128i_i64 )
    goto LABEL_55;
  while ( 1 )
  {
    v11 = *(_QWORD *)(m128i_i64 + 32);
    if ( v11 >= a3[1] )
      break;
    v12 = *(_QWORD *)(m128i_i64 + 40);
    if ( v11 >= *a3 )
      v11 += a4;
    v13 = (_QWORD *)v11;
    if ( (unsigned int)sub_42DD50(a1, v11) == 7 )
    {
      m128i_i64 = std::_Rb_tree_increment(m128i_i64, v11, v14, v15);
      if ( v4 == (__m128i *)m128i_i64 )
        break;
    }
    else
    {
      v16 = (__int64 *)&v76;
      v61 = *(_BYTE *)(m128i_i64 + 48);
      v17 = v77;
      if ( v77 )
      {
        do
        {
          while ( 1 )
          {
            v18 = v17[4];
            if ( v18 < v11 || v11 >= v18 && v17[5] < v12 )
              break;
            v16 = v17;
            v17 = (__int64 *)v17[2];
            if ( !v17 )
              goto LABEL_18;
          }
          v17 = (__int64 *)v17[3];
        }
        while ( v17 );
LABEL_18:
        if ( v16 != (__int64 *)&v76 )
        {
          v19 = v16[4];
          if ( v11 >= v19 && (v19 < v11 || v12 >= v16[5]) )
            goto LABEL_28;
        }
      }
      v20 = v16;
      v21 = (__m128i *)v73;
      ++v75;
      if ( (_QWORD)v73 )
      {
        *(_BYTE *)(v73 + 48) = 0;
        v22 = v21->m128i_i64[0];
        v13 = v20;
        v63 = v21;
        v21[2] = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v12);
        *(_QWORD *)&v73 = v22;
        v23 = sub_42B3F0(&ptr, v20, v11, v12);
        v24 = (__int64 *)v63;
        v15 = v23;
        if ( v18 )
          goto LABEL_24;
LABEL_45:
        *v24 = v73;
        v28 = v75-- == 1;
        *(_QWORD *)&v73 = v24;
        if ( v28 )
        {
          v18 = v72;
          v45 = (void **)((char *)ptr + 8 * v72);
          if ( ptr != v45 )
          {
            v66 = v5;
            v46 = v15;
            v47 = (void **)ptr;
            do
            {
              v48 = *v47++;
              qfree(v48);
            }
            while ( v45 != v47 );
            v5 = v66;
            v45 = (void **)ptr;
            v15 = v46;
          }
          if ( v45 )
          {
            v67 = v15;
            *(_QWORD *)&v72 = 0;
            qfree(v45);
            v15 = v67;
            ptr = nullptr;
            *((_QWORD *)&v72 + 1) = 0;
          }
          v74 = nullptr;
          v73 = 0;
        }
        goto LABEL_46;
      }
      v38 = *((__m128i **)&v73 + 1);
      if ( *((char **)&v73 + 1) == v74 )
      {
        v68 = v20;
        *((_QWORD *)&v73 + 1) = qalloc_or_throw(&loc_3FFFF0);
        v53 = *((_QWORD *)&v73 + 1);
        v54 = ptr;
        v74 = (char *)&loc_3FFFF0 + *((_QWORD *)&v73 + 1);
        v55 = v72;
        v20 = v68;
        if ( *((_QWORD *)&v72 + 1) < (unsigned __int64)(v72 + 1) )
        {
          v70 = v68;
          v69 = *((_QWORD *)&v73 + 1);
          ptr = (void *)qvector_reserve(&ptr, ptr, v72 + 1, 8);
          v54 = ptr;
          v20 = v70;
          v55 = v72;
          v53 = v69;
        }
        v54[v55] = v53;
        v38 = *((__m128i **)&v73 + 1);
        *(_QWORD *)&v72 = v72 + 1;
      }
      v38[3].m128i_i8[0] = 0;
      v13 = v20;
      *((_QWORD *)&v73 + 1) = (char *)v38 + 56;
      v38[2] = _mm_unpacklo_epi64((__m128i)v11, (__m128i)v12);
      v65 = v38;
      v39 = sub_42B3F0(&ptr, v20, v11, v12);
      v24 = (__int64 *)v65;
      v15 = v39;
      if ( v18 )
      {
LABEL_24:
        if ( v15 || &v76 == (int *)v18 )
        {
          v25 = 1;
        }
        else
        {
          v52 = *(_QWORD *)(v18 + 32);
          v25 = 1;
          if ( v11 >= v52 )
          {
            v25 = 0;
            if ( v52 >= v11 )
              v25 = v12 < *(_QWORD *)(v18 + 40);
          }
        }
        v13 = v24;
        v64 = v24;
        std::_Rb_tree_insert_and_rebalance(v25, v24, v18, &v76);
        v16 = v64;
        ++v80;
        goto LABEL_28;
      }
      if ( v65 )
        goto LABEL_45;
LABEL_46:
      v16 = v15;
LABEL_28:
      *((_BYTE *)v16 + 48) = v61;
      v26 = std::_Rb_tree_increment(m128i_i64, v13, v18, v15);
      v27 = (_QWORD *)std::_Rb_tree_rebalance_for_erase(m128i_i64, v4);
      *v27 = v5[3];
      v28 = v5[6]-- == 1;
      v5[3] = (__int64)v27;
      if ( v28 )
      {
        v40 = (void **)(*v5 + 8 * v5[1]);
        if ( (void **)*v5 != v40 )
        {
          v41 = (void **)*v5;
          do
          {
            v42 = *v41++;
            qfree(v42);
          }
          while ( v40 != v41 );
          v40 = (void **)*v5;
        }
        if ( v40 )
        {
          v5[1] = 0;
          qfree(v40);
          *v5 = 0;
          v5[2] = 0;
        }
        v5[5] = 0;
        *(_OWORD *)(v5 + 3) = 0;
      }
      m128i_i64 = v26;
      --v5[12];
      if ( v4 == (__m128i *)v26 )
        break;
    }
  }
  for ( i = v78; i != (const __m128i *)&v76; i = (const __m128i *)std::_Rb_tree_increment(i, v34, v30, v31) )
  {
    v32 = i[2].m128i_u64[0];
    v33 = i[2].m128i_u64[1];
    v34 = v4;
    v35 = sub_42B3F0(v5, v4, v32, v33);
    v36 = v30;
    if ( v30 )
    {
      v37 = v4 == v30 || v35 != nullptr;
      if ( !v37 )
      {
        v44 = v30[2].m128i_u64[0];
        if ( v32 < v44 )
        {
          v37 = 1;
        }
        else if ( v44 >= v32 )
        {
          v37 = v33 < v30[2].m128i_i64[1];
        }
      }
      v34 = (__m128i *)v5[3];
      ++v5[6];
      if ( v34 )
      {
        v5[3] = v34->m128i_i64[0];
      }
      else
      {
        v34 = (__m128i *)v5[4];
        if ( v34 == (__m128i *)v5[5] )
        {
          v60 = v37;
          v58 = v30;
          v49 = qalloc_or_throw(&loc_3FFFF0);
          v50 = *v5;
          v36 = v58;
          v5[4] = v49;
          v37 = v60;
          v5[5] = (__int64)&loc_3FFFF0 + v49;
          v51 = v5[1];
          if ( v5[2] < (unsigned __int64)(v51 + 1) )
          {
            v56 = qvector_reserve(v5, v50, v51 + 1, 8);
            *v5 = v56;
            v50 = v56;
            v37 = v60;
            v51 = v5[1];
            v36 = v58;
          }
          *(_QWORD *)(v50 + 8 * v51) = v49;
          v34 = (__m128i *)v5[4];
          ++v5[1];
        }
        v5[4] = (__int64)&v34[3].m128i_i64[1];
      }
      v34[2] = _mm_loadu_si128(i + 2);
      v34[3].m128i_i64[0] = i[3].m128i_i64[0];
      std::_Rb_tree_insert_and_rebalance(v37, v34, v36, v4);
      ++v5[12];
    }
  }
  v7 = v77;
LABEL_55:
  sub_3CB990((__int64)&ptr, v7);
LABEL_56:
  if ( ptr )
  {
    *(_QWORD *)&v72 = 0;
    qfree(ptr);
  }
  return v81 - __readfsqword(0x28u);
}
