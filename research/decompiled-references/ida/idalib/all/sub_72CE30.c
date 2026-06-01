__int64 __fastcall sub_72CE30(__int64 *a1, __int64 a2, __int64 a3, const __m128i *a4, int a5)
{
  unsigned int v6; // r14d
  __int64 v9; // kr00_8
  __int64 v10; // rax
  char v11; // r15
  const char *v12; // rsi
  int v13; // ebx
  __m128i v14; // xmm0
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // edx
  char v20; // al
  unsigned int v21; // r14d
  char *v23; // rsi
  __m128i si128; // xmm0
  char *v25; // rsi
  __m128i v26; // xmm0
  __int64 v27; // rax
  __int64 v28; // rax
  _UNKNOWN **v29; // rdx
  __m128i v30; // xmm2
  __m128i v31; // xmm1
  __m128i v32; // xmm0
  __int64 v33; // rsi
  int v34; // eax
  int v35; // edx
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  char *v38; // rbp
  size_t v39; // rax
  size_t v40; // rbx
  char *v41; // rdi
  size_t v42; // r12
  __int64 v43; // rax
  __m128i v44; // rax
  __int64 v45; // rax
  __int64 v47; // [rsp+10h] [rbp-238h]
  int v49; // [rsp+3Ch] [rbp-20Ch] BYREF
  __int64 v50; // [rsp+40h] [rbp-208h] BYREF
  __m128i v51; // [rsp+48h] [rbp-200h] BYREF
  __m128i v52; // [rsp+58h] [rbp-1F0h] BYREF
  __m128i v53; // [rsp+68h] [rbp-1E0h] BYREF
  int v54; // [rsp+80h] [rbp-1C8h] BYREF
  __int16 v55; // [rsp+84h] [rbp-1C4h]
  int v56; // [rsp+86h] [rbp-1C2h]
  char v57; // [rsp+8Ah] [rbp-1BEh]
  char v58; // [rsp+8Bh] [rbp-1BDh]
  int v59; // [rsp+8Ch] [rbp-1BCh]
  __int64 v60; // [rsp+90h] [rbp-1B8h]
  __m128i v61; // [rsp+98h] [rbp-1B0h]
  __int64 v62; // [rsp+A8h] [rbp-1A0h]
  __m128i v63; // [rsp+B0h] [rbp-198h]
  int v64; // [rsp+C0h] [rbp-188h]
  char *s; // [rsp+D0h] [rbp-178h] BYREF
  __int128 v66; // [rsp+D8h] [rbp-170h]
  void *ptr; // [rsp+E8h] [rbp-160h]
  __int128 v68; // [rsp+F0h] [rbp-158h]
  __int128 v69; // [rsp+100h] [rbp-148h]
  _QWORD *v70; // [rsp+110h] [rbp-138h]
  _OWORD v71[8]; // [rsp+118h] [rbp-130h] BYREF
  int v72; // [rsp+198h] [rbp-B0h] BYREF
  __int16 v73; // [rsp+19Ch] [rbp-ACh]
  __m128i v74; // [rsp+19Eh] [rbp-AAh]
  unsigned __int64 v75; // [rsp+1AEh] [rbp-9Ah]
  __int16 v76; // [rsp+1B6h] [rbp-92h]
  char v77; // [rsp+1B8h] [rbp-90h]
  __m128i v78; // [rsp+1B9h] [rbp-8Fh]
  __m128i v79; // [rsp+1C9h] [rbp-7Fh]
  __m128i v80; // [rsp+1D9h] [rbp-6Fh]
  __int64 v81; // [rsp+1E9h] [rbp-5Fh]
  unsigned int v82; // [rsp+1F1h] [rbp-57h]
  __m128i v83; // [rsp+1F5h] [rbp-53h]
  unsigned __int64 v84; // [rsp+208h] [rbp-40h]

  v6 = *((_DWORD *)a1 + 154);
  v84 = __readfsqword(0x28u);
  if ( v6 <= 4 )
  {
    sub_35A790((char **)a1);
    return 0;
  }
  if ( !*(_DWORD *)(a2 + 616) )
  {
    v23 = (char *)*a1;
    if ( (unsigned __int64)a1[2] <= 0x2D )
    {
      v27 = qvector_reserve(a1, v23, 46, 1);
      *a1 = v27;
      v23 = (char *)v27;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A82B0);
    a1[1] = 46;
    *(__m128i *)v23 = si128;
    *((__m128i *)v23 + 1) = _mm_load_si128((const __m128i *)&xmmword_23A82C0);
    *(__m128i *)(v23 + 29) = _mm_load_si128((const __m128i *)&xmmword_23A82D0);
    *(_BYTE *)(*a1 + 45) = 0;
    v6 = *((_DWORD *)a1 + 154);
    if ( v6 > 6 )
      goto LABEL_4;
    goto LABEL_24;
  }
  if ( v6 <= 6 )
  {
LABEL_24:
    v25 = (char *)*a1;
    if ( (unsigned __int64)a1[2] <= 0x1C )
    {
      v43 = qvector_reserve(a1, v25, 29, 1);
      *a1 = v43;
      v25 = (char *)v43;
    }
    v26 = _mm_load_si128((const __m128i *)&xmmword_23A82E0);
    a1[1] = 29;
    *(__m128i *)v25 = v26;
    *(__m128i *)(v25 + 12) = _mm_load_si128((const __m128i *)&xmmword_23A82F0);
    *(_BYTE *)(*a1 + 28) = 0;
    return 0;
  }
LABEL_4:
  v47 = 0;
  if ( a5 )
  {
    v9 = a1[7] * a5;
    v10 = 1;
    if ( v9 / 100 )
      v10 = v9 / 100;
    v47 = v10;
  }
  v11 = *((_BYTE *)a1 + 633);
  v12 = "IDA2";
  v13 = *((_DWORD *)a1 + 155);
  if ( *((_BYTE *)a1 + 632) == 32 )
    v12 = "IDA1";
  v70 = a1 + 74;
  v73 = 0;
  s = nullptr;
  v75 = 0xAABBCCDD00000000LL;
  v76 = 910;
  ptr = nullptr;
  v72 = 843138121;
  v77 = 0;
  v81 = 0;
  v82 = 0;
  v66 = 0;
  v68 = 0;
  v69 = 0;
  v74 = _mm_load_si128((const __m128i *)&xmmword_23A82A0);
  v78 = 0;
  v79 = 0;
  v80 = 0;
  qstrncpy(&v72, v12, 6);
  v14 = _mm_loadu_si128((const __m128i *)a1 + 28);
  v76 = v6;
  LODWORD(v75) = v13;
  v83 = v14;
  v15 = _mm_loadu_si128((const __m128i *)a1 + 29);
  v77 = v11;
  v71[0] = v15;
  v16 = _mm_loadu_si128((const __m128i *)a1 + 30);
  v74.m128i_i64[0] = 109;
  v71[1] = v16;
  v71[2] = _mm_loadu_si128((const __m128i *)a1 + 31);
  v71[3] = _mm_loadu_si128((const __m128i *)a1 + 32);
  v71[4] = _mm_loadu_si128((const __m128i *)a1 + 33);
  v71[5] = _mm_loadu_si128((const __m128i *)a1 + 34);
  v71[6] = _mm_loadu_si128((const __m128i *)a1 + 35);
  v71[7] = _mm_loadu_si128((const __m128i *)a1 + 36);
  v17 = a1[75];
  if ( v17 )
  {
    v82 = a1[75];
    v81 = 237;
    *(_QWORD *)&v69 = 8LL * (unsigned int)v17;
    v18 = v69 + 237;
    v19 = v69 + 237;
  }
  else
  {
    v82 = 0;
    v18 = 237;
    v19 = 237;
    v81 = 0;
  }
  v74.m128i_i64[1] = v18;
  v55 = 0;
  v20 = *((_BYTE *)a1 + 633);
  v57 = 1;
  v54 = 4473686;
  v56 = 65604;
  v60 = 0;
  v62 = 0;
  v59 = v19;
  v64 = 4;
  v58 = v20;
  v50 = 0;
  v61 = 0;
  v63 = 0;
  if ( (unsigned __int8)sub_72BD60((__int64)a1, &v50)
    && (unsigned __int8)sub_8369E0(a1, a3, 0)
    && (unsigned __int8)sub_836BE0(a1, a3, &v54, 68) )
  {
    v28 = 0;
    v29 = &off_2B38440;
    if ( v82 <= 0x1FFFFFFF )
    {
      do
      {
        if ( !*(&v50 + v28 + 1) && ((_BYTE)v29[1] & 1) == 0 )
          goto LABEL_62;
        ++v28;
        v29 += 2;
      }
      while ( v28 != 6 );
      v30 = _mm_loadu_si128(&v52);
      v31 = _mm_loadu_si128(&v53);
      v78 = _mm_loadu_si128(&v51);
      v32 = _mm_add_epi64(_mm_add_epi64(v78, v30), v31);
      v80 = v31;
      v79 = v30;
      *((_QWORD *)&v69 + 1) = _mm_add_epi64(v32, _mm_srli_si128(v32, 8)).m128i_u64[0];
      if ( !(unsigned __int8)sub_836BE0(&s, a3, &v72, 109)
        || !(unsigned __int8)sub_836BE0(&s, a3, v71, 128)
        || v70[1] && !(unsigned __int8)sub_836BE0(&s, a3, *v70, v69) )
      {
        if ( (_QWORD)v66 && (v38 = s) != nullptr && (v39 = strlen(s), (v40 = v39) != 0) )
        {
          v41 = (char *)*a1;
          v42 = v39 + 1;
          if ( a1[2] < v39 + 1 )
          {
            v45 = qvector_reserve(a1, *a1, v39 + 1, 1);
            *a1 = v45;
            v41 = (char *)v45;
          }
          a1[1] = v42;
          memmove(v41, v38, v40);
          *(_BYTE *)(*a1 + v40) = 0;
        }
        else
        {
          a1[1] = 0;
        }
        goto LABEL_14;
      }
      if ( !v47 || qftell(a3) < (unsigned __int64)(v47 + 4) )
      {
        v21 = sub_72BFB0((__m128i *)a1, a2, a3, a4);
        if ( !(_BYTE)v21 )
          goto LABEL_14;
        if ( !v47 || v47 + 4 >= (unsigned __int64)qftell(a3) )
        {
          v33 = a1[81];
          v49 = 0;
          if ( sub_836AD0(a1, v33, &v49, 4, 1) != 4 || a3 && !(unsigned __int8)sub_836BE0(a1, a3, &v49, 4) )
            goto LABEL_14;
          v34 = *((_DWORD *)a1 + 179);
          if ( v34 == 1 )
          {
            sub_72AA20((__int64)a1);
            v34 = *((_DWORD *)a1 + 179);
          }
          v35 = *(_DWORD *)(a2 + 716);
          if ( v34 != 2 )
          {
            if ( v35 == 1 )
            {
              sub_72AA20(a2);
              if ( *(_DWORD *)(a2 + 716) != 2 )
                goto LABEL_15;
            }
            else if ( v35 != 2 )
            {
              goto LABEL_15;
            }
            v44.m128i_i64[1] = *(_QWORD *)(a2 + 736);
            v60 = *(_QWORD *)(a2 + 720);
            v44.m128i_i64[0] = *(_QWORD *)(a2 + 728);
            v61 = v44;
            goto LABEL_52;
          }
          if ( v35 == 1 )
          {
            sub_72AA20(a2);
            if ( *(_DWORD *)(a2 + 716) != 2 )
              goto LABEL_51;
          }
          else if ( v35 != 2 )
          {
LABEL_51:
            v37 = _mm_loadu_si128((const __m128i *)(a1 + 91));
            v62 = a1[90];
            v63 = v37;
LABEL_52:
            if ( !(unsigned __int8)sub_8369E0(a1, a3, 0) )
              goto LABEL_14;
            v21 = sub_836BE0(a1, a3, &v54, 68);
            goto LABEL_15;
          }
          v36 = _mm_loadu_si128((const __m128i *)(a2 + 728));
          v60 = *(_QWORD *)(a2 + 720);
          v61 = v36;
          goto LABEL_51;
        }
      }
    }
LABEL_62:
    sub_35A790((char **)a1);
  }
LABEL_14:
  v21 = 0;
LABEL_15:
  if ( ptr )
  {
    *(_QWORD *)&v68 = 0;
    qfree(ptr);
  }
  if ( s )
  {
    *(_QWORD *)&v66 = 0;
    qfree(s);
  }
  return v21;
}
