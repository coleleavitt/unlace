__int64 __fastcall sub_2132640(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v8; // rsi
  unsigned __int64 v9; // rdx
  __int16 v10; // ax
  bool v11; // zf
  unsigned int v12; // r14d
  __int64 v14; // rax
  __int64 v15; // r8
  __m128 *v16; // r9
  unsigned int *v17; // rsi
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  unsigned int *v21; // r12
  int v22; // eax
  unsigned int v23; // ecx
  unsigned __int64 v24; // rbp
  __m128i v25; // xmm0
  bool v26; // cc
  void *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int *v30; // rax
  void *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rsi
  unsigned __int64 v34; // r14
  __int64 v35; // rdx
  unsigned __int64 v36; // rsi
  __int64 v37; // rdx
  unsigned __int64 v38; // rdi
  __m128 *p_s1; // rbp
  __int64 v40; // rdx
  __m128i v41; // xmm2
  int v42; // esi
  __int64 v43; // rdi
  unsigned int v44; // r10d
  __int64 v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // r12
  unsigned __int64 v48; // rsi
  __m128i v49; // xmm1
  void *v50; // rdi
  __int64 v51; // rdx
  __m128i v52; // xmm3
  unsigned int v53; // edx
  unsigned __int64 v54; // rcx
  __int64 v55; // rax
  unsigned __int64 v56; // rdx
  __m128i v57; // xmm4
  unsigned int v58; // eax
  unsigned __int64 v59; // r12
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // rdx
  unsigned __int64 v62; // rax
  size_t v63; // rbp
  unsigned __int64 v64; // rax
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // r12
  unsigned __int64 v67; // rax
  unsigned __int64 v68; // rax
  char v69; // al
  char *v70; // rbp
  char v71; // dl
  void *s2a; // [rsp+8h] [rbp-B0h]
  void *s2; // [rsp+8h] [rbp-B0h]
  __m128 *v74; // [rsp+18h] [rbp-A0h]
  char v75; // [rsp+27h] [rbp-91h]
  __int64 v76; // [rsp+28h] [rbp-90h]
  __int64 v77; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v78; // [rsp+38h] [rbp-80h]
  __int64 v79; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v80; // [rsp+48h] [rbp-70h]
  __m128 s1; // [rsp+50h] [rbp-68h] BYREF
  void *v82; // [rsp+68h] [rbp-50h]
  unsigned int v83; // [rsp+70h] [rbp-48h]

  v75 = a2;
  v8 = *(char **)(a1 + 320);
  if ( v8 == *(char **)(a1 + 328) )
  {
    sub_212FB50(a1 + 312, v8, a1 + 300);
  }
  else
  {
    v9 = *(unsigned int *)(a1 + 300);
    v10 = *(_WORD *)(a1 + 304);
    v8 += 8;
    *((_DWORD *)v8 - 2) = v9;
    *((_WORD *)v8 - 2) = v10;
    *(_QWORD *)(a1 + 320) = v8;
  }
  v11 = *(_BYTE *)(a1 + 305) == 0;
  *(_DWORD *)(a1 + 300) = 1;
  if ( v11 )
  {
    v14 = sub_2153C00(a1);
    v76 = sub_2124B50(v14);
    while ( 1 )
    {
      v17 = *(unsigned int **)(a1 + 48);
      v18 = *v17;
      if ( (unsigned int)v18 <= 0x1A )
      {
        v19 = 67109377;
        if ( _bittest64(&v19, v18) )
          break;
      }
      v20 = *(unsigned int *)(a1 + 56);
      *(_BYTE *)(a1 + 177) = 0;
      v21 = v17 + 10;
      v22 = v20;
      v23 = 40 * v20;
      v24 = 0xCCCCCCCCCCCCCCCDLL * ((40 * v20 - 40) >> 3);
      if ( (unsigned __int64)(40 * v20) > 0x28 )
      {
        do
        {
          v25 = _mm_loadu_si128((const __m128i *)(v21 + 2));
          v26 = *(v21 - 2) <= 0x40;
          *(v21 - 10) = *v21;
          *((__m128i *)v21 - 2) = v25;
          if ( !v26 )
          {
            v27 = *((void **)v21 - 2);
            if ( v27 )
              operator delete[](v27);
          }
          v28 = *((_QWORD *)v21 + 3);
          v21 += 10;
          *((_QWORD *)v21 - 7) = v28;
          LODWORD(v28) = *(v21 - 2);
          *(v21 - 2) = 0;
          *(v21 - 12) = v28;
          --v24;
        }
        while ( v24 );
        v22 = *(_DWORD *)(a1 + 56);
        v17 = *(unsigned int **)(a1 + 48);
      }
      v29 = (unsigned int)(v22 - 1);
      *(_DWORD *)(a1 + 56) = v29;
      v30 = &v17[10 * v29];
      if ( v30[8] > 0x40 )
      {
        v31 = *((void **)v30 + 3);
        if ( v31 )
          operator delete[](v31);
      }
      v32 = *(unsigned int *)(a1 + 56);
      if ( !(_DWORD)v32 )
      {
        sub_2127580(&s1, a1 + 48, v32, v23, v15, (__int64)v16);
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
          v57 = _mm_loadu_si128((const __m128i *)&s1.m128_u16[4]);
          *(_DWORD *)v38 = s1.m128_i32[0];
          v58 = v83;
          *(__m128i *)(v38 + 8) = v57;
          *(_DWORD *)(v38 + 32) = v58;
          if ( v58 > 0x40 )
            sub_2205510(v38 + 24);
          else
            *(_QWORD *)(v38 + 24) = v82;
          ++*(_DWORD *)(a1 + 56);
        }
        else
        {
          p_s1 = &s1;
          v16 = &s1;
          if ( v36 > *(unsigned int *)(a1 + 60) )
          {
            if ( (unsigned __int64)&s1 < v34 || v38 <= (unsigned __int64)&s1 )
            {
              sub_2131530(a1 + 48, v36);
              v34 = *(_QWORD *)(a1 + 48);
              v16 = &s1;
              v37 = 40LL * *(unsigned int *)(a1 + 56);
              v38 = v34 + v37;
            }
            else
            {
              v70 = (char *)&s1 - v34;
              sub_2131530(a1 + 48, v36);
              v34 = *(_QWORD *)(a1 + 48);
              v16 = (__m128 *)&v70[v34];
              v37 = 40LL * *(unsigned int *)(a1 + 56);
              p_s1 = (__m128 *)&v70[v34];
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
          v44 = *(_DWORD *)(a1 + 56);
          v45 = 40LL * v44;
          v46 = v43 + v45 - 40;
          v47 = v43 + v45;
          v48 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(v46 - v34) >> 3);
          if ( (__int64)(v46 - v34) > 0 )
          {
            do
            {
              v46 -= 40;
              v47 -= 40;
              v49 = _mm_loadu_si128((const __m128i *)(v46 + 8));
              v26 = *(_DWORD *)(v47 + 32) <= 0x40u;
              *(_DWORD *)v47 = *(_DWORD *)v46;
              *(__m128i *)(v47 + 8) = v49;
              if ( !v26 )
              {
                v50 = *(void **)(v47 + 24);
                if ( v50 )
                {
                  v74 = v16;
                  s2a = (void *)v46;
                  operator delete[](v50);
                  v16 = v74;
                  v46 = (__int64)s2a;
                }
              }
              *(_QWORD *)(v47 + 24) = *(_QWORD *)(v46 + 24);
              *(_DWORD *)(v47 + 32) = *(_DWORD *)(v46 + 32);
              *(_DWORD *)(v46 + 32) = 0;
              --v48;
            }
            while ( v48 );
            v44 = *(_DWORD *)(a1 + 56);
            v43 = *(_QWORD *)(a1 + 48);
          }
          v51 = v44 + 1;
          *(_DWORD *)(a1 + 56) = v51;
          if ( v34 <= (unsigned __int64)p_s1 && v43 + 40 * v51 > (unsigned __int64)p_s1 )
            v16 = (__m128 *)((char *)v16 + 40);
          v26 = *(_DWORD *)(v34 + 32) <= 0x40u;
          v52 = _mm_loadu_si128((const __m128i *)&v16->m128_u16[4]);
          *(_DWORD *)v34 = v16->m128_i32[0];
          *(__m128i *)(v34 + 8) = v52;
          if ( v26 && (v53 = v16[2].m128_u32[0], v53 <= 0x40) )
          {
            v54 = v16[1].m128_u64[1];
            *(_DWORD *)(v34 + 32) = v53;
            *(_QWORD *)(v34 + 24) = v54;
          }
          else
          {
            sub_22056A0(v34 + 24, &v16[1].m128_u16[4]);
          }
        }
        if ( v83 > 0x40 && v82 )
          operator delete[](v82);
      }
    }
    v55 = sub_2153C00(a1);
    v77 = v76;
    v78 = sub_2124B50(v55) - v76;
    s1.m128_u64[0] = (unsigned __int64)"expected comma";
    LOWORD(v83) = 259;
    if ( (unsigned __int8)sub_2154510(a1, 26, &s1) )
      return 1;
    v79 = sub_2131D40(a1);
    v80 = v56;
    v12 = sub_21544B0(a1);
    if ( (_BYTE)v12 )
    {
      return 1;
    }
    else
    {
      v59 = 0;
      v60 = sub_2246FB0(&v79, asc_22E1692, 6, 0);
      v61 = v80;
      if ( v60 < v80 )
      {
        v59 = v80 - v60;
        v61 = v60;
      }
      s1.m128_u64[1] = v59;
      s1.m128_u64[0] = v79 + v61;
      v62 = sub_2247130(&s1, asc_22E1692, 6, -1) + 1;
      if ( v62 > s1.m128_u64[1] )
        v62 = s1.m128_u64[1];
      v63 = s1.m128_u64[1] - v59 + v62;
      if ( v63 > s1.m128_u64[1] )
        v63 = s1.m128_u64[1];
      s2 = (void *)s1.m128_u64[0];
      v64 = sub_2246FB0(&v77, asc_22E1692, 6, 0);
      v65 = v78;
      v66 = 0;
      if ( v64 < v78 )
      {
        v66 = v78 - v64;
        v65 = v64;
      }
      s1.m128_u64[1] = v66;
      s1.m128_u64[0] = v77 + v65;
      v67 = sub_2247130(&s1, asc_22E1692, 6, -1) + 1;
      if ( v67 > s1.m128_u64[1] )
        v67 = s1.m128_u64[1];
      v68 = s1.m128_u64[1] - v66 + v67;
      if ( v68 > s1.m128_u64[1] )
        v68 = s1.m128_u64[1];
      if ( v68 == v63 )
      {
        if ( v63 )
        {
          v71 = memcmp((const void *)s1.m128_u64[0], s2, v63) == 0;
          v69 = a2 == v71;
          v75 = a2 ^ v71;
        }
        else
        {
          v69 = a2;
          v75 = a2 ^ 1;
        }
      }
      else
      {
        v69 = a2 ^ 1;
      }
      *(_BYTE *)(a1 + 304) = v69;
      *(_BYTE *)(a1 + 305) = v75;
    }
  }
  else
  {
    sub_21319B0(a1, (void **)v8, v9, a4, a5, a6);
    return 0;
  }
  return v12;
}
