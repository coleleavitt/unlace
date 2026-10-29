unsigned __int64 __fastcall sub_6709F0(__int64 *a1, unsigned __int64 **a2, _QWORD *a3, unsigned __int8 a4, char a5)
{
  _QWORD *v5; // r15
  unsigned __int64 *v8; // rax
  __int64 v9; // r14
  unsigned __int64 *v10; // r12
  unsigned __int64 v11; // r14
  __int64 p_ptr; // rdi
  char *v13; // r15
  unsigned __int8 v14; // al
  bool v15; // cc
  __int64 *v16; // r12
  unsigned __int64 v17; // rsi
  _QWORD *v18; // r13
  unsigned __int64 v19; // rbx
  _QWORD *v20; // rax
  char v21; // al
  __m128i *v22; // r14
  __m128i v23; // xmm0
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  unsigned __int64 v29; // rax
  __int64 v30; // rsi
  __int64 v31; // r8
  __int64 v32; // r9
  char v33; // r14
  __int64 v34; // rax
  _BYTE *v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rcx
  _BYTE *v38; // rsi
  char v39; // r8
  unsigned __int64 v40; // rdx
  _BYTE *v41; // rsi
  bool v42; // zf
  void **v43; // rbx
  __int64 v44; // r14
  void *v45; // rdi
  __int64 v46; // rax
  unsigned __int64 v47; // rax
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // r12
  __int64 v54; // rax
  __int64 v55; // r13
  __int64 v56; // rsi
  __m128i *v57; // rdi
  __int64 v58; // rdx
  __m128i v59; // xmm0
  __int64 v61; // rax
  char v62; // [rsp+6h] [rbp-CAh]
  char *v64; // [rsp+8h] [rbp-C8h]
  unsigned __int64 *v65; // [rsp+18h] [rbp-B8h]
  unsigned int v66; // [rsp+18h] [rbp-B8h]
  __int64 v68; // [rsp+28h] [rbp-A8h]
  __int8 v69; // [rsp+28h] [rbp-A8h]
  unsigned __int64 v70; // [rsp+28h] [rbp-A8h]
  __int64 v71; // [rsp+30h] [rbp-A0h]
  _QWORD *v72; // [rsp+30h] [rbp-A0h]
  __m128i v73; // [rsp+38h] [rbp-98h] BYREF
  __int128 v74; // [rsp+48h] [rbp-88h]
  void *v75; // [rsp+60h] [rbp-70h] BYREF
  __int128 v76; // [rsp+68h] [rbp-68h]
  void *ptr; // [rsp+80h] [rbp-50h] BYREF
  __int128 v78; // [rsp+88h] [rbp-48h]
  unsigned __int64 v79; // [rsp+98h] [rbp-38h]

  v5 = a3;
  v79 = __readfsqword(0x28u);
  v75 = nullptr;
  v73.m128i_i64[1] = 0;
  v74 = 0;
  v76 = 0;
  if ( a5 )
  {
    a3 = (_QWORD *)(a1[275] + a1[262] + a1[249] + a1[236]);
    if ( a3 )
    {
      v73.m128i_i64[0] = a1[275] + a1[262] + a1[249] + a1[236];
      v52 = qvector_reserve(&v73.m128i_u64[1], 0, a3, 8);
      v53 = *((_QWORD *)&v76 + 1);
      a3 = (_QWORD *)v73.m128i_i64[0];
      v73.m128i_i64[1] = v52;
      if ( *((_QWORD *)&v76 + 1) < v73.m128i_i64[0] )
      {
        v54 = qvector_reserve(&v75, 0, v73.m128i_i64[0], 24);
        v55 = *((_QWORD *)&v76 + 1);
        v56 = v54;
        *((_QWORD *)&v76 + 1) = v53;
        v73.m128i_i64[0] = v54;
        v57 = (__m128i *)v75;
        v58 = v76 - 1;
        if ( (__int64)v76 - 1 >= 0 )
        {
          do
          {
            v59 = _mm_loadu_si128(v57);
            v54 += 24;
            v57 = (__m128i *)((char *)v57 + 24);
            *(__m128i *)(v54 - 24) = v59;
            *(_QWORD *)(v54 - 8) = v57[-1].m128i_i64[1];
          }
          while ( v58-- != 0 );
          v73.m128i_i64[0] = v56;
          v57 = (__m128i *)v75;
        }
        qfree(v57);
        *((_QWORD *)&v76 + 1) = v55;
        v75 = (void *)v73.m128i_i64[0];
      }
    }
  }
  v8 = *a2;
  v9 = 2LL * (_QWORD)a2[1];
  v65 = &v8[v9];
  if ( &v8[v9] != v8 )
  {
    v10 = v8;
    v73.m128i_i64[0] = (__int64)&v73.m128i_i64[1];
    do
    {
      v11 = *v10;
      v68 = v10[1] - *v10;
      v71 = (__int64)v5 + *v10;
      sub_670940((__int64)a1, (unsigned __int64 *)&v75, (__int64 *)v73.m128i_i64[0], *v10, v71, v68, 0, a4);
      sub_670940((__int64)a1, (unsigned __int64 *)&v75, (__int64 *)v73.m128i_i64[0], v11, v71, v68, 1, a4);
      v10 += 2;
    }
    while ( v65 != v10 );
  }
  p_ptr = (__int64)&ptr;
  v13 = (char *)v75;
  v64 = (char *)v75 + 24 * v76;
  if ( v75 != v64 )
  {
    do
    {
      if ( a4 )
      {
        v14 = v13[17];
        v15 = (char)v14 <= 100;
        if ( v14 == 100 )
          goto LABEL_48;
      }
      else
      {
        v29 = sub_3BDD60(a1, *(_QWORD *)v13);
        v30 = *((_QWORD *)v13 + 1);
        p_ptr = v29;
        v31 = (unsigned __int8)v13[17] | 0x100u;
        LOBYTE(ptr) = v13[16];
        netnode_supset(v29, v30, &ptr, 1, v31, v32);
        v14 = v13[17];
        v15 = (char)v14 <= 100;
        if ( v14 == 100 )
        {
LABEL_48:
          v66 = 25;
          v16 = a1 + 224;
          goto LABEL_13;
        }
      }
      if ( v15 )
      {
        if ( v14 == 68 )
        {
          v66 = 27;
          v16 = a1 + 237;
        }
        else
        {
          if ( v14 != 88 )
            goto LABEL_111;
          v66 = 31;
          v16 = a1 + 263;
        }
      }
      else
      {
        if ( v14 != 120 )
        {
LABEL_111:
          if ( !under_debugger )
            interr(511);
          BUG();
        }
        v66 = 29;
        v16 = a1 + 250;
      }
LABEL_13:
      v17 = *(_QWORD *)v13;
      v18 = v16 + 8;
      v72 = v16 + 8;
      v19 = *((_QWORD *)v13 + 1);
      v69 = v13[16];
      v20 = (_QWORD *)v16[9];
      v73.m128i_i64[0] = *(_QWORD *)v13;
      if ( !v20 )
        goto LABEL_71;
      p_ptr = v17;
      do
      {
        while ( 1 )
        {
          a3 = (_QWORD *)v20[4];
          if ( (unsigned __int64)a3 < v17 || v17 >= (unsigned __int64)a3 && v20[5] < v19 )
            break;
          v18 = v20;
          v20 = (_QWORD *)v20[2];
          if ( !v20 )
            goto LABEL_20;
        }
        v20 = (_QWORD *)v20[3];
      }
      while ( v20 );
LABEL_20:
      v73.m128i_i64[0] = v17;
      if ( v72 == v18 )
      {
LABEL_71:
        v21 = must_journal(p_ptr, v17, a3);
        v18 = v16 + 8;
      }
      else
      {
        if ( v17 == v18[4] && v19 == v18[5] )
        {
          if ( v69 == *((_BYTE *)v18 + 48) )
            goto LABEL_41;
          v33 = must_journal(v17, v17, a3);
          if ( !v33 )
            goto LABEL_52;
          goto LABEL_54;
        }
        v21 = must_journal(v17, v17, a3);
      }
      if ( !v21 )
      {
        v22 = (__m128i *)v16[3];
        ++v16[6];
        if ( v22 )
          goto LABEL_25;
        goto LABEL_66;
      }
      v33 = 0;
LABEL_54:
      ptr = nullptr;
      v78 = 0;
      sub_40D2A0((__int64 *)&ptr, v73.m128i_i64[0]);
      sub_40D2A0((__int64 *)&ptr, v19);
      v34 = v78;
      v35 = ptr;
      if ( *((_QWORD *)&v78 + 1) < (unsigned __int64)(v78 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v78 + 1, 1);
        v35 = ptr;
        v34 = v78;
      }
      v35[v34] = v33;
      v36 = v78;
      v37 = v78 + 1;
      *(_QWORD *)&v78 = v78 + 1;
      if ( v33 )
      {
        v38 = ptr;
        v39 = *((_BYTE *)v18 + 48);
        v40 = v36 + 2;
        if ( *((_QWORD *)&v78 + 1) < v40 )
        {
          v62 = *((_BYTE *)v18 + 48);
          ptr = (void *)qvector_reserve(&ptr, ptr, v40, 1);
          v37 = v78;
          v38 = ptr;
          v39 = v62;
        }
        v38[v37] = v39;
        v37 = v78 + 1;
        *(_QWORD *)&v78 = v78 + 1;
      }
      v41 = ptr;
      if ( *((_QWORD *)&v78 + 1) < (unsigned __int64)(v37 + 1) )
      {
        ptr = (void *)qvector_reserve(&ptr, ptr, v37 + 1, 1);
        v37 = v78;
        v41 = ptr;
      }
      v41[v37] = v69;
      v17 = (unsigned __int64)ptr;
      *(_QWORD *)&v78 = v78 + 1;
      add_undo_record(v66, ptr, v78);
      p_ptr = (__int64)ptr;
      if ( ptr )
      {
        *(_QWORD *)&v78 = 0;
        qfree(ptr);
      }
      if ( v33 )
      {
LABEL_52:
        *((_BYTE *)v18 + 48) = v69;
        goto LABEL_41;
      }
      v22 = (__m128i *)v16[3];
      ++v16[6];
      if ( v22 )
      {
LABEL_25:
        v16[3] = v22->m128i_i64[0];
        goto LABEL_26;
      }
LABEL_66:
      v22 = (__m128i *)v16[4];
      if ( v22 == (__m128i *)v16[5] )
      {
        p_ptr = (__int64)&loc_3FFFF0;
        v49 = qalloc_or_throw(&loc_3FFFF0);
        v16[4] = v49;
        v50 = v49;
        v17 = *v16;
        v16[5] = (__int64)&loc_3FFFF0 + v49;
        v51 = v16[1];
        a3 = (_QWORD *)(v51 + 1);
        if ( v16[2] < (unsigned __int64)(v51 + 1) )
        {
          p_ptr = (__int64)v16;
          v61 = qvector_reserve(v16, v17, a3, 8);
          *v16 = v61;
          v17 = v61;
          v51 = v16[1];
        }
        *(_QWORD *)(v17 + 8 * v51) = v50;
        v22 = (__m128i *)v16[4];
        ++v16[1];
      }
      v16[4] = (__int64)&v22[3].m128i_i64[1];
LABEL_26:
      v23 = _mm_unpacklo_epi64(_mm_loadl_epi64(&v73), (__m128i)v19);
      v22[3].m128i_i8[0] = v69;
      v22[2] = v23;
      if ( v72 == v18 )
      {
        if ( !v16[12]
          || (a3 = (_QWORD *)v16[11], p_ptr = v73.m128i_i64[0], v18 = nullptr, v48 = a3[4], v48 >= v73.m128i_i64[0])
          && (v73.m128i_i64[0] < v48 || a3[5] >= v19) )
        {
LABEL_35:
          p_ptr = (__int64)v16;
          v18 = sub_66EB60((__int64)v16, v73.m128i_u64[0], v19);
        }
      }
      else
      {
        v24 = v18[4];
        if ( v73.m128i_i64[0] >= v24 )
        {
          if ( v24 < v73.m128i_i64[0] )
          {
            if ( (_QWORD *)v16[11] == v18 )
            {
              a3 = v18;
              p_ptr = 0;
              if ( !v18 )
                goto LABEL_74;
              goto LABEL_40;
            }
LABEL_32:
            v70 = v18[4];
            v26 = std::_Rb_tree_increment(v18, v17, a3, v24);
            p_ptr = v73.m128i_i64[0];
            v24 = v70;
            a3 = (_QWORD *)v26;
            v27 = *(_QWORD *)(v26 + 32);
            if ( v73.m128i_i64[0] >= v27 && (v27 < v73.m128i_i64[0] || v19 >= a3[5]) )
              goto LABEL_35;
            if ( !v18[3] )
              goto LABEL_96;
            v18 = a3;
            goto LABEL_36;
          }
          v25 = v18[5];
          if ( v19 >= v25 )
          {
            if ( v25 >= v19 )
              goto LABEL_74;
            if ( (_QWORD *)v16[11] == v18 )
            {
LABEL_96:
              a3 = v18;
              if ( !v18 )
              {
LABEL_74:
                if ( v22 )
                {
                  v22->m128i_i64[0] = v16[3];
                  v42 = v16[6]-- == 1;
                  v16[3] = (__int64)v22;
                  if ( v42 )
                  {
                    v43 = (void **)*v16;
                    p_ptr = *v16 + 8 * v16[1];
                    if ( *v16 != p_ptr )
                    {
                      v44 = *v16 + 8 * v16[1];
                      do
                      {
                        v45 = *v43++;
                        qfree(v45);
                      }
                      while ( (void **)v44 != v43 );
                      p_ptr = *v16;
                    }
                    if ( p_ptr )
                    {
                      v16[1] = 0;
                      qfree((void *)p_ptr);
                      *v16 = 0;
                      v16[2] = 0;
                    }
                    v16[5] = 0;
                    *(_OWORD *)(v16 + 3) = 0;
                  }
                }
                goto LABEL_41;
              }
LABEL_97:
              p_ptr = v24 >= v73.m128i_i64[0] && v19 < a3[5];
              goto LABEL_40;
            }
            goto LABEL_32;
          }
        }
        a3 = v18;
        if ( (_QWORD *)v16[10] != v18 )
        {
          v46 = std::_Rb_tree_decrement(v18);
          p_ptr = v73.m128i_i64[0];
          a3 = (_QWORD *)v46;
          v47 = *(_QWORD *)(v46 + 32);
          if ( v47 >= v73.m128i_i64[0] && (v73.m128i_i64[0] < v47 || a3[5] >= v19) )
            goto LABEL_35;
          if ( a3[3] )
            a3 = v18;
          else
            v18 = nullptr;
        }
      }
LABEL_36:
      if ( !a3 )
        goto LABEL_74;
      if ( v72 == a3 || v18 )
      {
        p_ptr = 1;
      }
      else
      {
        v24 = a3[4];
        p_ptr = 1;
        if ( v73.m128i_i64[0] >= v24 )
          goto LABEL_97;
      }
LABEL_40:
      std::_Rb_tree_insert_and_rebalance(p_ptr, v22, a3, v72);
      ++v16[12];
LABEL_41:
      v13 += 24;
    }
    while ( v64 != v13 );
  }
  sub_66F2A0(a1, (__int64)&v73.m128i_i64[1]);
  if ( v75 )
  {
    *(_QWORD *)&v76 = 0;
    qfree(v75);
  }
  if ( v73.m128i_i64[1] )
  {
    *(_QWORD *)&v74 = 0;
    qfree((void *)v73.m128i_i64[1]);
  }
  return v79 - __readfsqword(0x28u);
}
