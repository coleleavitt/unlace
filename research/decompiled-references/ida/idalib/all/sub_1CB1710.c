_BOOL8 __fastcall sub_1CB1710(
        __int64 a1,
        _QWORD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __m128i *a6,
        __int64 a7,
        __int64 a8)
{
  const __m128i *v12; // rax
  _BOOL4 v13; // r13d
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  const __m128i *v19; // rax
  __m128i *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 *v23; // r11
  __int64 v24; // rcx
  int v25; // r8d
  unsigned __int64 v26; // rdx
  __m128i *v27; // rsi
  const __m128i *v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rax
  unsigned int v33; // eax
  char v34; // al
  __int64 v35; // rax
  __int64 v36; // [rsp-8h] [rbp-140h]
  __int64 v37; // [rsp+10h] [rbp-128h]
  _BYTE *v38; // [rsp+10h] [rbp-128h]
  int v39; // [rsp+10h] [rbp-128h]
  _BYTE *v40; // [rsp+10h] [rbp-128h]
  int v41; // [rsp+18h] [rbp-120h]
  int v42; // [rsp+18h] [rbp-120h]
  int v43; // [rsp+18h] [rbp-120h]
  int v44; // [rsp+20h] [rbp-118h]
  int v45; // [rsp+20h] [rbp-118h]
  __m128i *v46; // [rsp+20h] [rbp-118h]
  __int64 *v47; // [rsp+28h] [rbp-110h]
  __int64 v48; // [rsp+38h] [rbp-100h] BYREF
  _BYTE v49[16]; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v50; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+58h] [rbp-E0h]
  __int64 v52; // [rsp+60h] [rbp-D8h]
  __int64 v53; // [rsp+68h] [rbp-D0h]
  void *ptr; // [rsp+80h] [rbp-B8h] BYREF
  __int64 v55; // [rsp+88h] [rbp-B0h]
  _DWORD v56[25]; // [rsp+90h] [rbp-A8h] BYREF
  char v57; // [rsp+F4h] [rbp-44h]

  if ( !(_BYTE)byte_2CCC480 && __cxa_guard_acquire(&byte_2CCC480) )
  {
    qword_2CCC4A0 &= 0xFFFFFFFE00000000LL;
    qword_2CCC4A8 = 0;
    qword_2CCC4B8 = 0;
    __cxa_guard_release(&byte_2CCC480);
  }
  v12 = (const __m128i *)(*(_QWORD *)(a5 + 72) & 0xFFFFFFFFFFFFFFF8LL);
  if ( !v12 )
  {
    v12 = (const __m128i *)&qword_2CCC4A0;
    goto LABEL_4;
  }
  v15 = (*(__int64 *)(a5 + 72) >> 1) & 3;
  if ( v15 != 1 )
  {
    if ( v15 != 2 )
      goto LABEL_4;
    goto LABEL_35;
  }
  v16 = v12[4].m128i_i64[1];
  v12 = nullptr;
  if ( v16 )
  {
    v12 = (const __m128i *)(v16 & 0xFFFFFFFFFFFFFFF8LL);
    if ( ((v16 >> 1) & 3) == 2 )
    {
      if ( v12 )
LABEL_35:
        v12 = (const __m128i *)v12->m128i_i64[1];
    }
  }
