int *__fastcall sub_2149C0(__int64 a1, __int64 *a2)
{
  int *result; // rax
  unsigned __int64 v3; // rdi
  int *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 item_end; // rax
  __int64 v9; // xmm0_8
  unsigned __int64 v10; // rsi
  __int64 v11; // rbp
  __m128i v12; // xmm0
  __int64 v13; // r13
  __int128 v14; // xmm0
  unsigned __int64 *v15; // rax
  __int64 insn; // rax
  int *v17; // r14
  unsigned __int64 v18; // rdx
  int *v19; // rax
  int *v20; // rcx
  int *v21; // r15
  __int64 v22; // rdi
  int *v23; // rbp
  unsigned __int64 v24; // r13
  unsigned __int64 v25; // rdx
  char v26; // cl
  int *v27; // rax
  bool v28; // r15
  __int64 v29; // rdi
  __int64 v30; // r12
  __int64 v31; // rbp
  _QWORD *v32; // rbx
  __int64 v33; // rdi
  __int64 v34; // rdi
  char v35; // di
  int *v36; // rax
  bool v37; // r15
  unsigned __int64 v38; // rax
  int *v39; // rcx
  __int64 v40; // rax
  __m128i v41; // [rsp+8h] [rbp-240h] BYREF
  unsigned __int64 v42; // [rsp+18h] [rbp-230h]
  int *v43; // [rsp+20h] [rbp-228h]
  __int64 (__fastcall ***v44)(); // [rsp+28h] [rbp-220h]
  __int64 (__fastcall **v45)(); // [rsp+30h] [rbp-218h] BYREF
  char v46; // [rsp+38h] [rbp-210h]
  _BYTE *v47; // [rsp+40h] [rbp-208h] BYREF
  __int128 v48; // [rsp+48h] [rbp-200h]
  __m128i v49; // [rsp+58h] [rbp-1F0h]
  __int64 *v50; // [rsp+68h] [rbp-1E0h]
  int v51; // [rsp+70h] [rbp-1D8h]
  __int64 v52; // [rsp+78h] [rbp-1D0h]
  __int128 v53; // [rsp+80h] [rbp-1C8h]
  int v54; // [rsp+90h] [rbp-1B8h]
  __int128 v55; // [rsp+A0h] [rbp-1A8h] BYREF
  __int64 v56; // [rsp+B0h] [rbp-198h]
  __int64 v57; // [rsp+B8h] [rbp-190h]
  __int64 v58; // [rsp+C0h] [rbp-188h]
  char v59; // [rsp+C8h] [rbp-180h] BYREF
  unsigned __int64 v60; // [rsp+208h] [rbp-40h] BYREF

  result = (int *)qword_8CB5B0;
  v3 = *a2;
  v60 = __readfsqword(0x28u);
  if ( !qword_8CB5B0 )
    goto LABEL_8;
  v5 = &dword_8CB5A8;
  do
  {
    while ( 1 )
    {
      v6 = *((_QWORD *)result + 2);
      v7 = *((_QWORD *)result + 3);
      if ( *((_QWORD *)result + 4) < v3 )
        break;
      v5 = result;
      result = *((int **)result + 2);
      if ( !v6 )
        goto LABEL_6;
    }
    result = *((int **)result + 3);
  }
  while ( v7 );
LABEL_6:
  if ( v5 == &dword_8CB5A8 || v3 < *((_QWORD *)v5 + 4) )
  {
LABEL_8:
    item_end = get_item_end(v3);
    v9 = *a2;
    v10 = 0;
    v11 = item_end;
    v46 = 0;
    v45 = qflow_chart_t___vtable;
    v47 = nullptr;
    v41.m128i_i64[0] = v9;
    v48 = 0;
    v47 = (_BYTE *)qvector_reserve(&v47, 0, 1, 1);
    v12 = _mm_loadl_epi64(&v41);
    *(_QWORD *)&v48 = 1;
    *v47 = 0;
    v49 = _mm_unpacklo_epi64(v12, (__m128i)(unsigned __int64)v11);
    v50 = a2;
    v51 = 66;
    v52 = 0;
    v54 = 0;
    v44 = &v45;
    v53 = 0;
    create_qflow_chart();
    if ( (int)v53 > 0 )
    {
      v13 = 0;
      v14 = 0;
      v41.m128i_i64[1] = (__int64)&v59;
      v41.m128i_i64[0] = (__int64)&v55;
      while ( 1 )
      {
        v56 = -1;
        v15 = (unsigned __int64 *)v41.m128i_i64[1];
        v57 = 0;
        v58 = 0;
        v55 = -1;
        do
        {
          *(_WORD *)v15 = 0;
          v15 += 5;
          *((_WORD *)v15 - 19) = 0;
          *((_WORD *)v15 - 18) = 0;
          *((_DWORD *)v15 - 2) = 0;
          *((_WORD *)v15 - 17) = 0;
          *((_OWORD *)v15 - 2) = v14;
          *(v15 - 2) = 0;
        }
        while ( &v60 != v15 );
        insn = decode_prev_insn(v41.m128i_i64[0], *(_QWORD *)(v52 + (v13 << 6) + 8));
        v17 = (int *)qword_8CB5F0;
        v18 = insn;
        v14 = 0;
        if ( !qword_8CB5F0 )
          break;
        v19 = (int *)qword_8CB5F0;
        v20 = &dword_8CB5E8;
        v21 = &dword_8CB5E8;
        do
        {
          while ( 1 )
          {
            v22 = *((_QWORD *)v19 + 2);
            v10 = *((_QWORD *)v19 + 3);
            if ( *((_QWORD *)v19 + 4) < v18 )
              break;
            v21 = v19;
            v19 = *((int **)v19 + 2);
            if ( !v22 )
              goto LABEL_17;
          }
          v19 = *((int **)v19 + 3);
        }
        while ( v10 );
LABEL_17:
        if ( v21 != &dword_8CB5E8 && v18 >= *((_QWORD *)v21 + 4) )
          goto LABEL_19;
        while ( 1 )
        {
          v10 = *((_QWORD *)v17 + 4);
          v35 = 0;
          v36 = *((int **)v17 + 3);
          if ( v18 < v10 )
          {
            v36 = *((int **)v17 + 2);
            v35 = 1;
          }
          if ( !v36 )
            break;
          v17 = v36;
        }
        if ( v35 )
        {
          if ( (int *)qword_8CB5F8 == v17 )
          {
LABEL_50:
            v37 = 1;
            if ( v17 != v20 )
              v37 = v18 < *((_QWORD *)v17 + 4);
            goto LABEL_52;
          }
LABEL_55:
          v43 = &dword_8CB5E8;
          v42 = v18;
          v40 = std::_Rb_tree_decrement(v17);
          v20 = v43;
          v18 = v42;
          v14 = 0;
          v10 = *(_QWORD *)(v40 + 32);
        }
        if ( v10 < v18 )
          goto LABEL_50;
LABEL_19:
        if ( (int)v53 <= (int)++v13 )
          goto LABEL_20;
      }
      v17 = (int *)qword_8CB5F8;
      v20 = &dword_8CB5E8;
      if ( (int *)qword_8CB5F8 == &dword_8CB5E8 )
      {
        v37 = 1;
LABEL_52:
        v43 = v20;
        v42 = v18;
        v38 = operator new(0x28u);
        v39 = v43;
        v10 = v38;
        *(_QWORD *)(v38 + 32) = v42;
        std::_Rb_tree_insert_and_rebalance(v37, v38, v17, v39);
        ++qword_8CB608;
        v14 = 0;
        goto LABEL_19;
      }
      v17 = &dword_8CB5E8;
      goto LABEL_55;
    }
LABEL_20:
    v23 = (int *)qword_8CB5B0;
    v24 = *a2;
    if ( qword_8CB5B0 )
    {
      while ( 1 )
      {
        v25 = *((_QWORD *)v23 + 4);
        v10 = *((_QWORD *)v23 + 2);
        v26 = 0;
        v27 = *((int **)v23 + 3);
        if ( v24 < v25 )
        {
          v27 = *((int **)v23 + 2);
          v26 = 1;
        }
        if ( !v27 )
          break;
        v23 = v27;
      }
      if ( !v26 )
      {
        if ( v25 >= v24 )
        {
LABEL_31:
          v29 = v52;
          v45 = qflow_chart_t___vtable;
          if ( v52 )
          {
            v30 = v53;
            if ( (_QWORD)v53 )
            {
              v31 = 0;
              do
              {
                v32 = (_QWORD *)(v29 + (v31 << 6));
                v33 = v32[5];
                if ( v33 )
                {
                  v32[6] = 0;
                  qfree(v33, (const char *)v10);
                }
                v34 = v32[2];
                if ( v34 )
                {
                  v32[3] = 0;
                  qfree(v34, (const char *)v10);
                }
                ++v31;
                v29 = v52;
              }
              while ( v30 != v31 );
            }
            *(_QWORD *)&v53 = 0;
            qfree(v29, (const char *)v10);
          }
          if ( v47 )
          {
            *(_QWORD *)&v48 = 0;
            qfree(v47, (const char *)v10);
          }
          return &dword_0 + 1;
        }
        goto LABEL_28;
      }
      if ( (int *)qword_8CB5B8 == v23 )
      {
LABEL_28:
        v28 = 1;
        if ( v23 != &dword_8CB5A8 )
          v28 = v24 < *((_QWORD *)v23 + 4);
        goto LABEL_30;
      }
    }
    else
    {
      v23 = (int *)qword_8CB5B8;
      if ( (int *)qword_8CB5B8 == &dword_8CB5A8 )
      {
        v28 = 1;
LABEL_30:
        v10 = operator new(0x28u);
        *(_QWORD *)(v10 + 32) = *a2;
        std::_Rb_tree_insert_and_rebalance(v28, v10, v23, &dword_8CB5A8);
        ++qword_8CB5C8;
        goto LABEL_31;
      }
      v23 = &dword_8CB5A8;
    }
    if ( *(_QWORD *)(std::_Rb_tree_decrement(v23) + 32) >= v24 )
      goto LABEL_31;
    goto LABEL_28;
  }
  return result;
}
