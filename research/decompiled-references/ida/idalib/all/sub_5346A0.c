__int64 __fastcall sub_5346A0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // r13
  __int64 v7; // rdx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rbx
  unsigned __int64 v11; // r15
  __int64 v12; // r14
  _QWORD *v13; // rax
  unsigned int ordinal_limit; // eax
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  void *v21; // r15
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  _BOOL8 v25; // rdi
  unsigned __int64 v26; // r14
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rsi
  unsigned __int64 v31; // rdx
  _QWORD *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rsi
  char *v35; // rbx
  __int64 v36; // r14
  __m128 v37; // xmm0
  __int64 v38; // rsi
  __int64 v39; // rax
  void *v40; // rdi
  __int64 v41; // rax
  __m128i v42; // xmm0
  __int64 v43; // rax
  __int64 v44; // r12
  void *v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  _QWORD *v50; // [rsp+8h] [rbp-50h]
  __int64 v51; // [rsp+8h] [rbp-50h]
  __int64 v52; // [rsp+10h] [rbp-48h]
  __int64 v53; // [rsp+18h] [rbp-40h]

  v5 = a2;
  v7 = a1[8];
  v8 = (_QWORD *)a1[7];
  v9 = &v8[10 * v7];
  if ( v9 == v8 )
    goto LABEL_25;
  while ( 1 )
  {
    v10 = v8;
    if ( a2 == *v8 )
      break;
    v8 += 10;
    if ( v9 == v8 )
      goto LABEL_25;
  }
  if ( !v8 )
  {
LABEL_25:
    v26 = a1[9];
    v27 = v7 + 1;
    if ( v26 < v27 )
    {
      v33 = qvector_reserve(a1 + 7, 0, v27, 80);
      v34 = a1[9];
      v35 = (char *)a1[7];
      a1[9] = v26;
      v52 = v33;
      v53 = v34;
      v51 = a1[8] - 1LL;
      if ( v51 >= 0 )
      {
        v36 = v33 + 40;
        do
        {
          *(_QWORD *)(v36 - 40) = *(_QWORD *)v35;
          v41 = *((_QWORD *)v35 + 1);
          v42 = _mm_loadu_si128((const __m128i *)v35 + 1);
          *((_QWORD *)v35 + 1) = 0;
          *(_QWORD *)(v36 - 32) = v41;
          *(__m128i *)(v36 - 24) = v42;
          v43 = *((_QWORD *)v35 + 6);
          *((_OWORD *)v35 + 1) = 0;
          if ( v43 )
          {
            v37 = _mm_loadh_ps((const double *)v35 + 7);
            *(_DWORD *)v36 = *((_DWORD *)v35 + 10);
            v38 = *((_QWORD *)v35 + 8);
            *(__m128 *)(v36 + 8) = v37;
            *(_QWORD *)(v36 + 24) = v38;
            *(_QWORD *)(v43 + 8) = v36;
            v39 = *((_QWORD *)v35 + 9);
            *((_QWORD *)v35 + 6) = 0;
            *(_QWORD *)(v36 + 32) = v39;
            *((_QWORD *)v35 + 7) = v35 + 40;
            *((_QWORD *)v35 + 8) = v35 + 40;
            *((_QWORD *)v35 + 9) = 0;
          }
          else
          {
            *(_DWORD *)v36 = 0;
            *(_QWORD *)(v36 + 8) = 0;
            *(_QWORD *)(v36 + 16) = v36;
            *(_QWORD *)(v36 + 24) = v36;
            *(_QWORD *)(v36 + 32) = 0;
            v44 = *((_QWORD *)v35 + 6);
            while ( v44 )
            {
              sub_533530(*(_QWORD **)(v44 + 24));
              v45 = (void *)v44;
              v44 = *(_QWORD *)(v44 + 16);
              operator delete(v45, 0x30u);
            }
          }
          v40 = *((void **)v35 + 1);
          if ( v40 )
          {
            *((_QWORD *)v35 + 2) = 0;
            qfree(v40);
          }
          --v51;
          v35 += 80;
          v36 += 80;
        }
        while ( v51 != -1 );
        v35 = (char *)a1[7];
      }
      qfree(v35);
      a1[9] = v53;
      v46 = a1[8];
      a1[7] = v52;
      v9 = (_QWORD *)(v52 + 80 * v46);
    }
    v9[1] = 0;
    v10 = v9;
    *((_DWORD *)v9 + 10) = 0;
    v9[6] = 0;
    v9[7] = v9 + 5;
    v9[8] = v9 + 5;
    v9[9] = 0;
    *((_OWORD *)v9 + 1) = 0;
    ++a1[8];
    *v9 = v5;
  }
  v11 = v10[2];
  v12 = a3;
  if ( a3 < v11 )
    goto LABEL_7;
  ordinal_limit = get_ordinal_limit(v5);
  LOBYTE(v5) = ordinal_limit == -1 || a3 >= ordinal_limit;
  if ( !(_BYTE)v5 )
  {
    v28 = ordinal_limit;
    v29 = v10[2];
    if ( v28 >= v29 )
    {
      if ( v29 >= v28 )
      {
LABEL_36:
        sub_532AC0((__int64)v10, (unsigned int)v11);
LABEL_7:
        LODWORD(v5) = 0;
        v13 = (_QWORD *)(v10[1] + 8 * v12);
        if ( *v13 == -1 )
        {
          LODWORD(v5) = 1;
          *v13 = a4;
        }
        return (unsigned int)v5;
      }
      v30 = v10[1];
      v31 = v10[3];
      v32 = v10 + 1;
      if ( (unsigned __int64)&unk_23AF1D0 < v30 || (unsigned __int64)&unk_23AF1D0 >= v30 + 8 * v31 )
      {
        if ( v31 >= v28 || (v47 = qvector_reserve(v32, v30, v28, 8), v10[1] = v47, v30 = v47, v29 = v10[2], v29 < v28) )
        {
          while ( 1 )
          {
            *(_QWORD *)(v30 + 8 * v29++) = -1;
            if ( v28 == v29 )
              break;
            v30 = v10[1];
          }
        }
      }
      else if ( v31 >= v28
             || (v48 = qvector_reserve(v32, v30, v28, 8), v10[1] = v48, v30 = v48, v29 = v10[2], v29 < v28) )
      {
        while ( 1 )
        {
          *(_QWORD *)(v30 + 8 * v29++) = -1;
          if ( v28 == v29 )
            break;
          v30 = v10[1];
        }
      }
    }
    v10[2] = v28;
    goto LABEL_36;
  }
  v16 = v10[6];
  v17 = (__int64)(v10 + 5);
  if ( !v16 )
    goto LABEL_18;
  do
  {
    while ( 1 )
    {
      v18 = *(_QWORD *)(v16 + 16);
      v19 = *(_QWORD *)(v16 + 24);
      if ( *(_DWORD *)(v16 + 32) < a3 )
        break;
      v17 = v16;
      v16 = *(_QWORD *)(v16 + 16);
      if ( !v18 )
        goto LABEL_16;
    }
    v16 = *(_QWORD *)(v16 + 24);
  }
  while ( v19 );
LABEL_16:
  if ( v10 + 5 != (_QWORD *)v17 && a3 >= *(_DWORD *)(v17 + 32) )
  {
    LODWORD(v5) = 0;
  }
  else
  {
LABEL_18:
    v50 = v10 + 5;
    v20 = operator new(0x30u);
    *(_DWORD *)(v20 + 32) = a3;
    v21 = (void *)v20;
    *(_QWORD *)(v20 + 40) = a4;
    v23 = sub_532840(v10 + 4, v17, a3, v22);
    if ( v24 )
    {
      v25 = v23 || (_QWORD *)v24 == v50 || a3 < *(_DWORD *)(v24 + 32);
      std::_Rb_tree_insert_and_rebalance(v25, v21, v24, v50);
      ++v10[9];
    }
    else if ( v21 )
    {
      operator delete(v21, 0x30u);
    }
  }
  return (unsigned int)v5;
}
