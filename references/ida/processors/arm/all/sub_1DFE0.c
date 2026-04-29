unsigned __int64 __fastcall sub_1DFE0(_QWORD *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbp
  _QWORD *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  int *v12; // r8
  unsigned __int64 v13; // r14
  int *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rax
  void *v18; // r15
  __int64 v19; // rdx
  __int64 v20; // r15
  void *v21; // rax
  const __m128i *j; // r15
  __int64 v23; // rdx
  _QWORD **v24; // rbx
  void *v25; // rdi
  unsigned __int64 i; // [rsp+0h] [rbp-A8h]
  __int16 v28; // [rsp+8h] [rbp-A0h]
  char v29; // [rsp+17h] [rbp-91h]
  int *v30; // [rsp+18h] [rbp-90h]
  __int64 v31; // [rsp+20h] [rbp-88h]
  __int64 v32; // [rsp+30h] [rbp-78h] BYREF
  int v33; // [rsp+38h] [rbp-70h] BYREF
  void *v34; // [rsp+40h] [rbp-68h]
  const __m128i *v35; // [rsp+48h] [rbp-60h]
  int *v36; // [rsp+50h] [rbp-58h]
  __int64 v37; // [rsp+58h] [rbp-50h]
  unsigned __int64 v38; // [rsp+68h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  v4 = (_QWORD *)a1[67];
  v31 = a3 - a2;
  v33 = 0;
  v34 = 0;
  v35 = (const __m128i *)&v33;
  v36 = &v33;
  v37 = 0;
  if ( v4 )
  {
    v5 = a1 + 66;
    v7 = a1 + 66;
    do
    {
      while ( 1 )
      {
        v8 = v4[2];
        v9 = v4[3];
        if ( v4[4] < a2 )
          break;
        v7 = v4;
        v4 = (_QWORD *)v4[2];
        if ( !v8 )
          goto LABEL_6;
      }
      v4 = (_QWORD *)v4[3];
    }
    while ( v9 );
LABEL_6:
    if ( v5 != v7 )
    {
      v10 = a4 + a2;
      v11 = v7[4];
      for ( i = v10; v11 < i; v11 = *(_QWORD *)(v20 + 32) )
      {
        v12 = &v33;
        v13 = v31 + v11;
        v14 = (int *)v34;
        if ( !v34 )
          goto LABEL_15;
        do
        {
          while ( 1 )
          {
            v15 = *((_QWORD *)v14 + 2);
            v16 = *((_QWORD *)v14 + 3);
            if ( *((_QWORD *)v14 + 4) < v13 )
              break;
            v12 = v14;
            v14 = (int *)*((_QWORD *)v14 + 2);
            if ( !v15 )
              goto LABEL_13;
          }
          v14 = (int *)*((_QWORD *)v14 + 3);
        }
        while ( v16 );
LABEL_13:
        if ( v12 == &v33 || v13 < *((_QWORD *)v12 + 4) )
        {
LABEL_15:
          v30 = v12;
          v29 = *((_BYTE *)v7 + 42);
          v28 = *((_WORD *)v7 + 20);
          v17 = operator new(0x30u);
          *(_QWORD *)(v17 + 32) = v13;
          v18 = (void *)v17;
          *(_WORD *)(v17 + 40) = v28;
          *(_BYTE *)(v17 + 42) = v29;
          sub_1D740(&v32, v30, v13);
          if ( v19 )
          {
            std::_Rb_tree_insert_and_rebalance();
            ++v37;
          }
          else if ( v18 )
          {
            operator delete(v18, 0x30u);
          }
        }
        v20 = std::_Rb_tree_increment();
        v21 = (void *)std::_Rb_tree_rebalance_for_erase();
        operator delete(v21, 0x30u);
        --a1[70];
        if ( v5 == (_QWORD *)v20 )
          break;
        v7 = (_QWORD *)v20;
      }
      for ( j = v35; j != (const __m128i *)&v33; j = (const __m128i *)std::_Rb_tree_increment() )
      {
        sub_1D740(a1 + 65, v5, j[2].m128i_u64[0]);
        if ( v23 )
        {
          *(__m128i *)(operator new(0x30u) + 32) = _mm_loadu_si128(j + 2);
          std::_Rb_tree_insert_and_rebalance();
          ++a1[70];
        }
      }
      v24 = (_QWORD **)v34;
      if ( v34 )
      {
        do
        {
          sub_1D880(v24[3]);
          v25 = v24;
          v24 = (_QWORD **)v24[2];
          operator delete(v25, 0x30u);
        }
        while ( v24 );
      }
    }
  }
  return v38 - __readfsqword(0x28u);
}
