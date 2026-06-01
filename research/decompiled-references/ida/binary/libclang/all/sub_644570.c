unsigned __int64 __fastcall sub_644570(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8,
        __int128 a9,
        __int64 a10,
        __int128 a11,
        __int64 a12,
        __int64 a13,
        char a14,
        __int64 *a15,
        __int64 *a16,
        __int64 *a17,
        char a18,
        char **a19)
{
  __m128i v22; // xmm0
  char v23; // cl
  __int64 v24; // rbx
  __int64 *v25; // r13
  char **v26; // r12
  __m128i v27; // xmm0
  __m128i v28; // xmm0
  __int64 v29; // rax
  __m128i si128; // xmm0
  __int16 v31; // ax
  __m128i v32; // xmm0
  __m128i v33; // xmm0
  unsigned __int64 v34; // rbp
  __int64 v35; // rbx
  __int64 v36; // rbp
  __int64 v37; // r15
  __int64 v38; // rax
  __m128i v39; // xmm0
  __int64 v40; // rax
  _BYTE *v41; // rdi
  size_t v42; // r13
  _BYTE *v43; // r8
  __int64 v44; // rax
  _QWORD *v45; // rcx
  char *v46; // rax
  char *v47; // rdx
  unsigned int v49; // esi
  unsigned __int64 v50; // rdx
  char *v51; // rcx
  char *v52; // r8
  unsigned int v53; // esi
  unsigned int v54; // esi
  unsigned int v55; // ecx
  __int64 v56; // rdi
  _BYTE *v57; // [rsp+0h] [rbp-68h]
  unsigned __int64 v58; // [rsp+10h] [rbp-58h]
  char v59; // [rsp+1Ch] [rbp-4Ch]

  v22 = _mm_loadu_si128((const __m128i *)&a7);
  v23 = a18;
  v58 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a2), 224).m128i_u64[0];
  v24 = a13;
  *(_QWORD *)(a1 + 8) = a3;
  *(__m128i *)(a1 + 40) = v22;
  v25 = a15;
  v59 = v23;
  *(__m128i *)(a1 + 56) = _mm_loadu_si128((const __m128i *)&a8);
  v26 = a19;
  v27 = _mm_loadu_si128((const __m128i *)&a9);
  *(_QWORD *)(a1 + 16) = a4;
  *(__m128i *)(a1 + 72) = v27;
  *(_QWORD *)a1 = &off_49F4B08;
  *(_QWORD *)(a1 + 24) = a5;
  *(_QWORD *)(a1 + 32) = a6;
  v28 = _mm_loadu_si128((const __m128i *)&a11);
  *(_QWORD *)(a1 + 88) = a10;
  v29 = a12;
  *(__m128i *)(a1 + 96) = v28;
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E560);
  *(_QWORD *)(a1 + 112) = v29;
  *(_QWORD *)(a1 + 120) = a1 + 144;
  *(__m128i *)(a1 + 128) = si128;
  if ( *(_QWORD *)(v24 + 8) )
    sub_63DE60(a1 + 120, (unsigned __int8 **)v24);
  v31 = *(_WORD *)(v24 + 104);
  *(__m128i *)(a1 + 176) = _mm_loadu_si128((const __m128i *)(v24 + 56));
  v32 = _mm_loadu_si128((const __m128i *)(v24 + 72));
  *(_WORD *)(a1 + 224) = v31;
  LOBYTE(v31) = *(_BYTE *)(v24 + 106);
  *(__m128i *)(a1 + 192) = v32;
  v33 = _mm_loadu_si128((const __m128i *)(v24 + 88));
  *(_BYTE *)(a1 + 226) = v31;
  LOBYTE(v31) = a14;
  *(__m128i *)(a1 + 208) = v33;
  *(_BYTE *)(a1 + 232) = v31;
  v34 = v25[1] - *v25;
  *(_OWORD *)(a1 + 240) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  if ( v34 )
  {
    if ( v34 > 0x7FFFFFFFFFFFFFD0LL )
      sub_555886();
    v35 = operator new(v34);
  }
  else
  {
    v35 = 0;
  }
  *(_QWORD *)(a1 + 256) = v35 + v34;
  *(__m128i *)(a1 + 240) = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v35, (__m128i)(unsigned __int64)v35);
  v36 = v25[1];
  v37 = *v25;
  if ( v36 != *v25 )
  {
    while ( 1 )
    {
      v41 = (_BYTE *)(v35 + 16);
      *(_QWORD *)v35 = v35 + 16;
      v42 = *(_QWORD *)(v37 + 8);
      v43 = *(_BYTE **)v37;
      if ( v42 > 0xF )
        break;
      if ( v42 == 1 )
      {
        *(_BYTE *)(v35 + 16) = *v43;
        goto LABEL_10;
      }
      if ( v42 )
        goto LABEL_13;
LABEL_10:
      *(_QWORD *)(v35 + 8) = v42;
      v37 += 80;
      v35 += 80;
      v41[v42] = 0;
      v38 = *(_QWORD *)(v37 - 32);
      *(__m128i *)(v35 - 48) = _mm_loadu_si128((const __m128i *)(v37 - 48));
      v39 = _mm_loadu_si128((const __m128i *)(v37 - 24));
      *(_QWORD *)(v35 - 32) = v38;
      v40 = *(_QWORD *)(v37 - 8);
      *(__m128i *)(v35 - 24) = v39;
      *(_QWORD *)(v35 - 8) = v40;
      if ( v36 == v37 )
      {
        *(_QWORD *)(a1 + 248) = v35;
        goto LABEL_16;
      }
    }
    v57 = *(_BYTE **)v37;
    v44 = std::string::_M_create();
    v43 = v57;
    *(_QWORD *)v35 = v44;
    v41 = (_BYTE *)v44;
    *(_QWORD *)(v35 + 16) = v42;
LABEL_13:
    memcpy(v41, v43, v42);
    v41 = *(_BYTE **)v35;
    goto LABEL_10;
  }
