__int64 __fastcall sub_29420(
        _QWORD *a1,
        const void *a2,
        unsigned __int64 a3,
        __int64 a4,
        double a5,
        double a6,
        double a7)
{
  _QWORD *v10; // rax
  _QWORD *v11; // r15
  _QWORD *v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // r12
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128i si128; // xmm1
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rsi
  __int64 v24; // rax
  _BOOL8 v25; // rdi
  size_t v26; // rax
  size_t v27; // r12
  void *v29; // rdi
  size_t v30; // r13
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v35; // [rsp+10h] [rbp-48h]
  unsigned __int64 v36; // [rsp+10h] [rbp-48h]
  unsigned __int64 v37; // [rsp+10h] [rbp-48h]

  if ( (debug & 0x10000) != 0 )
    sub_29350();
  v10 = (_QWORD *)a1[8];
  v11 = a1 + 7;
  v12 = a1 + 7;
  if ( !v10 )
    goto LABEL_10;
  do
  {
    while ( 1 )
    {
      v13 = v10[2];
      v14 = v10[3];
      if ( v10[4] < a3 )
        break;
      v12 = v10;
      v10 = (_QWORD *)v10[2];
      if ( !v13 )
        goto LABEL_8;
    }
    v10 = (_QWORD *)v10[3];
  }
  while ( v14 );
LABEL_8:
  if ( v11 == v12 || a3 < v12[4] )
  {
LABEL_10:
    v15 = operator new(0xA8u);
    v16 = (unsigned int)dword_B3730;
    *(_QWORD *)(v15 + 32) = a3;
    v17 = v15;
    *(_QWORD *)(v15 + 40) = get_module_data(v16);
    si128 = _mm_load_si128((const __m128i *)&xmmword_94030);
    *(_DWORD *)(v17 + 56) = 0;
    v22 = *(_QWORD *)(v17 + 32);
    *(_QWORD *)(v17 + 64) = 0;
    *(_QWORD *)(v17 + 72) = v17 + 56;
    *(_QWORD *)(v17 + 80) = v17 + 56;
    *(_QWORD *)(v17 + 88) = 0;
    *(_QWORD *)(v17 + 96) = 0;
    *(_BYTE *)(v17 + 136) = 0;
    *(_BYTE *)(v17 + 160) = 0;
    *(_OWORD *)(v17 + 104) = 0;
    *(__m128i *)(v17 + 120) = si128;
    *(_OWORD *)(v17 + 144) = 0;
    if ( v11 == v12 )
    {
      if ( a1[11] )
      {
        v18 = a1[10];
        v12 = nullptr;
        if ( *(_QWORD *)(v18 + 32) < v22 )
        {
LABEL_16:
          if ( v18 )
          {
            if ( v11 == (_QWORD *)v18 || v12 )
            {
              v25 = 1;
LABEL_20:
              v12 = (_QWORD *)v17;
              std::_Rb_tree_insert_and_rebalance(v25, v17, v18, a1 + 7, 0.0, *(double *)si128.m128i_i64, a7);
              ++a1[11];
              goto LABEL_21;
            }
            v23 = *(_QWORD *)(v18 + 32);
LABEL_39:
            v25 = v22 < v23;
            goto LABEL_20;
          }
          goto LABEL_29;
        }
      }
    }
    else
    {
      v23 = v12[4];
      if ( v22 >= v23 )
      {
        if ( v23 < v22 )
        {
          if ( (_QWORD *)a1[10] != v12 )
          {
            v37 = v22;
            v32 = std::_Rb_tree_increment(v12, v23, v18, v22, v19, v20, 0.0, *(double *)si128.m128i_i64, a7);
            v22 = v37;
            v18 = v32;
            if ( v37 >= *(_QWORD *)(v32 + 32) )
              goto LABEL_33;
            if ( v12[3] )
            {
              v12 = (_QWORD *)v32;
              goto LABEL_16;
            }
          }
          v18 = (unsigned __int64)v12;
          if ( v12 )
            goto LABEL_39;
        }
LABEL_29:
        if ( v17 )
          operator delete((void *)v17, 0xA8u);
        goto LABEL_21;
      }
      v18 = (unsigned __int64)v12;
      if ( (_QWORD *)a1[9] == v12 )
        goto LABEL_16;
      v35 = v22;
      v24 = std::_Rb_tree_decrement(v12, v23, v12, v22, v19);
      v22 = v35;
      v18 = v24;
      if ( *(_QWORD *)(v24 + 32) < v35 )
      {
        if ( *(_QWORD *)(v24 + 24) )
          v18 = (unsigned __int64)v12;
        else
          v12 = nullptr;
        goto LABEL_16;
      }
    }
LABEL_33:
    v36 = v22;
    v31 = sub_24C00((__int64)(a1 + 6), v22, v18, v22, v19);
    v22 = v36;
    v12 = v31;
    goto LABEL_16;
  }
LABEL_21:
  if ( a2 && (v26 = strlen((const char *)a2), (v27 = v26) != 0) )
  {
    v29 = (void *)v12[12];
    v30 = v26 + 1;
    if ( v12[14] < v26 + 1 )
    {
      v33 = qvector_reserve(v12 + 12, v12[12], v30, 1);
      v12[12] = v33;
      v29 = (void *)v33;
    }
    v12[13] = v30;
    memmove(v29, a2, v27);
    *(_BYTE *)(v12[12] + v27) = 0;
  }
  else
  {
    v12[13] = 0;
  }
  v12[15] = a3;
  *((_BYTE *)v12 + 136) = 0;
  v12[16] = a4;
  v12[19] = 0;
  return a4;
}
