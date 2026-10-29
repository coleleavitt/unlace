__int64 __fastcall sub_1CDFC20(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        const __m128i a7,
        __int64 a8,
        const __m128i a9,
        __int64 a10)
{
  __int64 v11; // rdi
  __int64 v12; // r13
  unsigned __int64 v13; // rax
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  __int64 v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  __m128i v19; // xmm3
  unsigned __int64 v20; // rdx
  char *v21; // rdx
  const __m128i *v22; // rax
  __m128i *v23; // rcx
  __int64 v24; // r12
  __int64 v25; // r9
  __int64 v26; // r15
  unsigned int v27; // r13d
  int v28; // r14d
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rsi
  __int64 v36; // rdi
  int v37; // eax
  int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // r11
  __int64 v41; // rax
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rbp
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v48; // rdi
  __int64 v49; // rdx
  unsigned __int64 v50; // rax
  unsigned int *v51; // rdx
  __m128i v52; // xmm6
  __m128i v53; // xmm7
  __int64 v54; // rdx
  _QWORD *v55; // rax
  _BYTE *v56; // r13
  __int64 v57; // [rsp+0h] [rbp-1B8h]
  int v58; // [rsp+8h] [rbp-1B0h]
  __int16 v59; // [rsp+Eh] [rbp-1AAh]
  unsigned __int64 v60; // [rsp+10h] [rbp-1A8h]
  __int64 v61; // [rsp+10h] [rbp-1A8h]
  __int64 v62; // [rsp+10h] [rbp-1A8h]
  char v63; // [rsp+18h] [rbp-1A0h]
  __int64 v64; // [rsp+18h] [rbp-1A0h]
  __int64 v65; // [rsp+20h] [rbp-198h]
  __int64 v66; // [rsp+28h] [rbp-190h]
  __m128 v67; // [rsp+30h] [rbp-188h] BYREF
  __m128i v68; // [rsp+40h] [rbp-178h] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-158h] BYREF
  _BYTE v70[256]; // [rsp+70h] [rbp-148h] BYREF
  __int64 v71; // [rsp+170h] [rbp-48h]

  v11 = *a1;
  v12 = a9.m128i_i64[1];
  if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a7.m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 13
    && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a9.m128i_i64[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                            & 0xFFFFFFFFFFFFFFF0LL)
                + 16LL) == 13 )
  {
    v51 = (unsigned int *)a1[2];
    v52 = _mm_loadu_si128(&a7);
    v53 = _mm_loadu_si128(&a9);
    *(_QWORD *)v70 = a8;
    v54 = *v51;
    *(__m128i *)ptr = v52;
    *(_QWORD *)&v70[24] = a10;
    v55 = (_QWORD *)a1[1];
    *(__m128i *)&v70[8] = v53;
    return sub_1CE0190(v11, *v55, v54, ptr, 2);
  }
  v71 = 0;
  ptr[1] = (void *)0x800000000LL;
  ptr[0] = v70;
  v13 = (unsigned __int64)sub_A81910(*(_QWORD **)(v11 + 248), a7.m128i_i64[1], 0);
  v14 = (__m128)_mm_loadu_si128(&a7);
  v68.m128i_i64[0] = a8;
  v68.m128i_i64[1] = v13 & 0xFFFFFFFFFFFFFFFCLL | 2;
  v67 = v14;
  v15 = (__m128)_mm_loadu_si128((const __m128i *)&v67);
  *(__m128 *)v70 = v15;
  *(__m128i *)&v70[16] = _mm_loadu_si128(&v68);
  v16 = *a1;
  LODWORD(ptr[1]) = 1;
  v17 = (unsigned __int64)sub_A81910(*(_QWORD **)(v16 + 248), v12, 0);
  v18 = LODWORD(ptr[1]);
  v19 = _mm_loadu_si128(&a9);
  v68.m128i_i64[0] = a10;
  v20 = LODWORD(ptr[1]) + 1LL;
  v68.m128i_i64[1] = v17 & 0xFFFFFFFFFFFFFFFCLL | 2;
  v67 = (__m128)v19;
  if ( v20 > HIDWORD(ptr[1]) )
  {
    v56 = ptr[0];
    if ( ptr[0] > &v67 || &v67 >= (__m128 *)((char *)ptr[0] + 32 * LODWORD(ptr[1])) )
    {
      sub_2237220(ptr, v70, v20, 32);
      v21 = (char *)ptr[0];
      v18 = LODWORD(ptr[1]);
      v22 = (const __m128i *)&v67;
    }
    else
    {
      sub_2237220(ptr, v70, v20, 32);
      v21 = (char *)ptr[0];
      v18 = LODWORD(ptr[1]);
      v22 = (const __m128i *)((char *)ptr[0] + (char *)&v67 - v56);
    }
  }
  else
  {
    v21 = (char *)ptr[0];
    v22 = (const __m128i *)&v67;
  }
  v23 = (__m128i *)&v21[32 * v18];
  *v23 = _mm_loadu_si128(v22);
  v23[1] = _mm_loadu_si128(v22 + 1);
  v24 = *a1;
  ++LODWORD(ptr[1]);
  sub_18C74E0(v24, 0, 0, 4);
  v26 = *a1;
  v27 = *(_DWORD *)(*a1 + 11200);
  v28 = *(_DWORD *)(*(_QWORD *)(*a1 + 264) + 204LL);
  *(_BYTE *)(v26 + 12592) = 1;
  *(_BYTE *)(v26 + 11248) = 1;
  v29 = *a1;
  v30 = *(_QWORD *)(*(_QWORD *)(*a1 + 248) + 2264LL);
  v31 = *(_QWORD *)(v30 + 80);
  v32 = *(_QWORD *)(v31 + 72);
  if ( (v32 & 1) != 0 )
  {
    v33 = v32 & 0xFFFFFFFFFFFFFFF8LL;
    v34 = *(_QWORD *)(v31 + 72) & 0xFFFFFFFFFFFFFFFELL;
    v35 = v33;
    if ( v34 )
    {
LABEL_7:
      if ( (v34 & 4) != 0 && v33 )
      {
        v36 = *(_QWORD *)v33;
        v37 = *(_DWORD *)(*(_QWORD *)v33 + 12LL);
        if ( *(_DWORD *)(v33 + 8) != v37 )
        {
          *(_DWORD *)(v33 + 8) = v37;
          v60 = v33;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 152LL))(v36, v31);
          v33 = v60;
        }
        v35 = *(_QWORD *)(v33 + 16);
        v29 = *a1;
        goto LABEL_12;
      }
    }