LABEL_16:
  sub_644390(a1 + 264, a16);
  sub_644390(a1 + 288, a17);
  v45 = (_QWORD *)(a1 + 336);
  *(_QWORD *)(a1 + 320) = a1 + 336;
  *(_BYTE *)(a1 + 312) = v59;
  v46 = (char *)(v26 + 2);
  if ( *v26 != (char *)(v26 + 2) )
  {
    *(_QWORD *)(a1 + 320) = *v26;
    *(_QWORD *)(a1 + 336) = v26[2];
    v47 = v26[1];
    goto LABEL_18;
  }
  v47 = v26[1];
  v49 = (_DWORD)v47 + 1;
  if ( (unsigned int)((_DWORD)v47 + 1) >= 8 )
  {
    *v45 = *(_QWORD *)v46;
    *(_QWORD *)((char *)v45 + v49 - 8) = *(_QWORD *)&v46[v49 - 8];
    v50 = (a1 + 344) & 0xFFFFFFFFFFFFFFF8LL;
    v51 = (char *)v45 - v50;
    v52 = (char *)(v46 - v51);
    v53 = ((_DWORD)v51 + v49) & 0xFFFFFFF8;
    if ( v53 >= 8 )
    {
      v54 = v53 & 0xFFFFFFF8;
      v55 = 0;
      do
      {
        v56 = v55;
        v55 += 8;
        *(_QWORD *)(v50 + v56) = *(_QWORD *)&v52[v56];
      }
      while ( v55 < v54 );
    }
    goto LABEL_28;
  }
  if ( (v49 & 4) != 0 )
  {
    *(_DWORD *)v45 = *(_DWORD *)v46;
    *(_DWORD *)((char *)v45 + v49 - 4) = *(_DWORD *)&v46[v49 - 4];
    v47 = v26[1];
    goto LABEL_18;
  }
  if ( (_DWORD)v47 != -1 )
  {
    *(_BYTE *)v45 = *v46;
    if ( (v49 & 2) != 0 )
    {
      *(_WORD *)((char *)v45 + v49 - 2) = *(_WORD *)&v46[v49 - 2];
      v47 = v26[1];
      goto LABEL_18;
    }
LABEL_28:
    v47 = v26[1];
  }
LABEL_18:
  *v26 = v46;
  v26[1] = nullptr;
  *(_QWORD *)(a1 + 328) = v47;
  *(_QWORD *)(a1 + 352) = v58;
  *((_BYTE *)v26 + 16) = 0;
  *(_QWORD *)(a1 + 360) = 0;
  return v58;
}

