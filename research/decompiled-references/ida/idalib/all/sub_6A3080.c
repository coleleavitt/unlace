__int64 __fastcall sub_6A3080(__int64 *a1, __int64 **a2)
{
  __int64 *v2; // r12
  __int64 v3; // r13
  unsigned __int32 v4; // ebp
  __int64 *v5; // r15
  __int64 v6; // r14
  unsigned __int64 v7; // rbx
  __m128 *v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  void **p_ptr; // rdi
  __int64 v12; // rsi
  __int64 ph; // rbx
  void *v14; // r15
  __int64 v15; // r14
  char *v16; // rbp
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  __int64 v19; // r14
  __int64 v21; // rax
  void *v22; // rdi
  __int64 v23; // r8
  char *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // r12
  __int64 v28; // rbp
  void *v29; // rdi
  char *v30; // rbx
  char v31; // al
  char *v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r14
  __int64 i; // r13
  void *v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rcx
  _QWORD *v39; // r8
  int v40; // eax
  _BYTE *v41; // rdi
  char *v42; // r15
  __int64 v43; // r15
  __int64 v44; // r14
  __int64 v45; // r12
  void *v46; // rdi
  char *v47; // rbx
  char v48; // al
  char *v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // rbp
  __int64 j; // r13
  void *v53; // rdi
  void *v54; // rdi
  void *v55; // rdi
  char *v56; // rbx
  __int64 v57; // rbp
  __int64 v58; // r15
  void *v59; // rdi
  char *v60; // r12
  char v61; // si
  char *v62; // r10
  __int64 v63; // r11
  __int64 v64; // r14
  __int64 v65; // rbx
  __int64 v66; // r13
  void *v67; // rdi
  __m128i *v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rdx
  void *v71; // rdi
  void *v72; // rdi
  void *v73; // rdi
  void *v74; // rdi
  __int64 v75; // rsi
  __int64 v76; // r14
  __int64 v77; // rcx
  __int64 v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // rcx
  size_t v81; // r8
  void *v82; // rdi
  __m128i v83; // xmm0
  __int64 v84; // rdx
  __int64 v85; // rax
  void *v86; // rax
  void *v87; // rax
  __int64 v88; // r8
  void *v89; // rbx
  __int64 *v90; // r9
  int v91; // r10d
  __m128i v92; // xmm1
  __m128i v93; // xmm2
  char *v94; // rax
  __int64 v95; // rax
  __int64 v96; // [rsp+8h] [rbp-C0h]
  __int64 v97; // [rsp+10h] [rbp-B8h]
  unsigned __int32 v98; // [rsp+10h] [rbp-B8h]
  unsigned __int8 v99; // [rsp+1Fh] [rbp-A9h]
  __int64 v100; // [rsp+20h] [rbp-A8h]
  __m128 *v101; // [rsp+20h] [rbp-A8h]
  __int64 v102; // [rsp+20h] [rbp-A8h]
  size_t n; // [rsp+28h] [rbp-A0h] BYREF
  __m128i v104; // [rsp+30h] [rbp-98h] BYREF
  __int64 *v105; // [rsp+40h] [rbp-88h]
  __int64 **v106; // [rsp+48h] [rbp-80h]
  __m128 *v107; // [rsp+50h] [rbp-78h]
  char *v108; // [rsp+58h] [rbp-70h]
  __m128 v109; // [rsp+60h] [rbp-68h] BYREF
  void *ptr; // [rsp+70h] [rbp-58h] BYREF
  __int128 v111; // [rsp+78h] [rbp-50h]
  unsigned __int64 v112; // [rsp+88h] [rbp-40h]

  v2 = a1;
  v112 = __readfsqword(0x28u);
  v3 = (__int64)a2;
  v4 = sub_698000((__int64)a2);
  if ( v4 )
    return v4;
  v5 = *a2;
  v6 = **a2;
  if ( v6 != -1 && (*(_BYTE *)(a1[2] + 12) & 8) != 0 )
    v6 &= ~1uLL;
  v97 = *(_QWORD *)(*a1 + 1840);
  v99 = sub_3BD540((__int64)a1, v6);
  if ( !v99 )
    return 1;
  v7 = v6 + ((*(_BYTE *)(a1[2] + 12) & 8) != 0) + 1;
  if ( v7 < v5[1] )
  {
    ptr = nullptr;
    v111 = 0;
    v109 = _mm_loadh_ps((const double *)v5 + 1);
    v21 = sub_69DAA0(a1, (__int64 *)&ptr, (unsigned __int64 *)&v109);
    v22 = ptr;
    v8 = &v109;
    v23 = v21;
    if ( v21 )
    {
      v24 = (char *)ptr;
      v25 = 0;
      do
      {
        if ( (unsigned __int64)v5[1] < *(_QWORD *)(*(_QWORD *)v24 + 8LL) )
        {
          if ( ptr )
          {
            v26 = v111;
            if ( (_QWORD)v111 )
            {
              v27 = 0;
              v28 = 0;
              do
              {
                v30 = (char *)v22 + v27;
                v31 = *((_BYTE *)v22 + v27 + 97);
                if ( v31 == 2 )
                {
                  v32 = *((char **)v30 + 3);
                  if ( v32 )
                  {
                    v33 = *((_QWORD *)v30 + 4);
                    if ( v33 )
                    {
                      v34 = 0;
                      for ( i = 0; i != v33; ++i )
                      {
                        v36 = *(void **)&v32[v34];
                        if ( v36 )
                        {
                          *(_QWORD *)&v32[v34 + 8] = 0;
                          v96 = v33;
                          qfree(v36);
                          v32 = *((char **)v30 + 3);
                          v33 = v96;
                        }
                        v34 += 56;
                      }
                    }
                    *((_QWORD *)v30 + 4) = 0;
                    qfree(v32);
                  }
                }
                else if ( v31 == 1 )
                {
                  v73 = *((void **)v30 + 8);
                  if ( v73 )
                  {
                    *((_QWORD *)v30 + 9) = 0;
                    qfree(v73);
                  }
                  v74 = *((void **)v30 + 3);
                  if ( v74 )
                  {
                    *((_QWORD *)v30 + 4) = 0;
                    qfree(v74);
                  }
                }
                v29 = *(void **)v30;
                v30[97] = 0;
                if ( v29 )
                {
                  *((_QWORD *)v30 + 1) = 0;
                  qfree(v29);
                }
                ++v28;
                v22 = ptr;
                v27 += 104;
              }
              while ( v26 != v28 );
            }
            *(_QWORD *)&v111 = 0;
            qfree(v22);
          }
          return 7;
        }
        ++v25;
        v24 += 104;
      }
      while ( v23 != v25 );
    }
    if ( ptr )
    {
      if ( (_QWORD)v111 )
      {
        n = v7;
        v104.m128i_i32[0] = v4;
        v56 = nullptr;
        v57 = 0;
        v58 = v111;
        v100 = v6;
        v105 = v2;
        v106 = a2;
        v107 = &v109;
        do
        {
          v60 = &v56[(_QWORD)v22];
          v61 = v56[(_QWORD)v22 + 97];
          if ( v61 == 2 )
          {
            v62 = *((char **)v60 + 3);
            if ( v62 )
            {
              v63 = *((_QWORD *)v60 + 4);
              if ( v63 )
              {
                v108 = v56;
                v64 = 0;
                v65 = 0;
                v66 = v63;
                do
                {
                  v67 = *(void **)&v62[v64];
                  if ( v67 )
                  {
                    *(_QWORD *)&v62[v64 + 8] = 0;
                    qfree(v67);
                    v62 = *((char **)v60 + 3);
                  }
                  ++v65;
                  v64 += 56;
                }
                while ( v66 != v65 );
                v56 = v108;
              }
              *((_QWORD *)v60 + 4) = 0;
              qfree(v62);
            }
          }
          else if ( v61 == 1 )
          {
            v71 = *((void **)v60 + 8);
            if ( v71 )
            {
              *((_QWORD *)v60 + 9) = 0;
              qfree(v71);
            }
            v72 = *((void **)v60 + 3);
            if ( v72 )
            {
              *((_QWORD *)v60 + 4) = 0;
              qfree(v72);
            }
          }
          v59 = *(void **)v60;
          v60[97] = 0;
          if ( v59 )
          {
            *((_QWORD *)v60 + 1) = 0;
            qfree(v59);
          }
          ++v57;
          v22 = ptr;
          v56 += 104;
        }
        while ( v58 != v57 );
        v6 = v100;
        v7 = n;
        v4 = v104.m128i_i32[0];
        v2 = v105;
        v3 = (__int64)v106;
        v8 = v107;
      }
      v101 = v8;
      *(_QWORD *)&v111 = 0;
      qfree(v22);
      v8 = v101;
    }
  }
  else
  {
    v8 = &v109;
  }
  ptr = nullptr;
  v109.m128_u64[0] = v6;
  v109.m128_u64[1] = v7;
  v111 = 0;
  v9 = sub_69DAA0(v2, (__int64 *)&ptr, (unsigned __int64 *)v8);
  v10 = v9;
  if ( *(_BYTE *)(v3 + 97) != 2 )
    goto LABEL_45;
  if ( !v9 )
  {
    p_ptr = &ptr;
    v12 = v3;
    sub_69CE50((__int64 *)&ptr, v3);
    goto LABEL_11;
  }
  if ( !*(_QWORD *)(v3 + 8)
    || (v37 = *(_QWORD *)(v3 + 32)) == 0
    || (v38 = v111, v39 = *(_QWORD **)v3, v40 = v111 - 1, (int)v111 - 1 < 0) )
  {
LABEL_45:
    p_ptr = &ptr;
    v12 = v3;
    sub_69CE50((__int64 *)&ptr, v3);
    if ( v10 != -1 )
      goto LABEL_11;
    goto LABEL_46;
  }
  v41 = ptr;
  v42 = (char *)ptr + 104 * v40;
  while ( v42[97] != 2 || *v39 != **(_QWORD **)v42 || v39[1] != *(_QWORD *)(*(_QWORD *)v42 + 8LL) )
  {
    --v40;
    v42 -= 104;
    if ( v40 == -1 )
      goto LABEL_45;
  }
  v75 = 56 * v37;
  v76 = *(_QWORD *)(v3 + 24);
  v108 = v42 + 24;
  v102 = v76 + v75;
  if ( v76 == v76 + v75 )
  {
    if ( ptr )
      goto LABEL_50;
    return v4;
  }
  p_ptr = nullptr;
  do
  {
    v77 = *((_QWORD *)v42 + 4);
    v76 += 56;
    if ( (int)v77 <= 0 )
    {
LABEL_133:
      v88 = *(_QWORD *)(v76 - 48);
      v89 = nullptr;
      if ( v88 )
      {
        v104.m128i_i64[0] = *(_QWORD *)(v76 - 48);
        n = 16 * v88;
        v89 = (void *)qalloc_or_throw(16 * v88);
        memcpy(v89, *(const void **)(v76 - 56), n);
        v77 = *((_QWORD *)v42 + 4);
        v88 = v104.m128i_i64[0];
      }
      v90 = *(__int64 **)(v76 - 32);
      v91 = *(_DWORD *)(v76 - 24);
      v92 = _mm_loadl_epi64((const __m128i *)(v76 - 16));
      v93 = _mm_loadl_epi64((const __m128i *)(v76 - 8));
      v12 = *((_QWORD *)v42 + 3);
      if ( *((_QWORD *)v42 + 5) < (unsigned __int64)(v77 + 1) )
      {
        v107 = (__m128 *)v88;
        LODWORD(v106) = v91;
        v105 = v90;
        v104.m128i_i64[0] = v93.m128i_i64[0];
        n = v92.m128i_i64[0];
        v95 = qvector_reserve(v108, v12, v77 + 1, 56);
        v77 = *((_QWORD *)v42 + 4);
        v88 = (__int64)v107;
        *((_QWORD *)v42 + 3) = v95;
        v12 = v95;
        v91 = (int)v106;
        v90 = v105;
        v93 = _mm_loadl_epi64(&v104);
        v92 = _mm_loadl_epi64((const __m128i *)&n);
      }
      v94 = (char *)(v12 + 56 * v77);
      *(__m128i *)(v94 + 8) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v88, (__m128i)(unsigned __int64)v88);
      *(_QWORD *)v94 = v89;
      *((_QWORD *)v94 + 3) = v90;
      *((_DWORD *)v94 + 8) = v91;
      *(__m128i *)(v94 + 40) = _mm_unpacklo_epi64(v92, v93);
      ++*((_QWORD *)v42 + 4);
      goto LABEL_120;
    }
    v12 = (unsigned int)(v77 - 1);
    v78 = *((_QWORD *)v42 + 3);
    v79 = v78 + 56 * v12 + 56;
    while ( *(_QWORD *)(v78 + 48) != *(_QWORD *)(v76 - 8) )
    {
      v78 += 56;
      if ( v79 == v78 )
        goto LABEL_133;
    }
    v80 = *(_QWORD *)(v76 - 48);
    if ( *(_QWORD *)(v78 + 40) != *(_QWORD *)(v76 - 16)
      || *(_QWORD *)(v78 + 8) != v80
      || *(_QWORD *)(v78 + 24) != *(_QWORD *)(v76 - 32)
      || *(_DWORD *)(v78 + 32) != *(_DWORD *)(v76 - 24) )
    {
      v81 = 0;
      if ( !v80 )
        goto LABEL_117;
      goto LABEL_132;
    }
    if ( (int)v80 > 0 )
    {
      v12 = *(_QWORD *)v78;
      v84 = *(_QWORD *)(v76 - 56);
      v85 = 0;
      while ( *(_QWORD *)(v12 + v85) == *(_QWORD *)(v84 + v85)
           && *(_QWORD *)(v12 + v85 + 8) == *(_QWORD *)(v84 + v85 + 8) )
      {
        v85 += 16;
        if ( v85 == 16 * ((unsigned int)(v80 - 1) + 1LL) )
          goto LABEL_121;
      }
LABEL_132:
      v104.m128i_i64[0] = *(_QWORD *)(v76 - 48);
      n = 16 * v80;
      v86 = (void *)qalloc_or_throw(16 * v80);
      v12 = *(_QWORD *)(v76 - 56);
      v87 = memcpy(v86, (const void *)v12, n);
      v80 = v104.m128i_i64[0];
      v81 = (size_t)v87;
LABEL_117:
      v82 = *(void **)v78;
      v83 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v80, (__m128i)(unsigned __int64)v80);
      if ( *(_QWORD *)v78 )
      {
        *(_QWORD *)(v78 + 8) = 0;
        n = v81;
        v104 = v83;
        qfree(v82);
        v83 = _mm_load_si128(&v104);
        v81 = n;
      }
      *(_QWORD *)v78 = v81;
      *(__m128i *)(v78 + 8) = v83;
      *(_QWORD *)(v78 + 24) = *(_QWORD *)(v76 - 32);
      *(_DWORD *)(v78 + 32) = *(_DWORD *)(v76 - 24);
      *(_QWORD *)(v78 + 40) = *(_QWORD *)(v76 - 16);
      *(_QWORD *)(v78 + 48) = *(_QWORD *)(v76 - 8);
LABEL_120:
      p_ptr = (void **)v99;
    }
