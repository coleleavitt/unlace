_BYTE *__fastcall sub_121FCF0(__int64 a1, __int64 a2, const __m128i *a3, __int64 a4)
{
  size_t v7; // rax
  __int32 v8; // eax
  __int32 v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int32 v12; // eax
  __int64 v13; // rax
  unsigned __int64 v14; // r12
  unsigned __int64 v15; // rax
  __m128i *v16; // rbp
  __m128i *v17; // rdi
  _BYTE *result; // rax
  unsigned __int64 v19; // rax
  void *v20; // r13
  unsigned __int64 v21; // r12
  void *v22; // rdi
  int v23; // r14d
  void *v24; // rdi
  int v25; // r14d
  _BYTE *v26; // [rsp-20h] [rbp-88h]
  __int64 v27; // [rsp-18h] [rbp-80h]
  char v28; // [rsp-10h] [rbp-78h]
  __int128 v29; // [rsp+0h] [rbp-68h] BYREF
  __int64 v30; // [rsp+10h] [rbp-58h]
  _QWORD v31[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v32; // [rsp+30h] [rbp-38h]

  sub_1134980(a1, a2, (__int64)a3, a4);
  *(_QWORD *)a1 = off_2C3B030;
  *(_QWORD *)(a1 + 2392) = a1 + 2408;
  *(_OWORD *)(a1 + 2424) = 0;
  v29 = 0;
  LOBYTE(v32) = 0;
  v30 = 0;
  *(_QWORD *)(a1 + 2456) = a1 + 2472;
  v28 = v32;
  *(_QWORD *)(a1 + 2488) = a1 + 2504;
  v27 = v31[1];
  *(_QWORD *)(a1 + 2448) = a2;
  v26 = (_BYTE *)v31[0];
  *(_BYTE *)(a1 + 2384) = 0;
  *(_QWORD *)(a1 + 2400) = 0;
  *(_BYTE *)(a1 + 2408) = 0;
  *(_QWORD *)(a1 + 2440) = 0;
  *(_QWORD *)(a1 + 2464) = 0;
  *(_BYTE *)(a1 + 2472) = 0;
  *(_QWORD *)(a1 + 2496) = 0;
  *(_BYTE *)(a1 + 2504) = 0;
  sub_110B910(a1 + 2520, nullptr, 0, 0, 0, (__int64 *)&v29, nullptr, 0, nullptr, 0, v26, v27, v28);
  sub_9B4A30((void ***)&v29);
  *(_QWORD *)(a1 + 2912) = a1 + 2928;
  *(_QWORD *)(a1 + 2960) = a1 + 2976;
  *(_QWORD *)(a1 + 2992) = a1 + 3008;
  *(_QWORD *)(a1 + 3024) = a1 + 3040;
  *(_QWORD *)(a1 + 3080) = a1 + 3064;
  *(_QWORD *)(a1 + 3088) = a1 + 3064;
  *(_QWORD *)(a1 + 3128) = a1 + 3144;
  *(_QWORD *)(a1 + 3136) = 0x100000000LL;
  *(_QWORD *)(a1 + 3208) = 0x100000000LL;
  *(_QWORD *)(a1 + 3200) = a1 + 3216;
  *(_BYTE *)(a1 + 2904) = 0;
  *(_QWORD *)(a1 + 2920) = 0;
  *(_BYTE *)(a1 + 2928) = 0;
  *(_QWORD *)(a1 + 2968) = 0;
  *(_BYTE *)(a1 + 2976) = 0;
  *(_QWORD *)(a1 + 3000) = 0;
  *(_BYTE *)(a1 + 3008) = 0;
  *(_QWORD *)(a1 + 3032) = 0;
  *(_BYTE *)(a1 + 3040) = 0;
  *(_DWORD *)(a1 + 3064) = 0;
  *(_QWORD *)(a1 + 3072) = 0;
  *(_QWORD *)(a1 + 3096) = 0;
  *(_QWORD *)(a1 + 3120) = 0;
  *(_QWORD *)(a1 + 3392) = 0;
  *(_QWORD *)(a1 + 3424) = 0;
  *(_QWORD *)(a1 + 3440) = a1 + 3456;
  *(_OWORD *)(a1 + 3104) = 0;
  v7 = j__strlen("/etc/env.d/gcc");
  sub_1213C40((_QWORD *)(a1 + 3440), "/etc/env.d/gcc", (__int64)&aEtcEnvDGcc[v7]);
  *(_QWORD *)(a1 + 3472) = a2;
  *(_QWORD *)(a1 + 3480) = a1 + 3496;
  sub_1213B80((_QWORD *)(a1 + 3480), a3->m128i_i64[0], a3->m128i_i64[0] + a3->m128i_i64[1]);
  *(__m128i *)(a1 + 3512) = _mm_loadu_si128(a3 + 2);
  *(_DWORD *)(a1 + 3528) = a3[3].m128i_i32[0];
  v8 = a3[3].m128i_i32[1];
  *(_QWORD *)(a1 + 3736) = a2;
  *(_DWORD *)(a1 + 3532) = v8;
  *(_QWORD *)(a1 + 3744) = a1 + 3760;
  *(_QWORD *)(a1 + 3536) = a4;
  *(_BYTE *)(a1 + 3728) = 0;
  sub_1213B80((_QWORD *)(a1 + 3744), a3->m128i_i64[0], a3->m128i_i64[0] + a3->m128i_i64[1]);
  *(__m128i *)(a1 + 3776) = _mm_loadu_si128(a3 + 2);
  *(_DWORD *)(a1 + 3792) = a3[3].m128i_i32[0];
  v9 = a3[3].m128i_i32[1];
  *(_QWORD *)(a1 + 4888) = a2;
  *(_DWORD *)(a1 + 3796) = v9;
  *(_QWORD *)(a1 + 4896) = a1 + 4912;
  *(_QWORD *)(a1 + 3800) = a4;
  *(_BYTE *)(a1 + 4880) = 0;
  sub_1213B80((_QWORD *)(a1 + 4896), a3->m128i_i64[0], a3->m128i_i64[0] + a3->m128i_i64[1]);
  v10 = *(unsigned int *)(a1 + 1160);
  *(__m128i *)(a1 + 4928) = _mm_loadu_si128(a3 + 2);
  v11 = v10 + 1;
  *(_DWORD *)(a1 + 4944) = a3[3].m128i_i32[0];
  v12 = a3[3].m128i_i32[1];
  *(_QWORD *)(a1 + 4952) = a4;
  *(_DWORD *)(a1 + 4948) = v12;
  v13 = *(_QWORD *)(a1 + 8);
  *(_BYTE *)(a1 + 4961) = 0;
  *(_QWORD *)(a1 + 4968) = 0;
  v14 = v13 + 104;
  v15 = *(unsigned int *)(a1 + 1164);
  *(_QWORD *)(a1 + 4976) = 0;
  if ( v10 + 1 > v15 )
  {
    v19 = *(_QWORD *)(a1 + 1152);
    v20 = (void *)(a1 + 1168);
    if ( v19 > v14 || v14 >= v19 + 32 * v10 )
    {
      v16 = (__m128i *)sub_2237400(a1 + 1152, a1 + 1168, v11, 32, v31);
      sub_10E9550(a1 + 1152, v16);
      v24 = *(void **)(a1 + 1152);
      v25 = v31[0];
      if ( v20 != v24 )
        free(v24);
      *(_QWORD *)(a1 + 1152) = v16;
      v10 = *(unsigned int *)(a1 + 1160);
      *(_DWORD *)(a1 + 1164) = v25;
    }
    else
    {
      v21 = v14 - v19;
      v16 = (__m128i *)sub_2237400(a1 + 1152, a1 + 1168, v11, 32, v31);
      sub_10E9550(a1 + 1152, v16);
      v22 = *(void **)(a1 + 1152);
      v23 = v31[0];
      if ( v20 != v22 )
        free(v22);
      *(_QWORD *)(a1 + 1152) = v16;
      v14 = (unsigned __int64)v16->m128i_u64 + v21;
      v10 = *(unsigned int *)(a1 + 1160);
      *(_DWORD *)(a1 + 1164) = v23;
    }
  }
  else
  {
    v16 = *(__m128i **)(a1 + 1152);
  }
  v17 = &v16[2 * v10];
  v17->m128i_i64[0] = (__int64)v17[1].m128i_i64;
  result = sub_1213B80(v17, *(_BYTE **)v14, *(_QWORD *)v14 + *(_QWORD *)(v14 + 8));
  ++*(_DWORD *)(a1 + 1160);
  return result;
}
