unsigned __int64 __fastcall sub_32F480(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v6; // r12
  char tinfo_property; // al
  __int64 v8; // rdi
  size_t v10; // r12
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r12
  __int64 v15; // rax
  __m128i si128; // xmm0
  __int64 v17; // rax
  __m128i v18; // xmm1
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 v25; // r14
  __int64 v26; // rax
  bool v27; // zf
  __int64 v28; // rdi
  __int64 v29; // r12
  _QWORD *v30; // rbx
  __int64 v31; // rdi
  __int64 v32; // rdi
  unsigned int tinfo_size; // eax
  unsigned __int64 v34; // rbp
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rdx
  unsigned int v37; // eax
  char *v38; // rsi
  unsigned __int64 v39; // r15
  __int64 v40; // rdx
  unsigned __int64 v41; // rbp
  __int64 v42; // rsi
  unsigned __int64 v43; // rbp
  size_t v44; // r15
  __int64 v45; // r14
  __int64 v46; // r8
  __int64 v47; // rsi
  __int64 v48; // rax
  void *v49; // rax
  const void *v50; // rsi
  void *v51; // rax
  const void *v52; // rsi
  unsigned __int64 v53; // rbp
  __int64 v54; // rsi
  unsigned __int64 v55; // rbp
  size_t v56; // r8
  __int64 v57; // r15
  size_t v58; // r9
  __int64 v59; // rsi
  __int64 v60; // rax
  __int64 v61; // r12
  __int64 v62; // rbp
  _QWORD *v63; // rbx
  __int64 v64; // rdi
  __int64 v65; // rdi
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  size_t v70; // [rsp+0h] [rbp-F8h]
  __int64 v71; // [rsp+0h] [rbp-F8h]
  size_t v72; // [rsp+8h] [rbp-F0h]
  _BYTE v73[40]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v74[24]; // [rsp+48h] [rbp-B0h] BYREF
  _OWORD v75[3]; // [rsp+60h] [rbp-98h] BYREF
  __int64 v76; // [rsp+90h] [rbp-68h]
  int v77; // [rsp+98h] [rbp-60h]
  __int64 v78; // [rsp+A0h] [rbp-58h]
  char v79; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v80; // [rsp+B8h] [rbp-40h]

  v3 = *a2;
  v80 = __readfsqword(0x28u);
  if ( ((get_tinfo_property(v3, 2) & 0x2F) != 0xD || (*(_BYTE *)(a1 + 120) & 1) != 0)
    && (!*(_QWORD *)(a1 + 56) || (*(_BYTE *)(a1 + 120) & 2) == 0) )
  {
    copy_tinfo_t(a1 + 112, a2);
    v10 = *(_QWORD *)(a1 + 72);
    *(_OWORD *)v73 = *(unsigned __int64 *)(a1 + 56);
    *(_OWORD *)&v73[16] = 0;
    if ( v10 )
    {
      v51 = (void *)qalloc_or_throw(v10);
      v52 = *(const void **)(a1 + 64);
      *(_QWORD *)&v73[24] = v10;
      *(_QWORD *)&v73[8] = v51;
      memcpy(v51, v52, v10);
      *(_QWORD *)&v73[16] = v10;
    }
    v11 = *(_QWORD *)(a1 + 96);
    *(_QWORD *)&v73[32] = 0;
    *(_OWORD *)v74 = 0;
    if ( v11 )
    {
      v49 = (void *)qalloc_or_throw(4 * v11);
      v50 = *(const void **)(a1 + 88);
      *(_QWORD *)&v73[32] = v49;
      *(_QWORD *)&v74[8] = v11;
      memcpy(v49, v50, 4 * v11);
      *(_QWORD *)v74 = v11;
    }
    *(_QWORD *)&v74[16] = 0;
    copy_tinfo_t(&v74[16], a1 + 112);
    v12 = *(_QWORD *)(a1 + 8);
    v13 = *(_QWORD *)a1;
    if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v12 + 1) )
    {
      v48 = qvector_reserve(a1, v13, v12 + 1, 64);
      *(_QWORD *)a1 = v48;
      v12 = *(_QWORD *)(a1 + 8);
      v13 = v48;
    }
    v14 = v13 + (v12 << 6);
    *(_QWORD *)v14 = *(_QWORD *)v73;
    v15 = *(_QWORD *)&v73[8];
    *(_QWORD *)&v73[8] = 0;
    si128 = _mm_load_si128((const __m128i *)&v73[16]);
    *(_QWORD *)(v14 + 8) = v15;
    *(__m128i *)(v14 + 16) = si128;
    v17 = *(_QWORD *)&v73[32];
    v18 = _mm_loadu_si128((const __m128i *)v74);
    memset(&v73[16], 0, 24);
    *(_OWORD *)v74 = 0;
    *(_QWORD *)(v14 + 32) = v17;
    *(_QWORD *)(v14 + 56) = 0;
    *(__m128i *)(v14 + 40) = v18;
    copy_tinfo_t(v14 + 56, &v74[16]);
    ++*(_QWORD *)(a1 + 8);
    clear_tinfo_t(&v74[16]);
    if ( *(_QWORD *)&v73[32] )
    {
      *(_QWORD *)v74 = 0;
      qfree(*(_QWORD *)&v73[32]);
    }
    if ( *(_QWORD *)&v73[8] )
    {
      *(_QWORD *)&v73[16] = 0;
      qfree(*(_QWORD *)&v73[8]);
    }
    v19 = *(_QWORD *)(a1 + 96);
    if ( v19 == *(_QWORD *)(a1 + 32) )
    {
      if ( v19 )
      {
        v20 = 0;
        while ( *(_DWORD *)(*(_QWORD *)(a1 + 88) + 4 * v20) == *(_DWORD *)(*(_QWORD *)(a1 + 24) + 4 * v20) )
        {
          if ( v19 == ++v20 )
            goto LABEL_52;
        }
      }
      else
      {
LABEL_52:
        *(_QWORD *)(a1 + 48) = *(_QWORD *)(a1 + 8) - 1LL;
      }
    }
  }
  v5 = *(_QWORD *)(a1 + 72);
  v6 = (int)v5 - 1;
  if ( !v5 )
    v6 = 0;
  tinfo_property = get_tinfo_property(*a2, 2);
  v8 = *a2;
  if ( (tinfo_property & 0xF) == 0xB )
  {
    *(_OWORD *)v73 = 0u;
    if ( (unsigned __int8)get_tinfo_details(v8, 11, v73) && (tinfo_size = get_tinfo_size(0, *(_QWORD *)v73, 0)) != 0 )
    {
      v34 = tinfo_size;
      v35 = *(_QWORD *)(a1 + 56) / (unsigned __int64)tinfo_size;
      if ( *(_DWORD *)&v73[12] - 1 < (unsigned int)v35 )
      {
        if ( !under_debugger )
          sub_37EEE0(51684);
        BUG();
      }
      v36 = *(_QWORD *)(a1 + 72);
      v37 = *(_DWORD *)&v73[8] + v35;
      v38 = "%d";
      if ( v36 > 1 )
      {
        v38 = "[%d]";
        if ( *(_BYTE *)(*(_QWORD *)(a1 + 64) + v36 - 2) == 46 )
          v38 = "%d";
      }
      sub_F7090((__int64 *)(a1 + 64), (__int64)v38, v37);
      v39 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)(a1 + 56) = v39 % v34;
      sub_32F480(a1, v73);
      *(_QWORD *)(a1 + 56) = v39;
      sub_32F080((__int64 *)(a1 + 64), (int)v6);
      clear_tinfo_t(v73);
    }
    else
    {
      clear_tinfo_t(v73);
    }
    return v80 - __readfsqword(0x28u);
  }
  if ( (get_tinfo_property(v8, 2) & 0x2F) != 0xD )
    return v80 - __readfsqword(0x28u);
  if ( (get_tinfo_property(*a2, 2) & 0x3F) == 0x1D )
  {
    v21 = *a2;
    *(_DWORD *)&v74[8] = 1;
    memset(v73, 0, sizeof(v73));
    *(_QWORD *)v74 = 0;
    if ( !(unsigned __int8)get_tinfo_details(v21, 13, v73) )
    {
      v28 = *(_QWORD *)v73;
      if ( !*(_QWORD *)v73 )
        return v80 - __readfsqword(0x28u);
      v61 = *(_QWORD *)&v73[8];
      if ( *(_QWORD *)&v73[8] )
      {
        v62 = 0;
        do
        {
          v63 = (_QWORD *)(v28 + 144 * v62);
          clear_tinfo_t(v63 + 8);
          v64 = v63[5];
          if ( v64 )
          {
            v63[6] = 0;
            qfree(v64);
          }
          v65 = v63[2];
          if ( v65 )
          {
            v63[3] = 0;
            qfree(v65);
          }
          ++v62;
          v28 = *(_QWORD *)v73;
        }
        while ( v61 != v62 );
      }
      goto LABEL_45;
    }
    v22 = *(_QWORD *)(a1 + 96);
    v23 = *(_QWORD *)(a1 + 88);
    if ( *(_QWORD *)(a1 + 104) < (unsigned __int64)(v22 + 1) )
    {
      v60 = qvector_reserve(a1 + 88, v23, v22 + 1, 4);
      *(_QWORD *)(a1 + 88) = v60;
      v23 = v60;
      v22 = *(_QWORD *)(a1 + 96);
    }
    *(_DWORD *)(v23 + 4 * v22) = 0;
    v24 = *(_QWORD *)&v73[8];
    v25 = *(_QWORD *)v73;
    v26 = *(_QWORD *)(a1 + 96) + 1LL;
    v27 = 144LL * *(_QWORD *)&v73[8] == 0;
    v28 = *(_QWORD *)v73;
    *(_QWORD *)(a1 + 96) = v26;
    if ( !v27 )
    {
      do
      {
        if ( *(_QWORD *)(a1 + 56) < *(_QWORD *)(v25 + 8) >> 3 )
        {
          v53 = *(_QWORD *)(a1 + 72);
          if ( v53 > 1 )
          {
            v54 = *(_QWORD *)(a1 + 64);
            if ( *(_BYTE *)(v54 + v53 - 2) != 46 )
            {
              if ( *(_QWORD *)(a1 + 80) < v53 + 1 )
              {
                v66 = qvector_reserve(a1 + 64, v54, v53 + 1, 1);
                *(_QWORD *)(a1 + 64) = v66;
                v54 = v66;
              }
              *(_QWORD *)(a1 + 72) = v53 + 1;
              *(_BYTE *)(v54 + v53 - 1) = 46;
              *(_BYTE *)(*(_QWORD *)(a1 + 64) + v53) = 0;
            }
          }
          v55 = *(_QWORD *)(v25 + 24);
          if ( v55 )
          {
            v56 = v55 - 1;
            if ( v55 != 1 )
            {
              v57 = *(_QWORD *)(a1 + 72);
              v58 = v55 - 1;
              if ( v57 )
              {
                --v57;
                v58 = v56 + v57;
                v55 += v57;
              }
              v59 = *(_QWORD *)(a1 + 64);
              if ( *(_QWORD *)(a1 + 80) < v55 )
              {
                v70 = v58;
                v72 = v56;
                v68 = qvector_reserve(a1 + 64, v59, v55, 1);
                v56 = v72;
                v58 = v70;
                *(_QWORD *)(a1 + 64) = v68;
                v59 = v68;
              }
              *(_QWORD *)(a1 + 72) = v55;
              *(_BYTE *)(v59 + v58) = 0;
              memcpy((void *)(v57 + *(_QWORD *)(a1 + 64)), *(const void **)(v25 + 16), v56);
            }
          }
          sub_32F480(a1, v25 + 64);
          sub_32F080((__int64 *)(a1 + 64), v6);
        }
        v25 += 144;
        ++*(_DWORD *)(*(_QWORD *)(a1 + 88) + 4LL * *(_QWORD *)(a1 + 96) - 4);
        v24 = *(_QWORD *)&v73[8];
        v28 = *(_QWORD *)v73;
      }
      while ( v25 != *(_QWORD *)v73 + 144LL * *(_QWORD *)&v73[8] );
      v26 = *(_QWORD *)(a1 + 96);
    }
    if ( v26 )
      *(_QWORD *)(a1 + 96) = v26 - 1;
    if ( v28 )
    {
      v29 = 0;
      if ( v24 )
      {
        do
        {
          v30 = (_QWORD *)(v28 + 144 * v29);
          clear_tinfo_t(v30 + 8);
          v31 = v30[5];
          if ( v31 )
          {
            v30[6] = 0;
            qfree(v31);
          }
          v32 = v30[2];
          if ( v32 )
          {
            v30[3] = 0;
            qfree(v32);
          }
          ++v29;
          v28 = *(_QWORD *)v73;
        }
        while ( v24 != v29 );
      }
LABEL_45:
      *(_QWORD *)&v73[8] = 0;
      qfree(v28);
    }
  }
  else
  {
    v40 = *(_QWORD *)(a1 + 56);
    memset(v74, 0, sizeof(v74));
    v76 = 1;
    v77 = -1;
    v78 = 0;
    v79 = 0;
    memset(v73, 0, sizeof(v73));
    v75[0] = 0;
    if ( (unsigned int)sub_3294D0((__int128 *)v73, a2, v40, 0) != -1 )
    {
      v41 = *(_QWORD *)(a1 + 72);
      if ( v41 > 1 )
      {
        v42 = *(_QWORD *)(a1 + 64);
        if ( *(_BYTE *)(v42 + v41 - 2) != 46 )
        {
          if ( *(_QWORD *)(a1 + 80) < v41 + 1 )
          {
            v67 = qvector_reserve(a1 + 64, v42, v41 + 1, 1);
            *(_QWORD *)(a1 + 64) = v67;
            v42 = v67;
          }
          *(_QWORD *)(a1 + 72) = v41 + 1;
          *(_BYTE *)(v42 + v41 - 1) = 46;
          *(_BYTE *)(*(_QWORD *)(a1 + 64) + v41) = 0;
        }
      }
      v43 = *(_QWORD *)&v73[24];
      if ( *(_QWORD *)&v73[24] )
      {
        v44 = *(_QWORD *)&v73[24] - 1LL;
        if ( *(_QWORD *)&v73[24] != 1 )
        {
          v45 = *(_QWORD *)(a1 + 72);
          v46 = *(_QWORD *)&v73[24] - 1LL;
          if ( v45 )
          {
            --v45;
            v46 = v44 + v45;
            v43 = *(_QWORD *)&v73[24] + v45;
          }
          v47 = *(_QWORD *)(a1 + 64);
          if ( *(_QWORD *)(a1 + 80) < v43 )
          {
            v71 = v46;
            v69 = qvector_reserve(a1 + 64, v47, v43, 1);
            *(_QWORD *)(a1 + 64) = v69;
            v46 = v71;
            v47 = v69;
          }
          *(_QWORD *)(a1 + 72) = v43;
          *(_BYTE *)(v47 + v46) = 0;
          memcpy((void *)(v45 + *(_QWORD *)(a1 + 64)), *(const void **)&v73[16], v44);
        }
      }
      *(_QWORD *)(a1 + 56) -= *(_QWORD *)v73 >> 3;
      sub_32F480(a1, v75);
      *(_QWORD *)(a1 + 56) += *(_QWORD *)v73 >> 3;
      sub_32F080((__int64 *)(a1 + 64), (int)v6);
    }
    clear_tinfo_t(v75);
    if ( *(_QWORD *)v74 )
    {
      *(_QWORD *)&v74[8] = 0;
      qfree(*(_QWORD *)v74);
    }
    if ( *(_QWORD *)&v73[16] )
    {
      *(_QWORD *)&v73[24] = 0;
      qfree(*(_QWORD *)&v73[16]);
    }
  }
  return v80 - __readfsqword(0x28u);
}
