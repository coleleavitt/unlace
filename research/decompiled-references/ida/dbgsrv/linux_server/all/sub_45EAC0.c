/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_45EAC0
// Address: 0x000000000045EAC0

//----- (000000000045EAC0) ----------------------------------------------------
__int64 __fastcall sub_45EAC0(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v16; // rax
  char *v17; // rsi
  double v19; // xmm4_8
  double v20; // xmm5_8
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r14
  char *v24; // rsi
  __int64 v25; // rax
  signed __int64 v26; // rax
  size_t v27; // r8
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // r10
  char *v30; // rsi
  __int64 v31; // rax
  signed __int64 v32; // rax
  size_t v33; // r12
  unsigned __int64 v34; // r8
  unsigned __int64 v35; // r9
  char *v36; // rsi
  __int64 v37; // rax
  const char *v38; // rsi
  int v39; // r12d
  __int64 v40; // r13
  signed __int64 v41; // rax
  char *v43; // rax
  char *v44; // rax
  unsigned __int64 v45; // r9
  size_t v46; // r8
  unsigned __int64 v47; // r10
  char *v48; // rax
  char *v49; // rax
  __int64 v51; // [rsp+18h] [rbp-80h]
  unsigned __int64 v52; // [rsp+28h] [rbp-70h]
  unsigned __int64 v53; // [rsp+28h] [rbp-70h]
  unsigned __int64 v54; // [rsp+28h] [rbp-70h]
  unsigned __int64 v55; // [rsp+28h] [rbp-70h]
  unsigned __int64 v56; // [rsp+28h] [rbp-70h]
  unsigned __int64 v57; // [rsp+28h] [rbp-70h]
  size_t na; // [rsp+30h] [rbp-68h]
  size_t nc; // [rsp+30h] [rbp-68h]
  size_t nd; // [rsp+30h] [rbp-68h]
  size_t ne; // [rsp+30h] [rbp-68h]
  size_t n; // [rsp+30h] [rbp-68h]
  size_t nb; // [rsp+30h] [rbp-68h]
  unsigned __int64 v64; // [rsp+38h] [rbp-60h]
  unsigned __int64 v65; // [rsp+38h] [rbp-60h]
  unsigned __int64 v66; // [rsp+38h] [rbp-60h]
  unsigned __int64 v67; // [rsp+38h] [rbp-60h]
  _BYTE src[3]; // [rsp+4Eh] [rbp-4Ah] BYREF
  _BYTE v69[7]; // [rsp+51h] [rbp-47h] BYREF
  _QWORD v70[8]; // [rsp+58h] [rbp-40h] BYREF

  v16 = *(_QWORD *)(a10 + 8);
  v17 = *(char **)a10;
  v70[0] = __readfsqword(0x28u);
  if ( *(_QWORD *)(a10 + 16) < (unsigned __int64)(v16 + 1) )
  {
    v49 = (char *)sub_481540(a10, v17, v16 + 1, 1u);
    *(_QWORD *)a10 = v49;
    v17 = v49;
    v16 = *(_QWORD *)(a10 + 8);
  }
  v17[v16] = 1;
  ++*(_QWORD *)(a10 + 8);
  sub_45BD90((char **)a10, *(unsigned __int8 *)(a12 + 168));
  sub_45BD90((char **)a10, *(unsigned __int8 *)(a12 + 169));
  v21 = sub_45E830(a13, a1, a2, a3, a4, v19, v20, a7, a8);
  sub_45BEA0((char **)a10, v21);
  sub_45BD90((char **)a10, *(_DWORD *)(a13 + 24));
  sub_45BD90((char **)a10, *(_DWORD *)(a14 + 8));
  v22 = *(_QWORD *)(a14 + 8);
  if ( (int)v22 > 0 )
  {
    v23 = 0;
    v51 = 4LL * (unsigned int)(v22 - 1) + 4;
    while ( 1 )
    {
      v39 = *(_DWORD *)(*(_QWORD *)a14 + v23);
      v40 = *(_QWORD *)(a12 + 104) + 120LL * v39;
      v41 = sub_47FC90(src, (unsigned __int64)v70, *(_QWORD *)v40) - src;
      v46 = v41;
      if ( v41 )
        break;
LABEL_9:
      v26 = sub_47FC90(src, (unsigned __int64)v70, *(unsigned int *)(v40 + 8)) - src;
      v27 = v26;
      if ( !v26 )
        goto LABEL_15;
      v28 = *(_QWORD *)(a10 + 8);
      v29 = v28 + v26;
      if ( __CFADD__(v28, v26) )
      {
        if ( v28 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( v28 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)(a10 + 8) = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_14;
        }
        v29 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v30 = *(char **)a10;
      v31 = *(_QWORD *)(a10 + 8);
      if ( *(_QWORD *)(a10 + 16) < v29 )
      {
        v67 = *(_QWORD *)(a10 + 8);
        nb = v27;
        v57 = v29;
        v48 = (char *)sub_481540(a10, v30, v29, 1u);
        v28 = v67;
        v27 = nb;
        *(_QWORD *)a10 = v48;
        v30 = v48;
        v29 = v57;
        v31 = *(_QWORD *)(a10 + 8);
      }
      v65 = v28;
      nc = v27;
      v53 = v29;
      memset(&v30[v31], 0, v29 - v31);
      v27 = nc;
      v28 = v65;
      *(_QWORD *)(a10 + 8) = v53;
LABEL_14:
      memcpy((void *)(v28 + *(_QWORD *)a10), src, v27);
LABEL_15:
      v32 = sub_47FAA0(src, (unsigned __int64)v69, v39) - src;
      v33 = v32;
      if ( v32 )
      {
        v34 = *(_QWORD *)(a10 + 8);
        v35 = v34 + v32;
        if ( __CFADD__(v34, v32) )
        {
          if ( v34 <= 0x7FFFFFFFFFFFFFFELL )
          {
            v36 = *(char **)a10;
            v37 = *(_QWORD *)(a10 + 8);
            v35 = 0x7FFFFFFFFFFFFFFFLL;
            if ( *(_QWORD *)(a10 + 16) < 0x7FFFFFFFFFFFFFFFuLL )
              goto LABEL_36;
            goto LABEL_18;
          }
          if ( v34 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)(a10 + 8) = 0x7FFFFFFFFFFFFFFFLL;
        }
        else
        {
          v36 = *(char **)a10;
          v37 = *(_QWORD *)(a10 + 8);
          if ( *(_QWORD *)(a10 + 16) >= v35 )
            goto LABEL_18;
LABEL_36:
          ne = *(_QWORD *)(a10 + 8);
          v55 = v35;
          v43 = (char *)sub_481540(a10, v36, v35, 1u);
          v34 = ne;
          v35 = v55;
          *(_QWORD *)a10 = v43;
          v36 = v43;
          v37 = *(_QWORD *)(a10 + 8);
LABEL_18:
          nd = v34;
          v54 = v35;
          memset(&v36[v37], 0, v35 - v37);
          v34 = nd;
          *(_QWORD *)(a10 + 8) = v54;
        }
        memcpy((void *)(v34 + *(_QWORD *)a10), src, v33);
      }
      v38 = s1;
      if ( *(_QWORD *)(v40 + 24) )
        v38 = *(const char **)(v40 + 16);
      v23 += 4;
      sub_45BFB0((char **)a10, v38);
      if ( v51 == v23 )
        return 0;
    }
    v45 = *(_QWORD *)(a10 + 8);
    v47 = v45 + v41;
    if ( __CFADD__(v45, v41) )
    {
      if ( v45 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( v45 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)(a10 + 8) = 0x7FFFFFFFFFFFFFFFLL;
LABEL_8:
        memcpy((void *)(v45 + *(_QWORD *)a10), src, v46);
        goto LABEL_9;
      }
      v47 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v24 = *(char **)a10;
    v25 = *(_QWORD *)(a10 + 8);
    if ( *(_QWORD *)(a10 + 16) < v47 )
    {
      v66 = *(_QWORD *)(a10 + 8);
      n = v46;
      v56 = v47;
      v44 = (char *)sub_481540(a10, v24, v47, 1u);
      v45 = v66;
      v46 = n;
      *(_QWORD *)a10 = v44;
      v24 = v44;
      v47 = v56;
      v25 = *(_QWORD *)(a10 + 8);
    }
    v64 = v45;
    na = v46;
    v52 = v47;
    memset(&v24[v25], 0, v47 - v25);
    v46 = na;
    v45 = v64;
    *(_QWORD *)(a10 + 8) = v52;
    goto LABEL_8;
  }
  return 0;
}
// 45EB30: variable 'v19' is possibly undefined
// 45EB30: variable 'v20' is possibly undefined
