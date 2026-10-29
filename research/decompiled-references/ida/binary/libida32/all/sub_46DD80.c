__int64 __fastcall sub_46DD80(__int64 *a1, int *a2, unsigned int *a3, int *a4, int *a5)
{
  __int64 v6; // r14
  int v7; // r15d
  __int64 v9; // rax
  int v10; // r12d
  __int64 v11; // r13
  __int64 v12; // rax
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // r12
  __int64 v17; // rax
  __int64 v18; // r15
  unsigned int v19; // edx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r13
  __int64 v25; // rdi
  __int64 v26; // rsi
  unsigned int v27; // edx
  unsigned int v28; // eax
  unsigned int v29; // esi
  unsigned int v30; // edi
  unsigned int v31; // eax
  unsigned int v32; // r15d
  unsigned __int64 v33; // rbx
  __int16 v34; // ax
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  int v38; // edx
  __int64 v39; // rax
  __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // rax
  int v44; // eax
  int v45; // ecx
  __int64 v46; // rax
  unsigned int v47; // edx
  __int64 v48; // rax
  int v49; // ecx
  int v50; // r8d
  unsigned int v51; // eax
  int v52[2]; // [rsp+0h] [rbp-78h]
  __int64 *v53; // [rsp+0h] [rbp-78h]
  void *v54; // [rsp+8h] [rbp-70h]
  __int64 v55; // [rsp+10h] [rbp-68h]
  __int64 *v56; // [rsp+18h] [rbp-60h]
  unsigned int v57; // [rsp+18h] [rbp-60h]
  int v58[2]; // [rsp+20h] [rbp-58h]
  int v59; // [rsp+28h] [rbp-50h]
  int v60; // [rsp+2Ch] [rbp-4Ch]
  __int64 v61[9]; // [rsp+30h] [rbp-48h] BYREF

  v6 = *a1;
  v7 = *a2;
  v61[1] = __readfsqword(0x28u);
  v9 = *(_QWORD *)(v6 + 8);
  v10 = *(_DWORD *)(v9 + 4LL * *a5 + 16);
  v54 = (void *)*(int *)(v9 + 4LL * *a4 + 16);
  v11 = *(_QWORD *)(switch_dbctx(v54) + 1480);
  v55 = v10;
  v12 = switch_dbctx(v10);
  v16 = *(_QWORD *)(v12 + 1480);
  if ( v7 != 1 )
  {
    if ( (unsigned int)sub_3B8DF0(*(_QWORD *)(v12 + 1480), *a3) == 8
      && (unsigned int)sub_895BF0(*(_QWORD *)(v11 + 1008), *a3, a3[1] - *a3, *(_QWORD *)(v16 + 1008), *a3) == -1 )
    {
      return 0;
    }
    v32 = *a3;
    v53 = v61;
    if ( *a3 >= a3[1] )
      return 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v33 = sub_3B9AA0(v16, v32, 1);
        v34 = sub_3B9AA0(v11, v32, 1);
        v38 = v32++;
        v39 = v34 & 0x100;
        if ( BYTE1(v39) == (BYTE1(v33) & 1) )
          break;
LABEL_34:
        rangeset_t_add(
          v6 + 152,
          (int)v53,
          v38,
          v35,
          v36,
          v37,
          (int)v53,
          v54,
          v55,
          (int)v56,
          v58[0],
          v59,
          __SPAIR64__(v32, v38));
        if ( v32 >= a3[1] )
          return 0;
      }
      if ( v39 )
      {
        LODWORD(v56) = v38;
        v41 = switch_dbctx(v54);
        sub_3BA160(*(_QWORD **)(v41 + 1480), v53, (unsigned int)v56);
        v42 = v61[0];
        v43 = switch_dbctx(v55);
        sub_3BA160(*(_QWORD **)(v43 + 1480), v53, (unsigned int)v56);
        if ( v42 != v61[0] )
        {
          v38 = (int)v56;
          goto LABEL_34;
        }
      }
      if ( v32 >= a3[1] )
        return 0;
    }
  }
  v17 = *(_QWORD *)(v16 + 960);
  v18 = v16 + 952;
  *(_QWORD *)v52 = v16 + 952;
  if ( v17 )
  {
    v19 = *a3;
    do
    {
      while ( 1 )
      {
        v20 = *(_QWORD *)(v17 + 16);
        v21 = *(_QWORD *)(v17 + 24);
        if ( *(_DWORD *)(v17 + 32) < v19 )
          break;
        v18 = v17;
        v17 = *(_QWORD *)(v17 + 16);
        if ( !v20 )
          goto LABEL_7;
      }
      v17 = *(_QWORD *)(v17 + 24);
    }
    while ( v21 );
LABEL_7:
    v22 = *(_QWORD *)(v11 + 960);
    v23 = v11 + 952;
    if ( !v22 )
    {
LABEL_23:
      while ( *(_QWORD *)v52 != v18 )
      {
        v31 = *(_DWORD *)(v18 + 32);
        if ( v31 >= a3[1] )
          break;
        if ( (*(_BYTE *)(v18 + 41) & 1) != 0 )
          rangeset_t_add(
            *(_DWORD *)a1 + 152,
            (int)v61,
            v31 + 1,
            *a1,
            v14,
            v15,
            v52[0],
            v54,
            v55,
            (int)v56,
            v58[0],
            v59,
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v31), _mm_cvtsi32_si128(v31 + 1)).m128i_i64[0]);
        v18 = std::_Rb_tree_increment();
      }
      return 0;
    }
  }
  else
  {
    v22 = *(_QWORD *)(v11 + 960);
    v23 = v11 + 952;
    if ( !v22 )
      return 0;
    v18 = *(_QWORD *)v52;
    v19 = *a3;
  }
  v24 = v23;
  do
  {
    while ( 1 )
    {
      v25 = *(_QWORD *)(v22 + 16);
      v26 = *(_QWORD *)(v22 + 24);
      if ( *(_DWORD *)(v22 + 32) < v19 )
        break;
      v24 = v22;
      v22 = *(_QWORD *)(v22 + 16);
      if ( !v25 )
        goto LABEL_12;
    }
    v22 = *(_QWORD *)(v22 + 24);
  }
  while ( v26 );
