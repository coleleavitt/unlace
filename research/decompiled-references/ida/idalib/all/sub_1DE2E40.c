unsigned __int64 __fastcall sub_1DE2E40(__int64 a1, unsigned __int64 a2, double a3, __m128 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  int v14; // esi
  __int64 v15; // rdx
  char v16; // al
  __int64 v17; // rsi
  __int64 v18; // r12
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rax
  __m128i si128; // xmm2
  int v22; // eax
  int v23; // r15d
  __int64 v24; // r13
  char v25; // r14
  const __m128i *v26; // r13
  unsigned int v27; // r14d
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rbx
  int v31; // r15d
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // edx
  int v35; // ecx
  int v36; // r8d
  int v37; // r9d
  int v38; // eax
  __int64 v39; // r13
  _BYTE *v40; // rcx
  const __m128i *v41; // r15
  const __m128i *v42; // r13
  const __m128i *v43; // rax
  __int64 v44; // r9
  __m128i *v45; // rdx
  bool v46; // al
  unsigned __int64 v47; // rdx
  int v48; // ecx
  __int64 v49; // r11
  int v50; // esi
  __int64 v51; // r8
  _QWORD *v52; // rdi
  __int64 v53; // r9
  int v54; // eax
  __int64 v55; // r15
  int v56; // eax
  __int64 v57; // r15
  __int64 v58; // r15
  int v59; // r14d
  int v60; // eax
  unsigned __int64 v61; // rax
  __int64 v62; // rax
  int v63; // r14d
  unsigned __int64 v64; // r15
  __int64 v65; // rax
  __int64 v66; // rsi
  __int64 v67; // r13
  char v68; // al
  bool v69; // zf
  char v70; // dl
  unsigned __int8 v71; // al
  char v72; // [rsp+0h] [rbp-2B8h]
  char v73; // [rsp+0h] [rbp-2B8h]
  const __m128i *v74; // [rsp+8h] [rbp-2B0h]
  __int8 *v75; // [rsp+10h] [rbp-2A8h]
  __int64 v76; // [rsp+20h] [rbp-298h]
  const __m128i *v77; // [rsp+28h] [rbp-290h]
  __int64 v78; // [rsp+30h] [rbp-288h]
  unsigned __int64 v79; // [rsp+38h] [rbp-280h]
  int v80; // [rsp+48h] [rbp-270h] BYREF
  int v81; // [rsp+4Ch] [rbp-26Ch] BYREF
  __m128i v82; // [rsp+50h] [rbp-268h] BYREF
  __int64 v83; // [rsp+60h] [rbp-258h]
  char v84; // [rsp+68h] [rbp-250h] BYREF
  __m128i v85; // [rsp+70h] [rbp-248h] BYREF
  __int64 v86; // [rsp+80h] [rbp-238h]
  __int64 v87; // [rsp+88h] [rbp-230h]
  __m128i v88; // [rsp+90h] [rbp-228h] BYREF
  _BYTE v89[192]; // [rsp+A0h] [rbp-218h] BYREF
  void *ptr[2]; // [rsp+160h] [rbp-158h] BYREF
  _QWORD v91[32]; // [rsp+170h] [rbp-148h] BYREF
  int v92; // [rsp+270h] [rbp-48h]
  int v93; // [rsp+274h] [rbp-44h]

  v4 = a2;
  if ( (*(_DWORD *)a2 & 0x20000) == 0 )
    return v4;
  v76 = *(_QWORD *)a1;
  sub_18C74E0(*(_QWORD *)a1, 0, 0, 4);
  v83 = 0;
  v82 = 0;
  if ( (*(_DWORD *)a2 & 0x20000) == 0 )
  {
    v9 = *(_QWORD *)(a2 + 32);
    goto LABEL_5;
  }
  v11 = *(unsigned int *)(a2 + 28);
  if ( (_DWORD)v11 )
  {
    v77 = (const __m128i *)(a2 + 40);
    v78 = 24 * v11;
    v74 = (const __m128i *)(24 * v11 + a2 + 40);
    if ( *(_BYTE *)(*(_QWORD *)(a1 + 32) + 116LL) == 1 )
      goto LABEL_17;
    goto LABEL_25;
  }
  v12 = *(_QWORD *)(a2 + 32);
  v13 = *(unsigned int *)(a2 + 20);
  LOBYTE(v80) = 0;
  LOBYTE(v81) = 0;
  v14 = *(_DWORD *)(a2 + 16);
  v88.m128i_i32[2] = v13;
  v88.m128i_i64[0] = v12 | 4;
  v85.m128i_i32[0] = 0;
  if ( sub_1DDBB60(
         (__int64 *)a1,
         v14,
         (v13 << 32) | v13,
         (__int64)&v88,
         1,
         (__int64)&v80,
         (__m128)0LL,
         a4,
         (__int64)&v81,
         (__int64)&v85) )
  {
    goto LABEL_23;
  }
  v9 = *(_QWORD *)(v4 + 32);
  if ( !(_BYTE)v80 )
  {
LABEL_5:
    v10 = sub_1DD8310(a1, *(_DWORD *)(v4 + 20), v9, v6, v7, v8, (__m128)0LL, a4);
    if ( v10 )
    {
      v4 = sub_C98D20(
             *(_QWORD **)(*(_QWORD *)a1 + 248LL),
             *(_DWORD *)(v4 + 16),
             v10,
             *(_DWORD *)(v4 + 20),
             *(unsigned int *)(v4 + 24),
             0,
             nullptr,
             0);
      goto LABEL_7;
    }
    goto LABEL_23;
  }
  v16 = *(_BYTE *)(v9 + 28) & 0x7F;
  if ( v16 == 67 )
  {
    v17 = *(_QWORD *)(v9 + 48);
    v18 = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
    if ( v17 )
      v19 = v17 & 0xFFFFFFFFFFFFFFF0LL;
    else
      v19 = sub_A7AA70(*(_QWORD *)(*(_QWORD *)a1 + 248LL), *(_QWORD *)(v4 + 32), v15, v6, v7, v8);
    v20 = sub_A781D0(v18, v19, 0);
    sub_F1D250((__int64)ptr, v20, 0, 0);
    si128 = _mm_load_si128((const __m128i *)ptr);
    v83 = v91[0];
    v82 = si128;
    goto LABEL_15;
  }
  if ( v16 != 68 )
  {
    v58 = *(_QWORD *)a1;
    v59 = *(_DWORD *)(v4 + 20);
    v60 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 48) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                         & 0xFFFFFFFFFFFFFFF0LL)
                             + 16LL);
    ptr[0] = *(void **)(v9 + 48);
    v72 = (unsigned int)(v60 - 43) <= 1;
    v61 = sub_F67970(ptr, *(_QWORD *)(v58 + 248));
    v62 = sub_190BDA0(v58, v9, v61, v72, v59, 0, 0.0, a4);
    if ( v62 != 1 )
    {
      v63 = *(_DWORD *)(v4 + 20);
      v64 = v62 & 0xFFFFFFFFFFFFFFFELL;
      v65 = sub_EEE9A0(32, *(_QWORD **)(*(_QWORD *)a1 + 248LL), 8u);
      v66 = *(_QWORD *)(v64 + 8);
      v67 = v65;
      v68 = *(_BYTE *)(v64 + 1);
      v69 = unk_2CD7484 == 0;
      *(_WORD *)v67 = *(_WORD *)v67 & 0xFE00 | 0x16;
      if ( !v69 )
      {
        v73 = v68;
        sub_EE9B50(22);
        v68 = v73;
      }
      v70 = *(_BYTE *)(v67 + 1);
      *(_BYTE *)(v67 + 2) &= 0xF8u;
      *(_QWORD *)(v67 + 8) = v66;
      *(_DWORD *)(v67 + 16) = v63;
      *(_DWORD *)(v67 + 20) = 0;
      *(_BYTE *)(v67 + 1) = v68 & 0x3E | v70 & 1;
      *(_QWORD *)(v67 + 24) = v64;
      v71 = sub_B63820(v67);
      *(_BYTE *)(v67 + 1) = (v71 << 6) | *(_BYTE *)(v67 + 1) & 0x3F;
      *(_BYTE *)(v67 + 2) = *(_BYTE *)(v67 + 2) & 0xF8 | (v71 >> 2) & 7;
      v82.m128i_i64[1] = v67;
      v82.m128i_i64[0] = v82.m128i_i64[0] & 0xFFFFFFFE00000000LL | 8;
      goto LABEL_15;
    }
