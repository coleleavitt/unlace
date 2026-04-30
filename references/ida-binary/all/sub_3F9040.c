__int64 __fastcall sub_3F9040(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r12
  unsigned __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *i; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __m128i *v12; // r15
  __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  bool v16; // cf
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // r8
  __m128i *v20; // rcx
  unsigned __int64 v21; // rdx
  const __m128i *v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rsi
  unsigned __int64 v25; // r15
  unsigned __int64 v26; // r15
  __m128i *v27; // [rsp+0h] [rbp-68h]
  void *v28; // [rsp+0h] [rbp-68h]
  __int8 *v29; // [rsp+8h] [rbp-60h]
  __m128i v30; // [rsp+10h] [rbp-58h] BYREF
  __int64 v31; // [rsp+20h] [rbp-48h]
  unsigned __int64 v32; // [rsp+28h] [rbp-40h]

  v32 = __readfsqword(0x28u);
  *(_QWORD *)(a1 + 16) = 0;
  *(_OWORD *)a1 = 0;
  v4 = *(_QWORD **)(a2 + 32);
  if ( v4 )
  {
    v5 = (_QWORD *)(a2 + 24);
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = v4[4];
        if ( v6 >= a3 )
          break;
        v4 = (_QWORD *)v4[3];
        if ( !v4 )
          return a1;
      }
      v7 = (_QWORD *)v4[2];
      if ( a3 >= v6 )
        break;
      v5 = v4;
      v4 = (_QWORD *)v4[2];
      if ( !v7 )
        return a1;
    }
    for ( i = (_QWORD *)v4[3]; i; i = (_QWORD *)i[3] )
    {
      while ( 1 )
      {
        v10 = i[2];
        if ( a3 >= i[4] )
          break;
        v5 = i;
        i = (_QWORD *)i[2];
        if ( !v10 )
          goto LABEL_12;
      }
    }
LABEL_12:
    while ( v7 )
    {
      while ( 1 )
      {
        v11 = v7[2];
        if ( v7[4] < a3 )
          break;
        v4 = v7;
        v7 = (_QWORD *)v7[2];
        if ( !v11 )
          goto LABEL_15;
      }
      v7 = (_QWORD *)v7[3];
    }
LABEL_15:
    while ( v4 != v5 )
    {
      if ( (unsigned __int8)QT::QPersistentModelIndex::isValid((QT::QPersistentModelIndex *)(v4 + 5)) )
      {
        QT::QPersistentModelIndex::operator QT::QModelIndex(&v30, v4 + 5);
        v12 = *(__m128i **)(a1 + 8);
        if ( v12 == *(__m128i **)(a1 + 16) )
        {
          v14 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v12->m128i_i64 - *(_QWORD *)a1) >> 3);
          if ( v14 == 0x555555555555555LL )
            std::__throw_length_error("vector::_M_realloc_append");
          v15 = 1;
          if ( v14 )
            v15 = 0xAAAAAAAAAAAAAAABLL * (((__int64)v12->m128i_i64 - *(_QWORD *)a1) >> 3);
          v16 = __CFADD__(v15, v14);
          v17 = v15 - 0x5555555555555555LL * (((__int64)v12->m128i_i64 - *(_QWORD *)a1) >> 3);
          if ( v16 )
          {
            v18 = 0x7FFFFFFFFFFFFFF8LL;
          }
          else
          {
            if ( v17 > 0x555555555555555LL )
              v17 = 0x555555555555555LL;
            v18 = 24 * v17;
          }
          v29 = &v12->m128i_i8[-*(_QWORD *)a1];
          v27 = *(__m128i **)a1;
          v19 = operator new(v18);
          v20 = v27;
          *(__m128i *)&v29[v19] = _mm_load_si128(&v30);
          *(_QWORD *)&v29[v19 + 16] = v31;
          if ( v12 == v27 )
          {
            v25 = v19;
          }
          else
          {
            v21 = v19;
            v22 = v27;
            do
            {
              v23 = _mm_loadu_si128(v22);
              v24 = v22[1].m128i_i64[0];
              v22 = (const __m128i *)((char *)v22 + 24);
              v21 += 24LL;
              *(__m128i *)(v21 - 24) = v23;
              *(_QWORD *)(v21 - 8) = v24;
            }
            while ( v12 != v22 );
            v25 = v19 + 8 * ((unsigned __int64)((char *)&v12[-2].m128i_u64[1] - (char *)v27) >> 3) + 24;
          }
          v26 = v25 + 24;
          if ( v27 )
          {
            v28 = (void *)v19;
            operator delete(v20, *(_QWORD *)(a1 + 16) - (_QWORD)v20);
            v19 = (unsigned __int64)v28;
          }
          *(_QWORD *)a1 = v19;
          *(_QWORD *)(a1 + 8) = v26;
          *(_QWORD *)(a1 + 16) = v18 + v19;
        }
        else
        {
          v13 = v31;
          *v12 = _mm_load_si128(&v30);
          v12[1].m128i_i64[0] = v13;
          *(_QWORD *)(a1 + 8) += 24LL;
        }
      }
      v4 = (_QWORD *)std::_Rb_tree_increment(v4);
    }
  }
  return a1;
}