LABEL_121:
    ;
  }
  while ( v102 != v76 );
  if ( !(_BYTE)p_ptr )
  {
LABEL_47:
    v41 = ptr;
    goto LABEL_48;
  }
LABEL_11:
  ph = get_ph(p_ptr, (const char *)v12);
  v14 = ptr;
  v15 = 104 * v111;
  v16 = (char *)ptr + 104 * v111;
  if ( ptr != v16 )
  {
    v17 = 0x4EC4EC4EC4EC4EC5LL * (v15 >> 3);
    if ( v17 )
    {
      _BitScanReverse64(&v18, v17);
      sub_6A2780((unsigned __int64 **)ptr, (__int64)ptr + 104 * v111, 2LL * (int)v18, ph);
      if ( v15 > 1664 )
      {
        v19 = (__int64)v14 + 1664;
        sub_6A1920((unsigned __int64)v14, (__int64)v14 + 1664, ph);
        do
        {
          sub_6A1670(v19, ph);
          v19 += 104;
        }
        while ( v16 != (char *)v19 );
        goto LABEL_46;
      }
    }
    else
    {
      sub_6A2780((unsigned __int64 **)ptr, (__int64)ptr + 104 * v111, -2, ph);
    }
    sub_6A1920((unsigned __int64)v14, (__int64)v16, ph);
  }