LABEL_23:
    v4 = 1;
    goto LABEL_7;
  }
  sub_F22AA0((unsigned __int64 *)ptr, *(_QWORD *)(v4 + 32));
  v82.m128i_i64[0] = 7;
  v82.m128i_i64[1] = (__int64)ptr[0];
LABEL_15:
  if ( *(_BYTE *)(*(_QWORD *)(a1 + 32) + 116LL) == 1 )
  {
    v74 = (const __m128i *)&v84;
    v77 = &v82;
    goto LABEL_17;
  }
  v78 = 24;
  v74 = (const __m128i *)&v84;
  v77 = &v82;
LABEL_25:
  v26 = v77;
  v27 = 1;
  v79 = v4;
  while ( !sub_F1D570((__int64)v26) )
  {
    ++v27;
LABEL_27:
    v26 = (const __m128i *)((char *)v26 + 24);
    if ( v74 == v26 )
    {
      v4 = v79;
      if ( !v27 )
        goto LABEL_51;
LABEL_49:
      v4 = sub_C98D20(
             *(_QWORD **)(*(_QWORD *)a1 + 248LL),
             *(_DWORD *)(v4 + 16),
             *(_QWORD *)(v4 + 32),
             *(_DWORD *)(v4 + 20),
             *(unsigned int *)(v4 + 24),
             v27,
             nullptr,
             0);
      goto LABEL_7;
    }
  }
  sub_1D3AAD0(&v85, *(_QWORD *)a1, v26, 0, *(unsigned int *)(a1 + 40), 0, 0.0, a4);
  v80 = 0;
  v81 = 0;
  sub_1E4CF80(
    (unsigned int)&v88,
    *(_QWORD *)a1,
    (unsigned int)&v80,
    (unsigned int)&v81,
    v28,
    v29,
    v85.m128i_i64[0],
    v85.m128i_i64[1],
    v86,
    v87);
  v30 = *(_QWORD *)a1;
  ptr[1] = nullptr;
  v91[1] = 0;
  ptr[0] = (void *)((unsigned __int64)ptr[0] & 0xFFFFFFFE00000000LL);
  v31 = *(_DWORD *)(v30 + 12632);
  *(_DWORD *)(v30 + 12632) = 0;
  if ( sub_1DD6360((unsigned int *)a1, &v88, (__m128i *)ptr, 1u, v32, v33, 0.0, a4) )
  {
    v56 = v31;
    v57 = v30;
    v27 = 2;
    v4 = v79;
    *(_DWORD *)(v57 + 12632) = v56;
    goto LABEL_49;
  }
  v38 = sub_1E4D250(*(_QWORD *)a1, (unsigned int)&v88, v34, v35, v36, v37, ptr[0], (__int64)ptr[1]);
  if ( v38 )
  {
    v27 = v27 + v38 - 1;
    *(_DWORD *)(v30 + 12632) = v31;
    goto LABEL_27;
  }
  v54 = v31;
  v55 = v30;
  v4 = v79;
  *(_DWORD *)(v55 + 12632) = v54;
