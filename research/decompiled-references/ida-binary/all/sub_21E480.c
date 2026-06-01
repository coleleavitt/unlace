int *__fastcall sub_21E480(__m128i *a1, unsigned int a2, unsigned int a3, unsigned __int64 a4)
{
  unsigned __int64 v8; // r12
  __int64 nsec_stamp; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  __int64 v15; // r12
  int *v16; // r12
  int *v17; // rbx
  unsigned __int64 v18; // rdx
  char v19; // cl
  int *v20; // rax
  _BOOL4 v21; // r13d
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  unsigned int v24; // r12d
  __m128i v25; // xmm0
  signed int v26; // edx
  const char *v27; // rsi
  __m128i *v29; // rax
  __m128i *v30; // r12
  __int64 v31; // rcx
  __int64 v32; // rdx
  __m128i *v33; // rax
  __int64 *v34; // r9
  __m128i *v35; // r8
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rdx
  _BOOL8 v39; // rdi
  unsigned __int64 v40; // rax
  const char *v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // r12
  _QWORD *v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rdi
  int *v47; // rcx
  __int64 v48; // rax
  __m128i *v49; // rax
  bool v50; // zf
  __m128i *v51; // rax
  __m128i *v52; // [rsp+8h] [rbp-80h]
  __int64 v53; // [rsp+8h] [rbp-80h]
  __int64 *v54; // [rsp+8h] [rbp-80h]
  __m128i *v55; // [rsp+10h] [rbp-78h]
  _QWORD *v56; // [rsp+10h] [rbp-78h]
  __m128i *v57; // [rsp+10h] [rbp-78h]
  __m128i *v58; // [rsp+10h] [rbp-78h]
  unsigned __int64 v59; // [rsp+18h] [rbp-70h]
  __m256i v60; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v61; // [rsp+48h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  a1[22].m128i_i8[9] = 0;
  if ( a2 != 1 )
  {
    if ( a1[6].m128i_i64[0] != a1[4].m128i_i64[0] )
      goto LABEL_3;
    if ( a2 != 5 )
      goto LABEL_61;
LABEL_29:
    if ( a4 != -1 )
      goto LABEL_39;
LABEL_30:
    a4 = qword_8BA510;
    if ( qword_8BA510 == -1 )
      goto LABEL_10;
    a4 = -1;
LABEL_32:
    v8 = a1[8].m128i_u64[0];
    if ( !v8 )
      goto LABEL_11;
    goto LABEL_33;
  }
  if ( (dword_8BA504 & 0x10) != 0 )
  {
    v16 = (int *)qword_8CB730;
    if ( qword_8CB730 )
    {
      v47 = &dword_8CB728;
      do
      {
        if ( *((_QWORD *)v16 + 4) >= a4 )
        {
          v47 = v16;
          v16 = *((int **)v16 + 2);
        }
        else
        {
          v16 = *((int **)v16 + 3);
        }
      }
      while ( v16 );
      if ( v47 != &dword_8CB728 )
      {
        if ( a4 >= *((_QWORD *)v47 + 4) )
          return v16;
        if ( a1[4].m128i_i64[0] != a1[6].m128i_i64[0] )
        {
LABEL_39:
          v29 = (__m128i *)a1[1].m128i_i64[0];
          v30 = (__m128i *)&a1->m128i_u64[1];
          if ( !v29 )
            goto LABEL_85;
          do
          {
            while ( 1 )
            {
              v31 = v29[1].m128i_i64[0];
              v32 = v29[1].m128i_i64[1];
              if ( v29[2].m128i_i64[0] < a4 )
                break;
              v30 = v29;
              v29 = (__m128i *)v29[1].m128i_i64[0];
              if ( !v31 )
                goto LABEL_44;
            }
            v29 = (__m128i *)v29[1].m128i_i64[1];
          }
          while ( v32 );
LABEL_44:
          if ( &a1->m128i_u64[1] == (unsigned __int64 *)v30 )
          {
LABEL_85:
            v49 = (__m128i *)operator new(0x30u);
            v50 = a1[2].m128i_i64[1] == 0;
            v34 = &a1->m128i_i64[1];
            v49[2].m128i_i64[0] = a4;
            v35 = v49;
            v49[2].m128i_i8[8] = 0;
            if ( v50 || (v38 = a1[2].m128i_i64[0], v30 = nullptr, *(_QWORD *)(v38 + 32) >= a4) )
            {
LABEL_87:
              v58 = v35;
              v54 = v34;
              v51 = (__m128i *)sub_20AC00((__int64)a1, a4);
              v34 = v54;
              v35 = v58;
              v30 = v51;
            }
          }
          else
          {
            if ( a4 >= v30[2].m128i_i64[0] )
              goto LABEL_57;
            v33 = (__m128i *)operator new(0x30u);
            v34 = &a1->m128i_i64[1];
            v33[2].m128i_i64[0] = a4;
            v35 = v33;
            v33[2].m128i_i8[8] = 0;
            v36 = v30[2].m128i_u64[0];
            if ( a4 >= v36 )
            {
              if ( v36 >= a4 )
              {
LABEL_83:
                if ( v35 )
                  operator delete(v35, 0x30u);
LABEL_57:
                v40 = qword_8BA518;
                v30[2].m128i_i8[8] = 1;
                if ( v40 == -1 || v40 < a4 )
                  goto LABEL_7;
                goto LABEL_8;
              }
              if ( (__m128i *)a1[2].m128i_i64[0] == v30 )
              {
LABEL_90:
                v38 = (__int64)v30;
                if ( v30 )
                  goto LABEL_91;
                goto LABEL_83;
              }
              v55 = v33;
              v59 = v30[2].m128i_u64[0];
              v37 = std::_Rb_tree_increment(v30);
              v34 = &a1->m128i_i64[1];
              v35 = v55;
              v38 = v37;
              if ( a4 < *(_QWORD *)(v37 + 32) )
              {
                v36 = v59;
                if ( v30[1].m128i_i64[1] )
                {
                  v30 = (__m128i *)v37;
                  goto LABEL_52;
                }
                goto LABEL_90;
              }
              goto LABEL_87;
            }
            v38 = (__int64)v30;
            if ( (__m128i *)a1[1].m128i_i64[1] == v30 )
              goto LABEL_52;
            v57 = v33;
            v48 = std::_Rb_tree_decrement(v30);
            v34 = &a1->m128i_i64[1];
            v35 = v57;
            v38 = v48;
            if ( *(_QWORD *)(v48 + 32) >= a4 )
              goto LABEL_87;
            if ( *(_QWORD *)(v48 + 24) )
              v38 = (__int64)v30;
            else
              v30 = nullptr;
          }
LABEL_52:
          if ( v38 )
          {
            if ( v30 || v34 == (__int64 *)v38 )
            {
              v39 = 1;
LABEL_56:
              v52 = v35;
              std::_Rb_tree_insert_and_rebalance(v39, v35, v38, v34);
              ++a1[2].m128i_i64[1];
              v30 = v52;
              goto LABEL_57;
            }
            v36 = *(_QWORD *)(v38 + 32);
LABEL_91:
            v39 = a4 < v36;
            goto LABEL_56;
          }
          goto LABEL_83;
        }
        goto LABEL_61;
      }
    }
  }
  if ( a1[6].m128i_i64[0] != a1[4].m128i_i64[0] )
    goto LABEL_29;
LABEL_61:
  memset(&v60, 0, 24);
  sub_20FBA0(v60.m256i_i64);
  v41 = (const char *)HIDWORD(qword_8CC340);
  sub_221CA0(&v60, v41, qword_8CC348);
  v42 = v60.m256i_i64[0];
  if ( v60.m256i_i64[0] )
  {
    v53 = v60.m256i_i64[1];
    if ( v60.m256i_i64[1] )
    {
      v43 = 0;
      do
      {
        v44 = (_QWORD *)(v42 + 80 * v43);
        v45 = v44[5];
        if ( v45 )
        {
          v44[6] = 0;
          v56 = v44;
          qfree(v45, v41);
          v44 = v56;
        }
        v46 = v44[2];
        if ( v46 )
        {
          v44[3] = 0;
          qfree(v46, v41);
        }
        v42 = v60.m256i_i64[0];
        ++v43;
      }
      while ( v53 != v43 );
    }
    v60.m256i_i64[1] = 0;
    qfree(v42, v41);
  }
LABEL_3:
  if ( a4 == -1 )
    goto LABEL_30;
  if ( a2 )
    goto LABEL_39;
  if ( qword_8BA518 < a4 || qword_8BA518 == -1 )
LABEL_7:
    qword_8BA518 = a4;
LABEL_8:
  if ( qword_8BA510 != -1 && a4 >= qword_8BA510 )
    goto LABEL_32;
LABEL_10:
  v8 = a1[8].m128i_u64[0];
  qword_8BA510 = a4;
  if ( !v8 )
    goto LABEL_11;
LABEL_33:
  v23 = sub_219300((__m128i *)a1[6].m128i_i64, (__m128i *)a1[4].m128i_i64);
  if ( v23 >= v8 )
  {
    v24 = v23;
    sub_21AB60(a1, v23 - 1);
    v25 = _mm_loadu_si128(a1 + 5);
    v26 = (a1[8].m128i_i32[2] + 1) % v24;
    *(__m128i *)v60.m256i_i8 = _mm_loadu_si128(a1 + 4);
    *(__m128i *)&v60.m256i_u64[2] = v25;
    a1[8].m128i_i32[2] = v26;
    v27 = (const char *)v26;
    sub_20AD50(&v60, v26);
    v16 = (int *)v60.m256i_i64[0];
    sub_20DAF0(v60.m256i_i64[0], v27);
    v60.m256i_i64[1] = __PAIR64__(a3, a2);
    *(_OWORD *)&v60.m256i_u64[2] = a4;
    v60.m256i_i64[0] = get_nsec_stamp();
    sub_20DAF0((__int64)v16, v27);
    sub_20DD80((__int64)v16, (__int64)&v60);
    sub_20DAF0((__int64)&v60, v60.m256i_i8);
    a1[22].m128i_i8[9] = 1;
    if ( a2 != 1 )
      return v16;
    goto LABEL_16;
  }
LABEL_11:
  ++a1[8].m128i_i32[2];
  v60.m256i_i64[1] = __PAIR64__(a3, a2);
  *(_OWORD *)&v60.m256i_u64[2] = a4;
  nsec_stamp = get_nsec_stamp();
  v14 = a1[6].m128i_i64[0];
  v60.m256i_i64[0] = nsec_stamp;
  if ( v14 == a1[7].m128i_i64[0] - 32 )
  {
    sub_21E360((__m128i *)a1[3].m128i_i64, (__int64)&v60, v10, v11, v12, v13);
  }
  else
  {
    sub_20DD80(v14, (__int64)&v60);
    a1[6].m128i_i64[0] += 32;
  }
  sub_20DAF0((__int64)&v60, v60.m256i_i8);
  v15 = a1[6].m128i_i64[0];
  if ( v15 == a1[6].m128i_i64[1] )
    v15 = *(_QWORD *)(a1[7].m128i_i64[1] - 8) + 512LL;
  v16 = (int *)(v15 - 32);
  if ( a2 != 1 )
    return v16;
LABEL_16:
  v17 = (int *)qword_8CB730;
  if ( !qword_8CB730 )
  {
    v17 = (int *)qword_8CB738;
    if ( (int *)qword_8CB738 == &dword_8CB728 )
    {
      v21 = 1;
LABEL_26:
      v22 = operator new(0x28u);
      *(_QWORD *)(v22 + 32) = a4;
      std::_Rb_tree_insert_and_rebalance(v21, v22, v17, &dword_8CB728);
      ++qword_8CB748;
      return v16;
    }
    v17 = &dword_8CB728;
LABEL_78:
    v18 = *(_QWORD *)(std::_Rb_tree_decrement(v17) + 32);
    goto LABEL_23;
  }
  while ( 1 )
  {
    v18 = *((_QWORD *)v17 + 4);
    v19 = 0;
    v20 = *((int **)v17 + 3);
    if ( a4 < v18 )
    {
      v20 = *((int **)v17 + 2);
      v19 = 1;
    }
    if ( !v20 )
      break;
    v17 = v20;
  }
  if ( v19 )
  {
    if ( (int *)qword_8CB738 == v17 )
    {
LABEL_24:
      v21 = 1;
      if ( v17 != &dword_8CB728 )
        v21 = a4 < *((_QWORD *)v17 + 4);
      goto LABEL_26;
    }
    goto LABEL_78;
  }
LABEL_23:
  if ( v18 < a4 )
    goto LABEL_24;
  return v16;
}
