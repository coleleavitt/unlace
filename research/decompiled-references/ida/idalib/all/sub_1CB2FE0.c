__int64 __fastcall sub_1CB2FE0(
        __int64 a1,
        _QWORD *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v11; // rbx
  __int64 v13; // rax
  __int64 *v14; // r8
  const __m128i *v15; // r15
  unsigned __int64 v16; // rdx
  __m128i *v17; // rcx
  __int64 v18; // rax
  int v19; // r15d
  int v20; // r9d
  __int64 v21; // rax
  int v22; // r9d
  unsigned __int64 v23; // rdx
  __m128i *v24; // rcx
  const __m128i *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rbp
  int v28; // eax
  int v29; // edi
  __int64 v30; // rdx
  __int64 v31; // r15
  int v32; // eax
  int v33; // edi
  __int64 *v34; // rax
  __m128i v35; // xmm3
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 *v39; // rax
  unsigned int v40; // r8d
  __int64 *v41; // rax
  __int64 v42; // rax
  __int64 v43; // [rsp-8h] [rbp-130h]
  int v44; // [rsp+8h] [rbp-120h]
  _BYTE *v45; // [rsp+8h] [rbp-120h]
  int v46; // [rsp+8h] [rbp-120h]
  _BYTE *v47; // [rsp+8h] [rbp-120h]
  int v48; // [rsp+10h] [rbp-118h]
  __m128i *v49; // [rsp+10h] [rbp-118h]
  unsigned int v50; // [rsp+18h] [rbp-110h]
  __int64 *v51; // [rsp+18h] [rbp-110h]
  __int64 v52; // [rsp+28h] [rbp-100h] BYREF
  _BYTE v53[16]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v54; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v55; // [rsp+48h] [rbp-E0h]
  __int64 v56; // [rsp+50h] [rbp-D8h]
  __int64 v57; // [rsp+58h] [rbp-D0h]
  void *ptr; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v59; // [rsp+78h] [rbp-B0h]
  _BYTE v60[96]; // [rsp+80h] [rbp-A8h] BYREF
  int v61; // [rsp+E0h] [rbp-48h]
  char v62; // [rsp+E4h] [rbp-44h]

  sub_1DC3A00((unsigned int)v53, a1, a3, a5 & 0xFFFFFFF9 | 4, (_DWORD)a2, a3, a7, a8);
  if ( v53[8] )
  {
    v11 = 0;
    goto LABEL_3;
  }
  v61 = 0;
  ptr = v60;
  v59 = 0x400000000LL;
  v62 = 0;
  if ( a2 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD *, _BYTE *, __int64))(*a2 + 32LL))(a2, v60, v43);
    v14 = &v54;
    v56 = a8;
    v15 = (const __m128i *)&v54;
    v16 = (unsigned int)v59 + 1LL;
    v54 = v13 | 4;
    v17 = (__m128i *)((char *)ptr + 24 * (unsigned int)v59);
    v55 = a7;
    if ( HIDWORD(v59) < v16 )
    {
      if ( ptr > &v54 || v17 <= (__m128i *)&v54 )
      {
        sub_2237220(&ptr, v60, v16, 24);
        v14 = &v54;
        v17 = (__m128i *)((char *)ptr + 24 * (unsigned int)v59);
      }
      else
      {
        v47 = ptr;
        sub_2237220(&ptr, v60, v16, 24);
        v14 = &v54;
        v15 = (const __m128i *)((char *)ptr + (char *)&v54 - v47);
        v17 = (__m128i *)((char *)ptr + 24 * (unsigned int)v59);
      }
    }
  }
  else
  {
    v14 = &v54;
    v17 = (__m128i *)v60;
    v56 = a8;
    v54 = 4;
    v15 = (const __m128i *)&v54;
    v55 = a7;
  }
  *v17 = _mm_loadu_si128(v15);
  v18 = v15[1].m128i_i64[0];
  v19 = 0;
  v17[1].m128i_i64[0] = v18;
  v20 = *(_DWORD *)(a5 + 64);
  v21 = (unsigned int)(v59 + 1);
  LODWORD(v59) = v59 + 1;
  v22 = v20 & 0xFFFFF;
  if ( v22 )
  {
    do
    {
      v23 = v21 + 1;
      v54 = 0;
      v55 = 0;
      v24 = (__m128i *)((char *)ptr + 24 * v21);
      v25 = (const __m128i *)v14;
      v56 = 0;
      if ( v23 > HIDWORD(v59) )
      {
        v45 = ptr;
        if ( ptr > v14 || v24 <= (__m128i *)v14 )
        {
          v49 = (__m128i *)v14;
          v46 = v22;
          sub_2237220(&ptr, v60, v23, 24);
          v14 = (__int64 *)v49;
          v22 = v46;
          v24 = (__m128i *)((char *)ptr + 24 * (unsigned int)v59);
          v25 = v49;
        }
        else
        {
          v51 = v14;
          v48 = v22;
          sub_2237220(&ptr, v60, v23, 24);
          v14 = v51;
          v22 = v48;
          v25 = (const __m128i *)((char *)ptr + (char *)v51 - v45);
          v24 = (__m128i *)((char *)ptr + 24 * (unsigned int)v59);
        }
      }
      ++v19;
      *v24 = _mm_loadu_si128(v25);
      v24[1].m128i_i64[0] = v25[1].m128i_i64[0];
      v21 = (unsigned int)(v59 + 1);
      LODWORD(v59) = v59 + 1;
    }
    while ( v22 != v19 );
  }
  v26 = (_QWORD *)(a2[2] & 0xFFFFFFFFFFFFFFF8LL);
  if ( (a2[2] & 4) != 0 )
    v26 = (_QWORD *)*v26;
  v27 = *(_QWORD *)(a1 + 544);
  *(_QWORD *)(a1 + 544) = v26;
  v28 = *(_DWORD *)(a1 + 40);
  v29 = *(_DWORD *)(a1 + 80);
  v30 = *(_QWORD *)(a1 + 9944);
  v31 = *(_QWORD *)(a1 + 512);
  *(_QWORD *)(a1 + 9944) = 0;
  *(_DWORD *)(a1 + 80) = v28;
  v32 = *(_DWORD *)(a1 + 3688);
  v44 = v29;
  v33 = *(_DWORD *)(a1 + 2632);
  *(_QWORD *)(a1 + 512) = 0;
  *(_DWORD *)(a1 + 2632) = v32;
  v57 = v30;
  v34 = sub_A5EFB0(a5);
  if ( (*(_DWORD *)v34 & 0x7FFFFFFFu) - 6 > 1 )
  {
    *(_OWORD *)a6 = 0;
LABEL_14:
    v39 = sub_A5EFB0(a5);
    v40 = 0;
    if ( (*(_DWORD *)v39 & 0x7FFFFFFFu) - 6 <= 1 )
      v40 = *(_DWORD *)((v39[3] & 0xFFFFFFFFFFFFFFFCLL) + 16);
    v50 = v40;
    v41 = sub_A5EFB0(a5);
    sub_F22A90(&v52, v41[1]);
    v11 = sub_1DD8B70(a1, *a6, a6[1], v52, v50, &ptr);
    goto LABEL_17;
  }
  v35 = _mm_loadu_si128((const __m128i *)(v34[3] & 0xFFFFFFFFFFFFFFFCLL));
  v36 = *(_QWORD *)(v34[3] & 0xFFFFFFFFFFFFFFFCLL);
  *(__m128i *)a6 = v35;
  if ( !v36 )
    goto LABEL_14;
  v37 = sub_1DEB190(a1, *a6, a6[1], &ptr);
  *a6 = v37;
  a6[1] = v38;
  if ( v37 )
    goto LABEL_14;
  v11 = 0;
LABEL_17:
  if ( v27 )
  {
    v42 = v57;
    *(_QWORD *)(a1 + 544) = v27;
    *(_QWORD *)(a1 + 512) = v31;
    *(_QWORD *)(a1 + 9944) = v42;
    *(_DWORD *)(a1 + 80) = v44;
    *(_DWORD *)(a1 + 2632) = v33;
  }
  if ( ptr != v60 )
    free(ptr);
LABEL_3:
  sub_1DBADA0(v53);
  return v11;
}
