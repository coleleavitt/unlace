__int64 __fastcall sub_360320(__int64 a1, unsigned int a2, __int64 a3, const char *a4, const char *a5, unsigned int a6)
{
  __int64 v6; // r15
  __int64 v7; // rsi
  unsigned __int64 *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // r14d
  __int64 v12; // rcx
  size_t v13; // rdx
  size_t v14; // r9
  __int64 v15; // r14
  size_t v16; // r11
  _BYTE *v17; // rsi
  int v18; // edx
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  const char *v21; // rax
  __int64 v22; // rbx
  unsigned __int64 v23; // rax
  __int64 v24; // r12
  int v25; // ecx
  char v26; // r13
  int v27; // edx
  unsigned __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  int v31; // ecx
  __int64 v32; // r14
  char *v33; // rsi
  __int64 v34; // rdx
  unsigned __int64 *v35; // r13
  unsigned __int64 v36; // rdx
  unsigned __int64 *v37; // rax
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  unsigned int v40; // edx
  char *v41; // rax
  char v42; // al
  void *v43; // rdi
  size_t v45; // [rsp+40h] [rbp-F8h]
  __int64 v48; // [rsp+58h] [rbp-E0h]
  size_t v50; // [rsp+68h] [rbp-D0h]
  unsigned __int64 *v51; // [rsp+70h] [rbp-C8h]
  const char *v52; // [rsp+78h] [rbp-C0h]
  unsigned int v54; // [rsp+84h] [rbp-B4h]
  size_t n; // [rsp+88h] [rbp-B0h]
  size_t na; // [rsp+88h] [rbp-B0h]
  __int64 v59; // [rsp+A0h] [rbp-98h]
  void *v60; // [rsp+A8h] [rbp-90h] BYREF
  __int128 v61; // [rsp+B0h] [rbp-88h]
  void *ptr; // [rsp+C8h] [rbp-70h] BYREF
  __int128 v63; // [rsp+D0h] [rbp-68h]
  char v64[24]; // [rsp+E8h] [rbp-50h] BYREF
  unsigned __int64 v65; // [rsp+100h] [rbp-38h]

  v65 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 88LL);
  v48 = *(_QWORD *)(a1 + 88);
  v51 = *(unsigned __int64 **)a3;
  if ( !*(_QWORD *)(v6 + 16) )
  {
    v8 = *(unsigned __int64 **)a3;
    v7 = *(_QWORD *)(a3 + 8);
    goto LABEL_73;
  }
  v59 = 0;
  v7 = *(_QWORD *)(a3 + 8);
  v8 = *(unsigned __int64 **)a3;
  while ( 1 )
  {
    v22 = *(_QWORD *)(v6 + 64) + 160 * v59;
    if ( *(_DWORD *)(v22 + 8) != -1 )
      break;
LABEL_30:
    if ( (unsigned __int64)++v59 >= *(_QWORD *)(v6 + 16) )
      goto LABEL_73;
  }
  v23 = *(_QWORD *)((v59 << 7) + *(_QWORD *)(v6 + 8));
  v24 = (v59 << 7) + *(_QWORD *)(v6 + 8);
  if ( v51 != &v8[2 * v7] && *v51 < v23 )
  {
    sub_360120(a1, *(_DWORD *)(v6 + 224), *v51, v51[1]);
    v51 += 2;
    v23 = *(_QWORD *)v24;
  }
  v25 = *(_DWORD *)(v6 + 224);
  v26 = *(_BYTE *)(v6 + 292);
  v54 = v25 + (v23 >> 3);
  if ( !v26 || (v27 = a2, *(_QWORD *)(v6 + 16) != v59 + 1) )
  {
    v26 = 0;
    v27 = (*(_QWORD *)(v24 + 8) + v23) >> 3;
  }
  *(_DWORD *)(a1 + 524) = v25 + v27;
  *(_QWORD *)(v6 + 232) = v24;
  *(__m128i *)(v6 + 88) = _mm_loadu_si128((const __m128i *)(v22 + 12));
  *(__m128i *)(v6 + 104) = _mm_loadu_si128((const __m128i *)(v22 + 28));
  *(__m128i *)(v6 + 120) = _mm_loadu_si128((const __m128i *)(v22 + 44));
  *(__m128i *)(v6 + 136) = _mm_loadu_si128((const __m128i *)(v22 + 60));
  *(__m128i *)(v6 + 152) = _mm_loadu_si128((const __m128i *)(v22 + 76));
  *(__m128i *)(v6 + 168) = _mm_loadu_si128((const __m128i *)(v22 + 92));
  *(__m128i *)(v6 + 184) = _mm_loadu_si128((const __m128i *)(v22 + 108));
  *(__m128i *)(v6 + 200) = _mm_loadu_si128((const __m128i *)(v22 + 124));
  *(_QWORD *)(v6 + 216) = *(_QWORD *)(v22 + 140);
  if ( (*(_QWORD *)v22 & 0xF00000LL) == 0x500000 && (*(_BYTE *)(v6 + 101) & 0x10) != 0 )
    *(_DWORD *)(v6 + 92) = v54;
  v52 = a5;
  if ( (*(_BYTE *)(v24 + 117) & 8) == 0 && *(_QWORD *)(v24 + 48) > 1u )
    v52 = (const char *)sub_51E6F0(v24);
  v28 = *(_QWORD *)(v48 + 72);
  v29 = *(_QWORD *)(v48 + 64);
  if ( v28 <= 1 )
  {
    v30 = *(_QWORD *)(v29 + 8 * v28 - 8);
    v31 = *(_DWORD *)(v24 + 96);
    v11 = 0;
    v61 = 0;
    *(_DWORD *)(v30 + 288) = v31;
    v60 = nullptr;
    if ( !a4 )
      goto LABEL_9;
LABEL_4:
    n = strlen(a4);
    v60 = (void *)qvector_reserve(&v60, 0, n + 1, 1);
    *(_QWORD *)&v61 = n + 1;
    memmove(v60, a4, n);
    *((_BYTE *)v60 + n) = 0;
    if ( (v11 & 4) == 0 )
      goto LABEL_46;
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(v29 + 8 * v28 - 16);
  v10 = *(_QWORD *)(v29 + 8 * v28 - 8);
  v60 = nullptr;
  v61 = 0;
  v11 = *(_DWORD *)(v9 + 288);
  *(_DWORD *)(v10 + 288) = *(_DWORD *)(v24 + 96);
  if ( a4 )
    goto LABEL_4;
  if ( (v11 & 4) == 0 )
    goto LABEL_9;
LABEL_5:
  v12 = 10;
  if ( (v11 & 0xC0) == 0 )
    v12 = (unsigned int)byte_2388074[(v11 >> 4) & 0xF];
  if ( btoa32(v64, 20, a6, v12) )
  {
    if ( (unsigned __int64)v61 <= 1 )
      goto LABEL_9;
    sub_3573A0((char **)&v60);
  }
LABEL_46:
  v32 = v61;
  if ( (unsigned __int64)v61 > 1 )
  {
    v33 = (char *)v60;
    v34 = v61 + 1;
    if ( *((_QWORD *)&v61 + 1) < (unsigned __int64)(v61 + 1) )
    {
      v60 = (void *)qvector_reserve(&v60, v60, v34, 1);
      v34 = v32 + 1;
      v33 = (char *)v60;
    }
    *(_QWORD *)&v61 = v34;
    v33[v32 - 1] = 46;
    *((_BYTE *)v60 + v32) = 0;
  }
LABEL_9:
  v13 = *(_QWORD *)(v24 + 24);
  if ( v13 )
  {
    v14 = v13 - 1;
    if ( v13 != 1 )
    {
      v15 = v61;
      v16 = v13 - 1;
      if ( (_QWORD)v61 )
      {
        v15 = v61 - 1;
        v16 = v14 + v61 - 1;
        v13 += v61 - 1;
      }
      v17 = v60;
      if ( *((_QWORD *)&v61 + 1) < v13 )
      {
        v45 = v16;
        v50 = v14;
        na = v13;
        v60 = (void *)qvector_reserve(&v60, v60, v13, 1);
        v16 = v45;
        v17 = v60;
        v14 = v50;
        v13 = na;
      }
      *(_QWORD *)&v61 = v13;
      v17[v16] = 0;
      memcpy((char *)v60 + v15, *(const void **)(v24 + 16), v14);
    }
  }
  v18 = *(_DWORD *)(a1 + 144);
  if ( (*(_BYTE *)(v24 + 64) & 0xF) != 0xE )
  {
    if ( (v18 & 0x200000) != 0 )
    {
      *(_DWORD *)(a1 + 144) = v18 & 0xFFDFFFFF;
      *(_DWORD *)(a1 + 520) = -1;
      sub_37EF30(a1, v54, 0);
    }
    if ( !v26 )
    {
      v20 = *(_QWORD *)(v24 + 8) >> 3;
      goto LABEL_22;
    }
    v19 = (unsigned __int64)(*(_QWORD *)v24 + 7LL) >> 3;
    if ( a2 >= (unsigned int)v19 )
    {
      LODWORD(v20) = a2 - v19;
LABEL_22:
      if ( (_DWORD)v20 )
      {
        v21 = haystack;
        if ( (_QWORD)v61 )
          LODWORD(v21) = (_DWORD)v60;
        if ( (unsigned __int8)sub_3612C0(a1, v54, 2, (int)v21, (int)v52) )
          goto LABEL_78;
        if ( *(_BYTE *)(v6 + 59) )
        {
          if ( v60 )
          {
            *(_QWORD *)&v61 = 0;
            qfree(v60);
          }
          v8 = *(unsigned __int64 **)a3;
          v7 = *(_QWORD *)(a3 + 8);
LABEL_73:
          if ( v51 == &v8[2 * v7] )
            return 0;
          sub_360120(a1, *(_DWORD *)(v6 + 224), *v51, v51[1]);
          if ( v51 + 2 == (unsigned __int64 *)(*(_QWORD *)a3 + 16LL * *(_QWORD *)(a3 + 8)) )
            return 0;
          if ( !under_debugger )
            interr(3026);
LABEL_84:
          BUG();
        }
      }
    }
LABEL_27:
    if ( v60 )
    {
      *(_QWORD *)&v61 = 0;
      qfree(v60);
    }
    v8 = *(unsigned __int64 **)a3;
    v7 = *(_QWORD *)(a3 + 8);
    goto LABEL_30;
  }
  *(_DWORD *)(a1 + 520) = -1;
  *(_DWORD *)(a1 + 144) = v18 | 0x200000;
  v35 = *(unsigned __int64 **)(v6 + 240);
  v36 = *(_QWORD *)v24;
  v37 = &v35[2 * *(_QWORD *)(v6 + 248)];
  if ( v35 == v37 )
    goto LABEL_65;
  while ( v36 < *v35 || v36 >= v35[1] )
  {
    v35 += 2;
    if ( v37 == v35 )
      goto LABEL_65;
  }
  if ( !v35 )
  {
LABEL_65:
    if ( !under_debugger )
      interr(3025);
    goto LABEL_84;
  }
  sub_37EF30(a1, *(_DWORD *)(v6 + 224) + (unsigned int)(*v35 >> 3), (unsigned int)v36 - (unsigned int)*v35);
  v38 = v35[1];
  v63 = 0;
  LODWORD(v38) = *(_DWORD *)(v6 + 224) + (v38 >> 3);
  ptr = nullptr;
  *(_DWORD *)(a1 + 196) = v38;
  sub_3573A0((char **)&ptr);
  v39 = (unsigned __int64)(*(_QWORD *)(v24 + 8) + 7LL) >> 3;
  v40 = v39;
  if ( (int)v39 > 2 )
  {
    v40 = 4;
    if ( (_DWORD)v39 != 3 )
      v40 = 8 * ((int)v39 > 8) + 8;
  }
  v41 = (char *)haystack;
  if ( (_QWORD)v61 )
    v41 = (char *)v60;
  v42 = sub_35EA80(
          a1,
          v54,
          v40,
          *(_QWORD *)v22,
          (__int64)ptr,
          v40,
          *(_DWORD *)(v22 + 8),
          *(_QWORD *)(v22 + 148),
          *(_DWORD *)(v22 + 156),
          0,
          v41,
          v52,
          (unsigned __int64 *)v24);
  v43 = ptr;
  if ( !v42 )
  {
    *(_DWORD *)(a1 + 520) = -1;
    if ( v43 )
    {
      *(_QWORD *)&v63 = 0;
      qfree(v43);
    }
    goto LABEL_27;
  }
  if ( ptr )
  {
    *(_QWORD *)&v63 = 0;
    qfree(ptr);
  }
LABEL_78:
  if ( v60 )
  {
    *(_QWORD *)&v61 = 0;
    qfree(v60);
  }
  return 1;
}

