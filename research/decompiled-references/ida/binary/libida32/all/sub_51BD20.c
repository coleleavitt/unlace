__int64 __fastcall sub_51BD20(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v7; // rbp
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  unsigned __int64 v12; // r15
  _QWORD *v13; // rax
  unsigned int ordinal_limit; // eax
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rax
  void *v21; // r15
  __int64 v22; // rdx
  unsigned __int64 v23; // r14
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rsi
  unsigned __int64 v28; // rdx
  _QWORD *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rsi
  char *v32; // rbx
  __int64 v33; // r14
  _QWORD *v34; // rdi
  __m128 v35; // xmm0
  __int64 v36; // rsi
  __int64 v37; // rcx
  void *v38; // rdi
  __int64 v39; // rcx
  __m128i v40; // xmm0
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // [rsp+8h] [rbp-50h]
  __int64 v46; // [rsp+10h] [rbp-48h]
  __int64 v47; // [rsp+18h] [rbp-40h]

  v7 = a2;
  v8 = a1[8];
  v9 = (_QWORD *)a1[7];
  v10 = &v9[10 * v8];
  if ( v10 == v9 )
    goto LABEL_21;
  while ( 1 )
  {
    v11 = v9;
    if ( a2 == *v9 )
      break;
    v9 += 10;
    if ( v10 == v9 )
      goto LABEL_21;
  }
  if ( !v9 )
  {
LABEL_21:
    v23 = a1[9];
    v24 = v8 + 1;
    if ( v23 < v24 )
    {
      v30 = qvector_reserve(a1 + 7, 0, v24, 80);
      v31 = a1[9];
      v32 = (char *)a1[7];
      a1[9] = v23;
      v46 = v30;
      v47 = v31;
      v45 = a1[8] - 1LL;
      if ( v45 >= 0 )
      {
        v33 = v30 + 40;
        do
        {
          *(_QWORD *)(v33 - 40) = *(_QWORD *)v32;
          v39 = *((_QWORD *)v32 + 1);
          v40 = _mm_loadu_si128((const __m128i *)v32 + 1);
          *((_QWORD *)v32 + 1) = 0;
          *(_QWORD *)(v33 - 32) = v39;
          *(__m128i *)(v33 - 24) = v40;
          v41 = *((_QWORD *)v32 + 6);
          *((_OWORD *)v32 + 1) = 0;
          if ( v41 )
          {
            v34 = nullptr;
            v35 = _mm_loadh_ps((const double *)v32 + 7);
            *(_DWORD *)v33 = *((_DWORD *)v32 + 10);
            v36 = *((_QWORD *)v32 + 8);
            *(__m128 *)(v33 + 8) = v35;
            *(_QWORD *)(v33 + 24) = v36;
            *(_QWORD *)(v41 + 8) = v33;
            v37 = *((_QWORD *)v32 + 9);
            *((_QWORD *)v32 + 6) = 0;
            *(_QWORD *)(v33 + 32) = v37;
            *((_QWORD *)v32 + 7) = v32 + 40;
            *((_QWORD *)v32 + 8) = v32 + 40;
            *((_QWORD *)v32 + 9) = 0;
          }
          else
          {
            *(_DWORD *)v33 = 0;
            *(_QWORD *)(v33 + 8) = 0;
            *(_QWORD *)(v33 + 16) = v33;
            *(_QWORD *)(v33 + 24) = v33;
            *(_QWORD *)(v33 + 32) = 0;
            v34 = *((_QWORD **)v32 + 6);
          }
          sub_51ADF0(v34);
          v38 = *((void **)v32 + 1);
          if ( v38 )
          {
            *((_QWORD *)v32 + 2) = 0;
            qfree(v38);
          }
          --v45;
          v32 += 80;
          v33 += 80;
        }
        while ( v45 != -1 );
        v32 = (char *)a1[7];
      }
      qfree(v32);
      a1[9] = v47;
      v42 = a1[8];
      a1[7] = v46;
      v10 = (_QWORD *)(v46 + 80 * v42);
    }
    v10[1] = 0;
    v11 = v10;
    *((_DWORD *)v10 + 10) = 0;
    v10[6] = 0;
    v10[7] = v10 + 5;
    v10[8] = v10 + 5;
    v10[9] = 0;
    *((_OWORD *)v10 + 1) = 0;
    ++a1[8];
    *v10 = v7;
  }
  v12 = v11[2];
  if ( a3 < v12 )
    goto LABEL_7;
  ordinal_limit = get_ordinal_limit(v7);
  LOBYTE(v7) = ordinal_limit == -1 || a3 >= ordinal_limit;
  if ( !(_BYTE)v7 )
  {
    v25 = ordinal_limit;
    v26 = v11[2];
    if ( v25 >= v26 )
    {
      if ( v26 >= v25 )
      {
LABEL_32:
        sub_51A300((__int64)v11, v12);
LABEL_7:
        LODWORD(v7) = 0;
        v13 = (_QWORD *)(v11[1] + 8LL * a3);
        if ( *v13 == -1 )
        {
          *v13 = a4;
          LODWORD(v7) = 1;
        }
        return (unsigned int)v7;
      }
      v27 = v11[1];
      v28 = v11[3];
      v29 = v11 + 1;
      if ( (unsigned __int64)&unk_238B070 < v27 || (unsigned __int64)&unk_238B070 >= v27 + 8 * v28 )
      {
        if ( v28 >= v25 || (v43 = qvector_reserve(v29, v27, v25, 8), v11[1] = v43, v27 = v43, v26 = v11[2], v26 < v25) )
        {
          while ( 1 )
          {
            *(_QWORD *)(v27 + 8 * v26++) = -1;
            if ( v25 == v26 )
              break;
            v27 = v11[1];
          }
        }
      }
      else if ( v28 >= v25
             || (v44 = qvector_reserve(v29, v27, v25, 8), v11[1] = v44, v27 = v44, v26 = v11[2], v26 < v25) )
      {
        while ( 1 )
        {
          *(_QWORD *)(v27 + 8 * v26++) = -1;
          if ( v25 == v26 )
            break;
          v27 = v11[1];
        }
      }
    }
    v11[2] = v25;
    goto LABEL_32;
  }
  v16 = v11[6];
  v17 = (__int64)(v11 + 5);
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
  if ( v11 + 5 != (_QWORD *)v17 && a3 >= *(_DWORD *)(v17 + 32) )
  {
    LODWORD(v7) = 0;
  }
  else
  {
LABEL_18:
    v20 = operator new(0x30u);
    *(_DWORD *)(v20 + 32) = a3;
    v21 = (void *)v20;
    *(_QWORD *)(v20 + 40) = a4;
    sub_51A080(v11 + 4, v17, a3);
    if ( v22 )
    {
      std::_Rb_tree_insert_and_rebalance();
      ++v11[9];
    }
    else if ( v21 )
    {
      operator delete(v21, 0x30u);
    }
  }
  return (unsigned int)v7;
}

