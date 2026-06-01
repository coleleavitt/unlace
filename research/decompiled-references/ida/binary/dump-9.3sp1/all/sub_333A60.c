unsigned __int64 __fastcall sub_333A60(__int64 a1, const void *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  size_t v9; // r12
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // r12
  __int64 v14; // rax
  __m128i si128; // xmm0
  __int64 v16; // rax
  __m128i v17; // xmm1
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // r14
  __int64 v24; // rax
  bool v25; // zf
  __int64 v26; // rdi
  __int64 v27; // r12
  _QWORD *v28; // rbx
  __int64 v29; // rdi
  __int64 v30; // rdi
  unsigned int tinfo_size; // eax
  unsigned __int64 v32; // rbp
  unsigned __int64 v33; // r15
  __int64 v34; // rdx
  unsigned __int64 v35; // rbp
  __int64 v36; // rsi
  unsigned __int64 v37; // rbp
  size_t v38; // r15
  __int64 v39; // r14
  __int64 v40; // r8
  __int64 v41; // rsi
  __int64 v42; // rax
  void *v43; // rax
  const void *v44; // rsi
  void *v45; // rax
  unsigned __int64 v46; // rbp
  __int64 v47; // rsi
  unsigned __int64 v48; // rbp
  size_t v49; // r8
  __int64 v50; // r15
  unsigned __int64 v51; // r9
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  unsigned __int64 v58; // [rsp+0h] [rbp-F8h]
  __int64 v59; // [rsp+0h] [rbp-F8h]
  size_t v60; // [rsp+8h] [rbp-F0h]
  _BYTE v61[40]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v62[24]; // [rsp+48h] [rbp-B0h] BYREF
  __int128 v63[3]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v64; // [rsp+90h] [rbp-68h]
  int v65; // [rsp+98h] [rbp-60h]
  __int64 v66; // [rsp+A0h] [rbp-58h]
  char v67; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v68; // [rsp+B8h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  v3 = (__int64)a2;
  if ( ((get_tinfo_property() & 0x2F) != 0xD || (*(_BYTE *)(a1 + 120) & 1) != 0)
    && (!*(_QWORD *)(a1 + 56) || (*(_BYTE *)(a1 + 120) & 2) == 0) )
  {
    copy_tinfo_t();
    v9 = *(_QWORD *)(a1 + 72);
    *(_OWORD *)v61 = *(unsigned __int64 *)(a1 + 56);
    *(_OWORD *)&v61[16] = 0;
    if ( v9 )
    {
      v45 = (void *)qalloc_or_throw(v9, (__int64)a2, v7, v8);
      a2 = *(const void **)(a1 + 64);
      *(_QWORD *)&v61[24] = v9;
      *(_QWORD *)&v61[8] = v45;
      memcpy(v45, a2, v9);
      *(_QWORD *)&v61[16] = v9;
    }
    v10 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)&v61[32] = 0;
    *(_OWORD *)v62 = 0;
    if ( v10 )
    {
      v43 = (void *)qalloc_or_throw(4 * v10, (__int64)a2, v7, v8);
      v44 = *(const void **)(a1 + 88);
      *(_QWORD *)&v61[32] = v43;
      *(_QWORD *)&v62[8] = v10;
      memcpy(v43, v44, 4 * v10);
      *(_QWORD *)v62 = v10;
    }
    *(_QWORD *)&v62[16] = 0;
    copy_tinfo_t();
    v11 = *(_QWORD *)(a1 + 8);
    v12 = *(_QWORD *)a1;
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v11 + 1) )
    {
      v42 = qvector_reserve(a1, v12, v11 + 1, 64);
      *(_QWORD *)a1 = v42;
      v11 = *(_QWORD *)(a1 + 8);
      v12 = v42;
    }
    v13 = v12 + (v11 << 6);
    *(_QWORD *)v13 = *(_QWORD *)v61;
    v14 = *(_QWORD *)&v61[8];
    *(_QWORD *)&v61[8] = 0;
    si128 = _mm_load_si128((const __m128i *)&v61[16]);
    *(_QWORD *)(v13 + 8) = v14;
    *(__m128i *)(v13 + 16) = si128;
    v16 = *(_QWORD *)&v61[32];
    v17 = _mm_loadu_si128((const __m128i *)v62);
    memset(&v61[16], 0, 24);
    *(_OWORD *)v62 = 0;
    *(_QWORD *)(v13 + 32) = v16;
    *(_QWORD *)(v13 + 56) = 0;
    *(__m128i *)(v13 + 40) = v17;
    copy_tinfo_t();
    ++*(_QWORD *)(a1 + 8);
    clear_tinfo_t();
    if ( *(_QWORD *)&v61[32] )
    {
      *(_QWORD *)v62 = 0;
      qfree(*(__int64 *)&v61[32]);
    }
    if ( *(_QWORD *)&v61[8] )
    {
      *(_QWORD *)&v61[16] = 0;
      qfree(*(__int64 *)&v61[8]);
    }
    v18 = *(_QWORD *)(a1 + 96);
    if ( v18 == *(_QWORD *)(a1 + 32) )
    {
      if ( v18 )
      {
        v19 = 0;
        while ( *(_DWORD *)(*(_QWORD *)(a1 + 88) + 4 * v19) == *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v19) )
        {
          if ( v18 == ++v19 )
            goto LABEL_49;
        }
      }
      else
      {
LABEL_49:
        *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 8) - 1LL;
      }
    }
  }
  v4 = *(_QWORD *)(a1 + 72);
  v5 = (int)v4 - 1;
  if ( !v4 )
    v5 = 0;
  if ( (get_tinfo_property() & 0xF) == 0xB )
  {
    *(_OWORD *)v61 = 0u;
    if ( (unsigned __int8)get_tinfo_details() && (tinfo_size = get_tinfo_size()) != 0 )
    {
      v32 = tinfo_size;
      if ( *(_DWORD *)&v61[12] - 1 < (unsigned int)(*(_QWORD *)(a1 + 56) / (unsigned __int64)tinfo_size) )
      {
        if ( !under_debugger )
          sub_383060(51684);
        BUG();
      }
      sub_FAAD0((__int64 *)(a1 + 64));
      v33 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 56) = v33 % v32;
      sub_333A60(a1, v61);
      *(_QWORD *)(a1 + 56) = v33;
      sub_333670((__int64 *)(a1 + 64), (int)v5);
      clear_tinfo_t();
    }
    else
    {
      clear_tinfo_t();
    }
  }
  else if ( (get_tinfo_property() & 0x2F) == 0xD )
  {
    if ( (get_tinfo_property() & 0x3F) == 0x1D )
    {
      *(_DWORD *)&v62[8] = 1;
      memset(v61, 0, sizeof(v61));
      *(_QWORD *)v62 = 0;
      if ( (unsigned __int8)get_tinfo_details() )
      {
        v20 = *(_QWORD *)(a1 + 96);
        v21 = *(_QWORD *)(a1 + 88);
        if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)(v20 + 1) )
        {
          v53 = qvector_reserve(a1 + 88, v21, v20 + 1, 4);
          *(_QWORD *)(a1 + 88) = v53;
          v21 = v53;
          v20 = *(_QWORD *)(a1 + 96);
        }
        *(_DWORD *)(v21 + 4 * v20) = 0;
        v22 = *(_QWORD *)&v61[8];
        v23 = *(_QWORD *)v61;
        v24 = *(_QWORD *)(a1 + 96) + 1LL;
        v25 = 144LL * *(_QWORD *)&v61[8] == 0;
        v26 = *(_QWORD *)v61;
        *(_QWORD *)(a1 + 96) = v24;
        if ( !v25 )
        {
          do
          {
            if ( *(_QWORD *)(a1 + 56) < *(_QWORD *)(v23 + 8) >> 3 )
            {
              v46 = *(_QWORD *)(a1 + 72);
              if ( v46 > 1 )
              {
                v47 = *(_QWORD *)(a1 + 64);
                if ( *(_BYTE *)(v47 + v46 - 2) != 46 )
                {
                  if ( *(_QWORD *)(a1 + 80) < v46 + 1 )
                  {
                    v54 = qvector_reserve(a1 + 64, v47, v46 + 1, 1);
                    *(_QWORD *)(a1 + 64) = v54;
                    v47 = v54;
                  }
                  *(_QWORD *)(a1 + 72) = v46 + 1;
                  *(_BYTE *)(v47 + v46 - 1) = 46;
                  *(_BYTE *)(*(_QWORD *)(a1 + 64) + v46) = 0;
                }
              }
              v48 = *(_QWORD *)(v23 + 24);
              if ( v48 )
              {
                v49 = v48 - 1;
                if ( v48 != 1 )
                {
                  v50 = *(_QWORD *)(a1 + 72);
                  v51 = v48 - 1;
                  if ( v50 )
                  {
                    --v50;
                    v51 = v49 + v50;
                    v48 += v50;
                  }
                  v52 = *(_QWORD *)(a1 + 64);
                  if ( *(_QWORD *)(a1 + 80) < v48 )
                  {
                    v58 = v51;
                    v60 = v49;
                    v56 = qvector_reserve(a1 + 64, v52, v48, 1);
                    v49 = v60;
                    v51 = v58;
                    *(_QWORD *)(a1 + 64) = v56;
                    v52 = v56;
                  }
                  *(_QWORD *)(a1 + 72) = v48;
                  *(_BYTE *)(v52 + v51) = 0;
                  memcpy((void *)(v50 + *(_QWORD *)(a1 + 64)), *(const void **)(v23 + 16), v49);
                }
              }
              sub_333A60(a1, v23 + 64);
              sub_333670((__int64 *)(a1 + 64), v5);
            }
            v23 += 144;
            ++*(_DWORD *)(*(_QWORD *)(a1 + 88) + 4LL * *(_QWORD *)(a1 + 96) - 4);
            v22 = *(_QWORD *)&v61[8];
            v26 = *(_QWORD *)v61;
          }
          while ( v23 != *(_QWORD *)v61 + 144LL * *(_QWORD *)&v61[8] );
          v24 = *(_QWORD *)(a1 + 96);
        }
        if ( v24 )
          *(_QWORD *)(a1 + 96) = v24 - 1;
        if ( v26 )
        {
          v27 = 0;
          if ( v22 )
          {
            do
            {
              v28 = (_QWORD *)(v26 + 144 * v27);
              clear_tinfo_t();
              v29 = v28[5];
              if ( v29 )
              {
                v28[6] = 0;
                qfree(v29);
              }
              v30 = v28[2];
              if ( v30 )
              {
                v28[3] = 0;
                qfree(v30);
              }
              ++v27;
              v26 = *(_QWORD *)v61;
            }
            while ( v22 != v27 );
          }
          *(_QWORD *)&v61[8] = 0;
          qfree(v26);
        }
      }
    }
    else
    {
      v34 = *(_QWORD *)(a1 + 56);
      memset(v62, 0, sizeof(v62));
      v64 = 1;
      v65 = -1;
      v66 = 0;
      v67 = 0;
      memset(v61, 0, sizeof(v61));
      v63[0] = 0;
      if ( (unsigned int)sub_32D810((__int128 *)v61, v3, v34) != -1 )
      {
        v35 = *(_QWORD *)(a1 + 72);
        if ( v35 > 1 )
        {
          v36 = *(_QWORD *)(a1 + 64);
          if ( *(_BYTE *)(v36 + v35 - 2) != 46 )
          {
            if ( *(_QWORD *)(a1 + 80) < v35 + 1 )
            {
              v55 = qvector_reserve(a1 + 64, v36, v35 + 1, 1);
              *(_QWORD *)(a1 + 64) = v55;
              v36 = v55;
            }
            *(_QWORD *)(a1 + 72) = v35 + 1;
            *(_BYTE *)(v36 + v35 - 1) = 46;
            *(_BYTE *)(*(_QWORD *)(a1 + 64) + v35) = 0;
          }
        }
        v37 = *(_QWORD *)&v61[24];
        if ( *(_QWORD *)&v61[24] )
        {
          v38 = *(_QWORD *)&v61[24] - 1LL;
          if ( *(_QWORD *)&v61[24] != 1 )
          {
            v39 = *(_QWORD *)(a1 + 72);
            v40 = *(_QWORD *)&v61[24] - 1LL;
            if ( v39 )
            {
              --v39;
              v40 = v38 + v39;
              v37 = *(_QWORD *)&v61[24] + v39;
            }
            v41 = *(_QWORD *)(a1 + 64);
            if ( *(_QWORD *)(a1 + 80) < v37 )
            {
              v59 = v40;
              v57 = qvector_reserve(a1 + 64, v41, v37, 1);
              *(_QWORD *)(a1 + 64) = v57;
              v40 = v59;
              v41 = v57;
            }
            *(_QWORD *)(a1 + 72) = v37;
            *(_BYTE *)(v41 + v40) = 0;
            memcpy((void *)(v39 + *(_QWORD *)(a1 + 64)), *(const void **)&v61[16], v38);
          }
        }
        *(_QWORD *)(a1 + 56) -= *(_QWORD *)v61 >> 3;
        sub_333A60(a1, v63);
        *(_QWORD *)(a1 + 56) += *(_QWORD *)v61 >> 3;
        sub_333670((__int64 *)(a1 + 64), (int)v5);
      }
      clear_tinfo_t();
      if ( *(_QWORD *)v62 )
      {
        *(_QWORD *)&v62[8] = 0;
        qfree(*(__int64 *)v62);
      }
      if ( *(_QWORD *)&v61[16] )
      {
        *(_QWORD *)&v61[24] = 0;
        qfree(*(__int64 *)&v61[16]);
      }
    }
  }
  return v68 - __readfsqword(0x28u);
}
