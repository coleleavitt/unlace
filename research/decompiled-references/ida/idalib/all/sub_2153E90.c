__int64 __fastcall sub_2153E90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  __m128i *v13; // r14
  char *v14; // r13
  __m128i *v15; // rbx
  __m128i *v16; // rax
  unsigned __int64 v17; // r14
  __int64 v18; // rbx
  size_t v20; // rdx
  __int64 v21; // rdx
  unsigned int v22; // ecx
  int v23; // eax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r13
  __m128i v26; // xmm2
  bool v27; // cc
  void *v28; // rdi
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  void *v32; // rdi
  __int64 v33; // rsi
  unsigned __int64 v34; // r15
  __int64 v35; // rax
  unsigned __int64 v36; // rsi
  __int64 v37; // rax
  unsigned __int64 v38; // rdi
  __m128 *v39; // rcx
  __int64 v40; // rax
  __m128i v41; // xmm4
  int v42; // esi
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // r13
  __int64 v46; // rbx
  unsigned __int64 v47; // r14
  __m128i v48; // xmm3
  void *v49; // rdi
  __int64 v50; // rax
  __m128i v51; // xmm5
  unsigned int v52; // eax
  unsigned __int64 v53; // rsi
  void *v54; // rbx
  void *v55; // rdi
  __int32 v56; // r15d
  void *v57; // rdi
  __int32 v58; // r13d
  __m128i v59; // xmm6
  unsigned int v60; // eax
  unsigned __int64 v61; // rcx
  char *v62; // r13
  __m128 *v63; // [rsp+0h] [rbp-E8h]
  __m128 *v64; // [rsp+8h] [rbp-E0h]
  __m128 v65; // [rsp+10h] [rbp-D8h] BYREF
  void *v66; // [rsp+28h] [rbp-C0h]
  unsigned int v67; // [rsp+30h] [rbp-B8h]
  __int64 v68; // [rsp+40h] [rbp-A8h] BYREF
  void *ptr; // [rsp+48h] [rbp-A0h] BYREF
  __m128i si128; // [rsp+50h] [rbp-98h]
  _BYTE v71[64]; // [rsp+60h] [rbp-88h] BYREF
  __int128 v72; // [rsp+A0h] [rbp-48h]

  v68 = a2;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  ptr = v71;
  v72 = 0;
  sub_22538C0(a3, &ptr);
  v10 = *(unsigned int *)(a1 + 232);
  v11 = *(unsigned int *)(a1 + 236);
  *(_QWORD *)&v72 = a4;
  *((_QWORD *)&v72 + 1) = a5;
  v12 = v10 + 1;
  if ( v10 + 1 > v11 )
  {
    v53 = *(_QWORD *)(a1 + 224);
    v54 = (void *)(a1 + 240);
    if ( v53 > (unsigned __int64)&v68 || (unsigned __int64)&v68 >= v53 + 112 * v10 )
    {
      v13 = (__m128i *)sub_2237400(a1 + 224, a1 + 240, v12, 112, &v65);
      sub_2153D20(a1 + 224, v13);
      v57 = *(void **)(a1 + 224);
      v58 = v65.m128_i32[0];
      if ( v54 != v57 )
        free(v57);
      *(_DWORD *)(a1 + 236) = v58;
      v10 = *(unsigned int *)(a1 + 232);
      v14 = (char *)&v68;
      *(_QWORD *)(a1 + 224) = v13;
    }
    else
    {
      v13 = (__m128i *)sub_2237400(a1 + 224, a1 + 240, v12, 112, &v65);
      sub_2153D20(a1 + 224, v13);
      v55 = *(void **)(a1 + 224);
      v56 = v65.m128_i32[0];
      if ( v54 != v55 )
        free(v55);
      *(_QWORD *)(a1 + 224) = v13;
      v14 = (char *)&v68 + (_QWORD)v13 - v53;
      v10 = *(unsigned int *)(a1 + 232);
      *(_DWORD *)(a1 + 236) = v56;
    }
  }
  else
  {
    v13 = *(__m128i **)(a1 + 224);
    v14 = (char *)&v68;
  }
  v15 = &v13[7 * v10];
  v15->m128i_i64[0] = *(_QWORD *)v14;
  v16 = v15 + 2;
  v15[1].m128i_i64[0] = 0;
  v15[1].m128i_i64[1] = 64;
  v17 = *((_QWORD *)v14 + 2);
  v15->m128i_i64[1] = (__int64)v15[2].m128i_i64;
  if ( v17 && &v15->m128i_u64[1] != (unsigned __int64 *)(v14 + 8) )
  {
    v20 = v17;
    if ( v17 <= 0x40
      || (sub_2236E10(&v15->m128i_u64[1], &v15[2], v17, 1),
          v20 = *((_QWORD *)v14 + 2),
          v16 = (__m128i *)v15->m128i_i64[1],
          v20) )
    {
      memcpy(v16, *((const void **)v14 + 1), v20);
    }
    v15[1].m128i_i64[0] = v17;
  }
  v15[6] = _mm_loadu_si128((const __m128i *)v14 + 6);
  v18 = *(_QWORD *)(a1 + 48);
  ++*(_DWORD *)(a1 + 232);
  if ( *(_DWORD *)v18 == 1 )
  {
    v21 = *(unsigned int *)(a1 + 56);
    *(_BYTE *)(a1 + 177) = 0;
    v22 = -858993459;
    v23 = v21;
    v24 = 40 * v21;
    v25 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v24 - 40) >> 3);
    if ( v24 > 0x28 )
    {
      do
      {
        v26 = _mm_loadu_si128((const __m128i *)(v18 + 48));
        v27 = *(_DWORD *)(v18 + 32) <= 0x40u;
        *(_DWORD *)v18 = *(_DWORD *)(v18 + 40);
        *(__m128i *)(v18 + 8) = v26;
        if ( !v27 )
        {
          v28 = *(void **)(v18 + 24);
          if ( v28 )
            operator delete[](v28);
        }
        v29 = *(_QWORD *)(v18 + 64);
        v18 += 40;
        *(_QWORD *)(v18 - 16) = v29;
        LODWORD(v29) = *(_DWORD *)(v18 + 32);
        *(_DWORD *)(v18 + 32) = 0;
        *(_DWORD *)(v18 - 8) = v29;
        --v25;
      }
      while ( v25 );
      v23 = *(_DWORD *)(a1 + 56);
      v18 = *(_QWORD *)(a1 + 48);
    }
    v30 = (unsigned int)(v23 - 1);
    *(_DWORD *)(a1 + 56) = v30;
    v31 = v18 + 40 * v30;
    if ( *(_DWORD *)(v31 + 32) > 0x40u )
    {
      v32 = *(void **)(v31 + 24);
      if ( v32 )
        operator delete[](v32);
    }
    if ( !*(_DWORD *)(a1 + 56) )
    {
      sub_2127580(&v65, a1 + 48, v24, v22, v8, v9);
      v33 = *(unsigned int *)(a1 + 56);
      v34 = *(_QWORD *)(a1 + 48);
      v35 = 5 * v33;
      v36 = v33 + 1;
      v37 = 8 * v35;
      v38 = v34 + v37;
      if ( v34 == v34 + v37 )
      {
        if ( v36 > *(unsigned int *)(a1 + 60) )
        {
          sub_2131530(a1 + 48, v36);
          v38 = *(_QWORD *)(a1 + 48) + 40LL * *(unsigned int *)(a1 + 56);
        }
        v59 = _mm_loadu_si128((const __m128i *)&v65.m128_u16[4]);
        *(_DWORD *)v38 = v65.m128_i32[0];
        v60 = v67;
        *(__m128i *)(v38 + 8) = v59;
        *(_DWORD *)(v38 + 32) = v60;
        if ( v60 > 0x40 )
          sub_2205510(v38 + 24);
        else
          *(_QWORD *)(v38 + 24) = v66;
        ++*(_DWORD *)(a1 + 56);
      }
      else
      {
        v39 = &v65;
        v64 = &v65;
        if ( v36 > *(unsigned int *)(a1 + 60) )
        {
          if ( v34 > (unsigned __int64)&v65 || v38 <= (unsigned __int64)&v65 )
          {
            sub_2131530(a1 + 48, v36);
            v34 = *(_QWORD *)(a1 + 48);
            v39 = &v65;
            v37 = 40LL * *(unsigned int *)(a1 + 56);
            v38 = v34 + v37;
          }
          else
          {
            v62 = (char *)&v65 - v34;
            sub_2131530(a1 + 48, v36);
            v34 = *(_QWORD *)(a1 + 48);
            v39 = (__m128 *)&v62[v34];
            v37 = 40LL * *(unsigned int *)(a1 + 56);
            v64 = (__m128 *)&v62[v34];
            v38 = v34 + v37;
          }
        }
        v40 = v34 + v37 - 40;
        v41 = _mm_loadu_si128((const __m128i *)(v40 + 8));
        *(_DWORD *)v38 = *(_DWORD *)v40;
        v42 = *(_DWORD *)(v40 + 32);
        *(__m128i *)(v38 + 8) = v41;
        *(_DWORD *)(v38 + 32) = v42;
        *(_QWORD *)(v38 + 24) = *(_QWORD *)(v40 + 24);
        v43 = *(_QWORD *)(a1 + 48);
        *(_DWORD *)(v40 + 32) = 0;
        v44 = *(unsigned int *)(a1 + 56);
        v45 = v43 + 40 * v44 - 40;
        v46 = v43 + 40 * v44;
        v47 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v45 - v34) >> 3);
        if ( (__int64)(v45 - v34) > 0 )
        {
          do
          {
            v45 -= 40;
            v46 -= 40;
            v48 = _mm_loadu_si128((const __m128i *)(v45 + 8));
            v27 = *(_DWORD *)(v46 + 32) <= 0x40u;
            *(_DWORD *)v46 = *(_DWORD *)v45;
            *(__m128i *)(v46 + 8) = v48;
            if ( !v27 )
            {
              v49 = *(void **)(v46 + 24);
              if ( v49 )
              {
                v63 = v39;
                operator delete[](v49);
                v39 = v63;
              }
            }
            *(_QWORD *)(v46 + 24) = *(_QWORD *)(v45 + 24);
            *(_DWORD *)(v46 + 32) = *(_DWORD *)(v45 + 32);
            *(_DWORD *)(v45 + 32) = 0;
            --v47;
          }
          while ( v47 );
          LODWORD(v44) = *(_DWORD *)(a1 + 56);
          v43 = *(_QWORD *)(a1 + 48);
        }
        v50 = (unsigned int)(v44 + 1);
        *(_DWORD *)(a1 + 56) = v50;
        if ( v34 <= (unsigned __int64)v64 && v43 + 40 * v50 > (unsigned __int64)v64 )
          v39 = (__m128 *)((char *)v39 + 40);
        v51 = _mm_loadu_si128((const __m128i *)&v39->m128_u16[4]);
        v27 = *(_DWORD *)(v34 + 32) <= 0x40u;
        *(_DWORD *)v34 = v39->m128_i32[0];
        *(__m128i *)(v34 + 8) = v51;
        if ( v27 && (v52 = v39[2].m128_u32[0], v52 <= 0x40) )
        {
          v61 = v39[1].m128_u64[1];
          *(_DWORD *)(v34 + 32) = v52;
          *(_QWORD *)(v34 + 24) = v61;
        }
        else
        {
          sub_22056A0(v34 + 24, &v39[1].m128_u16[4]);
        }
      }
      if ( v67 > 0x40 && v66 )
        operator delete[](v66);
    }
  }
  if ( ptr != v71 )
    free(ptr);
  return 1;
}