LABEL_28:
    v29 = *a1;
    goto LABEL_12;
  }
  v48 = (_QWORD *)(v32 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (v32 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
  {
    v35 = 0;
    goto LABEL_12;
  }
  v49 = *(_QWORD *)(v31 + 72) & 2LL;
  v35 = (unsigned __int64)v48;
  if ( (_DWORD)v49 )
  {
    v62 = *(_QWORD *)(v30 + 80);
    v50 = sub_6E2500(v48, v62, v49, v31, v29, v25);
    v31 = v62;
    v34 = v50 & 0xFFFFFFFFFFFFFFFELL;
    *(_QWORD *)(v62 + 72) = v34 | 1;
    v33 = v34 & 0xFFFFFFFFFFFFFFF8LL;
    v35 = v34 & 0xFFFFFFFFFFFFFFF8LL;
    if ( v34 )
      goto LABEL_7;
    goto LABEL_28;
  }
LABEL_12:
  v38 = *(_DWORD *)(v29 + 80);
  if ( v35 )
    v35 += 40LL;
  v39 = *(_QWORD *)(v29 + 512);
  v40 = *(_QWORD *)(v29 + 544);
  *(_QWORD *)(v29 + 512) = 0;
  v63 = v39;
  v41 = *(_QWORD *)(v29 + 9944);
  *(_QWORD *)(v29 + 544) = v35;
  v68.m128i_i64[1] = v41;
  LODWORD(v41) = *(_DWORD *)(v29 + 40);
  *(_QWORD *)(v29 + 9944) = 0;
  *(_DWORD *)(v29 + 80) = v41;
  *(_DWORD *)(v29 + 2632) = *(_DWORD *)(v29 + 3688);
  v42 = sub_1CDD580(
          *a1,
          *(_QWORD *)a1[1],
          *(_DWORD *)a1[2],
          (__int64)ptr,
          v14,
          v15,
          v29,
          v25,
          v57,
          v58,
          v40,
          v63,
          v38,
          v29);
  v43 = 0;
  if ( *(_DWORD *)(v26 + 11200) <= v27 )
    v43 = v42;
  v44 = v43;
  if ( v61 )
  {
    *(_QWORD *)(v66 + 512) = v64;
    v45 = v68.m128i_i64[1];
    *(_QWORD *)(v66 + 544) = v61;
    *(_QWORD *)(v66 + 9944) = v45;
    *(_DWORD *)(v66 + 80) = v65;
    *(_DWORD *)(v66 + 2632) = HIDWORD(v65);
  }
  *(_DWORD *)(v26 + 11200) = v27;
  *(_BYTE *)(v26 + 12592) = v59;
  *(_BYTE *)(v26 + 11248) = HIBYTE(v59);
  v46 = *(_QWORD *)(v26 + 264);
  if ( *(_DWORD *)(v46 + 204) == 5 )
    *(_BYTE *)(v46 + 194) = 1;
  if ( v28 )
    v28 = 3;
  *(_DWORD *)(v46 + 204) = v28;
  sub_190D5E0(v24, v14);
  if ( ptr[0] != v70 )
    free(ptr[0]);
  return v44;
}