LABEL_12:
  if ( v23 == v24 )
    goto LABEL_23;
  while ( *(_QWORD *)v52 != v18 )
  {
    v27 = *(_DWORD *)(v24 + 32);
    v28 = *(_DWORD *)(v18 + 32);
    v29 = a3[1];
    if ( v27 == v28 )
    {
      if ( v27 >= v29 )
        return 0;
      v44 = *(_DWORD *)(v24 + 40) & 0x100;
      v45 = *(_BYTE *)(v18 + 41) & 1;
      if ( BYTE1(v44) == (_BYTE)v45 )
      {
        if ( v44 )
        {
          v57 = *(_DWORD *)(v24 + 32);
          v46 = switch_dbctx(v54);
          v47 = v57;
          v56 = v61;
          v60 = v47;
          sub_3BA160(*(_QWORD **)(v46 + 1480), v61, v47);
          *(_QWORD *)v58 = v61[0];
          v48 = switch_dbctx(v55);
          sub_3BA160(*(_QWORD **)(v48 + 1480), v61, v60);
          if ( *(_QWORD *)v58 != v61[0] )
            rangeset_t_add(
              v6 + 152,
              (int)v61,
              v60,
              v49,
              v50,
              v58[0],
              v52[0],
              v54,
              v55,
              (int)v61,
              v58[0],
              v59,
              _mm_unpacklo_epi32(_mm_cvtsi32_si128(v60), _mm_cvtsi32_si128(v60 + 1)).m128i_i64[0]);
        }
      }
      else
      {
        rangeset_t_add(
          v6 + 152,
          (int)v61,
          v27,
          v45,
          v14,
          v15,
          v52[0],
          v54,
          v55,
          (int)v56,
          v58[0],
          v59,
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v27), _mm_cvtsi32_si128(v27 + 1)).m128i_i64[0]);
      }
      v24 = std::_Rb_tree_increment();
    }
    else
    {
      v30 = *(_DWORD *)(v18 + 32);
      if ( v27 <= v28 )
        v30 = *(_DWORD *)(v24 + 32);
      if ( v30 >= v29 )
        return 0;
      if ( v27 < v28 )
      {
        if ( (*(_BYTE *)(v24 + 41) & 1) != 0 )
          rangeset_t_add(
            *(_DWORD *)a1 + 152,
            (int)v61,
            v27,
            v13,
            v14,
            v15,
            v52[0],
            v54,
            v55,
            (int)v56,
            v58[0],
            v59,
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v27), _mm_cvtsi32_si128(v27 + 1)).m128i_i64[0]);
        v24 = std::_Rb_tree_increment();
        goto LABEL_22;
      }
      if ( (*(_BYTE *)(v18 + 41) & 1) != 0 )
        rangeset_t_add(
          *(_DWORD *)a1 + 152,
          (int)v61,
          v28 + 1,
          *a1,
          v14,
          v15,
          v52[0],
          v54,
          v55,
          (int)v56,
          v58[0],
          v59,
          _mm_unpacklo_epi32(_mm_cvtsi32_si128(v28), _mm_cvtsi32_si128(v28 + 1)).m128i_i64[0]);
    }
    v18 = std::_Rb_tree_increment();
LABEL_22:
    if ( v24 == v23 )
      goto LABEL_23;
  }
  for ( ; v24 != v23; v24 = std::_Rb_tree_increment() )
  {
    v51 = *(_DWORD *)(v24 + 32);
    if ( v51 >= a3[1] )
      break;
    if ( (*(_BYTE *)(v24 + 41) & 1) != 0 )
      rangeset_t_add(
        *(_DWORD *)a1 + 152,
        (int)v61,
        v51 + 1,
        *a1,
        v14,
        v15,
        v52[0],
        v54,
        v55,
        (int)v56,
        v58[0],
        v59,
        _mm_unpacklo_epi32(_mm_cvtsi32_si128(v51), _mm_cvtsi32_si128(v51 + 1)).m128i_i64[0]);
  }
  return 0;
}

