__int64 __fastcall sub_B6F170(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __m128 a5, __m128 a6, __m128 a7)
{
  unsigned int v10; // eax
  int v11; // r14d
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  _DWORD *v15; // rax
  int v16; // ecx
  __int64 v17; // rcx
  int v18; // eax
  unsigned int *v19; // r15
  unsigned int *v20; // r13
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __m128i v27; // xmm1
  __int64 result; // rax
  _DWORD *v29; // rax
  __int64 *v30; // r13
  __int64 v31; // rax
  unsigned int *v32; // r15
  int v33; // eax
  __int64 v34; // rdx
  int v35; // r15d
  char *v36; // rdi
  __int64 v37; // rax
  __int64 *v38; // r13
  __int64 v39; // rax
  unsigned int *v40; // r15
  unsigned int *v41; // r13
  unsigned int *v42; // r15
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  _BYTE *v46; // rsi
  int v47; // eax
  __int64 v48; // [rsp+0h] [rbp-C8h]
  __int64 v49; // [rsp+0h] [rbp-C8h]
  __int64 v50; // [rsp+0h] [rbp-C8h]
  unsigned int *v51; // [rsp+0h] [rbp-C8h]
  __int64 v52; // [rsp+0h] [rbp-C8h]
  __int64 v53; // [rsp+0h] [rbp-C8h]
  __int64 v54; // [rsp+0h] [rbp-C8h]
  int v55; // [rsp+8h] [rbp-C0h]
  int v56; // [rsp+8h] [rbp-C0h]
  int v57; // [rsp+8h] [rbp-C0h]
  void **v58; // [rsp+8h] [rbp-C0h]
  int v59; // [rsp+8h] [rbp-C0h]
  int v60; // [rsp+10h] [rbp-B8h]
  int v61; // [rsp+10h] [rbp-B8h]
  int v62; // [rsp+10h] [rbp-B8h]
  char *v63; // [rsp+10h] [rbp-B8h]
  int v64; // [rsp+10h] [rbp-B8h]
  __int64 v65; // [rsp+18h] [rbp-B0h]
  __int64 v66; // [rsp+18h] [rbp-B0h]
  __int64 v67; // [rsp+18h] [rbp-B0h]
  __int64 v68; // [rsp+18h] [rbp-B0h]
  unsigned int *v69; // [rsp+20h] [rbp-A8h] BYREF
  int v70[2]; // [rsp+28h] [rbp-A0h] BYREF
  int v71[2]; // [rsp+30h] [rbp-98h] BYREF
  int v72[2]; // [rsp+38h] [rbp-90h] BYREF
  void *v73; // [rsp+40h] [rbp-88h] BYREF
  __int64 v74; // [rsp+48h] [rbp-80h]
  _BYTE v75[120]; // [rsp+50h] [rbp-78h] BYREF

  v10 = *(_DWORD *)(a1 + 84);
  v11 = *(_DWORD *)(a1 + 9496);
  *(_DWORD *)(a1 + 9496) = a4;
  v69 = (unsigned int *)a2;
  if ( v10 < a4 )
    v10 = a4;
  *(_DWORD *)(a1 + 84) = v10;
  sub_B6E7E0((_QWORD *)a1, &v69, a5, a6, a7);
  if ( *(_WORD *)(a2 + 4) )
    goto LABEL_19;
  v14 = *(_QWORD *)(a2 + 16);
  v15 = *(_DWORD **)(v14 + 24);
  if ( !v15 || *v15 )
    goto LABEL_19;
  v16 = v15[1];
  if ( v16 != 2 )
  {
    v17 = (unsigned int)(v16 - 4);
    if ( (unsigned int)v17 <= 2 )
      goto LABEL_8;
    goto LABEL_16;
  }
  if ( !(unsigned __int8)sub_15D2CB0(*(_QWORD *)(a1 + 104), *(_QWORD *)(a2 + 32)) )
  {
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_19;
    v14 = *(_QWORD *)(a2 + 16);
LABEL_16:
    v29 = *(_DWORD **)(v14 + 24);
    if ( v29 && !*v29 && v29[1] == 3 )
    {
      sub_B6EE00(a1);
      goto LABEL_13;
    }
LABEL_19:
    result = sub_B6EAB0(a1, (unsigned int *)a2, a3, a5, a6, a7);
    goto LABEL_20;
  }
  v15 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
  if ( !v15 )
    goto LABEL_23;
LABEL_8:
  v18 = v15[1];
  if ( v18 == 5 )
  {
    v38 = (__int64 *)(a2 + 32);
    v39 = 8LL * *(unsigned int *)(a2 + 24);
    v53 = a2 + 32 + v39;
    if ( v39 )
    {
      v58 = &v73;
      do
      {
        v40 = (unsigned int *)*v38;
        sub_B6DE20(
          (_QWORD *)a1,
          *v38,
          1u,
          *(double *)a5.m128_u64,
          a6,
          a7,
          v17,
          v12,
          v13,
          v53,
          (int)v58,
          v60,
          v65,
          (__int64)v69,
          *(__int64 *)v70,
          *(__int64 *)v71);
        LODWORD(v73) = sub_B645B0(a1, v40);
        sub_B6A990(a1, 1, (int)v58);
        ++v38;
      }
      while ( (__int64 *)v53 != v38 );
    }
    goto LABEL_13;
  }
  if ( v18 > 5 )
  {
    if ( v18 == 6 )
    {
      v30 = (__int64 *)(a2 + 32);
      v63 = v75;
      v73 = v75;
      v74 = 0x1000000000LL;
      v31 = 8LL * *(unsigned int *)(a2 + 24);
      v52 = a2 + 32 + v31;
      if ( v31 )
      {
        do
        {
          v32 = (unsigned int *)*v30;
          sub_B6DE20(
            (_QWORD *)a1,
            *v30,
            1u,
            *(double *)a5.m128_u64,
            a6,
            a7,
            v17,
            v12,
            v13,
            v52,
            v55,
            (int)v63,
            v65,
            (__int64)v69,
            *(__int64 *)v70,
            *(__int64 *)v71);
          v33 = sub_B645B0(a1, v32);
          v34 = (unsigned int)v74;
          v35 = v33;
          if ( (unsigned int)v74 < HIDWORD(v74) )
          {
            v46 = v73;
          }
          else
          {
            v55 = 2 * HIDWORD(v74);
            v46 = (_BYTE *)sub_186B270(4LL * (unsigned int)(2 * HIDWORD(v74)));
            v36 = (char *)v73;
            v37 = 0;
            v34 = (unsigned int)v74;
            v13 = 4LL * (unsigned int)v74;
            if ( (_DWORD)v74 )
            {
              do
              {
                v17 = *(unsigned int *)&v36[v37];
                *(_DWORD *)&v46[v37] = v17;
                v37 += 4;
              }
              while ( v37 != v13 );
            }
            if ( v36 && v36 != v63 )
            {
              v65 = (__int64)v46;
              sub_186B220(v36);
              v34 = (unsigned int)v74;
            }
            v73 = v46;
            HIDWORD(v74) = v55;
          }
          *(_DWORD *)&v46[4 * v34] = v35;
          ++v30;
          v47 = v74 + 1;
          LODWORD(v74) = v74 + 1;
        }
        while ( (__int64 *)v52 != v30 );
      }
      else
      {
        v46 = v75;
        v47 = 0;
      }
      sub_B6A990(a1, v47, (int)v46);
      sub_B65500((_QWORD *)a1, a2);
      if ( v73 && v73 != v63 )
        sub_186B220(v73);
      goto LABEL_13;
    }
    goto LABEL_23;
  }
  if ( v18 == 2 )
  {
    v41 = *(unsigned int **)(a2 + 32);
    v42 = *(unsigned int **)(a2 + 40);
    sub_B6DE20(
      (_QWORD *)a1,
      (__int64)v41,
      1u,
      *(double *)a5.m128_u64,
      a6,
      a7,
      v17,
      v12,
      v13,
      v48,
      v55,
      v60,
      v65,
      (__int64)v69,
      *(__int64 *)v70,
      *(__int64 *)v71);
    sub_B6DE20(
      (_QWORD *)a1,
      (__int64)v42,
      1u,
      *(double *)a5.m128_u64,
      a6,
      a7,
      v43,
      v44,
      v45,
      v54,
      v59,
      v64,
      v68,
      (__int64)v69,
      *(__int64 *)v70,
      *(__int64 *)v71);
    LODWORD(v41) = sub_B645B0(a1, v41);
    LODWORD(v42) = sub_B645B0(a1, v42);
    *(_QWORD *)v70 = _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)v41), _mm_cvtsi32_si128((unsigned int)v42 ^ 1)).m128i_u64[0];
    sub_B6A990(a1, 2, (int)v70);
    *(_QWORD *)v71 = _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)v41 ^ 1), _mm_cvtsi32_si128((unsigned int)v42)).m128i_u64[0];
    sub_B6A990(a1, 2, (int)v71);
    goto LABEL_13;
  }
  if ( v18 != 4 )
  {
LABEL_23:
    sub_1872CE0("");
    sub_1873130(114, 284);
  }
  v19 = *(unsigned int **)(a2 + 32);
  v20 = *(unsigned int **)(a2 + 40);
  sub_B6DE20(
    (_QWORD *)a1,
    (__int64)v19,
    1u,
    *(double *)a5.m128_u64,
    a6,
    a7,
    v17,
    v12,
    v13,
    *(_QWORD *)(a2 + 48),
    v55,
    v60,
    v65,
    (__int64)v69,
    *(__int64 *)v70,
    *(__int64 *)v71);
  sub_B6DE20(
    (_QWORD *)a1,
    (__int64)v20,
    1u,
    *(double *)a5.m128_u64,
    a6,
    a7,
    v21,
    v22,
    v23,
    v49,
    v56,
    v61,
    v66,
    (__int64)v69,
    *(__int64 *)v70,
    *(__int64 *)v71);
  sub_B6DE20(
    (_QWORD *)a1,
    v50,
    1u,
    *(double *)a5.m128_u64,
    a6,
    a7,
    v24,
    v25,
    v26,
    v50,
    v57,
    v62,
    v67,
    (__int64)v69,
    *(__int64 *)v70,
    *(__int64 *)v71);
  LODWORD(v19) = sub_B645B0(a1, v19);
  v27 = _mm_cvtsi32_si128(sub_B645B0(a1, v20));
  LODWORD(v20) = sub_B645B0(a1, v51);
  *(_QWORD *)v72 = _mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)v19 ^ 1), v27).m128i_u64[0];
  sub_B6A990(a1, 2, (int)v72);
  v73 = (void *)_mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)v19), _mm_cvtsi32_si128((unsigned int)v20)).m128i_u64[0];
  sub_B6A990(a1, 2, (int)&v73);
  sub_B656A0(a1, a2);
LABEL_13:
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 7488) + 48LL))(*(_QWORD *)(a1 + 7488), a2);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 7488) + 64LL))(*(_QWORD *)(a1 + 7488));
LABEL_20:
  *(_DWORD *)(a1 + 9496) = v11;
  return result;
}

