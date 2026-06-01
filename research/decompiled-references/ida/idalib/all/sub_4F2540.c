unsigned __int64 __fastcall sub_4F2540(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rbx
  __m128i *v9; // r8
  void *v10; // r14
  int *v11; // rax
  int *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdx
  __m128i *v15; // rax
  unsigned __int64 v16; // r8
  __int64 v17; // rdx
  __int64 *v18; // r9
  __m128i v19; // xmm0
  int *v20; // rsi
  char *v21; // r10
  unsigned __int64 v22; // rcx
  int *v23; // rdx
  __int64 v24; // rax
  _BOOL8 v25; // rdi
  _QWORD *v26; // rbx
  _QWORD *v27; // r14
  void *v28; // rdi
  int *v30; // rax
  __int64 v31; // rax
  __int64 i; // rbx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __m128i n; // [rsp+18h] [rbp-180h] BYREF
  char *v41; // [rsp+28h] [rbp-170h]
  __int64 *v42; // [rsp+30h] [rbp-168h]
  __int64 *v43; // [rsp+38h] [rbp-160h]
  __m128i *v44; // [rsp+40h] [rbp-158h]
  int *v45; // [rsp+48h] [rbp-150h]
  char v46; // [rsp+57h] [rbp-141h]
  unsigned __int64 v47; // [rsp+58h] [rbp-140h]
  __int64 v48; // [rsp+68h] [rbp-130h] BYREF
  __int64 v49; // [rsp+70h] [rbp-128h] BYREF
  __int64 v50; // [rsp+78h] [rbp-120h] BYREF
  void *src; // [rsp+80h] [rbp-118h] BYREF
  __int128 v52; // [rsp+88h] [rbp-110h]
  int v53; // [rsp+98h] [rbp-100h]
  char v54; // [rsp+A0h] [rbp-F8h] BYREF
  int v55; // [rsp+A8h] [rbp-F0h] BYREF
  void *v56; // [rsp+B0h] [rbp-E8h]
  int *v57; // [rsp+B8h] [rbp-E0h]
  int *v58; // [rsp+C0h] [rbp-D8h]
  __int64 v59; // [rsp+C8h] [rbp-D0h]
  char v60; // [rsp+D0h] [rbp-C8h] BYREF
  unsigned __int64 v61; // [rsp+158h] [rbp-40h]

  v61 = __readfsqword(0x28u);
  v5 = 1;
  v42 = &v48;
  v41 = &v60;
  v46 = 0;
  n.m128i_i64[1] = (__int64)&v50;
  do
  {
    while ( 1 )
    {
      v6 = (int)v5 + 326LL;
      v48 = *(_QWORD *)(*(_QWORD *)(a2 + 1672) + 8 * v6 + 8);
      if ( (unsigned __int8)sub_42D920(a2, v42, a3, a4) )
        *(_QWORD *)(*(_QWORD *)(a2 + 1672) + 8 * v6 + 8) = v48;
      v7 = *(_QWORD *)(*(_QWORD *)(a2 + 1672) + 8LL * (int)v5 + 2616);
      *(_QWORD *)&v41[8 * v5 - 8] = v7;
      v49 = v7;
      if ( (unsigned __int8)sub_7BE6E0(a2, &v49) )
      {
        v55 = 0;
        v56 = nullptr;
        v57 = &v55;
        v58 = &v55;
        v59 = 0;
        v8 = sub_7BEB80(&v49, a2, 65);
        if ( v8 != -1 )
        {
          while ( 1 )
          {
            v50 = v8;
            if ( (unsigned __int8)sub_42D920(a2, (__int64 *)n.m128i_i64[1], a3, a4) )
              break;
LABEL_30:
            v8 = sub_7BEBF0(&v49, a2, v8, 65);
            if ( v8 == -1 )
              goto LABEL_31;
          }
          v52 = 0;
          src = nullptr;
          v53 = sub_7BE710(&v49, a2, v8, 65);
          sub_7BEA80(&v49, a2, &src, v8, 83);
          v9 = (__m128i *)v50;
          v10 = nullptr;
          n.m128i_i64[0] = v52;
          if ( (_QWORD)v52 )
          {
            v43 = (__int64 *)v50;
            v10 = (void *)qalloc_or_throw(v52);
            memcpy(v10, src, n.m128i_u64[0]);
            v9 = (__m128i *)v43;
          }
          v11 = (int *)v56;
          v12 = &v55;
          if ( v56 )
          {
            do
            {
              while ( 1 )
              {
                v13 = *((_QWORD *)v11 + 2);
                v14 = *((_QWORD *)v11 + 3);
                if ( *((_QWORD *)v11 + 4) < (unsigned __int64)v9 )
                  break;
                v12 = v11;
                v11 = *((int **)v11 + 2);
                if ( !v13 )
                  goto LABEL_15;
              }
              v11 = *((int **)v11 + 3);
            }
            while ( v14 );
LABEL_15:
            if ( v12 != &v55 && (unsigned __int64)v9 >= *((_QWORD *)v12 + 4) )
            {
              if ( v10 )
                qfree(v10);
              goto LABEL_28;
            }
          }
          v45 = v12;
          v44 = v9;
          LODWORD(v43) = v53;
          v15 = (__m128i *)operator new(0x48u);
          v16 = (unsigned __int64)v44;
          v17 = (unsigned int)v43;
          v15[2].m128i_i64[1] = (__int64)v10;
          v18 = (__int64 *)v15;
          v19 = _mm_loadl_epi64(&n);
          v20 = v45;
          v21 = &v54;
          v15[2].m128i_i64[0] = v16;
          v15[4].m128i_i32[0] = v17;
          v15[3] = _mm_unpacklo_epi64(v19, v19);
          if ( v20 == &v55 )
          {
            if ( v59 )
            {
              v23 = v58;
              v20 = nullptr;
              if ( *((_QWORD *)v58 + 4) < v16 )
                goto LABEL_23;
            }
          }
          else
          {
            v22 = *((_QWORD *)v20 + 4);
            n.m128i_i64[0] = (__int64)&v54;
            if ( v16 >= v22 )
            {
              if ( v22 >= v16 )
                goto LABEL_42;
              if ( v58 != v20 )
              {
                v43 = (__int64 *)v16;
                v47 = v22;
                v44 = v15;
                v45 = v20;
                v31 = std::_Rb_tree_increment(v20, v20, v17, v22);
                v16 = (unsigned __int64)v43;
                v18 = (__int64 *)v44;
                v21 = (char *)n.m128i_i64[0];
                v23 = (int *)v31;
                if ( (unsigned __int64)v43 >= *(_QWORD *)(v31 + 32) )
                  goto LABEL_48;
                v20 = v45;
                v22 = v47;
                if ( *((_QWORD *)v45 + 3) )
                {
                  v20 = (int *)v31;
                  goto LABEL_23;
                }
              }
              v23 = v20;
              if ( v20 )
                goto LABEL_61;
              goto LABEL_42;
            }
            v23 = v20;
            if ( v57 == v20 )
              goto LABEL_23;
            v43 = (__int64 *)v16;
            v44 = v15;
            v45 = v20;
            v24 = std::_Rb_tree_decrement(v20);
            v16 = (unsigned __int64)v43;
            v18 = (__int64 *)v44;
            v21 = (char *)n.m128i_i64[0];
            v23 = (int *)v24;
            if ( *(_QWORD *)(v24 + 32) < (unsigned __int64)v43 )
            {
              v20 = nullptr;
              if ( *(_QWORD *)(v24 + 24) )
              {
                v20 = v45;
                v23 = v45;
              }
LABEL_23:
              if ( v23 )
              {
                if ( v20 || v23 == &v55 )
                {
                  v25 = 1;
LABEL_27:
                  std::_Rb_tree_insert_and_rebalance(v25, v18, v23, &v55);
                  ++v59;
LABEL_28:
                  sub_7BE850(&v49, a2, v8, 65);
                  sub_7BE850(&v49, a2, v8, 83);
                  if ( src )
                  {
                    *(_QWORD *)&v52 = 0;
                    qfree(src);
                  }
                  goto LABEL_30;
                }
                v22 = *((_QWORD *)v23 + 4);
LABEL_61:
                v25 = v16 < v22;
                goto LABEL_27;
              }
LABEL_42:
              if ( v18 )
              {
                if ( v10 )
                {
                  v18[6] = 0;
                  n.m128i_i64[0] = (__int64)v18;
                  qfree(v10);
                  v18 = (__int64 *)n.m128i_i64[0];
                }
                operator delete(v18, 0x48u);
              }
              goto LABEL_28;
            }
          }
LABEL_48:
          v43 = v18;
          n.m128i_i64[0] = v16;
          v30 = (int *)sub_4F1640((__int64)v21, v16);
          v16 = n.m128i_i64[0];
          v18 = v43;
          v20 = v30;
          goto LABEL_23;
        }
LABEL_31:
        if ( v59 )
        {
          for ( i = (__int64)v57; (int *)i != &v55; i = std::_Rb_tree_increment(i, a2, v36, v37) )
          {
            while ( 1 )
            {
              v33 = *(_QWORD *)(i + 32);
              src = (void *)*(int *)(i + 64);
              sub_7BE7C0(&v49, a2, v33, &src, 8, 65);
              if ( *(_QWORD *)(i + 48) > 1u )
                break;
              i = std::_Rb_tree_increment(i, a2, v34, v35);
              if ( (int *)i == &v55 )
                goto LABEL_59;
            }
            sub_7BE7C0(&v49, a2, *(_QWORD *)(i + 32), *(_QWORD *)(i + 40), 0, 83);
          }
LABEL_59:
          v46 |= v5 == 14;
        }
        v26 = v56;
        if ( v56 )
          break;
      }
      if ( ++v5 == 17 )
        goto LABEL_37;
    }
    do
    {
      v27 = v26;
      sub_4F1EF0((_QWORD *)v26[3]);
      v28 = (void *)v26[5];
      v26 = (_QWORD *)v26[2];
      if ( v28 )
      {
        v27[6] = 0;
        qfree(v28);
      }
      operator delete(v27, 0x48u);
    }
    while ( v26 );
    ++v5;
  }
  while ( v5 != 17 );
LABEL_37:
  sub_632C30(a2, 83, v41, 128);
  if ( v46 )
    sub_4F23A0(*(_QWORD **)(a2 + 1752));
  return v61 - __readfsqword(0x28u);
}