LABEL_51:
  v74 = (const __m128i *)((char *)v77 + v78);
LABEL_17:
  v22 = *(_DWORD *)(v4 + 20);
  v23 = *(_DWORD *)(a1 + 40);
  ptr[0] = v91;
  v24 = *(_QWORD *)(a1 + 48);
  ptr[1] = (void *)0x800000000LL;
  v92 = v22;
  v93 = v22;
  if ( v22 )
  {
    *(_DWORD *)(a1 + 40) = v22;
    *(_QWORD *)(a1 + 48) = 0;
  }
  v25 = sub_1DE1C70((_QWORD *)a1, a1, v77, (__m128)0LL, a4, a1, v74, (__int64)ptr, 1);
  if ( v25 )
  {
    *(_DWORD *)(a1 + 40) = v23;
    v4 = 1;
    *(_QWORD *)(a1 + 48) = v24;
    goto LABEL_21;
  }
  *(_QWORD *)(a1 + 48) = v24;
  v39 = LODWORD(ptr[1]);
  v40 = v89;
  *(_DWORD *)(a1 + 40) = v23;
  v41 = (const __m128i *)ptr[0];
  v42 = (const __m128i *)((char *)ptr[0] + 32 * v39);
  v88.m128i_i64[0] = (__int64)v89;
  v88.m128i_i64[1] = 0x800000000LL;
  if ( v42 == ptr[0] )
  {
    v50 = *(_DWORD *)(v4 + 16);
    v53 = 1;
    v48 = *(_DWORD *)(v4 + 20);
    v49 = *(_QWORD *)(v4 + 32);
    v52 = *(_QWORD **)(*(_QWORD *)a1 + 248LL);
    v51 = *(unsigned int *)(v4 + 24);
  }
  else
  {
    v43 = (const __m128i *)ptr[0];
    v44 = 0;
    while ( 1 )
    {
      v45 = (__m128i *)&v40[24 * v44];
      *v45 = _mm_loadu_si128(v43);
      v45[1].m128i_i64[0] = v43[1].m128i_i64[0];
      ++v88.m128i_i32[2];
      v46 = sub_F1D570((__int64)v41);
      v44 = v88.m128i_u32[2];
      if ( v46 )
        v25 = v46;
      v41 += 2;
      if ( v41 == v42 )
        break;
      v47 = v88.m128i_u32[2] + 1LL;
      v40 = (_BYTE *)v88.m128i_i64[0];
      v43 = v41;
      if ( v47 > v88.m128i_u32[3] )
      {
        if ( v88.m128i_i64[0] > (unsigned __int64)v41
          || (unsigned __int64)v41 >= v88.m128i_i64[0] + 24 * (unsigned __int64)v88.m128i_u32[2] )
        {
          sub_2237220(&v88, v89, v47, 24);
          v40 = (_BYTE *)v88.m128i_i64[0];
          v43 = v41;
          v44 = v88.m128i_u32[2];
        }
        else
        {
          v75 = &v41->m128i_i8[-v88.m128i_i64[0]];
          sub_2237220(&v88, v89, v47, 24);
          v40 = (_BYTE *)v88.m128i_i64[0];
          v44 = v88.m128i_u32[2];
          v43 = (const __m128i *)&v75[v88.m128i_i64[0]];
        }
      }
    }
    v48 = *(_DWORD *)(v4 + 20);
    v49 = *(_QWORD *)(v4 + 32);
    v50 = *(_DWORD *)(v4 + 16);
    v51 = *(unsigned int *)(v4 + 24);
    v52 = *(_QWORD **)(*(_QWORD *)a1 + 248LL);
    if ( v25 )
    {
      v4 = sub_C98D20(v52, v50, v49, v48, v51, 0, (const __m128i *)v88.m128i_i64[0], v88.m128i_u32[2]);
      goto LABEL_43;
    }
    v53 = (unsigned int)(v88.m128i_i32[2] + 1);
  }
  v4 = sub_C98D20(v52, v50, v49, v48, v51, v53, nullptr, 0);
LABEL_43:
  if ( (_BYTE *)v88.m128i_i64[0] != v89 )
    free((void *)v88.m128i_i64[0]);
LABEL_21:
  if ( ptr[0] != v91 )
    free(ptr[0]);
LABEL_7:
  sub_190D5E0(v76, (__m128)0LL);
  return v4;
}
