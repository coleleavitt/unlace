int *__fastcall sub_AEEC0(__m128i *a1, unsigned int a2, unsigned int a3, unsigned __int64 a4)
{
  unsigned __int64 v7; // r12
  __int64 nsec_stamp; // rax
  __int64 v9; // rdi
  __int64 v10; // r12
  int *v11; // r12
  _QWORD *v12; // rbx
  unsigned __int64 v13; // rdx
  char v14; // cl
  _QWORD *v15; // rax
  unsigned __int64 v16; // rax
  unsigned int v17; // r12d
  __m128i v18; // xmm0
  signed int v19; // edx
  __m128i *v21; // rax
  __m128i *v22; // r12
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rax
  __m128i *v26; // r8
  unsigned __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v30; // rax
  __int64 v31; // rdi
  __int64 v32; // r12
  _QWORD *v33; // rax
  int *v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rax
  bool v37; // zf
  __m128i *v38; // rax
  __m128i *v39; // [rsp+8h] [rbp-80h]
  __int64 v40; // [rsp+8h] [rbp-80h]
  __m128i *v41; // [rsp+10h] [rbp-78h]
  __m128i *v42; // [rsp+10h] [rbp-78h]
  __m128i *v43; // [rsp+10h] [rbp-78h]
  __m256i v44; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v45; // [rsp+48h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  a1[22].m128i_i8[9] = 0;
  if ( a2 != 1 )
  {
    if ( a1[6].m128i_i64[0] != a1[4].m128i_i64[0] )
      goto LABEL_3;
    if ( a2 != 5 )
      goto LABEL_56;
LABEL_27:
    if ( a4 != -1 )
      goto LABEL_37;
LABEL_28:
    a4 = qword_245130;
    if ( qword_245130 == -1 )
      goto LABEL_10;
    a4 = -1;
LABEL_30:
    v7 = a1[8].m128i_u64[0];
    if ( !v7 )
      goto LABEL_11;
    goto LABEL_31;
  }
  if ( (dword_245124 & 0x10) != 0 )
  {
    v11 = (int *)qword_251BB0;
    if ( qword_251BB0 )
    {
      v34 = &dword_251BA8;
      do
      {
        if ( *((_QWORD *)v11 + 4) >= a4 )
        {
          v34 = v11;
          v11 = *((int **)v11 + 2);
        }
        else
        {
          v11 = *((int **)v11 + 3);
        }
      }
      while ( v11 );
      if ( v34 != &dword_251BA8 )
      {
        if ( a4 >= *((_QWORD *)v34 + 4) )
          return v11;
        if ( a1[4].m128i_i64[0] != a1[6].m128i_i64[0] )
        {
LABEL_37:
          v21 = (__m128i *)a1[1].m128i_i64[0];
          v22 = (__m128i *)&a1->m128i_u64[1];
          if ( !v21 )
            goto LABEL_80;
          do
          {
            while ( 1 )
            {
              v23 = v21[1].m128i_i64[0];
              v24 = v21[1].m128i_i64[1];
              if ( v21[2].m128i_i64[0] < a4 )
                break;
              v22 = v21;
              v21 = (__m128i *)v21[1].m128i_i64[0];
              if ( !v23 )
                goto LABEL_42;
            }
            v21 = (__m128i *)v21[1].m128i_i64[1];
          }
          while ( v24 );
LABEL_42:
          if ( &a1->m128i_u64[1] == (unsigned __int64 *)v22 )
          {
LABEL_80:
            v36 = operator new(0x30u);
            v37 = a1[2].m128i_i64[1] == 0;
            *(_QWORD *)(v36 + 32) = a4;
            v26 = (__m128i *)v36;
            *(_BYTE *)(v36 + 40) = 0;
            if ( v37 || (v29 = a1[2].m128i_i64[0], v22 = nullptr, *(_QWORD *)(v29 + 32) >= a4) )
            {
LABEL_82:
              v43 = v26;
              v38 = (__m128i *)sub_9BC40((__int64)a1, a4);
              v26 = v43;
              v22 = v38;
            }
          }
          else
          {
            if ( a4 >= v22[2].m128i_i64[0] )
              goto LABEL_52;
            v25 = operator new(0x30u);
            *(_QWORD *)(v25 + 32) = a4;
            v26 = (__m128i *)v25;
            *(_BYTE *)(v25 + 40) = 0;
            v27 = v22[2].m128i_u64[0];
            if ( a4 >= v27 )
            {
              if ( v27 >= a4 )
              {
LABEL_78:
                if ( v26 )
                  operator delete(v26, 0x30u);
LABEL_52:
                v30 = qword_245138;
                v22[2].m128i_i8[8] = 1;
                if ( v30 == -1 || v30 < a4 )
                  goto LABEL_7;
                goto LABEL_8;
              }
              if ( (__m128i *)a1[2].m128i_i64[0] == v22 )
              {
LABEL_85:
                if ( v22 )
                  goto LABEL_51;
                goto LABEL_78;
              }
              v41 = (__m128i *)v25;
              v28 = std::_Rb_tree_increment();
              v26 = v41;
              v29 = v28;
              if ( a4 < *(_QWORD *)(v28 + 32) )
              {
                if ( v22[1].m128i_i64[1] )
                {
                  v22 = (__m128i *)v28;
                  goto LABEL_50;
                }
                goto LABEL_85;
              }
              goto LABEL_82;
            }
            v29 = (__int64)v22;
            if ( (__m128i *)a1[1].m128i_i64[1] == v22 )
              goto LABEL_50;
            v42 = (__m128i *)v25;
            v35 = std::_Rb_tree_decrement();
            v26 = v42;
            v29 = v35;
            if ( *(_QWORD *)(v35 + 32) >= a4 )
              goto LABEL_82;
            if ( *(_QWORD *)(v35 + 24) )
              v29 = (__int64)v22;
            else
              v22 = nullptr;
          }
LABEL_50:
          if ( v29 )
          {
LABEL_51:
            v39 = v26;
            std::_Rb_tree_insert_and_rebalance();
            ++a1[2].m128i_i64[1];
            v22 = v39;
            goto LABEL_52;
          }
          goto LABEL_78;
        }
        goto LABEL_56;
      }
    }
  }
  if ( a1[6].m128i_i64[0] != a1[4].m128i_i64[0] )
    goto LABEL_27;
LABEL_56:
  memset(&v44, 0, 24);
  sub_A11F0(v44.m256i_i64);
  sub_B26A0(&v44, HIDWORD(qword_2524A0), qword_2524A8);
  v31 = v44.m256i_i64[0];
  if ( v44.m256i_i64[0] )
  {
    v40 = v44.m256i_i64[1];
    if ( v44.m256i_i64[1] )
    {
      v32 = 0;
      do
      {
        v33 = (_QWORD *)(v31 + 80 * v32);
        if ( v33[5] )
        {
          v33[6] = 0;
          qfree();
          v33 = (_QWORD *)(v31 + 80 * v32);
        }
        if ( v33[2] )
        {
          v33[3] = 0;
          qfree();
        }
        v31 = v44.m256i_i64[0];
        ++v32;
      }
      while ( v40 != v32 );
    }
    v44.m256i_i64[1] = 0;
    qfree();
  }
LABEL_3:
  if ( a4 == -1 )
    goto LABEL_28;
  if ( a2 )
    goto LABEL_37;
  if ( qword_245138 < a4 || qword_245138 == -1 )
LABEL_7:
    qword_245138 = a4;
LABEL_8:
  if ( qword_245130 != -1 && a4 >= qword_245130 )
    goto LABEL_30;
LABEL_10:
  v7 = a1[8].m128i_u64[0];
  qword_245130 = a4;
  if ( !v7 )
    goto LABEL_11;
LABEL_31:
  v16 = sub_AC580((__m128i *)a1[6].m128i_i64, (__m128i *)a1[4].m128i_i64);
  if ( v16 >= v7 )
  {
    v17 = v16;
    sub_ADDE0(a1, v16 - 1);
    v18 = _mm_loadu_si128(a1 + 5);
    v19 = (a1[8].m128i_i32[2] + 1) % v17;
    *(__m128i *)v44.m256i_i8 = _mm_loadu_si128(a1 + 4);
    *(__m128i *)&v44.m256i_u64[2] = v18;
    a1[8].m128i_i32[2] = v19;
    sub_9BD90(&v44, v19);
    v11 = (int *)v44.m256i_i64[0];
    sub_9EFB0(v44.m256i_i64[0]);
    v44.m256i_i64[1] = __PAIR64__(a3, a2);
    *(_OWORD *)&v44.m256i_u64[2] = a4;
    v44.m256i_i64[0] = get_nsec_stamp();
    sub_9EFB0((__int64)v11);
    sub_9F240((__int64)v11, (__int64)&v44);
    sub_9EFB0((__int64)&v44);
    a1[22].m128i_i8[9] = 1;
    if ( a2 != 1 )
      return v11;
    goto LABEL_16;
  }
LABEL_11:
  ++a1[8].m128i_i32[2];
  v44.m256i_i64[1] = __PAIR64__(a3, a2);
  *(_OWORD *)&v44.m256i_u64[2] = a4;
  nsec_stamp = get_nsec_stamp();
  v9 = a1[6].m128i_i64[0];
  v44.m256i_i64[0] = nsec_stamp;
  if ( v9 == a1[7].m128i_i64[0] - 32 )
  {
    sub_AEDA0((__m128i *)a1[3].m128i_i64, (__int64)&v44);
  }
  else
  {
    sub_9F240(v9, (__int64)&v44);
    a1[6].m128i_i64[0] += 32;
  }
  sub_9EFB0((__int64)&v44);
  v10 = a1[6].m128i_i64[0];
  if ( v10 == a1[6].m128i_i64[1] )
    v10 = *(_QWORD *)(a1[7].m128i_i64[1] - 8) + 512LL;
  v11 = (int *)(v10 - 32);
  if ( a2 != 1 )
    return v11;
LABEL_16:
  v12 = (_QWORD *)qword_251BB0;
  if ( !qword_251BB0 )
  {
    if ( (int *)qword_251BB8 == &dword_251BA8 )
      goto LABEL_24;
LABEL_73:
    v13 = *(_QWORD *)(std::_Rb_tree_decrement() + 32);
    goto LABEL_23;
  }
  while ( 1 )
  {
    v13 = v12[4];
    v14 = 0;
    v15 = (_QWORD *)v12[3];
    if ( a4 < v13 )
    {
      v15 = (_QWORD *)v12[2];
      v14 = 1;
    }
    if ( !v15 )
      break;
    v12 = v15;
  }
  if ( v14 )
  {
    if ( (_QWORD *)qword_251BB8 == v12 )
      goto LABEL_24;
    goto LABEL_73;
  }
LABEL_23:
  if ( v13 < a4 )
  {
LABEL_24:
    *(_QWORD *)(operator new(0x28u) + 32) = a4;
    std::_Rb_tree_insert_and_rebalance();
    ++qword_251BC8;
  }
  return v11;
}

