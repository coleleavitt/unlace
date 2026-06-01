__m128i *__fastcall sub_21BC7A0(
        __m128i *a1,
        __int64 a2,
        _BYTE *a3,
        __int64 a4,
        unsigned int *a5,
        _DWORD *a6,
        const __m128i *a7)
{
  unsigned int v10; // ebx
  unsigned int v11; // r15d
  __int64 v12; // rdx
  _WORD *v13; // rbx
  size_t v14; // rax
  void (__fastcall *v15)(__m128 *, const __m128i *, __int64); // rax
  __int64 (__fastcall *v16)(__int64, unsigned int); // rax
  char *v17; // rbx
  size_t v18; // rdx
  unsigned __int64 v19; // rax
  int v20; // ebp
  int v21; // eax
  __int64 v22; // rsi
  size_t v23; // r12
  __int64 v24; // rax
  int v25; // r9d
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 *v29; // rsi
  void *v30; // rbx
  __int64 v32; // rbx
  __int64 *v33; // r12
  int v34; // eax
  __m128 v35; // kr00_16
  __int64 v36; // rax
  _DWORD *v37; // rbx
  __int64 v38; // r12
  unsigned __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  size_t v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __m128i v45; // xmm2
  unsigned int *v46; // rbx
  unsigned int v47; // ebp
  unsigned int v48; // ebx
  char *v49; // rbp
  bool v50; // zf
  int v51; // eax
  size_t v52; // r12
  __int64 v53; // r8
  __int64 (__fastcall *v54)(__int64, unsigned int); // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  int v57; // eax
  size_t v58; // r12
  __int64 v59; // [rsp-10h] [rbp-138h]
  __int64 v60; // [rsp+8h] [rbp-120h]
  unsigned int v61; // [rsp+10h] [rbp-118h]
  char *v62; // [rsp+10h] [rbp-118h]
  void *v63; // [rsp+10h] [rbp-118h]
  char *v64; // [rsp+10h] [rbp-118h]
  char *v65; // [rsp+10h] [rbp-118h]
  unsigned int v66; // [rsp+24h] [rbp-104h]
  unsigned __int64 v67; // [rsp+28h] [rbp-100h]
  unsigned __int64 v68; // [rsp+28h] [rbp-100h]
  unsigned __int64 v69; // [rsp+30h] [rbp-F8h]
  unsigned int v72; // [rsp+58h] [rbp-D0h]
  unsigned int v73; // [rsp+6Ch] [rbp-BCh] BYREF
  void *v74; // [rsp+70h] [rbp-B8h] BYREF
  void *v75; // [rsp+78h] [rbp-B0h] BYREF
  char *v76; // [rsp+80h] [rbp-A8h] BYREF
  size_t v77; // [rsp+88h] [rbp-A0h]
  _QWORD v78[2]; // [rsp+90h] [rbp-98h] BYREF
  __m128 v79[2]; // [rsp+A0h] [rbp-88h] BYREF
  __int64 v80; // [rsp+C0h] [rbp-68h]
  __m128 v81; // [rsp+D0h] [rbp-58h] BYREF
  __m128i v82; // [rsp+E0h] [rbp-48h]

  v10 = a4;
  v72 = a4;
  sub_21B6800(a1, a3, &a3[8 * a4]);
  *a6 = 0;
  v73 = 0;
  *a5 = 0;
  v66 = v10;
  if ( !v10 )
    return a1;
  v11 = 0;
LABEL_5:
  while ( 2 )
  {
    v12 = a1[11].m128i_i64[0];
    v13 = *(_WORD **)(v12 + 8LL * v11);
    if ( v13 )
    {
      v14 = strlen(*(const char **)(v12 + 8LL * v11));
      if ( v14 )
      {
        if ( *(_BYTE *)(a2 + 50) && v14 == 2 && *v13 == 11565 )
        {
          v73 = v11 + 1;
          if ( v72 > v11 + 1 )
          {
            v60 = (__int64)v13;
            do
            {
              v34 = *(_DWORD *)(a2 + 64);
              if ( v34 )
                sub_21B97F0(&v81, *(_QWORD *)(a2 + 32) + 80LL * (unsigned int)(v34 - 1), a2);
              else
                sub_21B97F0(&v81, 0, 0);
              v35 = v81;
              v32 = *(_QWORD *)(a1[11].m128i_i64[0] + 8LL * v73);
              v33 = (__int64 *)operator new(0x58u);
              sub_21B5910((__int64)v33, v35.m128_i64[0], v35.m128_i64[1], v60, 2, v73, v32, 0);
              sub_21B80F0((__int64)a1, v33);
              ++v73;
            }
            while ( v73 < v66 );
          }
          return a1;
        }
        if ( *(_BYTE *)(a2 + 49) )
        {
          sub_21BBCA0((__int64 *)&v74, a2, (__int64)a1, (int *)&v73);
          v29 = (__int64 *)v74;
          if ( v74 )
            goto LABEL_23;
LABEL_53:
          *a5 = v11;
          *a6 = v73 + ~v11;
          return a1;
        }
        v61 = v11;
        v82.m128i_i64[0] = 0;
        v15 = (void (__fastcall *)(__m128 *, const __m128i *, __int64))a7[1].m128i_i64[0];
        if ( v15 )
        {
          v15(&v81, a7, 2);
          v61 = v73;
          v82 = _mm_loadu_si128(a7 + 1);
        }
        v16 = *(__int64 (__fastcall **)(__int64, unsigned int))a1->m128i_i64[0];
        if ( v16 == sub_21B62F0 )
          v17 = *(char **)(a1[11].m128i_i64[0] + 8LL * v61);
        else
          v17 = (char *)v16((__int64)a1, v61);
        v76 = v17;
        v18 = 0;
        if ( v17 )
          v18 = strlen(v17);
        v19 = *(_QWORD *)(a2 + 80);
        v77 = v18;
        v79[0].m128_u64[0] = v19;
        v79[0].m128_u64[1] = *(unsigned int *)(a2 + 88);
        if ( (unsigned __int8)sub_21BABE0((__int64 *)v79, v76, v18) )
        {
          v20 = v73++;
          v21 = *(_DWORD *)(a2 + 64);
          if ( v21 )
            sub_21B97F0(v79, *(_QWORD *)(a2 + 32) + 80LL * (unsigned int)(v21 - 1), a2);
          else
            sub_21B97F0(v79, 0, 0);
          v22 = v79[0].m128_u64[0];
          v23 = v77;
          v67 = v79[0].m128_u64[1];
          v62 = v76;
          v24 = operator new(0x58u);
          v25 = v20;
          v26 = v23;
          v59 = (__int64)v17;
          v27 = (__int64)v62;
          v28 = v67;
LABEL_19:
          v63 = (void *)v24;
          sub_21B5910(v24, v22, v28, v27, v26, v25, v59, 0);
          v74 = v63;
          goto LABEL_20;
        }
        v36 = *(_QWORD *)(a2 + 32);
        v37 = (_DWORD *)(v36 + 80LL * *(unsigned int *)(a2 + 72));
        v38 = v36 + 80LL * *(_QWORD *)(a2 + 40);
        v39 = sub_2246FB0(&v76, *(_QWORD *)(a2 + 144), *(_QWORD *)(a2 + 152), 0);
        v42 = v77;
        v43 = 0;
        if ( v39 < v77 )
        {
          v42 = v39;
          v43 = v77 - v39;
        }
        v44 = *(_QWORD *)(a2 + 24);
        v45 = _mm_loadu_si128((const __m128i *)(a2 + 8));
        v78[1] = v43;
        v78[0] = &v76[v42];
        v79[1] = (__m128)v45;
        v80 = v44;
        v46 = sub_21BAA70(v37, v38, (__int64)v78, v43, v40, v41, (__int64 *)v45.m128i_i64[0], v45.m128i_i64[1]);
        if ( (unsigned int *)v38 == v46 )
        {
LABEL_39:
          v48 = v73;
          v49 = v76;
          v50 = *v76 == 47;
          ++v73;
          if ( v50 )
          {
            v57 = *(_DWORD *)(a2 + 64);
            if ( v57 )
              sub_21B97F0(v79, *(_QWORD *)(a2 + 32) + 80LL * (unsigned int)(v57 - 1), a2);
            else
              sub_21B97F0(v79, 0, 0);
            v22 = v79[0].m128_u64[0];
            v58 = v77;
            v68 = v79[0].m128_u64[1];
            v65 = v76;
            v24 = operator new(0x58u);
            v25 = v48;
            v26 = v58;
            v59 = (__int64)v49;
            v27 = (__int64)v65;
            v28 = v68;
          }
          else
          {
            v51 = *(_DWORD *)(a2 + 68);
            if ( v51 )
              sub_21B97F0(v79, *(_QWORD *)(a2 + 32) + 80LL * (unsigned int)(v51 - 1), a2);
            else
              sub_21B97F0(v79, 0, 0);
            v69 = v79[0].m128_u64[1];
            v22 = v79[0].m128_u64[0];
            v52 = v77;
            v64 = v76;
            v24 = operator new(0x58u);
            v25 = v48;
            v26 = v52;
            v59 = (__int64)v49;
            v27 = (__int64)v64;
            v28 = v69;
          }
          goto LABEL_19;
        }
        while ( 1 )
        {
          v47 = sub_21BADF0(
                  *(void ***)(a2 + 8),
                  *(_QWORD *)(a2 + 16),
                  *(_QWORD *)(a2 + 24),
                  v46,
                  v76,
                  v77,
                  *(_BYTE *)(a2 + 48));
          if ( v47 )
          {
            if ( (unsigned int *)v38 == v46 )
              goto LABEL_39;
            sub_21B97F0(v79, (__int64)v46, a2);
            if ( !v82.m128i_i64[0] )
              std::__throw_bad_function_call();
            if ( !((unsigned __int8 (__fastcall *)(__m128 *, __m128 *))v82.m128i_i64[1])(&v81, v79) )
            {
              v53 = v47;
              v54 = *(__int64 (__fastcall **)(__int64, unsigned int))a1->m128i_i64[0];
              if ( v54 == sub_21B62F0 )
              {
                v55 = *(_QWORD *)(a1[11].m128i_i64[0] + 8LL * v73);
              }
              else
              {
                v56 = v54((__int64)a1, v73);
                v53 = v47;
                v55 = v56;
              }
              sub_21BA060(&v75, (const __m128i *)v79, a1, v55, v53, 0, (int *)&v73);
              if ( v75 )
              {
                v74 = v75;
LABEL_20:
                if ( v82.m128i_i64[0] )
                  ((void (__fastcall *)(__m128 *, __m128 *, __int64))v82.m128i_i64[0])(&v81, &v81, 3);
                v29 = (__int64 *)v74;
                if ( !v74 )
                  goto LABEL_53;
LABEL_23:
                v74 = nullptr;
                sub_21B80F0((__int64)a1, v29);
                v30 = v74;
                if ( !v74 )
                  goto LABEL_4;
                sub_21B59C0((__int64)v74);
                operator delete(v30, 0x58u);
                v11 = v73;
                if ( v66 <= v73 )
                  return a1;
                goto LABEL_5;
              }
              if ( v61 != v73 )
              {
                v74 = nullptr;
                goto LABEL_20;
              }
            }
          }
          v46 += 20;
          if ( (unsigned int *)v38 == v46 )
            goto LABEL_39;
        }
      }
    }
    v73 = v11 + 1;
LABEL_4:
    v11 = v73;
    if ( v66 > v73 )
      continue;
    return a1;
  }
}
