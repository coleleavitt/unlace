__int64 __fastcall sub_E63F00(
        __int64 a1,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double a8,
        __m128 a9)
{
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 (*v14)(); // rax
  __int64 *v15; // rbx
  unsigned __int64 v16; // rbp
  __int64 v17; // rsi
  bool v18; // zf
  __int64 *v19; // rbx
  unsigned __int64 v20; // rbp
  __int64 v21; // rsi
  const __m128i *v23; // rax
  __m128 v24; // xmm1
  __m128 v25; // xmm0
  __int64 v26; // rax
  __m128 v27; // xmm5
  unsigned __int64 v28; // xmm5_8
  __int64 *v29; // rbp
  unsigned __int64 v30; // r15
  __int64 v31; // rsi
  _QWORD *v32; // r15
  unsigned __int64 v33; // rbp
  __int64 v34; // rsi
  __int64 v35; // rbp
  void (__fastcall *v36)(__int64, _QWORD, __m128i *); // rcx
  __int64 v37; // rax
  __int64 *v38; // r15
  __int64 *v39; // rbp
  __int64 v40; // rdi
  void (__fastcall *v41)(__int64, __m128i *); // r8
  unsigned __int64 v42; // rdx
  __int64 v43; // r13
  unsigned __int64 v44; // rsi
  __int64 v45; // rdi
  unsigned __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rdi
  void (__fastcall *v49)(__int64, __m128i *); // rcx
  unsigned __int64 v50; // rdx
  __int64 v51; // r12
  __int64 v52; // [rsp+0h] [rbp-118h]
  int v53; // [rsp+8h] [rbp-110h]
  __int64 v54; // [rsp+10h] [rbp-108h]
  __int64 v55; // [rsp+18h] [rbp-100h]
  __int64 v56; // [rsp+18h] [rbp-100h]
  __int64 v57; // [rsp+20h] [rbp-F8h]
  int v58; // [rsp+30h] [rbp-E8h]
  void (__fastcall *v59)(__int64, _QWORD, __m128i *); // [rsp+30h] [rbp-E8h]
  __int64 v60; // [rsp+38h] [rbp-E0h]
  unsigned int v61; // [rsp+48h] [rbp-D0h]
  unsigned int v62; // [rsp+4Ch] [rbp-CCh]
  int v63; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v64; // [rsp+60h] [rbp-B8h] BYREF
  __int64 *v65; // [rsp+68h] [rbp-B0h]
  __int64 v66; // [rsp+70h] [rbp-A8h] BYREF
  _QWORD *v67; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v68; // [rsp+80h] [rbp-98h] BYREF
  __int64 v69; // [rsp+88h] [rbp-90h]
  unsigned __int64 v70; // [rsp+90h] [rbp-88h] BYREF
  __int64 v71; // [rsp+98h] [rbp-80h]
  _OWORD v72[2]; // [rsp+A0h] [rbp-78h] BYREF
  __m128i v73; // [rsp+C0h] [rbp-58h] BYREF
  __m128i v74; // [rsp+D0h] [rbp-48h]

  v10 = *(_QWORD *)(a1 + 8);
  v73.m128i_i64[0] = 0;
  sub_13A5730((int)&v63, v52, v53, v54, v55, v57);
  sub_18572D0(&v73);
  v11 = *(_QWORD *)(a1 + 8);
  v12 = *(__int64 **)(a1 + 16);
  v65 = nullptr;
  v64 = v11;
  v66 = v11;
  v69 = v11;
  v71 = v11;
  v13 = *v12;
  v67 = nullptr;
  v68 = 0;
  v14 = *(__int64 (**)())(v13 + 16);
  v70 = 0;
  if ( v14 != sub_2492B0 )
  {
    v62 = ((__int64 (__fastcall *)(__int64 *, __int64))v14)(v12, v10);
    v61 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
    if ( v61 < v62 )
    {
      v56 = a1 + 48;
      do
      {
        if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) )
          break;
        v23 = (const __m128i *)(*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
                                 *(_QWORD *)(a1 + 16),
                                 v61);
        v24 = (__m128)_mm_loadu_si128(v23);
        v25 = (__m128)_mm_loadu_si128(v23 + 1);
        v26 = v23[1].m128i_i64[0];
        v28 = _mm_movehl_ps(v27, v24).m128_u64[0];
        a9 = _mm_movehl_ps(a9, v25);
        v72[0] = v24;
        v60 = v26;
        v58 = v28;
        v72[1] = v25;
        if ( v28 )
          ++*(_DWORD *)(v28 + 8);
        if ( v25.m128_u64[0] )
          ++*(_DWORD *)(v25.m128_u64[0] + 8);
        if ( a9.m128_u64[0] )
          *(_DWORD *)a9.m128_u64[0] = (*(_DWORD *)a9.m128_u64[0] + 1) & 0x3FFFFFFF
                                    | *(_DWORD *)a9.m128_u64[0] & 0xC0000000;
        v29 = v65;
        if ( v65 )
        {
          v30 = (unsigned __int64)&v65[*((unsigned int *)v65 - 1)];
          if ( (unsigned __int64)v65 >= v30 )
            goto LABEL_38;
          do
          {
            while ( 1 )
            {
              v31 = *v29;
              if ( *v29 )
              {
                v18 = (*(_DWORD *)(v31 + 8))-- == 1;
                if ( v18 )
                  break;
              }
              if ( (unsigned __int64)++v29 >= v30 )
                goto LABEL_37;
            }
            sub_15D7BC0(v64, v31);
            ++v29;
          }
          while ( (unsigned __int64)v29 < v30 );
LABEL_37:
          v29 = v65;
          if ( v65 )
LABEL_38:
            *((_DWORD *)v29 - 1) = 0;
        }
        v32 = v67;
        if ( v67 )
        {
          v33 = (unsigned __int64)&v67[*((unsigned int *)v67 - 1)];
          if ( (unsigned __int64)v67 >= v33 )
            goto LABEL_47;
          do
          {
            while ( 1 )
            {
              v34 = *v32;
              if ( *v32 )
              {
                v18 = (*(_DWORD *)(v34 + 8))-- == 1;
                if ( v18 )
                  break;
              }
              if ( (unsigned __int64)++v32 >= v33 )
                goto LABEL_46;
            }
            sub_15D7BC0(v66, v34);
            ++v32;
          }
          while ( (unsigned __int64)v32 < v33 );
LABEL_46:
          v32 = v67;
          if ( v67 )
LABEL_47:
            *((_DWORD *)v32 - 1) = 0;
        }
        sub_13A61F0(
          (unsigned int)&v63,
          v58,
          (unsigned int)&v64,
          (unsigned int)&v66,
          (unsigned int)&v70,
          (unsigned int)&v68);
        v35 = *(_QWORD *)(a1 + 16);
        v36 = *(void (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v35 + 32LL);
        if ( v68 && v60 )
        {
          v59 = *(void (__fastcall **)(__int64, _QWORD, __m128i *))(*(_QWORD *)v35 + 32LL);
          v37 = sub_15DE0E0(*(_QWORD *)(a1 + 8), v25.m128_u64[0], v68);
          v36 = v59;
        }
        else
        {
          v37 = 0;
        }
        v73 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 8)), (__m128i)v70);
        v74 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v37, (__m128i)a9.m128_u64[0]);
        if ( v70 )
          ++*(_DWORD *)(v70 + 8);
        if ( a9.m128_u64[0] )
          *(_DWORD *)a9.m128_u64[0] = (*(_DWORD *)a9.m128_u64[0] + 1) & 0x3FFFFFFF
                                    | *(_DWORD *)a9.m128_u64[0] & 0xC0000000;
        if ( v37 )
          ++*(_DWORD *)(v37 + 8);
        v36(v35, v61, &v73);
        sub_234F80(v73.m128i_i64);
        if ( v65 )
        {
          v38 = &v65[*((unsigned int *)v65 - 1)];
          if ( v38 != v65 )
          {
            v39 = v65;
            if ( a9.m128_u64[0] )
            {
              do
              {
                v43 = *v39;
                if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) )
                  break;
                sub_14BB8A0(v56, v43, &v70, &v68);
                if ( v43 != v70 )
                {
                  v40 = *(_QWORD *)(a1 + 16);
                  v41 = *(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v40 + 40LL);
                  v42 = v68;
                  v73 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 8)), (__m128i)v70);
                  v74 = _mm_unpacklo_epi64((__m128i)v68, (__m128i)a9.m128_u64[0]);
                  if ( v70 )
                    ++*(_DWORD *)(v70 + 8);
                  *(_DWORD *)a9.m128_u64[0] = (*(_DWORD *)a9.m128_u64[0] + 1) & 0x3FFFFFFF
                                            | *(_DWORD *)a9.m128_u64[0] & 0xC0000000;
                  if ( v42 )
                    ++*(_DWORD *)(v42 + 8);
                  v41(v40, &v73);
                  sub_234F80(v73.m128i_i64);
                }
                ++v39;
              }
              while ( v38 != v39 );
            }
            else
            {
              do
              {
                v51 = *v39;
                if ( !(unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) )
                  break;
                sub_14BB8A0(v56, v51, &v70, &v68);
                if ( v70 != v51 )
                {
                  v48 = *(_QWORD *)(a1 + 16);
                  v49 = *(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v48 + 40LL);
                  v50 = v68;
                  v73 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)(a1 + 8)), (__m128i)v70);
                  v74 = (__m128i)v68;
                  if ( v70 )
                    ++*(_DWORD *)(v70 + 8);
                  if ( v50 )
                    ++*(_DWORD *)(v50 + 8);
                  v49(v48, &v73);
                  sub_234F80(v73.m128i_i64);
                }
                ++v39;
              }
              while ( v38 != v39 );
            }
          }
        }
        sub_234F80((__int64 *)v72);
        ++v61;
      }
      while ( v61 != v62 );
    }
    v44 = v70;
    if ( v70 )
    {
      v45 = v71;
      v18 = (*(_DWORD *)(v70 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v45, v44);
    }
    v46 = v68;
    v47 = v69;
    if ( v68 )
    {
      v18 = (*(_DWORD *)(v68 + 8))-- == 1;
      if ( v18 )
        sub_15D7BC0(v47, v46);
    }
  }
  v15 = v67;
  if ( v67 )
  {
    v16 = (unsigned __int64)&v67[*((unsigned int *)v67 - 1)];
    if ( (unsigned __int64)v67 >= v16 )
      goto LABEL_10;
    do
    {
      while ( 1 )
      {
        v17 = *v15;
        if ( *v15 )
        {
          v18 = (*(_DWORD *)(v17 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( (unsigned __int64)++v15 >= v16 )
          goto LABEL_9;
      }
      sub_15D7BC0(v66, v17);
      ++v15;
    }
    while ( (unsigned __int64)v15 < v16 );
LABEL_9:
    v15 = v67;
    if ( v67 )
LABEL_10:
      sub_186B220(v15 - 1);
  }
  v19 = v65;
  if ( v65 )
  {
    v20 = (unsigned __int64)&v65[*((unsigned int *)v65 - 1)];
    if ( (unsigned __int64)v65 >= v20 )
      goto LABEL_19;
    do
    {
      while ( 1 )
      {
        v21 = *v19;
        if ( *v19 )
        {
          v18 = (*(_DWORD *)(v21 + 8))-- == 1;
          if ( v18 )
            break;
        }
        if ( (unsigned __int64)++v19 >= v20 )
          goto LABEL_18;
      }
      sub_15D7BC0(v64, v21);
      ++v19;
    }
    while ( (unsigned __int64)v19 < v20 );
LABEL_18:
    v19 = v65;
    if ( v65 )
LABEL_19:
      sub_186B220(v19 - 1);
  }
  return sub_13A5000(&v63);
}

