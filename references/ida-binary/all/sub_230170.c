unsigned __int64 __fastcall sub_230170(
        __int16 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  unsigned int v9; // edx
  int v10; // ebx
  _QWORD *v11; // rax
  __m128 v12; // xmm4
  __m128 v13; // xmm5
  _BYTE *v14; // rsi
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // r14
  __m128i si128; // xmm0
  __m128i *v19; // rax
  __m128i v20; // xmm0
  __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // r13
  __m128i v24; // xmm0
  const char *v25; // r14
  char *v26; // rax
  bool v27; // zf
  __m128 v28; // xmm0
  __int64 v29; // rdi
  __int64 v30; // r12
  void *v31; // rdi
  void *v32; // r14
  __int64 v33; // rdx
  __int64 v34; // rcx
  _BYTE *v35; // rsi
  char *v36; // r8
  unsigned __int64 v37; // r14
  __int64 v38; // rdx
  unsigned __int64 v39; // r12
  __int64 v40; // r13
  __int64 v41; // r12
  __int64 v42; // r14
  __int64 v43; // r13
  _BYTE *v44; // rsi
  __m128i v45; // xmm0
  char *v46; // rax
  __int64 (__fastcall *v47)(int, __int64); // rsi
  const char *v48; // rdi
  size_t v49; // r12
  __int64 v50; // rdi
  const char *v51; // rdx
  const char *v52; // rsi
  double v53; // xmm4_8
  double v54; // xmm5_8
  int v55; // edx
  int v56; // eax
  char *v58; // rax
  char *v59; // rax
  size_t v60; // r8
  void *v61; // rdi
  __int64 v62; // r12
  __int64 bpt_kernel_interface; // rax
  int v64; // [rsp+14h] [rbp-CCh]
  const char *v65; // [rsp+38h] [rbp-A8h]
  unsigned __int16 v66; // [rsp+4Ah] [rbp-96h] BYREF
  __int16 v67; // [rsp+4Ch] [rbp-94h] BYREF
  unsigned __int16 v68; // [rsp+4Eh] [rbp-92h] BYREF
  void *v69; // [rsp+50h] [rbp-90h] BYREF
  __int128 v70; // [rsp+58h] [rbp-88h]
  void *src; // [rsp+70h] [rbp-70h] BYREF
  __int128 v72; // [rsp+78h] [rbp-68h]
  void *dest; // [rsp+90h] [rbp-50h] BYREF
  __int128 v74; // [rsp+98h] [rbp-48h]
  unsigned __int64 v75; // [rsp+A8h] [rbp-38h]

  v75 = __readfsqword(0x28u);
  v70 = 0;
  v69 = nullptr;
  if ( xmmword_8CC590 )
  {
    *((_QWORD *)&v70 + 1) = xmmword_8CC590;
    v69 = (void *)qalloc_or_throw(xmmword_8CC590);
    memcpy(v69, qword_8CC588, *((size_t *)&v70 + 1));
    *(_QWORD *)&v70 = *((_QWORD *)&v70 + 1);
  }
  v9 = ((unsigned int)dword_8BA5B0 >> 14) & 0x10
     | ((unsigned int)dword_8BA5B0 >> 12) & 8
     | ((unsigned int)dword_8BA5B0 >> 15) & 4
     | ((unsigned int)dword_8BA5B0 >> 9) & 2
     | ((unsigned int)dword_8BA5B0 >> 11) & 1;
  v10 = a1 & 0x400;
  if ( (a1 & 0x400) != 0 )
    v9 |= 32 * (((unsigned int)dword_8BA5B0 >> 19) & 1);
  v66 = ((unsigned int)dword_8BA5B0 >> 4) & 0x20
      | ((unsigned int)dword_8BA5B0 >> 3) & 0x10
      | ((unsigned int)dword_8BA5B0 >> 10) & 4
      | dword_8BA5B0 & 8
      | ((unsigned int)dword_8BA5B0 >> 15) & 2
      | ((dword_8BA5B0 & 2) != 0);
  v64 = dword_8BA5B0 & 0x6000;
  v67 = ((unsigned int)dword_8BA5B0 >> 4) & 0x10
      | ((unsigned int)dword_8BA5B0 >> 1) & 8
      | dword_8BA5B0 & 1
      | ((unsigned int)dword_8BA5B0 >> 4) & 4
      | ((unsigned int)dword_8BA5B0 >> 1) & 2;
  v68 = v9;
  src = nullptr;
  v72 = 0;
  v11 = (_QWORD *)qvector_reserve(&src, 0, 1550, 1);
  src = v11;
  *(_QWORD *)&v72 = 1550;
  *v11 = 0x5B333134313A3040LL;
  *(_QWORD *)((char *)v11 + 1541) = 0x3E353431433A676ELL;
  qmemcpy(
    (void *)((unsigned __int64)(v11 + 1) & 0xFFFFFFFFFFFFFFF8LL),
    (const void *)((char *)&qword_5E20C0 - ((char *)v11 - ((unsigned __int64)(v11 + 1) & 0xFFFFFFFFFFFFFFF8LL))),
    8LL * (((unsigned int)v11 - (((_DWORD)v11 + 8) & 0xFFFFFFF8) + 1549) >> 3));
  v14 = src;
  *((_BYTE *)src + 1549) = 0;
  if ( (a1 & 0x400) != 0 )
  {
    v15 = v72;
    if ( (_QWORD)v72 )
    {
      v17 = v72 + 65;
      v16 = v72 + 66;
      v15 = v72 - 1;
      if ( *((_QWORD *)&v72 + 1) >= (unsigned __int64)(v72 + 66) )
        goto LABEL_8;
    }
    else
    {
      v16 = 67;
      v17 = 66;
      if ( *((_QWORD *)&v72 + 1) >= 0x43u )
      {
LABEL_8:
        *(_QWORD *)&v72 = v16;
        si128 = _mm_load_si128((const __m128i *)&xmmword_5DC730);
        v14[v17] = 0;
        v19 = (__m128i *)((char *)src + v15);
        *v19 = si128;
        v20 = _mm_load_si128((const __m128i *)&xmmword_5DC740);
        v14 = src;
        v19[4].m128i_i16[0] = 15926;
        v19[1] = v20;
        v19[2] = _mm_load_si128((const __m128i *)&xmmword_5DC750);
        v19[3] = _mm_load_si128((const __m128i *)&xmmword_5DC760);
        goto LABEL_9;
      }
    }
    src = (void *)qvector_reserve(&src, v14, v16, 1);
    v14 = src;
    goto LABEL_8;
  }
LABEL_9:
  v21 = v72;
  if ( (_QWORD)v72 )
  {
    v22 = v72 + 153;
    v23 = v72 + 154;
    v21 = v72 - 1;
    if ( *((_QWORD *)&v72 + 1) >= (unsigned __int64)(v72 + 154) )
      goto LABEL_11;
  }
  else
  {
    v23 = 155;
    v22 = 154;
    if ( *((_QWORD *)&v72 + 1) >= 0x9Bu )
      goto LABEL_11;
  }
  src = (void *)qvector_reserve(&src, v14, v23, 1);
  v14 = src;
LABEL_11:
  *(_QWORD *)&v72 = v23;
  v24 = _mm_load_si128((const __m128i *)&xmmword_5DC770);
  v14[v22] = 0;
  v25 = &s1;
  v26 = (char *)src + v21;
  *(__m128i *)v26 = v24;
  v27 = (_QWORD)v72 == 0;
  dest = nullptr;
  *((__m128i *)v26 + 1) = _mm_load_si128((const __m128i *)&xmmword_5DC780);
  *((__m128i *)v26 + 2) = _mm_load_si128((const __m128i *)&xmmword_5DC790);
  *((__m128i *)v26 + 3) = _mm_load_si128((const __m128i *)&xmmword_5DC7A0);
  *((__m128i *)v26 + 4) = _mm_load_si128((const __m128i *)&xmmword_5DC7B0);
  *((__m128i *)v26 + 5) = _mm_load_si128((const __m128i *)&xmmword_5DC7C0);
  *((__m128i *)v26 + 6) = _mm_load_si128((const __m128i *)&xmmword_5DC7D0);
  *((__m128i *)v26 + 7) = _mm_load_si128((const __m128i *)&xmmword_5DC7E0);
  *((__m128i *)v26 + 8) = _mm_load_si128((const __m128i *)&xmmword_5DC7F0);
  *(__m128i *)(v26 + 138) = _mm_load_si128((const __m128i *)&xmmword_5DC800);
  v28 = 0;
  v74 = 0;
  if ( !v27 )
    v25 = (const char *)src;
  v29 = dbg;
  if ( !dbg )
    goto LABEL_27;
  if ( (unsigned int)sub_20CEA0(dbg, 44, 0, " ", 0, 0, 0) )
  {
    v30 = v72;
    if ( (unsigned __int64)v72 < 2 )
    {
      *(_QWORD *)&v74 = 0;
      v36 = (char *)dest;
    }
    else
    {
      v31 = dest;
      v32 = src;
      if ( *((_QWORD *)&v74 + 1) < (unsigned __int64)v72 )
      {
        dest = (void *)qvector_reserve(&dest, dest, v72, 1);
        v31 = dest;
      }
      *(_QWORD *)&v74 = v30;
      memmove(v31, v32, v30 - 1);
      *((char *)dest + v30 - 1) = 0;
      v35 = dest;
      v36 = (char *)dest;
      if ( (_QWORD)v74 )
      {
        v37 = v74 - 3;
        if ( (_QWORD)v74 == 3 )
        {
          if ( dest )
          {
            *(_QWORD *)&v74 = 0;
            qfree(dest, (const char *)dest, v33, v34, dest);
            v40 = v74;
            dest = nullptr;
            *((_QWORD *)&v74 + 1) = 0;
            if ( !(_QWORD)v74 )
            {
              v35 = nullptr;
              v39 = 2;
LABEL_70:
              dest = (void *)qvector_reserve(&dest, v35, v39, 1);
              v35 = dest;
LABEL_23:
              *(_QWORD *)&v74 = v39;
              v35[v40] = 32;
              *((_BYTE *)dest + v40 + 1) = 0;
              v41 = v74;
              if ( (_QWORD)v74 )
              {
                v42 = v74 + 66;
                v43 = v74 + 67;
                v44 = dest;
                v41 = v74 - 1;
                if ( *((_QWORD *)&v74 + 1) >= (unsigned __int64)(v74 + 67) )
                  goto LABEL_25;
              }
              else
              {
                v44 = dest;
                v43 = 68;
                v42 = 67;
                if ( *((_QWORD *)&v74 + 1) >= 0x44u )
                  goto LABEL_25;
              }
              dest = (void *)qvector_reserve(&dest, v44, v43, 1);
              v44 = dest;
LABEL_25:
              *(_QWORD *)&v74 = v43;
              v45 = _mm_load_si128((const __m128i *)&xmmword_5DC810);
              v44[v42] = 0;
              v25 = &s1;
              v46 = (char *)dest + v41;
              *(__m128i *)v46 = v45;
              v27 = (_QWORD)v74 == 0;
              *((__m128i *)v46 + 1) = _mm_load_si128((const __m128i *)&xmmword_5DC820);
              *((__m128i *)v46 + 2) = _mm_load_si128((const __m128i *)&xmmword_5DC830);
              v28 = (__m128)_mm_load_si128((const __m128i *)&xmmword_5DC840);
              *((__m128 *)v46 + 3) = v28;
              *(_DWORD *)(v46 + 63) = 168443450;
              v29 = dbg;
              if ( !v27 )
                v25 = (const char *)dest;
              goto LABEL_27;
            }
            v62 = v74;
            v35 = nullptr;
          }
          else
          {
            v37 = *((_QWORD *)&v74 + 1);
            v62 = 3;
          }
          goto LABEL_72;
        }
        v38 = v74 - 2;
        if ( (unsigned __int64)v74 >= 2 )
        {
LABEL_21:
          *(_QWORD *)&v74 = v38;
          v39 = 2;
          v36[v37] = 0;
          v37 = *((_QWORD *)&v74 + 1);
          v40 = v74;
          v35 = dest;
          if ( !(_QWORD)v74 )
            goto LABEL_22;
          v62 = v74;
LABEL_72:
          v40 = v62 - 1;
          v39 = v62 + 1;
LABEL_22:
          if ( v37 >= v39 )
            goto LABEL_23;
          goto LABEL_70;
        }
      }
    }
    v58 = v36;
    if ( *((_QWORD *)&v74 + 1) != -1 )
    {
      v58 = (char *)qvector_reserve(&dest, v36, -1, 1);
      dest = v58;
    }
    v37 = -2;
    memset(&v58[v74], 0, ~(_QWORD)v74);
    v36 = (char *)dest;
    v38 = -1;
    goto LABEL_21;
  }
  v29 = dbg;
LABEL_27:
  qword_8CC0E0 = v29;
  while ( 1 )
  {
    v47 = sub_227700;
    v48 = v25;
    if ( !(unsigned int)sub_1697D0(
                          (int)v25,
                          (__int64)sub_227700,
                          (__int64)&v67,
                          (__int64)&v66,
                          (__int64)&v69,
                          (__int64)&v68,
                          v28,
                          a3,
                          a4,
                          a5,
                          v12,
                          v13,
                          a8,
                          a9,
                          (char)sub_22DAF0) )
      break;
    if ( !v66 || (unsigned __int64)v70 <= 1 )
    {
      bpt_kernel_interface = get_bpt_kernel_interface(v25, sub_227700);
      (*(void (__fastcall **)(__int64, __int64 *, void *))(*(_QWORD *)bpt_kernel_interface + 96LL))(
        bpt_kernel_interface,
        &qword_8CC580,
        &unk_5C2F25);
LABEL_38:
      v55 = v68 << 14;
      v56 = v55 & 0x40000
          | (v68 << 12) & 0x8000
          | (v68 << 15) & 0x20000
          | (v68 << 9) & 0x400
          | (v68 << 11) & 0x800
          | v67 & 1
          | v66 & 8
          | (16 * v66) & 0x200
          | (8 * (_BYTE)v66) & 0x80
          | (v66 << 10) & 0x1000
          | (v66 << 15) & 0x10000
          | (2 * (_BYTE)v66) & 2
          | (2 * (_BYTE)v67) & 0x14
          | (16 * v67) & 0x140;
      if ( v10 )
        v56 |= v55 & 0x80000;
      dword_8BA5B0 = v64 | v56;
      sub_2275E0();
      v47 = nullptr;
      sub_27EA50(0x2000700418000000LL, 0);
      break;
    }
    v49 = xmmword_8CC590;
    v65 = nullptr;
    if ( xmmword_8CC590 )
    {
      v59 = (char *)qalloc_or_throw(xmmword_8CC590);
      v47 = (__int64 (__fastcall *)(int, __int64))qword_8CC588;
      v48 = v59;
      v65 = v59;
      memcpy(v59, qword_8CC588, v49);
    }
    v50 = get_bpt_kernel_interface(v48, v47);
    v51 = &s1;
    if ( (_QWORD)v70 )
      v51 = (const char *)v69;
    *(double *)v28.m128_u64 = (*(double (__fastcall **)(__int64, __int64 *, const char *))(*(_QWORD *)v50 + 96LL))(
                                v50,
                                &qword_8CC580,
                                v51);
    v52 = (const char *)xmmword_8CC810;
    if ( (unsigned __int8)sub_19CE20(
                            (__int64)&qword_8CC580,
                            (const char *)xmmword_8CC810,
                            (__int64)"events",
                            *(double *)v28.m128_u64,
                            a3,
                            a4,
                            a5,
                            v53,
                            v54,
                            a8,
                            a9) )
    {
      if ( v65 )
        *(double *)v28.m128_u64 = qfree(v65, v52);
      goto LABEL_38;
    }
    if ( !v49 || (v60 = v49 - 1, v49 == 1) )
    {
      xmmword_8CC590 = 0;
    }
    else
    {
      v61 = qword_8CC588;
      if ( *(&xmmword_8CC590 + 1) < v49 )
      {
        qword_8CC588 = (void *)qvector_reserve(&qword_8CC588, qword_8CC588, v49, 1);
        v60 = v49 - 1;
        v61 = qword_8CC588;
      }
      v52 = v65;
      xmmword_8CC590 = v49;
      memmove(v61, v65, v60);
      *((char *)qword_8CC588 + v49 - 1) = 0;
    }
    if ( v65 )
      *(double *)v28.m128_u64 = qfree(v65, v52);
  }
  if ( dest )
  {
    *(_QWORD *)&v74 = 0;
    *(double *)v28.m128_u64 = qfree(dest, (const char *)v47);
  }
  if ( src )
  {
    *(_QWORD *)&v72 = 0;
    *(double *)v28.m128_u64 = qfree(src, (const char *)v47, *(double *)v28.m128_u64);
  }
  if ( v69 )
  {
    *(_QWORD *)&v70 = 0;
    qfree(v69, (const char *)v47, *(double *)v28.m128_u64);
  }
  return v75 - __readfsqword(0x28u);
}