LABEL_4:
  *a6 = _mm_loadu_si128(v12);
  a6[1] = _mm_loadu_si128(v12 + 1);
  v13 = sub_F1D550((__int64)a6);
  if ( !v13 )
    return v13;
  sub_1DC3A00((unsigned int)v49, a1, a3, a5 & 0xFFFFFFF9, (_DWORD)a2, a3, a7, a8);
  if ( v49[8] )
  {
LABEL_14:
    sub_1DBADA0(v49);
    return v13;
  }
  v56[24] = 0;
  v55 = 0x400000000LL;
  ptr = v56;
  v57 = 0;
  if ( a2 )
  {
    v17 = (*(__int64 (__fastcall **)(_QWORD *, _DWORD *, __int64))(*a2 + 32LL))(a2, v56, v36);
    v18 = (unsigned int)v55 + 1LL;
    v50 = v17 | 4;
    v52 = a8;
    v51 = a7;
    v19 = (const __m128i *)&v50;
    v20 = (__m128i *)((char *)ptr + 24 * (unsigned int)v55);
    if ( v18 > HIDWORD(v55) )
    {
      if ( ptr > &v50 || v20 <= (__m128i *)&v50 )
      {
        sub_2237220(&ptr, v56, v18, 24);
        v19 = (const __m128i *)&v50;
        v20 = (__m128i *)((char *)ptr + 24 * (unsigned int)v55);
      }
      else
      {
        v40 = ptr;
        sub_2237220(&ptr, v56, v18, 24);
        v19 = (const __m128i *)((char *)ptr + (char *)&v50 - v40);
        v20 = (__m128i *)((char *)ptr + 24 * (unsigned int)v55);
      }
    }
  }
  else
  {
    v52 = a8;
    v20 = (__m128i *)v56;
    v50 = 4;
    v51 = a7;
    v19 = (const __m128i *)&v50;
  }
  *v20 = _mm_loadu_si128(v19);
  v21 = v19[1].m128i_i64[0];
  LODWORD(v55) = v55 + 1;
  v20[1].m128i_i64[0] = v21;
  v22 = sub_BBE590(a5);
  v23 = &v50;
  if ( v22 )
  {
    v24 = (unsigned int)v55;
    v25 = 0;
    do
    {
      v26 = v24 + 1;
      v50 = 0;
      v51 = 0;
      v27 = (__m128i *)((char *)ptr + 24 * v24);
      v28 = (const __m128i *)v23;
      v52 = 0;
      if ( v26 > HIDWORD(v55) )
      {
        v38 = ptr;
        if ( ptr > v23 || v27 <= (__m128i *)v23 )
        {
          v39 = v22;
          v46 = (__m128i *)v23;
          v43 = v25;
          sub_2237220(&ptr, v56, v26, 24);
          v23 = (__int64 *)v46;
          v25 = v43;
          v22 = v39;
          v27 = (__m128i *)((char *)ptr + 24 * (unsigned int)v55);
          v28 = v46;
        }
        else
        {
          v42 = v22;
          v47 = v23;
          v45 = v25;
          sub_2237220(&ptr, v56, v26, 24);
          v23 = v47;
          v22 = v42;
          v25 = v45;
          v28 = (const __m128i *)((char *)ptr + (char *)v47 - v38);
          v27 = (__m128i *)((char *)ptr + 24 * (unsigned int)v55);
        }
      }
      ++v25;
      *v27 = _mm_loadu_si128(v28);
      v27[1].m128i_i64[0] = v28[1].m128i_i64[0];
      v24 = (unsigned int)(v55 + 1);
      LODWORD(v55) = v55 + 1;
    }
    while ( v22 != v25 );
  }
  v29 = a2[2] & 0xFFFFFFFFFFFFFFF8LL;
  if ( (a2[2] & 4) != 0 )
    v29 = *(_QWORD *)v29;
  v30 = *(_QWORD *)(a1 + 544);
  v37 = *(_QWORD *)(a1 + 512);
  v41 = *(_DWORD *)(a1 + 80);
  v44 = *(_DWORD *)(a1 + 2632);
  if ( (*(_BYTE *)(v29 + 8) & 0x7Fu) - 59 <= 2
    && v29 != 64
    && (v31 = *(_QWORD *)(v29 + 64)) != 0
    && (*(_BYTE *)(v31 + 10) & 0x20) != 0 )
  {
    v35 = *(_QWORD *)(a1 + 9944);
    *(_QWORD *)(a1 + 544) = v29;
    *(_QWORD *)(a1 + 512) = 0;
    v53 = v35;
  }
  else
  {
    v32 = *(_QWORD *)(a1 + 9944);
    *(_QWORD *)(a1 + 544) = v29;
    *(_QWORD *)(a1 + 512) = 0;
    v53 = v32;
    *(_QWORD *)(a1 + 9944) = 0;
  }
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
  v48 = *(_QWORD *)(a5 + 40);
  v33 = sub_BBE470(a5);
  sub_1DD6BB0(a1, a6, &ptr, a6, v33, &v48);
  if ( v34 )
  {
    if ( v30 )
    {
      *(_QWORD *)(a1 + 544) = v30;
      *(_QWORD *)(a1 + 512) = v37;
      *(_QWORD *)(a1 + 9944) = v53;
      *(_DWORD *)(a1 + 80) = v41;
      *(_DWORD *)(a1 + 2632) = v44;
    }
    if ( ptr != v56 )
      free(ptr);
    goto LABEL_14;
  }
  if ( v30 )
  {
    *(_QWORD *)(a1 + 544) = v30;
    *(_QWORD *)(a1 + 512) = v37;
    *(_QWORD *)(a1 + 9944) = v53;
    *(_DWORD *)(a1 + 80) = v41;
    *(_DWORD *)(a1 + 2632) = v44;
  }
  if ( ptr != v56 )
    free(ptr);
  v13 = 0;
  sub_1DBADA0(v49);
  return v13;
}
