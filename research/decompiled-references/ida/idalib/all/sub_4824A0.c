__int64 __fastcall sub_4824A0(__int64 *a1, int *a2, __int64 *a3, int *a4, int *a5)
{
  __int64 v6; // r14
  int v7; // r15d
  __int64 v9; // rax
  int v10; // r12d
  _QWORD *v11; // r13
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // r8d
  int v15; // r9d
  _QWORD *v16; // r12
  _QWORD *v17; // rax
  __int64 v18; // r15
  unsigned __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 *v21; // rsi
  _QWORD *v22; // rax
  _QWORD *v23; // r12
  __int64 v24; // r13
  __int64 v25; // rdi
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // rbx
  __int16 v32; // ax
  int v33; // ecx
  int v34; // r8d
  int v35; // r9d
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  int v42; // eax
  __int64 v43; // rcx
  __m128i v44; // xmm0
  __int64 v45; // rcx
  __m128i v46; // xmm0
  __int64 v47; // rdi
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __int64 v50; // rax
  int v51; // r8d
  __m128i v52; // xmm0
  __int64 v53; // rcx
  __m128i v54; // xmm0
  __int64 v55; // rdi
  __int64 v56; // rdi
  __m128i v57; // xmm0
  unsigned __int64 v58; // rax
  __int64 v59; // rcx
  __m128i v60; // xmm0
  __int64 v61; // rdi
  int v62[2]; // [rsp+0h] [rbp-88h]
  __int64 *v63; // [rsp+0h] [rbp-88h]
  void *v64; // [rsp+8h] [rbp-80h]
  __int64 v65; // [rsp+10h] [rbp-78h]
  __int64 *v66; // [rsp+18h] [rbp-70h]
  int v67[2]; // [rsp+18h] [rbp-70h]
  int v68[2]; // [rsp+20h] [rbp-68h]
  unsigned __int64 v69; // [rsp+28h] [rbp-60h]
  __int64 v70[3]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v71; // [rsp+48h] [rbp-40h]

  v6 = *a1;
  v7 = *a2;
  v71 = __readfsqword(0x28u);
  v9 = *(_QWORD *)(v6 + 8);
  v10 = *(_DWORD *)(v9 + 4LL * *a5 + 16);
  v64 = (void *)*(int *)(v9 + 4LL * *a4 + 16);
  v11 = *(_QWORD **)(switch_dbctx(v64) + 1672);
  v65 = v10;
  v12 = switch_dbctx(v10);
  v16 = *(_QWORD **)(v12 + 1672);
  if ( v7 != 1 )
  {
    if ( (unsigned int)sub_3BDA80(*(_QWORD *)(v12 + 1672), *a3) == 8
      && sub_8B9630(v11[127], *a3, a3[1] - *a3, v16[127], *a3) == -1 )
    {
      return 0;
    }
    v30 = *a3;
    v63 = v70;
    if ( *a3 >= (unsigned __int64)a3[1] )
      return 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v31 = sub_3BE900(v16, v30, 1);
        v32 = sub_3BE900(v11, v30, 1);
        v36 = v30++;
        v37 = v32 & 0x100;
        if ( BYTE1(v37) == (BYTE1(v31) & 1) )
          break;
LABEL_34:
        v70[1] = v30;
        rangeset_t_add(v6 + 152, (int)v63, v36, v33, v34, v35, (int)v63, v64, v65, (int)v66, v68[0], v69, v36);
        if ( v30 >= a3[1] )
          return 0;
      }
      if ( v37 )
      {
        v66 = (__int64 *)v36;
        v39 = switch_dbctx(v64);
        sub_3BEFF0(*(__int64 **)(v39 + 1672), v63, (unsigned __int64)v66);
        v40 = v70[0];
        v41 = switch_dbctx(v65);
        sub_3BEFF0(*(__int64 **)(v41 + 1672), v63, (unsigned __int64)v66);
        if ( v40 != v70[0] )
        {
          v36 = (__int64)v66;
          goto LABEL_34;
        }
      }
      if ( v30 >= a3[1] )
        return 0;
    }
  }
  v17 = (_QWORD *)v16[121];
  v18 = (__int64)(v16 + 120);
  *(_QWORD *)v62 = v16 + 120;
  if ( v17 )
  {
    v19 = *a3;
    do
    {
      while ( 1 )
      {
        v20 = v17[2];
        v21 = (__int64 *)v17[3];
        if ( v17[4] < v19 )
          break;
        v18 = (__int64)v17;
        v17 = (_QWORD *)v17[2];
        if ( !v20 )
          goto LABEL_7;
      }
      v17 = (_QWORD *)v17[3];
    }
    while ( v21 );
LABEL_7:
    v22 = (_QWORD *)v11[121];
    v23 = v11 + 120;
    if ( !v22 )
    {
LABEL_23:
      while ( *(_QWORD *)v62 != v18 )
      {
        v29 = *(_QWORD *)(v18 + 32);
        if ( v29 >= a3[1] )
          break;
        if ( (*(_BYTE *)(v18 + 49) & 1) != 0 )
        {
          v53 = *a1;
          v21 = v70;
          v54 = _mm_unpacklo_epi64((__m128i)v29, (__m128i)(v29 + 1));
          v55 = *a1 + 152;
          v70[1] = v54.m128i_i64[1];
          rangeset_t_add(
            v55,
            (int)v70,
            v29 + 1,
            v53,
            v14,
            v15,
            v62[0],
            v64,
            v65,
            (int)v66,
            v68[0],
            v69,
            v54.m128i_i64[0]);
        }
        v18 = std::_Rb_tree_increment(v18, v21, v19, v13);
      }
      return 0;
    }
  }
  else
  {
    v22 = (_QWORD *)v11[121];
    v23 = v11 + 120;
    if ( !v22 )
      return 0;
    v18 = *(_QWORD *)v62;
    v19 = *a3;
  }
  v24 = (__int64)v23;
  do
  {
    while ( 1 )
    {
      v25 = v22[2];
      v21 = (__int64 *)v22[3];
      if ( v22[4] < v19 )
        break;
      v24 = (__int64)v22;
      v22 = (_QWORD *)v22[2];
      if ( !v25 )
        goto LABEL_12;
    }
    v22 = (_QWORD *)v22[3];
  }
  while ( v21 );
