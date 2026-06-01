__int64 __fastcall sub_198EC0(
        __m128i *this,
        __int64 a2,
        double a3,
        double a4,
        __m128 a5,
        __int64 a6,
        unsigned __int64 a7,
        __int64 a8)
{
  __int64 v9; // rdx
  __int64 *v10; // r12
  __int64 *v11; // rbp
  __int64 i; // r12
  __int64 v13; // r13
  __int64 v14; // rax
  _QWORD *v15; // rdx
  __int64 v16; // rdi
  unsigned int *v17; // r12
  unsigned int *v18; // rbp
  __int64 v20; // r9
  __int128 v21; // rax
  __m128i *v22; // r15
  __int64 *v23; // rbp
  __int64 *v24; // r14
  __int64 v25; // r15
  __int64 v26; // rbp
  char *v27; // r13
  unsigned __int64 v28; // rdx
  unsigned __int64 *v29; // rbp
  unsigned __int64 v30; // rdx
  unsigned __int64 *v31; // rax
  __int64 v32; // [rsp+18h] [rbp-58h] BYREF
  __int128 v33; // [rsp+20h] [rbp-50h]
  unsigned __int64 v34; // [rsp+30h] [rbp-40h]

  v9 = *(_QWORD *)(a7 + 8);
  v34 = __readfsqword(0x28u);
  v10 = (__int64 *)a7;
  v33 = 0;
  v32 = 0;
  if ( v9 )
  {
    a2 = 0;
    *(_QWORD *)&v21 = qvector_reserve(&v32, 0, v9, 8);
    a8 = *v10;
    *((_QWORD *)&v21 + 1) = v10[1];
    v32 = v21;
    v22 = (__m128i *)v21;
    v23 = (__int64 *)(a8 + 8LL * *((_QWORD *)&v21 + 1));
    if ( (__int64 *)a8 != v23 )
    {
      v24 = (__int64 *)a8;
      do
      {
        a2 = *v24;
        LODWORD(v21) = sub_198090(this, *v24, *((__int64 *)&v21 + 1), a7, a8, v20);
        if ( (_DWORD)v21 != -1 )
        {
          v25 = (unsigned int)v21;
          v21 = v33;
          a2 = v32;
          if ( *((_QWORD *)&v33 + 1) < (unsigned __int64)(v33 + 1) )
          {
            v32 = qvector_reserve(&v32, v32, v33 + 1, 8);
            a2 = v32;
            *(_QWORD *)&v21 = v33;
          }
          *(_QWORD *)(a2 + 8 * v21) = v25;
          *(_QWORD *)&v33 = v33 + 1;
        }
        ++v24;
      }
      while ( v23 != v24 );
      v22 = (__m128i *)v32;
    }
    v26 = 8 * v33;
    v27 = &v22->m128i_i8[8 * v33];
    if ( v22 != (__m128i *)v27 )
    {
      if ( v26 >> 3 )
      {
        _BitScanReverse64(&v28, v26 >> 3);
        sub_198CF0(v22, (unsigned __int64 *)v22 + v33, 2LL * (int)v28, 0.0, a4, a5);
        if ( v26 > 128 )
        {
          v29 = (unsigned __int64 *)&v22[8];
          sub_196E80(v22->m128i_i8, v22[8].m128i_i8);
          do
          {
            while ( 1 )
            {
              a7 = *v29;
              v30 = *(v29 - 1);
              v31 = v29 - 1;
              if ( v30 < *v29 )
                break;
              a2 = (__int64)v29++;
              *(_QWORD *)a2 = a7;
              if ( v29 == (unsigned __int64 *)v27 )
                goto LABEL_28;
            }
            do
            {
              v31[1] = v30;
              a2 = (__int64)v31;
              v30 = *--v31;
            }
            while ( v30 < a7 );
            ++v29;
            *(_QWORD *)a2 = a7;
          }
          while ( v29 != (unsigned __int64 *)v27 );
          goto LABEL_28;
        }
      }
      else
      {
        sub_198CF0(v22, (unsigned __int64 *)v22 + v33, -2, 0.0, a4, a5);
      }
      a2 = (__int64)v27;
      sub_196E80(v22->m128i_i8, v27);
      v9 = v10[1];
      goto LABEL_2;
    }
LABEL_28:
    v9 = v10[1];
  }
LABEL_2:
  v11 = (__int64 *)*v10;
  for ( i = *v10 + 8 * v9; (__int64 *)i != v11; ++v11 )
  {
    v13 = *v11;
    v14 = QT::QAbstractItemView::model((QT::QAbstractItemView *)this);
    v15 = *(_QWORD **)(v14 + 216);
    if ( !v15 )
      v15 = *(_QWORD **)(v14 + 208);
    a2 = 0;
    notify_dirtree(*v15, 0, v13);
  }
  v16 = v32;
  v17 = (unsigned int *)(v32 + 8 * v33);
  v18 = (unsigned int *)v32;
  if ( v17 != (unsigned int *)v32 )
  {
    do
    {
      a2 = *v18;
      bookmarks_t_erase(this + 158, a2, *((_QWORD *)this + 322));
      v18 += 2;
    }
    while ( v17 != v18 );
    v16 = v32;
  }
  if ( v16 )
  {
    *(_QWORD *)&v33 = 0;
    qfree(v16, a2, v9, a7, a8);
  }
  return 2;
}
