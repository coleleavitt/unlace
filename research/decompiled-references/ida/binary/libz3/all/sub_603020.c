unsigned int *__fastcall sub_603020(
        _QWORD *a1,
        __int64 a2,
        __m128i a3,
        __m128i a4,
        __m128i a5,
        double a6,
        double a7,
        double a8,
        double a9)
{
  unsigned int *v9; // rbx
  __int64 v10; // rax
  unsigned int *v12; // r8
  __int64 v13; // rcx
  unsigned int v14; // esi
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  __m128 *v19; // rbp
  __m128 *v20; // rax
  unsigned __int64 v21; // rbx
  int v22; // ecx
  int v23; // r8d
  int v24; // r9d
  unsigned int *v25; // r14
  unsigned __int8 v26; // al
  __int64 v27; // rdx
  double v28; // xmm4_8
  double v29; // xmm5_8
  char v30; // r14
  double v31; // xmm4_8
  double v32; // xmm5_8
  __int64 v33; // r14
  __int64 v34; // rax
  __int64 v35; // r12
  void (__fastcall ***v36)(void *); // r13
  bool v37; // zf
  char v38; // al
  void *v39; // [rsp+0h] [rbp-58h]
  unsigned __int8 v40; // [rsp+8h] [rbp-50h]
  void *ptr[8]; // [rsp+18h] [rbp-40h] BYREF

  v9 = *(unsigned int **)(a2 + 24);
  if ( v9 )
  {
    v10 = *(v9 - 1);
    if ( (_DWORD)v10 )
    {
      v12 = &v9[2 * v10];
      while ( 1 )
      {
        v13 = *(_QWORD *)v9;
        v14 = *(_DWORD *)(*(_QWORD *)v9 + 68LL);
        v15 = *(_DWORD *)(*(_QWORD *)v9 + 56LL);
        if ( v14 < v15 )
          break;
LABEL_10:
        v9 += 2;
        if ( v12 == v9 )
        {
          v19 = *(__m128 **)(a1[5] + 2952LL);
          if ( v19 )
          {
            v20 = (__m128 *)sub_186B270(0x78u);
            v21 = a1[3];
            ptr[0] = nullptr;
            v19 = v20;
            v20->m128_i32[2] = 0;
            v20[1].m128_i8[8] = 1;
            v20[1].m128_u64[0] = 0;
            a3 = _mm_unpacklo_epi64((__m128i)v21, (__m128i)v21);
            v20[3].m128_u64[0] = 0;
            v20[3].m128_u64[1] = v21;
            v20->m128_u64[0] = (unsigned __int64)&off_1C790C0;
            v20[4].m128_u64[0] = 0;
            v20[2] = (__m128)a3;
            sub_14B7810((_DWORD)v20 + 72, v21, (int)ptr, v22, v23, v24, v39);
            sub_18572D0(ptr);
            ++v19->m128_i32[2];
            v19[5].m128_u64[1] = v21;
            v19[6].m128_u64[0] = 0;
            v19[6].m128_u64[1] = v21;
            v19[7].m128_u64[0] = 0;
          }
          a1[58] = v19;
          v25 = (unsigned int *)sub_186B270(0xF8u);
          sub_63D370(v25, a1[5]);
          if ( (unsigned __int8)sub_1859630(
                                  **(_QWORD **)(a1[5] + 32LL),
                                  "xform.inline_eager",
                                  *(_QWORD *)(a1[5] + 32LL) + 8LL,
                                  1) )
          {
            sub_601B00((__int64)a1, a2, *(double *)a3.m128i_i64);
            v40 = sub_6019C0((__int64)a1, a2, (__int64)v25, *(double *)a3.m128i_i64);
            if ( !(unsigned __int8)sub_6430A0(v25) )
            {
              sub_1872CE0("");
              sub_1873130(114, 854);
            }
            ptr[0] = v25;
            v26 = sub_6013E0((__int64)a1, (__int64 *)ptr, *(double *)a3.m128i_i64);
            v9 = (unsigned int *)ptr[0];
            v30 = v26 | v40;
            if ( v26 | v40 )
            {
              sub_63DFA0(
                ptr[0],
                a2,
                v27,
                *(double *)a3.m128i_i64,
                *(double *)a4.m128i_i64,
                *(double *)a5.m128i_i64,
                a6,
                v28,
                v29,
                a9);
              goto LABEL_23;
            }
            v25 = (unsigned int *)ptr[0];
          }
          v9 = (unsigned int *)sub_186B270(0xF8u);
          sub_643420(v9, a2);
          if ( v9 != v25 && v25 )
          {
            sub_63D960(v25);
            sub_186B220(v25);
          }
          v30 = 0;
LABEL_23:
          if ( (unsigned __int8)sub_1859630(
                                  **(_QWORD **)(a1[5] + 32LL),
                                  "xform.inline_linear",
                                  *(_QWORD *)(a1[5] + 32LL) + 8LL,
                                  1) )
          {
            ptr[0] = v9;
            v38 = sub_602070((__int64)a1, (__int64 *)ptr, *(double *)a3.m128i_i64, a4, a5, a6, v31, v32, a9);
            v9 = (unsigned int *)ptr[0];
            if ( v38 || v30 )
            {
LABEL_25:
              v33 = a1[5];
              v34 = sub_1336AB0(*(_QWORD *)(v33 + 2952), v19);
              v35 = v34;
              if ( v34 )
                ++*(_DWORD *)(v34 + 8);
              v36 = *(void (__fastcall ****)(void *))(v33 + 2952);
              if ( v36 )
              {
                v37 = (*((_DWORD *)v36 + 2))-- == 1;
                if ( v37 )
                {
                  (**v36)(v36);
                  sub_186B220(v36);
                }
              }
              *(_QWORD *)(v33 + 2952) = v35;
            }
            else
            {
              if ( ptr[0] )
                goto LABEL_38;
              v9 = nullptr;
            }
          }
          else
          {
            if ( v30 )
              goto LABEL_25;
LABEL_38:
            sub_63D960(v9);
            sub_186B220(v9);
            v9 = nullptr;
          }
          if ( v19 )
          {
            v37 = v19->m128_i32[2]-- == 1;
            if ( v37 )
            {
              (*(void (__fastcall **)(__m128 *))v19->m128_u64[0])(v19);
              sub_186B220(v19);
            }
          }
          return v9;
        }
      }
      v16 = v13 + 8LL * v14;
      v17 = v13 + 8 * (v14 + (unsigned __int64)(v15 - 1 - v14)) + 8;
      while ( (*(_BYTE *)((*(_QWORD *)(v16 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 30) & 2) == 0 )
      {
        v16 += 8;
        if ( v17 == v16 )
          goto LABEL_10;
      }
    }
    return nullptr;
  }
  return v9;
}

