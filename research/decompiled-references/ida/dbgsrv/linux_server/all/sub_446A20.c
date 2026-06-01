/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_446A20
// Address: 0x0000000000446A20

//----- (0000000000446A20) ----------------------------------------------------
__int64 __fastcall sub_446A20(
        __m128i *a1,
        const char *a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        double a10,
        double a11,
        __m128 a12,
        __m128 a13)
{
  __int64 v15; // r15
  signed int v16; // ebx
  double v17; // xmm4_8
  double v18; // xmm5_8
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rax
  double v21; // xmm4_8
  double v22; // xmm5_8
  _BYTE *v23; // rax
  __int64 v24; // rdx
  double v25; // xmm4_8
  double v26; // xmm5_8
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // rdx
  double v29; // xmm4_8
  double v30; // xmm5_8
  unsigned int v31; // r12d
  double v32; // xmm4_8
  double v33; // xmm5_8
  __int64 v34; // rbx
  __int64 v35; // rsi
  double v36; // xmm4_8
  double v37; // xmm5_8
  __int64 v39; // rax
  double v40; // xmm4_8
  double v41; // xmm5_8
  double v42; // xmm4_8
  double v43; // xmm5_8
  double v44; // xmm4_8
  double v45; // xmm5_8
  const char *v46; // rax
  const char *v47; // rbx
  size_t v48; // rax
  size_t v49; // r15
  unsigned __int64 v50; // r12
  void *v51; // rdi
  void *v52; // rax
  size_t na; // [rsp+8h] [rbp-128h]
  unsigned int n; // [rsp+8h] [rbp-128h]
  unsigned __int8 *s; // [rsp+28h] [rbp-108h]
  void *ptr; // [rsp+30h] [rbp-100h] BYREF
  __int128 v58; // [rsp+38h] [rbp-F8h]
  unsigned __int8 v59; // [rsp+D0h] [rbp-60h] BYREF
  __int128 v60; // [rsp+D8h] [rbp-58h]
  __int64 v61; // [rsp+E8h] [rbp-48h]
  unsigned __int64 v62; // [rsp+F8h] [rbp-38h]

  v62 = __readfsqword(0x28u);
  if ( a2 )
  {
    v15 = sub_439DA0(a2);
    if ( !v15 )
    {
      v16 = 1536;
      sub_479F30(0, a2);
      goto LABEL_36;
    }
  }
  else
  {
    v15 = 0;
  }
  a6.m128_u64[0] = 0;
  v59 = 2;
  v61 = 0;
  v60 = 0;
  v16 = sub_442A20((__int64)&v59, v15, 0.0, a7, a8, a9, a10, a11, a12, a13);
  if ( !v16 )
  {
    if ( v15 )
    {
      a6 = 0;
      ptr = nullptr;
      v58 = 0;
      if ( a2 )
      {
        na = strlen(a2);
        ptr = sub_481540((__int64)&ptr, nullptr, na + 1, 1u);
        *(_QWORD *)&v58 = na + 1;
        memmove(ptr, a2, na);
        *((_BYTE *)ptr + na) = 0;
      }
      n = sub_43D490(v15, (__int64)&ptr);
      if ( n != -1 )
      {
        if ( ptr )
        {
          *(_QWORD *)&v58 = 0;
          j__free(ptr);
        }
        v19 = a4 + 1;
        if ( a4 == -1 )
        {
          v39 = operator new[](8u);
          *(_QWORD *)v39 = 0;
          s = (unsigned __int8 *)(v39 + 8);
          sub_4418C0((unsigned __int8 *)(v39 + 8), &v59, 0.0, a7, a8, a9, v40, v41, a12, a13);
        }
        else if ( (a4 + 1) >> 59 )
        {
          s = (unsigned __int8 *)sub_4814F0(0x7FFFFFFFFFFFFFFFLL);
          sub_4418C0(s, &v59, 0.0, a7, a8, a9, v42, v43, a12, a13);
        }
        else
        {
          if ( v19 >> 58 )
            v20 = (_QWORD *)operator new[](0xFFFFFFFFFFFFFFFFLL);
          else
            v20 = (_QWORD *)operator new[](32 * v19 + 8);
          *v20 = a4 + 1;
          a6 = 0;
          s = (unsigned __int8 *)(v20 + 1);
          v23 = v20 + 1;
          v24 = (__int64)&v23[32 * a4 + 32];
          do
          {
            *v23 = 2;
            v23 += 32;
            *(_OWORD *)(v23 - 24) = 0;
            *((_QWORD *)v23 - 1) = 0;
          }
          while ( (_BYTE *)v24 != v23 );
          sub_4418C0(s, &v59, 0.0, a7, a8, a9, v21, v22, a12, a13);
        }
        v27 = 0;
        while ( v27 < a4 )
        {
          ++v16;
          v28 = v27;
          v27 = v16;
          sub_4418C0(
            &s[32 * v16],
            (unsigned __int8 *)(a3 + 32 * v28),
            *(double *)a6.m128_u64,
            a7,
            a8,
            a9,
            v25,
            v26,
            a12,
            a13);
        }
        sub_442B60((__int64)&ptr, 0, 0);
        v31 = sub_446390(&ptr, nullptr, n, (int)a4 + 1, s, a1, a6, a7, a8, a9, v29, v30, a12, a13, a5);
        if ( s )
        {
          v34 = (__int64)&s[32 * *((_QWORD *)s - 1)];
          if ( s == (unsigned __int8 *)v34 )
          {
            v35 = 0;
          }
          else
          {
            do
            {
              v34 -= 32;
              sub_441540(v34, *(double *)a6.m128_u64, a7, a8, a9, v32, v33, a12, a13);
            }
            while ( s != (unsigned __int8 *)v34 );
            v35 = 32LL * *((_QWORD *)s - 1);
          }
          operator delete[](s - 8, v35 + 8);
        }
        sub_442CC0((__int64)&ptr, *(double *)a6.m128_u64, a7, a8, a9, v32, v33, a12, a13);
        goto LABEL_29;
      }
      if ( ptr )
      {
        *(_QWORD *)&v58 = 0;
        j__free(ptr);
      }
    }
    sub_442230(a1, (__m128i *)&v59, *(double *)a6.m128_u64, a7, a8, a9, v17, v18, a12, a13);
    v31 = 1;
LABEL_29:
    sub_441540((__int64)&v59, *(double *)a6.m128_u64, a7, a8, a9, v36, v37, a12, a13);
    return v31;
  }
  sub_441540((__int64)&v59, 0.0, a7, a8, a9, v17, v18, a12, a13);
LABEL_36:
  sub_479EB0(v16);
  sub_444580((__int64)a1, *(double *)a6.m128_u64, a7, a8, a9, v44, v45, a12, a13);
  if ( a5 )
  {
    v46 = sub_482380(-1);
    v47 = v46;
    if ( v46 && (v48 = strlen(v46), (v49 = v48) != 0) )
    {
      v50 = v48 + 1;
      v51 = *(void **)a5;
      if ( *(_QWORD *)(a5 + 16) < v48 + 1 )
      {
        v52 = sub_481540(a5, *(void **)a5, v50, 1u);
        *(_QWORD *)a5 = v52;
        v51 = v52;
      }
      *(_QWORD *)(a5 + 8) = v50;
      memmove(v51, v47, v49);
      *(_BYTE *)(*(_QWORD *)a5 + v49) = 0;
    }
    else
    {
      *(_QWORD *)(a5 + 8) = 0;
    }
  }
  return 0;
}
// 446A99: variable 'a10' is possibly undefined
// 446A99: variable 'a11' is possibly undefined
// 446C22: variable 'v21' is possibly undefined
// 446C22: variable 'v22' is possibly undefined
// 446C53: variable 'v25' is possibly undefined
// 446C53: variable 'v26' is possibly undefined
// 446C9B: variable 'v29' is possibly undefined
// 446C9B: variable 'v30' is possibly undefined
// 446CD7: variable 'v32' is possibly undefined
// 446CD7: variable 'v33' is possibly undefined
// 446D4A: variable 'v17' is possibly undefined
// 446D4A: variable 'v18' is possibly undefined
// 446D58: variable 'v36' is possibly undefined
// 446D58: variable 'v37' is possibly undefined
// 446DC4: variable 'v40' is possibly undefined
// 446DC4: variable 'v41' is possibly undefined
// 446DE6: variable 'v42' is possibly undefined
// 446DE6: variable 'v43' is possibly undefined
// 446E06: variable 'v44' is possibly undefined
// 446E06: variable 'v45' is possibly undefined
