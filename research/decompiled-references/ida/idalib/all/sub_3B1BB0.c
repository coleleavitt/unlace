unsigned __int64 __fastcall sub_3B1BB0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 std_dirtree; // rax
  _QWORD *v6; // rbx
  const char *v7; // rdx
  __int64 v8; // rsi
  unsigned __int64 dir_size; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r15
  __int64 v13; // rsi
  unsigned __int64 v14; // rbx
  __int64 v15; // rsi
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // r11
  __int64 v24; // r10
  __int64 v25; // r8
  __int64 v26; // rsi
  __int64 v27; // rax
  __m128i v28; // xmm0
  __m128i *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  unsigned __int64 v35; // r13
  __int64 v36; // rax
  void *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  __m128i v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // rax
  __m128i n; // [rsp+8h] [rbp-140h] BYREF
  __int64 v45; // [rsp+18h] [rbp-130h]
  __int64 v46; // [rsp+20h] [rbp-128h]
  __int64 v47; // [rsp+28h] [rbp-120h]
  __int64 v48; // [rsp+30h] [rbp-118h]
  __int64 v49; // [rsp+38h] [rbp-110h]
  __int64 v50; // [rsp+40h] [rbp-108h]
  __int64 v51; // [rsp+48h] [rbp-100h]
  __int64 v52; // [rsp+50h] [rbp-F8h]
  __int64 v53; // [rsp+58h] [rbp-F0h]
  __int64 v54; // [rsp+67h] [rbp-E1h] BYREF
  char v55; // [rsp+6Fh] [rbp-D9h]
  __int128 v56; // [rsp+70h] [rbp-D8h] BYREF
  void *v57; // [rsp+80h] [rbp-C8h] BYREF
  __int128 v58; // [rsp+88h] [rbp-C0h]
  __int64 v59; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 v60; // [rsp+A8h] [rbp-A0h]
  __int128 v61; // [rsp+B0h] [rbp-98h]
  __m128i v62; // [rsp+C0h] [rbp-88h] BYREF
  __int64 v63; // [rsp+D0h] [rbp-78h]
  __int64 v64; // [rsp+D8h] [rbp-70h]
  __int64 v65; // [rsp+E0h] [rbp-68h]
  __int64 v66; // [rsp+E8h] [rbp-60h]
  unsigned __int64 v67; // [rsp+F0h] [rbp-58h]
  __int64 v68; // [rsp+F8h] [rbp-50h]
  unsigned __int64 v69; // [rsp+108h] [rbp-40h]

  v69 = __readfsqword(0x28u);
  std_dirtree = get_std_dirtree(5);
  v57 = nullptr;
  v58 = 0;
  if ( !a3 )
    return 0;
  v6 = (_QWORD *)std_dirtree;
  sub_35A790((char **)&v57);
  v7 = haystack;
  v56 = -1;
  if ( (_QWORD)v58 )
    v7 = (const char *)v57;
  v8 = *v6;
  v55 = 0;
  v54 = -1;
  dirtree_resolve_path(&v54, v8, v7);
  if ( v54 != -1 && v55 )
  {
    *(_QWORD *)&v56 = v54;
    dir_size = dirtree_get_dir_size(*v6, v54);
    v10 = dir_size;
    if ( a2 )
    {
      if ( a2[2] < dir_size )
      {
        *a2 = qvector_reserve(a2, *a2, dir_size, 96);
      }
      else
      {
        v11 = 0;
        if ( !dir_size )
        {
LABEL_17:
          v14 = a2[1];
          if ( v11 != v14 )
          {
            v59 = 96;
            v60 = 0;
            v62 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
            v63 = 0xFFFFFFFFLL;
            v64 = -1;
            v65 = 4;
            v66 = 9;
            v67 = 0xFFFFFFFF00000000LL;
            v68 = 0;
            v61 = 0;
            if ( v11 < v14 )
            {
              v35 = v11;
              do
              {
                v36 = *a2 + 96 * v35;
                v37 = *(void **)(v36 + 8);
                if ( v37 )
                {
                  *(_QWORD *)(v36 + 16) = 0;
                  qfree(v37);
                }
                ++v35;
              }
              while ( v14 != v35 );
            }
            else
            {
              v15 = *a2;
              v16 = a2[2];
              if ( (unsigned __int64)&v59 < *a2 || (unsigned __int64)&v59 >= v15 + 96 * v16 )
              {
                if ( v16 < v11 )
                {
                  v42 = qvector_reserve(a2, v15, v11, 96);
                  v14 = a2[1];
                  *a2 = v42;
                }
                if ( v14 < v11 )
                {
                  v39 = 96 * v14;
                  do
                  {
                    ++v14;
                    v40 = v39 + *a2;
                    v39 += 96;
                    *(_QWORD *)(v40 + 8) = 0;
                    *(_OWORD *)(v40 + 16) = 0;
                    v41 = _mm_load_si128(&v62);
                    *(_QWORD *)v40 = 96;
                    *(_QWORD *)(v40 + 48) = 0xFFFFFFFFLL;
                    *(_QWORD *)(v40 + 56) = -1;
                    *(_QWORD *)(v40 + 64) = 4;
                    *(_QWORD *)(v40 + 72) = 9;
                    *(_QWORD *)(v40 + 80) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v40 + 88) = 0;
                    *(__m128i *)(v40 + 32) = v41;
                  }
                  while ( v11 != v14 );
                }
              }
              else
              {
                if ( v16 < v11 )
                {
                  v43 = qvector_reserve(a2, v15, v11, 96);
                  v14 = a2[1];
                  *a2 = v43;
                }
                if ( v14 < v11 )
                {
                  v17 = 96 * v14;
                  do
                  {
                    ++v14;
                    v18 = v17 + *a2;
                    v17 += 96;
                    *(_QWORD *)v18 = 96;
                    *(_QWORD *)(v18 + 8) = 0;
                    *(_QWORD *)(v18 + 32) = -1;
                    *(_QWORD *)(v18 + 40) = 0;
                    *(_QWORD *)(v18 + 48) = 0xFFFFFFFFLL;
                    *(_QWORD *)(v18 + 56) = -1;
                    *(_QWORD *)(v18 + 64) = 4;
                    *(_QWORD *)(v18 + 72) = 9;
                    *(_QWORD *)(v18 + 80) = 0xFFFFFFFF00000000LL;
                    *(_QWORD *)(v18 + 88) = 0;
                    *(_OWORD *)(v18 + 16) = 0;
                  }
                  while ( v11 != v14 );
                }
              }
            }
            a2[1] = v11;
          }
          goto LABEL_29;
        }
      }
LABEL_9:
      v12 = 0;
      v11 = 0;
      do
      {
        *((_QWORD *)&v56 + 1) = v12;
        v13 = *v6;
        LOBYTE(v60) = 0;
        v59 = -1;
        dirtree_resolve_cursor(&v59, v13, &v56);
        if ( v59 != -1 && !(_BYTE)v60 )
        {
          if ( a2 && (unsigned __int8)sub_3AA8A0((__int64)&v59, v59) )
          {
            v20 = (_QWORD *)v59;
            v45 = *(_QWORD *)v59;
            v21 = *(_QWORD *)(v59 + 16);
            n = (__m128i)v21;
            if ( v21 )
            {
              v46 = v59;
              n.m128i_i64[1] = qalloc_or_throw(v21);
              memcpy((void *)n.m128i_i64[1], *(const void **)(v46 + 8), n.m128i_u64[0]);
              v20 = (_QWORD *)v46;
            }
            v22 = v20[8];
            v23 = v20[9];
            v24 = v20[10];
            v25 = v20[11];
            v26 = *a2;
            v47 = v20[4];
            v48 = v20[5];
            v49 = v20[6];
            v46 = v20[7];
            v27 = a2[1];
            if ( a2[2] < (unsigned __int64)(v27 + 1) )
            {
              v53 = v24;
              v52 = v23;
              v51 = v22;
              v50 = v25;
              v38 = qvector_reserve(a2, v26, v27 + 1, 96);
              *a2 = v38;
              v26 = v38;
              v24 = v53;
              v27 = a2[1];
              v23 = v52;
              v22 = v51;
              v25 = v50;
            }
            v28 = _mm_loadl_epi64(&n);
            v29 = (__m128i *)(v26 + 96 * v27);
            v29->m128i_i64[0] = v45;
            v30 = n.m128i_i64[1];
            v29[4].m128i_i64[0] = v22;
            v29->m128i_i64[1] = v30;
            v31 = v47;
            v29[4].m128i_i64[1] = v23;
            v29[2].m128i_i64[0] = v31;
            v32 = v48;
            v29[5].m128i_i64[0] = v24;
            v29[2].m128i_i64[1] = v32;
            v33 = v49;
            v29[5].m128i_i64[1] = v25;
            v29[3].m128i_i64[0] = v33;
            v34 = v46;
            v29[1] = _mm_unpacklo_epi64(v28, v28);
            v29[3].m128i_i64[1] = v34;
            ++a2[1];
          }
          ++v11;
        }
        ++v12;
      }
      while ( v12 < v10 );
      if ( !a2 )
        goto LABEL_29;
      goto LABEL_17;
    }
    if ( dir_size )
      goto LABEL_9;
  }
  v11 = 0;
LABEL_29:
  if ( v57 )
  {
    *(_QWORD *)&v58 = 0;
    qfree(v57);
  }
  return v11;
}