LABEL_46:
  v4 = sub_69BFD0((__int64 *)v97, (__int64 *)&ptr);
  if ( v4 )
    goto LABEL_47;
  sub_69B190((__int64)v2, v3);
  v41 = ptr;
  if ( (_QWORD)v111 )
  {
    if ( *((_BYTE *)ptr + 97) == 1 && *((_QWORD *)ptr + 1) == 1 && !*((_QWORD *)ptr + 9) )
    {
      v68 = *(__m128i **)ptr;
      v69 = **(_QWORD **)ptr;
      if ( v69 != -1 )
      {
        v70 = v68->m128i_i64[1];
        if ( v70 != -1 && v69 != v70 )
        {
          sub_6A02D0((__int64 *)v97, v68);
          v41 = ptr;
        }
      }
    }
  }
  *(_OWORD *)(v97 + 64) = -1;
LABEL_48:
  if ( v41 )
  {
    v38 = v111;
    if ( (_QWORD)v111 )
    {
LABEL_50:
      v98 = v4;
      v43 = 0;
      v44 = 0;
      v45 = v38;
      do
      {
        v47 = &v41[v43];
        v48 = v41[v43 + 97];
        if ( v48 == 2 )
        {
          v49 = *((char **)v47 + 3);
          if ( v49 )
          {
            v50 = *((_QWORD *)v47 + 4);
            if ( v50 )
            {
              v51 = 0;
              for ( j = 0; j != v50; ++j )
              {
                v53 = *(void **)&v49[v51];
                if ( v53 )
                {
                  *(_QWORD *)&v49[v51 + 8] = 0;
                  qfree(v53);
                  v49 = *((char **)v47 + 3);
                }
                v51 += 56;
              }
            }
            *((_QWORD *)v47 + 4) = 0;
            qfree(v49);
          }
        }
        else if ( v48 == 1 )
        {
          v54 = *((void **)v47 + 8);
          if ( v54 )
          {
            *((_QWORD *)v47 + 9) = 0;
            qfree(v54);
          }
          v55 = *((void **)v47 + 3);
          if ( v55 )
          {
            *((_QWORD *)v47 + 4) = 0;
            qfree(v55);
          }
        }
        v46 = *(void **)v47;
        v47[97] = 0;
        if ( v46 )
        {
          *((_QWORD *)v47 + 1) = 0;
          qfree(v46);
        }
        ++v44;
        v41 = ptr;
        v43 += 104;
      }
      while ( v44 != v45 );
      v4 = v98;
    }
    *(_QWORD *)&v111 = 0;
    qfree(v41);
  }
  return v4;
}