LABEL_12:
  if ( v23 == (_QWORD *)v24 )
    goto LABEL_23;
  while ( *(_QWORD *)v62 != v18 )
  {
    v26 = *(_QWORD *)(v24 + 32);
    v27 = *(_QWORD *)(v18 + 32);
    v21 = (__int64 *)a3[1];
    if ( v26 == v27 )
    {
      if ( v26 >= (unsigned __int64)v21 )
        return 0;
      v42 = *(_DWORD *)(v24 + 48) & 0x100;
      v43 = *(_BYTE *)(v18 + 49) & 1;
      if ( BYTE1(v42) == (_BYTE)v43 )
      {
        if ( v42 )
        {
          *(_QWORD *)v67 = *(_QWORD *)(v24 + 32);
          v48 = switch_dbctx(v64);
          v49 = *(_QWORD *)v67;
          v66 = v70;
          v69 = v49;
          sub_3BEFF0(*(__int64 **)(v48 + 1672), v70, v49);
          *(_QWORD *)v68 = v70[0];
          v50 = switch_dbctx(v65);
          v21 = v70;
          sub_3BEFF0(*(__int64 **)(v50 + 1672), v70, v69);
          if ( *(_QWORD *)v68 != v70[0] )
          {
            v21 = v70;
            v52 = _mm_unpacklo_epi64((__m128i)v69, (__m128i)(v69 + 1));
            v70[1] = v52.m128i_i64[1];
            rangeset_t_add(
              v6 + 152,
              (int)v70,
              v69,
              v43,
              v51,
              v68[0],
              v62[0],
              v64,
              v65,
              (int)v70,
              v68[0],
              v69,
              v52.m128i_i64[0]);
          }
        }
      }
      else
      {
        v21 = v70;
        v44 = _mm_unpacklo_epi64((__m128i)v26, (__m128i)(v26 + 1));
        v70[1] = v44.m128i_i64[1];
        rangeset_t_add(
          v6 + 152,
          (int)v70,
          v26,
          v43,
          v14,
          v15,
          v62[0],
          v64,
          v65,
          (int)v66,
          v68[0],
          v69,
          v44.m128i_i64[0]);
      }
      v24 = std::_Rb_tree_increment(v24, v21, v26, v43);
    }
    else
    {
      v28 = *(_QWORD *)(v18 + 32);
      if ( v26 <= v27 )
        v28 = *(_QWORD *)(v24 + 32);
      if ( v28 >= (unsigned __int64)v21 )
        return 0;
      if ( v26 < v27 )
      {
        if ( (*(_BYTE *)(v24 + 49) & 1) != 0 )
        {
          v21 = v70;
          v56 = *a1 + 152;
          v57 = _mm_unpacklo_epi64((__m128i)v26, (__m128i)(v26 + 1));
          v70[1] = v57.m128i_i64[1];
          rangeset_t_add(v56, (int)v70, v26, v13, v14, v15, v62[0], v64, v65, (int)v66, v68[0], v69, v57.m128i_i64[0]);
        }
        v24 = std::_Rb_tree_increment(v24, v21, v26, v13);
        goto LABEL_22;
      }
      if ( (*(_BYTE *)(v18 + 49) & 1) != 0 )
      {
        v45 = *a1;
        v21 = v70;
        v46 = _mm_unpacklo_epi64((__m128i)v27, (__m128i)(v27 + 1));
        v47 = *a1 + 152;
        v70[1] = v46.m128i_i64[1];
        rangeset_t_add(v47, (int)v70, v27 + 1, v45, v14, v15, v62[0], v64, v65, (int)v66, v68[0], v69, v46.m128i_i64[0]);
      }
    }
    v18 = std::_Rb_tree_increment(v18, v21, v26, v13);
LABEL_22:
    if ( (_QWORD *)v24 == v23 )
      goto LABEL_23;
  }
  for ( ; (_QWORD *)v24 != v23; v24 = std::_Rb_tree_increment(v24, v21, v19, v13) )
  {
    v58 = *(_QWORD *)(v24 + 32);
    if ( v58 >= a3[1] )
      break;
    if ( (*(_BYTE *)(v24 + 49) & 1) != 0 )
    {
      v59 = *a1;
      v21 = v70;
      v60 = _mm_unpacklo_epi64((__m128i)v58, (__m128i)(v58 + 1));
      v61 = *a1 + 152;
      v70[1] = v60.m128i_i64[1];
      rangeset_t_add(v61, (int)v70, v58 + 1, v59, v14, v15, v62[0], v64, v65, (int)v66, v68[0], v69, v60.m128i_i64[0]);
    }
  }
  return 0;
}
