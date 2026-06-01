void __fastcall sub_1581CA0(std::__detail::_List_node_base **a1, __int64 a2)
{
  std::__detail::_List_node_base *v2; // r12
  std::__detail::_List_node_base **v3; // rax
  __m128i v4; // xmm0
  __m128i v5; // xmm0
  std::__detail::_List_node_base *v7; // rdi
  std::__detail::_List_node_base *v8; // rdx
  int *v9; // r13
  std::__detail::_List_node_base **v10; // rbp
  int *v11; // r15
  std::__detail::_List_node_base *v12; // rsi
  std::__detail::_List_node_base *v13; // rdx
  std::__detail::_List_node_base **v14; // rax
  std::__detail::_List_node_base **v15; // r12
  __int64 v16; // r15
  int *i; // rbp
  int *v18; // r13
  int *v19; // r15
  __int64 v20; // rax
  __int64 v21; // rbx
  std::__detail::_List_node_base *v22; // rdx
  std::__detail::_List_node_base *v23; // rax
  std::__detail::_List_node_base *j; // r12
  __int64 *v25; // rbp
  __int64 *v26; // r13
  __int64 *v27; // rbx
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // rax
  __int64 v30; // rcx
  std::__detail::_List_node_base *v31; // rax
  char *v32; // rdi
  void *v33; // rdi
  void **v34; // rax
  std::__detail::_List_node_base *v35; // rcx
  void *v36; // rdi
  unsigned __int64 v37; // r13
  unsigned __int64 v38; // rax
  _QWORD *v39; // r15
  _QWORD *v40; // rbx
  _QWORD *v41; // rdi
  void *v42; // rdi
  void **v43; // rbx
  void **v44; // r15
  __int64 v45; // rdx
  __int64 v46; // rcx
  __m128i v47; // [rsp+8h] [rbp-680h] BYREF
  std::__detail::_List_node_base *v48; // [rsp+18h] [rbp-670h]
  std::__detail::_List_node_base *v49; // [rsp+20h] [rbp-668h]
  std::__detail::_List_node_base **v50; // [rsp+28h] [rbp-660h]
  std::__detail::_List_node_base *v51[2]; // [rsp+30h] [rbp-658h] BYREF
  std::__detail::_List_node_base *v52; // [rsp+40h] [rbp-648h]
  std::__detail::_List_node_base *v53[192]; // [rsp+50h] [rbp-638h] BYREF
  char v54; // [rsp+650h] [rbp-38h] BYREF

  v2 = *a1;
  if ( *a1 == (std::__detail::_List_node_base *)a1 || a1 == *(std::__detail::_List_node_base ***)v2 )
    return;
  v3 = v53;
  v52 = nullptr;
  v47.m128i_i64[0] = (__int64)v51;
  v4 = _mm_loadl_epi64(&v47);
  v49 = (std::__detail::_List_node_base *)v53;
  *(__m128i *)v51 = _mm_unpacklo_epi64(v4, v4);
  do
  {
    v47.m128i_i64[0] = (__int64)v3;
    v5 = _mm_loadl_epi64(&v47);
    v3 += 3;
    *(v3 - 1) = nullptr;
    *(__m128i *)(v3 - 3) = _mm_unpacklo_epi64(v5, v5);
  }
  while ( &v54 != (char *)v3 );
  v50 = a1;
  v7 = (std::__detail::_List_node_base *)v51;
  v47.m128i_i64[0] = (__int64)v49;
  while ( 1 )
  {
    v8 = *(std::__detail::_List_node_base **)v2;
    if ( v7 != v2 && v8 != v7 )
    {
      std::__detail::_List_node_base::_M_transfer(v7, v2, v8);
      v52 = (std::__detail::_List_node_base *)((char *)v52 + 1);
      v50[2] = (std::__detail::_List_node_base *)((char *)v50[2] - 1);
    }
    if ( (std::__detail::_List_node_base *)v47.m128i_i64[0] == v49 )
    {
      v10 = (std::__detail::_List_node_base **)v47.m128i_i64[0];
      goto LABEL_27;
    }
    v9 = (int *)v53[0];
    v10 = (std::__detail::_List_node_base **)v49;
    if ( v53[0] != v49 )
      break;
LABEL_18:
    std::__detail::_List_node_base::swap(
      (std::__detail::_List_node_base *)v51,
      (std::__detail::_List_node_base *)v10,
      v8);
    v13 = v52;
    v52 = v10[2];
    v14 = v50;
    v10[2] = v13;
    v2 = *v14;
    if ( v14 == (std::__detail::_List_node_base **)*v14 )
      goto LABEL_28;
LABEL_19:
    v7 = v51[0];
  }
  while ( 1 )
  {
    v11 = (int *)v51[0];
    if ( (std::__detail::_List_node_base **)v51[0] != v51 )
    {
      while ( 1 )
      {
        while ( !sub_10246C0(a2, v11[4], v9[4]) )
        {
          v9 = *(int **)v9;
          if ( v9 == (int *)v10 )
            goto LABEL_14;
        }
        v15 = *(std::__detail::_List_node_base ***)v11;
        std::__detail::_List_node_base::_M_transfer(
          (std::__detail::_List_node_base *)v9,
          (std::__detail::_List_node_base *)v11,
          *(std::__detail::_List_node_base **)v11);
        if ( v9 == (int *)v10 )
          break;
        if ( v15 == v51 )
          goto LABEL_16;
        v11 = (int *)v15;
      }
      v11 = (int *)v15;
LABEL_14:
      if ( v11 != (int *)v51 )
        std::__detail::_List_node_base::_M_transfer(
          (std::__detail::_List_node_base *)v10,
          (std::__detail::_List_node_base *)v11,
          (std::__detail::_List_node_base *)v51);
    }
LABEL_16:
    v10[2] = (std::__detail::_List_node_base *)((char *)v10[2] + (_QWORD)v52);
    v12 = (std::__detail::_List_node_base *)v10;
    v52 = nullptr;
    v10 += 3;
    std::__detail::_List_node_base::swap((std::__detail::_List_node_base *)v51, v12, v8);
    v8 = v52;
    v52 = *(v10 - 1);
    *(v10 - 1) = v8;
    if ( (std::__detail::_List_node_base **)v47.m128i_i64[0] == v10 )
      break;
    v9 = (int *)*v10;
    if ( v10 == (std::__detail::_List_node_base **)*v10 )
      goto LABEL_18;
  }
LABEL_27:
  v16 = v47.m128i_i64[0];
  std::__detail::_List_node_base::swap(
    (std::__detail::_List_node_base *)v51,
    (std::__detail::_List_node_base *)v47.m128i_i64[0],
    v8);
  v13 = v52;
  v52 = v10[2];
  v10[2] = v13;
  v47.m128i_i64[0] = v16 + 24;
  v2 = *v50;
  if ( v50 != (std::__detail::_List_node_base **)*v50 )
    goto LABEL_19;
LABEL_28:
  v47.m128i_i64[1] = (__int64)v49;
  for ( i = (int *)((char *)v49 + 24); (int *)v47.m128i_i64[0] != i; *((_QWORD *)i - 4) = 0 )
  {
    v18 = *(int **)i;
    v19 = *((int **)i - 3);
    if ( *(int **)i == i )
    {
LABEL_35:
      if ( (int *)v47.m128i_i64[1] != v19 )
        std::__detail::_List_node_base::_M_transfer(
          (std::__detail::_List_node_base *)i,
          (std::__detail::_List_node_base *)v19,
          (std::__detail::_List_node_base *)v47.m128i_i64[1]);
    }
    else
    {
      while ( (int *)v47.m128i_i64[1] != v19 )
      {
        if ( sub_10246C0(a2, v19[4], v18[4]) )
        {
          v48 = *(std::__detail::_List_node_base **)v19;
          std::__detail::_List_node_base::_M_transfer(
            (std::__detail::_List_node_base *)v18,
            (std::__detail::_List_node_base *)v19,
            v48);
          v19 = (int *)v48;
          if ( v18 == i )
            goto LABEL_35;
        }
        else
        {
          v18 = *(int **)v18;
          if ( v18 == i )
            goto LABEL_35;
        }
      }
    }
    v20 = *((_QWORD *)i - 1);
    v47.m128i_i64[1] += 24;
    *((_QWORD *)i + 2) += v20;
    i += 6;
  }
  v21 = v47.m128i_i64[0];
  std::__detail::_List_node_base::swap(v2, (std::__detail::_List_node_base *)(v47.m128i_i64[0] - 24), v13);
  v22 = v50[2];
  v50[2] = *(std::__detail::_List_node_base **)(v21 - 8);
  v23 = v49;
  *(_QWORD *)(v21 - 8) = v22;
  for ( j = (std::__detail::_List_node_base *)((char *)v23 + 1512); ; j = (std::__detail::_List_node_base *)((char *)j - 24) )
  {
    v25 = *(__int64 **)j;
    if ( j != *(std::__detail::_List_node_base **)j )
    {
      do
      {
        v26 = (__int64 *)v25[6];
        v27 = &v26[4 * *((unsigned int *)v25 + 14)];
        v47.m128i_i64[0] = *v25;
        if ( v26 != v27 )
        {
          do
          {
            v27 -= 4;
            v28 = v27[1];
            if ( v28 )
            {
              v29 = v27[2];
              if ( v29 )
              {
                if ( v28 < v29 || v28 > v29 + 14848 )
                {
                  v30 = *(_QWORD *)(v28 + 528);
                  v31 = (std::__detail::_List_node_base *)(v30 + ((unsigned __int64)*(unsigned int *)(v28 + 536) << 6));
                  if ( (std::__detail::_List_node_base *)v30 != v31 )
                  {
                    do
                    {
                      while ( 1 )
                      {
                        v31 = (std::__detail::_List_node_base *)((char *)v31 - 64);
                        v32 = *((char **)v31 + 3);
                        if ( v32 == (char *)v31 + 40 )
                          break;
                        v48 = v31;
                        v47.m128i_i64[1] = v30;
                        operator delete(v32);
                        v30 = v47.m128i_i64[1];
                        v31 = v48;
                        if ( (std::__detail::_List_node_base *)v47.m128i_i64[1] == v48 )
                          goto LABEL_47;
                      }
                    }
                    while ( (std::__detail::_List_node_base *)v30 != v31 );
LABEL_47:
                    v31 = *(std::__detail::_List_node_base **)(v28 + 528);
                  }
                  if ( v31 != (std::__detail::_List_node_base *)(v28 + 544) )
                    free(v31);
                  v33 = *(void **)(v28 + 416);
                  if ( v33 != (void *)(v28 + 432) )
                    free(v33);
                  v34 = (void **)(v28 + 384);
                  v35 = (std::__detail::_List_node_base *)(v28 + 64);
                  do
                  {
                    while ( 1 )
                    {
                      v36 = *v34;
                      if ( *v34 == v34 + 2 )
                        break;
                      v48 = v35;
                      v47.m128i_i64[1] = (__int64)v34;
                      operator delete(v36);
                      v35 = v48;
                      v34 = (void **)(v47.m128i_i64[1] - 32);
                      if ( v48 == (std::__detail::_List_node_base *)(v47.m128i_i64[1] - 32) )
                        goto LABEL_55;
                    }
                    v34 -= 4;
                  }
                  while ( v35 != (std::__detail::_List_node_base *)v34 );
LABEL_55:
                  operator delete((void *)v28, 0x3A0u);
                }
                else
                {
                  v46 = *(unsigned int *)(v29 + 14976);
                  *(_DWORD *)(v29 + 14976) = v46 + 1;
                  *(_QWORD *)(v29 + 8 * v46 + 14848) = v28;
                }
              }
            }
          }
          while ( v26 != v27 );
          v27 = (__int64 *)v25[6];
        }
        if ( v27 != v25 + 8 )
          free(v27);
        v37 = v25[3];
        if ( v37 )
        {
          v38 = v25[4];
          if ( v38 )
          {
            if ( v37 < v38 || v37 > v38 + 14848 )
            {
              v39 = *(_QWORD **)(v37 + 528);
              v40 = &v39[8 * (unsigned __int64)*(unsigned int *)(v37 + 536)];
              if ( v39 != v40 )
              {
                do
                {
                  while ( 1 )
                  {
                    v40 -= 8;
                    v41 = (_QWORD *)v40[3];
                    if ( v41 == v40 + 5 )
                      break;
                    operator delete(v41);
                    if ( v39 == v40 )
                      goto LABEL_66;
                  }
                }
                while ( v39 != v40 );
LABEL_66:
                v40 = *(_QWORD **)(v37 + 528);
              }
              if ( v40 != (_QWORD *)(v37 + 544) )
                free(v40);
              v42 = *(void **)(v37 + 416);
              if ( v42 != (void *)(v37 + 432) )
                free(v42);
              v43 = (void **)(v37 + 384);
              v44 = (void **)(v37 + 64);
              do
              {
                while ( *v43 != v43 + 2 )
                {
                  operator delete(*v43);
                  v43 -= 4;
                  if ( v44 == v43 )
                    goto LABEL_74;
                }
                v43 -= 4;
              }
              while ( v43 != v44 );
LABEL_74:
              operator delete((void *)v37, 0x3A0u);
            }
            else
            {
              v45 = *(unsigned int *)(v38 + 14976);
              *(_DWORD *)(v38 + 14976) = v45 + 1;
              *(_QWORD *)(v38 + 8 * v45 + 14848) = v37;
            }
          }
        }
        operator delete(v25);
        v25 = (__int64 *)v47.m128i_i64[0];
      }
      while ( j != (std::__detail::_List_node_base *)v47.m128i_i64[0] );
    }
    if ( v49 == j )
      break;
  }
  sub_1581A00((void **)v51);
}
