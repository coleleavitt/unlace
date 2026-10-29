__int64 __fastcall sub_70C8E0(__int64 *a1, __int64 a2, __int64 a3, const __m128i *a4, int a5)
{
  unsigned int v6; // r14d
  char v9; // r15
  int v10; // ebx
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __int64 v14; // rax
  __int64 v15; // rax
  int v16; // edx
  char v17; // al
  unsigned int v18; // r14d
  __int64 v20; // kr00_8
  __int64 v21; // rax
  char *v22; // rsi
  __m128i si128; // xmm0
  char *v24; // rsi
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rax
  _UNKNOWN **v28; // rdx
  __m128i v29; // xmm2
  __m128i v30; // xmm1
  __m128i v31; // xmm0
  __int64 v32; // rsi
  int v33; // eax
  int v34; // edx
  __m128i v35; // xmm0
  __m128i v36; // xmm0
  char *v37; // rbp
  size_t v38; // rax
  size_t v39; // rbx
  char *v40; // rdi
  size_t v41; // r12
  __int64 v42; // rax
  __m128i v43; // rax
  __int64 v44; // rax
  __int64 v46; // [rsp+10h] [rbp-238h]
  int v48; // [rsp+3Ch] [rbp-20Ch] BYREF
  __int64 v49; // [rsp+40h] [rbp-208h] BYREF
  __m128i v50; // [rsp+48h] [rbp-200h] BYREF
  __m128i v51; // [rsp+58h] [rbp-1F0h] BYREF
  __m128i v52; // [rsp+68h] [rbp-1E0h] BYREF
  int v53; // [rsp+80h] [rbp-1C8h] BYREF
  __int16 v54; // [rsp+84h] [rbp-1C4h]
  int v55; // [rsp+86h] [rbp-1C2h]
  char v56; // [rsp+8Ah] [rbp-1BEh]
  char v57; // [rsp+8Bh] [rbp-1BDh]
  int v58; // [rsp+8Ch] [rbp-1BCh]
  __int64 v59; // [rsp+90h] [rbp-1B8h]
  __m128i v60; // [rsp+98h] [rbp-1B0h]
  __int64 v61; // [rsp+A8h] [rbp-1A0h]
  __m128i v62; // [rsp+B0h] [rbp-198h]
  int v63; // [rsp+C0h] [rbp-188h]
  char *s; // [rsp+D0h] [rbp-178h] BYREF
  __int128 v65; // [rsp+D8h] [rbp-170h]
  void *ptr; // [rsp+E8h] [rbp-160h]
  __int128 v67; // [rsp+F0h] [rbp-158h]
  __int128 v68; // [rsp+100h] [rbp-148h]
  _QWORD *v69; // [rsp+110h] [rbp-138h]
  _OWORD v70[8]; // [rsp+118h] [rbp-130h] BYREF
  int v71; // [rsp+198h] [rbp-B0h] BYREF
  __int16 v72; // [rsp+19Ch] [rbp-ACh]
  __m128i v73; // [rsp+19Eh] [rbp-AAh]
  unsigned __int64 v74; // [rsp+1AEh] [rbp-9Ah]
  __int16 v75; // [rsp+1B6h] [rbp-92h]
  char v76; // [rsp+1B8h] [rbp-90h]
  __m128i v77; // [rsp+1B9h] [rbp-8Fh]
  __m128i v78; // [rsp+1C9h] [rbp-7Fh]
  __m128i v79; // [rsp+1D9h] [rbp-6Fh]
  __int64 v80; // [rsp+1E9h] [rbp-5Fh]
  unsigned int v81; // [rsp+1F1h] [rbp-57h]
  __m128i v82; // [rsp+1F5h] [rbp-53h]
  unsigned __int64 v83; // [rsp+208h] [rbp-40h]

  v6 = *((_DWORD *)a1 + 154);
  v83 = __readfsqword(0x28u);
  if ( v6 <= 4 )
  {
    sub_3573A0((char **)a1);
    return 0;
  }
  if ( !*(_DWORD *)(a2 + 616) )
  {
    v22 = (char *)*a1;
    if ( (unsigned __int64)a1[2] <= 0x2D )
    {
      v26 = qvector_reserve(a1, v22, 46, 1);
      *a1 = v26;
      v22 = (char *)v26;
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384280);
    a1[1] = 46;
    *(__m128i *)v22 = si128;
    *((__m128i *)v22 + 1) = _mm_load_si128((const __m128i *)&xmmword_2384290);
    *(__m128i *)(v22 + 29) = _mm_load_si128((const __m128i *)&xmmword_23842A0);
    *(_BYTE *)(*a1 + 45) = 0;
    v6 = *((_DWORD *)a1 + 154);
    if ( v6 > 6 )
      goto LABEL_4;
    goto LABEL_22;
  }
  if ( v6 <= 6 )
  {
LABEL_22:
    v24 = (char *)*a1;
    if ( (unsigned __int64)a1[2] <= 0x1C )
    {
      v42 = qvector_reserve(a1, v24, 29, 1);
      *a1 = v42;
      v24 = (char *)v42;
    }
    v25 = _mm_load_si128((const __m128i *)&xmmword_23842B0);
    a1[1] = 29;
    *(__m128i *)v24 = v25;
    *(__m128i *)(v24 + 12) = _mm_load_si128((const __m128i *)&xmmword_23842C0);
    *(_BYTE *)(*a1 + 28) = 0;
    return 0;
  }
LABEL_4:
  v46 = 0;
  if ( a5 )
  {
    v20 = a1[7] * a5;
    v21 = 1;
    if ( v20 / 100 )
      v21 = v20 / 100;
    v46 = v21;
  }
  v69 = a1 + 74;
  v72 = 0;
  v74 = 0xAABBCCDD00000000LL;
  v9 = *((_BYTE *)a1 + 633);
  v10 = *((_DWORD *)a1 + 155);
  s = nullptr;
  ptr = nullptr;
  v71 = 826360905;
  v75 = 910;
  v76 = 0;
  v80 = 0;
  v81 = 0;
  v65 = 0;
  v67 = 0;
  v68 = 0;
  v73 = _mm_load_si128((const __m128i *)&xmmword_2384270);
  v77 = 0;
  v78 = 0;
  v79 = 0;
  qstrncpy(&v71, "IDA1", 6);
  v11 = _mm_loadu_si128((const __m128i *)a1 + 28);
  v75 = v6;
  LODWORD(v74) = v10;
  v82 = v11;
  v12 = _mm_loadu_si128((const __m128i *)a1 + 29);
  v76 = v9;
  v70[0] = v12;
  v13 = _mm_loadu_si128((const __m128i *)a1 + 30);
  v73.m128i_i64[0] = 109;
  v70[1] = v13;
  v70[2] = _mm_loadu_si128((const __m128i *)a1 + 31);
  v70[3] = _mm_loadu_si128((const __m128i *)a1 + 32);
  v70[4] = _mm_loadu_si128((const __m128i *)a1 + 33);
  v70[5] = _mm_loadu_si128((const __m128i *)a1 + 34);
  v70[6] = _mm_loadu_si128((const __m128i *)a1 + 35);
  v70[7] = _mm_loadu_si128((const __m128i *)a1 + 36);
  v14 = a1[75];
  if ( v14 )
  {
    v81 = a1[75];
    v80 = 237;
    *(_QWORD *)&v68 = 8LL * (unsigned int)v14;
    v15 = v68 + 237;
    v16 = v68 + 237;
  }
  else
  {
    v81 = 0;
    v15 = 237;
    v16 = 237;
    v80 = 0;
  }
  v73.m128i_i64[1] = v15;
  v54 = 0;
  v17 = *((_BYTE *)a1 + 633);
  v56 = 1;
  v53 = (int)&loc_444356;
  v55 = 65604;
  v59 = 0;
  v61 = 0;
  v58 = v16;
  v63 = 4;
  v57 = v17;
  v49 = 0;
  v60 = 0;
  v62 = 0;
  if ( (unsigned __int8)sub_70B780((__int64)a1, &v49)
    && (unsigned __int8)sub_813610(a1, a3, 0)
    && (unsigned __int8)sub_813810(a1, a3, &v53, 68) )
  {
    v27 = 0;
    v28 = &off_2B0E4A0;
    if ( v81 <= 0x1FFFFFFF )
    {
      do
      {
        if ( !*(&v49 + v27 + 1) && ((_BYTE)v28[1] & 1) == 0 )
          goto LABEL_60;
        ++v27;
        v28 += 2;
      }
      while ( v27 != 6 );
      v29 = _mm_loadu_si128(&v51);
      v30 = _mm_loadu_si128(&v52);
      v77 = _mm_loadu_si128(&v50);
      v31 = _mm_add_epi64(_mm_add_epi64(v77, v29), v30);
      v79 = v30;
      v78 = v29;
      *((_QWORD *)&v68 + 1) = _mm_add_epi64(v31, _mm_srli_si128(v31, 8)).m128i_u64[0];
      if ( !(unsigned __int8)sub_813810(&s, a3, &v71, 109)
        || !(unsigned __int8)sub_813810(&s, a3, v70, 128)
        || v69[1] && !(unsigned __int8)sub_813810(&s, a3, *v69, v68) )
      {
        if ( (_QWORD)v65 && (v37 = s) != nullptr && (v38 = strlen(s), (v39 = v38) != 0) )
        {
          v40 = (char *)*a1;
          v41 = v38 + 1;
          if ( a1[2] < v38 + 1 )
          {
            v44 = qvector_reserve(a1, *a1, v38 + 1, 1);
            *a1 = v44;
            v40 = (char *)v44;
          }
          a1[1] = v41;
          memmove(v40, v37, v39);
          *(_BYTE *)(*a1 + v39) = 0;
        }
        else
        {
          a1[1] = 0;
        }
        goto LABEL_9;
      }
      if ( !v46 || qftell(a3) < (unsigned __int64)(v46 + 4) )
      {
        v18 = sub_70B9D0((__m128i *)a1, a2, a3, a4);
        if ( !(_BYTE)v18 )
          goto LABEL_9;
        if ( !v46 || v46 + 4 >= (unsigned __int64)qftell(a3) )
        {
          v32 = a1[81];
          v48 = 0;
          if ( sub_813700(a1, v32, &v48, 4, 1) != 4 || a3 && !(unsigned __int8)sub_813810(a1, a3, &v48, 4) )
            goto LABEL_9;
          v33 = *((_DWORD *)a1 + 179);
          if ( v33 == 1 )
          {
            sub_70A440((__int64)a1);
            v33 = *((_DWORD *)a1 + 179);
          }
          v34 = *(_DWORD *)(a2 + 716);
          if ( v33 != 2 )
          {
            if ( v34 == 1 )
            {
              sub_70A440(a2);
              if ( *(_DWORD *)(a2 + 716) != 2 )
                goto LABEL_10;
            }
            else if ( v34 != 2 )
            {
              goto LABEL_10;
            }
            v43.m128i_i64[1] = *(_QWORD *)(a2 + 736);
            v59 = *(_QWORD *)(a2 + 720);
            v43.m128i_i64[0] = *(_QWORD *)(a2 + 728);
            v60 = v43;
            goto LABEL_50;
          }
          if ( v34 == 1 )
          {
            sub_70A440(a2);
            if ( *(_DWORD *)(a2 + 716) != 2 )
              goto LABEL_49;
          }
          else if ( v34 != 2 )
          {
LABEL_49:
            v36 = _mm_loadu_si128((const __m128i *)(a1 + 91));
            v61 = a1[90];
            v62 = v36;
LABEL_50:
            if ( !(unsigned __int8)sub_813610(a1, a3, 0) )
              goto LABEL_9;
            v18 = sub_813810(a1, a3, &v53, 68);
            goto LABEL_10;
          }
          v35 = _mm_loadu_si128((const __m128i *)(a2 + 728));
          v59 = *(_QWORD *)(a2 + 720);
          v60 = v35;
          goto LABEL_49;
        }
      }
    }
LABEL_60:
    sub_3573A0((char **)a1);
  }
LABEL_9:
  v18 = 0;
LABEL_10:
  if ( ptr )
  {
    *(_QWORD *)&v67 = 0;
    qfree(ptr);
  }
  if ( s )
  {
    *(_QWORD *)&v65 = 0;
    qfree(s);
  }
  return v18;
}

