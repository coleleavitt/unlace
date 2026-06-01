/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_446F00
// Address: 0x0000000000446F00

//----- (0000000000446F00) ----------------------------------------------------
__int64 __fastcall sub_446F00(
        __m128i *a1,
        unsigned __int8 *a2,
        const char *a3,
        unsigned __int8 *a4,
        unsigned __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  __m128 v14; // xmm0
  double v16; // xmm4_8
  double v17; // xmm5_8
  double v18; // xmm4_8
  double v19; // xmm5_8
  __int64 v20; // r13
  char *v21; // rdi
  char *v22; // rdi
  __int64 v23; // r13
  double v24; // xmm4_8
  double v25; // xmm5_8
  double v26; // xmm4_8
  double v27; // xmm5_8
  double v28; // xmm4_8
  double v29; // xmm5_8
  unsigned int v30; // r15d
  double v31; // xmm4_8
  double v32; // xmm5_8
  double v33; // xmm4_8
  double v34; // xmm5_8
  void *v35; // rdi
  __int64 v36; // r12
  __int64 v37; // rbx
  __int64 v38; // rax
  const char *v39; // rax
  const char *v40; // rbx
  size_t v41; // rax
  size_t v42; // r13
  int v44; // r12d
  unsigned __int8 *v45; // rsi
  unsigned __int8 *v46; // rdi
  unsigned __int64 v47; // r12
  void *v48; // rdi
  void *v49; // rax
  unsigned __int8 *v50; // [rsp+0h] [rbp-170h]
  unsigned __int64 v51; // [rsp+8h] [rbp-168h]
  void *ptr; // [rsp+30h] [rbp-140h] BYREF
  __int128 v56; // [rsp+38h] [rbp-138h]
  _QWORD v57[20]; // [rsp+50h] [rbp-120h] BYREF
  unsigned __int8 v58; // [rsp+F0h] [rbp-80h] BYREF
  __int64 v59[2]; // [rsp+F8h] [rbp-78h]
  __int64 v60; // [rsp+108h] [rbp-68h]
  unsigned __int8 v61[8]; // [rsp+110h] [rbp-60h] BYREF
  __int128 v62; // [rsp+118h] [rbp-58h]
  __int64 v63; // [rsp+128h] [rbp-48h]
  unsigned __int64 v64; // [rsp+138h] [rbp-38h]

  v14.m128_u64[0] = 0;
  v64 = __readfsqword(0x28u);
  v58 = 2;
  v60 = 0;
  *(_OWORD *)v59 = 0;
  if ( a3 || !a2 )
  {
    if ( (unsigned int)sub_444A40((__m128i *)&v58, (__int64)a2, a3, 0, 0.0, a8, a9, a10, a11, a12, a13, a14) )
      goto LABEL_20;
  }
  else
  {
    sub_4418C0(&v58, a2, 0.0, a8, a9, a10, a11, a12, a13, a14);
  }
  if ( sub_4419D0(&v58, 2, 0.0, a8, a9, a10, v16, v17, a13, a14) )
  {
    if ( v58 == 6 )
    {
      v14 = 0;
      ptr = nullptr;
      v56 = 0;
      if ( a2 )
      {
        v51 = a5 + 1;
        if ( a5 == -1 )
        {
          sub_4418C0(nullptr, a2, 0.0, a8, a9, a10, v16, v17, a13, a14);
          v50 = nullptr;
          v23 = 32;
        }
        else
        {
          v14 = 0;
          v61[0] = 2;
          v63 = 0;
          v62 = 0;
          ptr = sub_481540((__int64)&ptr, nullptr, v51, 0x20u);
          v20 = v56;
          v21 = (char *)ptr;
          if ( (unsigned __int64)v56 < v51 )
          {
            while ( 1 )
            {
              a8 = 0;
              v22 = &v21[32 * v20];
              *v22 = 2;
              *((_QWORD *)v22 + 3) = 0;
              *(_OWORD *)(v22 + 8) = 0;
              sub_4418C0((unsigned __int8 *)v22, v61, 0.0, (__m128)0LL, a9, a10, v18, v19, a13, a14);
              if ( a5 == v20 )
                break;
              v21 = (char *)ptr;
              ++v20;
            }
          }
          *(_QWORD *)&v56 = a5 + 1;
          sub_441540((__int64)v61, 0.0, a8, a9, a10, v18, v19, a13, a14);
          v50 = (unsigned __int8 *)ptr;
          v23 = (__int64)ptr + 32;
          sub_4418C0((unsigned __int8 *)ptr, a2, 0.0, a8, a9, a10, v24, v25, a13, a14);
          if ( !a5 )
          {
            LODWORD(v51) = 1;
            goto LABEL_14;
          }
        }
        v44 = 0;
        do
        {
          v45 = a4;
          v46 = (unsigned __int8 *)v23;
          a4 += 32;
          v23 += 32;
          sub_4418C0(v46, v45, *(double *)v14.m128_u64, a8, a9, a10, v26, v27, a13, a14);
          ++v44;
        }
        while ( v44 < a5 );
      }
      else
      {
        LODWORD(v51) = a5;
        v50 = a4;
      }
LABEL_14:
      sub_442B60((__int64)v57, 0, 0);
      v30 = sub_446390(v57, nullptr, v59[0], v51, v50, a1, v14, a8, a9, a10, v28, v29, a13, a14, a6);
      sub_442CC0((__int64)v57, *(double *)v14.m128_u64, a8, a9, a10, v31, v32, a13, a14);
      v35 = ptr;
      if ( ptr )
      {
        v36 = v56;
        if ( (_QWORD)v56 )
        {
          v37 = 0;
          do
          {
            v38 = v37++;
            sub_441540((__int64)v35 + 32 * v38, *(double *)v14.m128_u64, a8, a9, a10, v33, v34, a13, a14);
            v35 = ptr;
          }
          while ( v36 != v37 );
        }
        *(_QWORD *)&v56 = 0;
        j__free(v35);
      }
      goto LABEL_25;
    }
    sub_479EB0(0x605u);
  }
LABEL_20:
  sub_444580((__int64)a1, 0.0, a8, a9, a10, v16, v17, a13, a14);
  if ( a6 )
  {
    v39 = sub_482380(-1);
    v40 = v39;
    if ( v39 && (v41 = strlen(v39), (v42 = v41) != 0) )
    {
      v47 = v41 + 1;
      v48 = *(void **)a6;
      if ( *(_QWORD *)(a6 + 16) < v41 + 1 )
      {
        v49 = sub_481540(a6, *(void **)a6, v47, 1u);
        *(_QWORD *)a6 = v49;
        v48 = v49;
      }
      *(_QWORD *)(a6 + 8) = v47;
      memmove(v48, v40, v42);
      *(_BYTE *)(*(_QWORD *)a6 + v42) = 0;
    }
    else
    {
      *(_QWORD *)(a6 + 8) = 0;
    }
  }
  v30 = 0;
LABEL_25:
  sub_441540((__int64)&v58, *(double *)v14.m128_u64, a8, a9, a10, v33, v34, a13, a14);
  return v30;
}
// 446F78: variable 'v16' is possibly undefined
// 446F78: variable 'v17' is possibly undefined
// 44705E: variable 'v18' is possibly undefined
// 44705E: variable 'v19' is possibly undefined
// 44709F: variable 'v24' is possibly undefined
// 44709F: variable 'v25' is possibly undefined
// 447100: variable 'v28' is possibly undefined
// 447100: variable 'v29' is possibly undefined
// 44710D: variable 'v31' is possibly undefined
// 44710D: variable 'v32' is possibly undefined
// 44713E: variable 'v33' is possibly undefined
// 44713E: variable 'v34' is possibly undefined
// 447265: variable 'v26' is possibly undefined
// 447265: variable 'v27' is possibly undefined
