/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41B160
// Address: 0x000000000041B160

//----- (000000000041B160) ----------------------------------------------------
__int64 __fastcall sub_41B160(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v14; // rax
  char *v15; // rdi
  __int64 v16; // rbp
  char *v17; // rdx
  double v18; // xmm4_8
  double v19; // xmm5_8
  void *v20; // r15
  __m128i v21; // xmm1
  double v22; // xmm0_8
  signed int v24; // eax
  double v25; // xmm4_8
  double v26; // xmm5_8
  __int64 v27; // rdx
  __int64 v28; // r10
  __int64 v29; // rdi
  __int64 v30; // rcx
  size_t v31; // r10
  const void *v32; // rbp
  void *v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rdi
  int *v36; // rax
  const char *v37; // rax
  int v39; // [rsp+1Ch] [rbp-8Ch] BYREF
  __int64 v40; // [rsp+20h] [rbp-88h] BYREF
  __int64 v41; // [rsp+28h] [rbp-80h]
  __int64 v42; // [rsp+30h] [rbp-78h]
  void *dest[2]; // [rsp+38h] [rbp-70h] BYREF
  __int128 v44; // [rsp+48h] [rbp-60h]
  __int128 v45; // [rsp+58h] [rbp-50h]
  unsigned __int64 v46; // [rsp+68h] [rbp-40h]

  v46 = __readfsqword(0x28u);
  v14 = sub_417940((_QWORD *)a1, a2);
  v15 = *(char **)(a1 + 1280);
  v16 = v14;
  v17 = &v15[4 * *(_QWORD *)(a1 + 1288)];
  if ( v15 != v17 )
  {
    while ( *(_DWORD *)v15 != (_DWORD)a2 )
    {
      v15 += 4;
      if ( v17 == v15 )
        goto LABEL_16;
    }
    if ( v17 != v15 )
    {
      memmove(v15, v15 + 4, v17 - v15 - 4);
      --*(_QWORD *)(a1 + 1288);
      goto LABEL_7;
    }
  }
LABEL_16:
  v24 = sub_4235B0(a1, &v39, a2, -1);
  if ( v24 == -1 )
  {
    v36 = __errno_location();
    v37 = (const char *)sub_481FB0(*v36);
    sub_411B10(a1, "Finish attaching to %d thread: %s\n", a2, v37);
    return 0;
  }
  if ( v24 != (_DWORD)a2 || (_BYTE)v39 != 127 )
    goto LABEL_18;
  if ( *(_BYTE *)(a1 + 1350) )
  {
    if ( v39 >> 16 == 128 )
      goto LABEL_7;
LABEL_18:
    v27 = *(_QWORD *)(a1 + 1224);
    if ( !v27 )
      goto LABEL_25;
    v28 = a1 + 1216;
    do
    {
      while ( 1 )
      {
        v29 = *(_QWORD *)(v27 + 16);
        v30 = *(_QWORD *)(v27 + 24);
        if ( *(_DWORD *)(v27 + 32) < (int)a2 )
          break;
        v28 = v27;
        v27 = *(_QWORD *)(v27 + 16);
        if ( !v29 )
          goto LABEL_23;
      }
      v27 = *(_QWORD *)(v27 + 24);
    }
    while ( v30 );
LABEL_23:
    if ( a1 + 1216 != v28 && *(_DWORD *)(v28 + 32) <= (int)a2 )
    {
      *(_BYTE *)(v28 + 64) = 1;
      if ( v24 <= 0 )
        goto LABEL_7;
    }
    else
    {
LABEL_25:
      *(_BYTE *)(v27 + 24) = 1;
      if ( v24 <= 0 )
        goto LABEL_7;
    }
    sub_412DB0((_QWORD *)a1, v24, v39, a5, a6, a7, a8, v25, v26, a11, a12);
    goto LABEL_7;
  }
  if ( (v39 & 0xFF00) != 0x1300 )
    goto LABEL_18;
LABEL_7:
  *(_OWORD *)dest = 0;
  v40 = 0xFFFFFFFFLL;
  v41 = -1;
  v42 = 0;
  v44 = 0;
  v45 = 0;
  sub_4787B0((__int64)&v40, 3);
  if ( (HIDWORD(v42) & 0xFFFFFFFu) - 9 > 1 && (HIDWORD(v42) & 0xFFFFFFF) != 3 )
    sub_40D900();
  if ( (void **)(v16 + 32) != dest )
  {
    v20 = *(void **)(v16 + 40);
    if ( !v20 || (v31 = (size_t)v20 - 1, v20 == (void *)1) )
    {
      dest[1] = nullptr;
    }
    else
    {
      v32 = *(const void **)(v16 + 32);
      v33 = dest[0];
      if ( (unsigned __int64)v44 < (unsigned __int64)v20 )
      {
        v33 = sub_481540((__int64)dest, dest[0], (unsigned __int64)v20, 1u);
        dest[0] = v33;
        v31 = (size_t)v20 - 1;
      }
      dest[1] = v20;
      memmove(v33, v32, v31);
      *((char *)dest[0] + (unsigned __int64)v20 - 1) = 0;
    }
  }
  v21 = _mm_cvtsi32_si128(a2);
  *(_QWORD *)&v22 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(*(_DWORD *)(a1 + 1340)), v21).m128i_u64[0];
  v40 = *(_QWORD *)&v22;
  if ( a4 )
    a3 = ptrace(
           PTRACE_PEEKUSER,
           (unsigned int)a2,
           128,
           0,
           v22,
           *(double *)v21.m128i_i64,
           *(double *)a7.m128_u64,
           *(double *)a8.m128_u64,
           v18,
           v19,
           *(double *)a11.m128_u64,
           *(double *)a12.m128_u64);
  v41 = a3;
  LOBYTE(v42) = 1;
  if ( (v42 & 0xFFFFFFF00000000LL) != 0 )
  {
    v34 = *(_QWORD *)(a1 + 136);
    if ( v34 == *(_QWORD *)(a1 + 144) )
    {
      sub_41AFF0((_QWORD *)(a1 + 120), (__int64)&v40);
    }
    else
    {
      *(_BYTE *)(v34 - 56) = 0;
      v35 = v34 - 72;
      *(_QWORD *)(v35 + 8) = -1;
      *(_QWORD *)v35 = 0xFFFFFFFFLL;
      *(_DWORD *)(v35 + 20) = 0;
      sub_4788F0(v35, (__int64)&v40);
      *(_QWORD *)(a1 + 136) -= 72LL;
    }
    *(_BYTE *)(a1 + 1412) = 0;
  }
  sub_478720((__int64)&v40);
  return 1;
}
// 41B461: variable 'v18' is possibly undefined
// 41B461: variable 'v19' is possibly undefined
// 41B387: variable 'v25' is possibly undefined
// 41B387: variable 'v26' is possibly undefined
