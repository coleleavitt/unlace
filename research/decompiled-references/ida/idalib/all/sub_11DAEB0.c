void __fastcall sub_11DAEB0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 *v8; // rdi
  __int64 v9; // rax
  _BYTE *v10; // rax
  __m128i si128; // xmm0
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  signed __int64 v14; // rdx
  __m128i *v15; // rax
  __int64 v16; // rax
  bool v17; // cc
  _BYTE *v18; // r12
  signed __int64 v19; // r13
  unsigned int v20; // eax
  int v21; // eax
  __int64 *v22; // rsi
  __int64 *v23; // r12
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  int v28; // r8d
  char *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rax
  __m128 *v34; // rcx
  void *v35; // r8
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  __m128i v38; // xmm0
  __int64 v39; // rsi
  char *v40; // rax
  __m128 v41; // [rsp+0h] [rbp-D8h] BYREF
  _BYTE *v42; // [rsp+18h] [rbp-C0h]
  signed __int64 v43; // [rsp+20h] [rbp-B8h]
  __int64 v44; // [rsp+28h] [rbp-B0h]
  void *v45; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v46; // [rsp+38h] [rbp-A0h]
  _BYTE v47[16]; // [rsp+40h] [rbp-98h] BYREF
  void *v48[2]; // [rsp+50h] [rbp-88h] BYREF
  __m128 v49; // [rsp+60h] [rbp-78h] BYREF
  __int16 v50; // [rsp+70h] [rbp-68h]

  v8 = *(__int64 **)(a1 + 2568);
  v41.m128_u64[0] = (unsigned __int64)"-fcuda-is-device";
  v9 = *v8;
  v41 = _mm_loadh_ps((const double *)&off_2BAEC38);
  (*(void (__fastcall **)(__int64 *))(v9 + 568))(v8);
  v10 = (_BYTE *)sub_21B7BC0(a2, 2260, &byte_22F0C30, 0);
  si128 = _mm_load_si128((const __m128i *)&v41);
  v42 = v10;
  v41.m128_u64[0] = (unsigned __int64)"-enable-memcpyopt-without-libcalls";
  v12 = *(unsigned int *)(a3 + 12);
  *(__m128i *)v48 = si128;
  v41.m128_u64[0] = (unsigned __int64)"-fno-threadsafe-statics";
  v13 = *(unsigned int *)(a3 + 8);
  v43 = v14;
  v49 = _mm_loadh_ps((const double *)v41.m128_u64);
  if ( v13 + 4 > v12 )
  {
    sub_2237220(a3, a3 + 16, v13 + 4, 8);
    v13 = *(unsigned int *)(a3 + 8);
  }
  v15 = (__m128i *)(*(_QWORD *)a3 + 8 * v13);
  *v15 = _mm_load_si128((const __m128i *)v48);
  v15[1] = _mm_load_si128((const __m128i *)&v49);
  v16 = (unsigned int)(*(_DWORD *)(a3 + 8) + 4);
  v17 = *(_DWORD *)(a1 + 2396) <= 3;
  *(_DWORD *)(a3 + 8) = v16;
  if ( !v17 )
  {
    if ( v16 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
    {
      sub_2237220(a3, a3 + 16, v16 + 1, 8);
      v16 = *(unsigned int *)(a3 + 8);
    }
    *(_QWORD *)(*(_QWORD *)a3 + 8 * v16) = "-fcuda-allow-variadic-functions";
    ++*(_DWORD *)(a3 + 8);
  }
  if ( (unsigned __int8)sub_21B7850(a2, 544, 1071, 0) )
  {
    v36 = *(unsigned int *)(a3 + 12);
    v41.m128_u64[0] = (unsigned __int64)"--nvptx-short-ptr";
    v37 = *(unsigned int *)(a3 + 8);
    v38 = (__m128i)_mm_loadh_ps((const double *)v41.m128_u64);
    if ( v37 + 2 > v36 )
    {
      v41 = (__m128)v38;
      sub_2237220(a3, a3 + 16, v37 + 2, 8);
      v37 = *(unsigned int *)(a3 + 8);
      v38 = _mm_load_si128((const __m128i *)&v41);
    }
    *(__m128i *)(*(_QWORD *)a3 + 8 * v37) = v38;
    *(_DWORD *)(a3 + 8) += 2;
  }
  if ( (unsigned __int8)sub_21B7850(a2, 3091, 3018, 1) && (a4 != 4 || !sub_10DCD30(a2, 0xCF8u)) )
  {
    v18 = v42;
    v19 = v43;
    v20 = sub_2244B30(v42, v43);
    v21 = sub_2244E60(a1 + 2528, v18, v19, v20);
    if ( v21 == -1 )
      v22 = (__int64 *)(*(_QWORD *)(a1 + 2528) + 8LL * *(unsigned int *)(a1 + 2536));
    else
      v22 = (__int64 *)(*(_QWORD *)(a1 + 2528) + 8LL * v21);
    sub_116E610((__int64 **)v48, v22, 1);
    v23 = (__int64 *)v48[0];
    sub_116E610((__int64 **)v48, (__int64 *)(*(_QWORD *)(a1 + 2528) + 8LL * *(unsigned int *)(a1 + 2536)), 1);
    if ( v23 == v48[0] )
    {
      v47[0] = 0;
      v46 = 0;
      v45 = v47;
    }
    else
    {
      v24 = *v23;
      v45 = v47;
      sub_11D7A40(&v45, *(_BYTE **)(v24 + 8), *(_QWORD *)(v24 + 8) + *(_QWORD *)(v24 + 16));
      if ( v46 )
      {
        v25 = *(unsigned int *)(a3 + 8);
        if ( v25 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
        {
          sub_2237220(a3, a3 + 16, v25 + 1, 8);
          v25 = *(unsigned int *)(a3 + 8);
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v25) = "-mlink-builtin-bitcode";
        ++*(_DWORD *)(a3 + 8);
        v50 = 260;
        v48[0] = &v45;
        v26 = sub_10DA6C0(a2, (__int64)v48);
        v27 = *(unsigned int *)(a3 + 8);
        if ( v27 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
        {
          v41.m128_u64[0] = v26;
          sub_2237220(a3, a3 + 16, v27 + 1, 8);
          v27 = *(unsigned int *)(a3 + 8);
          v26 = v41.m128_u64[0];
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v27) = v26;
        ++*(_DWORD *)(a3 + 8);
        if ( (unsigned __int8)sub_21B7850(a2, 1533, 1253, 0) )
          goto LABEL_33;
        v28 = *(_DWORD *)(a1 + 2396);
        if ( v28 == 10000 )
        {
          v28 = 26;
        }
        else if ( v28 < 0 )
        {
LABEL_26:
          if ( a4 == 4 )
          {
            v32 = *(_QWORD *)(a1 + 8);
            if ( v28 <= 5 )
            {
              v39 = *(_QWORD *)v32;
              v41.m128_i32[0] = v28;
              sub_FC70B0((__int64)v48, v39, 0, 450);
              v40 = sub_FBFE80(v41.m128_i32[0]);
              sub_AE9DF0((unsigned __int8 **)v48, (__int64)v40, 1u);
              sub_AEA040((__int64)v48);
            }
            else if ( !*(_DWORD *)(v32 + 44) )
            {
              v33 = *(_QWORD *)(a1 + 2568);
              if ( v42 )
              {
                v41.m128_u64[0] = *(_QWORD *)(a1 + 2568);
                v48[0] = &v49;
                sub_11D7980(v48, v42, (__int64)&v42[v43]);
                v32 = *(_QWORD *)(a1 + 8);
                v34 = (__m128 *)v48[0];
                v35 = v48[1];
                v33 = v41.m128_u64[0];
              }
              else
              {
                v34 = &v49;
                v49.m128_i8[0] = 0;
                v35 = nullptr;
                v48[0] = &v49;
                v48[1] = nullptr;
              }
              sub_11C01D0(v32, a2, a3, (__int64)v34, (__int64)v35, a1 + 16, v33);
              if ( v48[0] != &v49 )
                operator delete(v48[0]);
            }
          }
          goto LABEL_33;
        }
        v41.m128_i32[0] = v28;
        v29 = sub_FBFE80(v28);
        if ( *v29 )
        {
          v49.m128_u64[0] = (unsigned __int64)v29;
          v48[0] = (void *)"-target-sdk-version=";
          v50 = 771;
        }
        else
        {
          v48[0] = (void *)"-target-sdk-version=";
          v50 = 259;
        }
        v30 = sub_10DA6C0(a2, (__int64)v48);
        v31 = *(unsigned int *)(a3 + 8);
        v28 = v41.m128_i32[0];
        if ( v31 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
        {
          v44 = v30;
          sub_2237220(a3, a3 + 16, v31 + 1, 8);
          v31 = *(unsigned int *)(a3 + 8);
          v30 = v44;
          v28 = v41.m128_i32[0];
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v31) = v30;
        ++*(_DWORD *)(a3 + 8);
        goto LABEL_26;
      }
    }
    sub_FC70B0((__int64)v48, **(_QWORD **)(a1 + 8), 0, 432);
    sub_AEC220((unsigned __int8 **)v48, v42, v43);
    sub_AEA040((__int64)v48);
LABEL_33:
    if ( v45 != v47 )
      operator delete(v45);
  }
}
