__int64 __fastcall sub_2132C70(__int64 a1, __m128 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax
  unsigned int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // r9
  int i; // edx
  __int64 v12; // rdi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  void (__fastcall *v15)(__int64, __m128 *); // rdx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  unsigned __int64 v19; // r15
  __m128i v20; // xmm0
  bool v21; // cc
  void *v22; // rdi
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  void *v26; // rdi
  _QWORD *v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // rbx
  int v30; // eax
  _QWORD *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rsi
  unsigned __int64 v34; // r15
  __int64 v35; // rax
  unsigned __int64 v36; // rsi
  __int64 v37; // rax
  unsigned __int64 v38; // rdi
  __m128 *v39; // r14
  __int64 v40; // rax
  __m128i v41; // xmm2
  int v42; // edx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rbx
  __int64 v46; // rax
  unsigned __int64 v47; // rdx
  __m128i v48; // xmm1
  void *v49; // rdi
  __int64 v50; // rsi
  __m128i v51; // xmm3
  unsigned int v52; // eax
  __m128i v53; // xmm4
  unsigned int v54; // eax
  unsigned __int64 v55; // rdx
  __int64 v56; // rbx
  void (__fastcall *v57)(__int64, __m128 *); // r12
  __int64 v58; // rax
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rax
  char *v61; // r14
  __int64 v62; // [rsp+0h] [rbp-88h]
  unsigned __int64 v63; // [rsp+8h] [rbp-80h]
  __int64 v64; // [rsp+10h] [rbp-78h]
  __m128 *v65; // [rsp+18h] [rbp-70h]
  __m128 v66; // [rsp+20h] [rbp-68h] BYREF
  void *v67; // [rsp+38h] [rbp-50h]
  unsigned int v68; // [rsp+40h] [rbp-48h]

  if ( **(_DWORD **)(a1 + 48) == 1 )
  {
    a2 = *(__m128 **)(a1 + 128);
    LOWORD(v68) = 260;
    v66.m128_u64[0] = a1 + 136;
    sub_2153E90(a1, a2, &v66, 0, 0);
  }
  if ( *(_DWORD *)sub_2153C00(a1) == 9
    && *(_QWORD *)(sub_2153C00(a1) + 16)
    && **(_BYTE **)(sub_2153C00(a1) + 8) != 10
    && **(_BYTE **)(sub_2153C00(a1) + 8) != 13
    && *(_BYTE *)(*(_QWORD *)(a1 + 40) + 370LL) )
  {
    v56 = *(_QWORD *)(a1 + 24);
    v57 = *(void (__fastcall **)(__int64, __m128 *))(*(_QWORD *)v56 + 144LL);
    v58 = sub_2153C00(a1);
    a2 = &v66;
    v59 = *(_QWORD *)(v58 + 8);
    v60 = *(_QWORD *)(v58 + 16);
    LOWORD(v68) = 261;
    v66.m128_u64[0] = v59;
    v66.m128_u64[1] = v60;
    v57(v56, &v66);
  }
  v64 = a1 + 48;
  result = sub_21318A0(a1 + 48, (__int64)a2, v3, v4, v5, v6);
  for ( i = *(_DWORD *)result; *(_DWORD *)result == 7; i = *(_DWORD *)result )
  {
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 40) + 370LL) )
    {
      v12 = *(_QWORD *)(a1 + 24);
      v13 = *(_QWORD *)(result + 8);
      v14 = *(_QWORD *)(result + 16);
      v15 = *(void (__fastcall **)(__int64, __m128 *))(*(_QWORD *)v12 + 144LL);
      LOWORD(v68) = 261;
      v66.m128_u64[0] = v13;
      v66.m128_u64[1] = v14;
      v15(v12, &v66);
    }
    v16 = *(_QWORD *)(a1 + 48);
    v17 = *(unsigned int *)(a1 + 56);
    *(_BYTE *)(a1 + 177) = *(_DWORD *)v16 == 9;
    v18 = 40 * v17;
    v19 = 0xCCCCCCCCCCCCCCCDLL * ((40 * v17 - 40) >> 3);
    if ( (unsigned __int64)(40 * v17) > 0x28 )
    {
      do
      {
        v20 = _mm_loadu_si128((const __m128i *)(v16 + 48));
        v21 = *(_DWORD *)(v16 + 32) <= 0x40u;
        *(_DWORD *)v16 = *(_DWORD *)(v16 + 40);
        *(__m128i *)(v16 + 8) = v20;
        if ( !v21 )
        {
          v22 = *(void **)(v16 + 24);
          if ( v22 )
            operator delete[](v22);
        }
        v23 = *(_QWORD *)(v16 + 64);
        v16 += 40;
        *(_QWORD *)(v16 - 16) = v23;
        LODWORD(v23) = *(_DWORD *)(v16 + 32);
        *(_DWORD *)(v16 + 32) = 0;
        *(_DWORD *)(v16 - 8) = v23;
        --v19;
      }
      while ( v19 );
      LODWORD(v17) = *(_DWORD *)(a1 + 56);
      v16 = *(_QWORD *)(a1 + 48);
    }
    v24 = (unsigned int)(v17 - 1);
    *(_DWORD *)(a1 + 56) = v24;
    v25 = v16 + 40 * v24;
    if ( *(_DWORD *)(v25 + 32) > 0x40u )
    {
      v26 = *(void **)(v25 + 24);
      if ( v26 )
        operator delete[](v26);
    }
    if ( !*(_DWORD *)(a1 + 56) )
    {
      sub_2127580(&v66, v64, v18, v8, v9, v10);
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
          sub_2131530(v64, v36);
          v38 = *(_QWORD *)(a1 + 48) + 40LL * *(unsigned int *)(a1 + 56);
        }
        v53 = _mm_loadu_si128((const __m128i *)&v66.m128_u16[4]);
        *(_DWORD *)v38 = v66.m128_i32[0];
        v54 = v68;
        *(__m128i *)(v38 + 8) = v53;
        *(_DWORD *)(v38 + 32) = v54;
        if ( v54 > 0x40 )
          sub_2205510(v38 + 24);
        else
          *(_QWORD *)(v38 + 24) = v67;
        ++*(_DWORD *)(a1 + 56);
      }
      else
      {
        v65 = &v66;
        v39 = &v66;
        if ( v36 > *(unsigned int *)(a1 + 60) )
        {
          if ( (unsigned __int64)&v66 < v34 || v38 <= (unsigned __int64)&v66 )
          {
            v39 = &v66;
            sub_2131530(v64, v36);
            v34 = *(_QWORD *)(a1 + 48);
            v37 = 40LL * *(unsigned int *)(a1 + 56);
            v38 = v34 + v37;
          }
          else
          {
            v61 = (char *)&v66 - v34;
            sub_2131530(v64, v36);
            v34 = *(_QWORD *)(a1 + 48);
            v39 = (__m128 *)&v61[v34];
            v37 = 40LL * *(unsigned int *)(a1 + 56);
            v65 = v39;
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
        v45 = v43 + 40 * v44;
        v46 = v45 - 40;
        v10 = v45 - 40 - v34;
        v47 = 0xCCCCCCCCCCCCCCCDLL * (v10 >> 3);
        if ( v10 > 0 )
        {
          do
          {
            v46 -= 40;
            v45 -= 40;
            v48 = _mm_loadu_si128((const __m128i *)(v46 + 8));
            v21 = *(_DWORD *)(v45 + 32) <= 0x40u;
            *(_DWORD *)v45 = *(_DWORD *)v46;
            *(__m128i *)(v45 + 8) = v48;
            if ( !v21 )
            {
              v49 = *(void **)(v45 + 24);
              if ( v49 )
              {
                v63 = v47;
                v62 = v46;
                operator delete[](v49);
                v47 = v63;
                v46 = v62;
              }
            }
            *(_QWORD *)(v45 + 24) = *(_QWORD *)(v46 + 24);
            *(_DWORD *)(v45 + 32) = *(_DWORD *)(v46 + 32);
            *(_DWORD *)(v46 + 32) = 0;
            --v47;
          }
          while ( v47 );
          LODWORD(v44) = *(_DWORD *)(a1 + 56);
          v43 = *(_QWORD *)(a1 + 48);
        }
        v8 = (unsigned int)v65;
        v50 = (unsigned int)(v44 + 1);
        *(_DWORD *)(a1 + 56) = v50;
        if ( (unsigned __int64)v65 >= v34 && v43 + 40 * v50 > (unsigned __int64)v65 )
          v39 = (__m128 *)((char *)v39 + 40);
        v21 = *(_DWORD *)(v34 + 32) <= 0x40u;
        v51 = _mm_loadu_si128((const __m128i *)&v39->m128_u16[4]);
        *(_DWORD *)v34 = v39->m128_i32[0];
        *(__m128i *)(v34 + 8) = v51;
        if ( v21 && (v52 = v39[2].m128_u32[0], v52 <= 0x40) )
        {
          v55 = v39[1].m128_u64[1];
          *(_DWORD *)(v34 + 32) = v52;
          *(_QWORD *)(v34 + 24) = v55;
        }
        else
        {
          sub_22056A0(v34 + 24, &v39[1].m128_u16[4]);
        }
      }
      if ( v68 > 0x40 && v67 )
        operator delete[](v67);
    }
    result = *(_QWORD *)(a1 + 48);
  }
  if ( !i )
  {
    v27 = *(_QWORD **)(a1 + 32);
    v28 = *v27 + 24LL * (unsigned int)(*(_DWORD *)(a1 + 296) - 1);
    v29 = *(_QWORD *)(v28 + 16);
    if ( v29 )
    {
      v30 = sub_2239B50(v27, *(_QWORD *)(v28 + 16));
      v31 = *(_QWORD **)(a1 + 32);
      *(_DWORD *)(a1 + 296) = v30;
      v32 = *(_QWORD *)(*v31 + 24LL * (unsigned int)(v30 - 1));
      sub_2124C60(v64, *(_QWORD *)(v32 + 8), *(_QWORD *)(v32 + 16) - *(_QWORD *)(v32 + 8), v29, 1);
      return sub_2132C70(a1);
    }
  }
  return result;
}
