__int64 __fastcall sub_1765B30(__int64 *a1, __int64 a2)
{
  unsigned __int16 **v4; // rax
  __int64 v5; // r8
  __int64 v6; // r15
  __int64 v7; // r13
  bool v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  char *v18; // rcx
  const __m128i *v19; // rdx
  __m128i *v20; // rax
  __m128i v21; // xmm1
  unsigned __int16 *v22; // rax
  unsigned __int16 *v23; // rax
  __int64 v24; // rax
  int v25; // edx
  unsigned __int64 v26; // r9
  int v27; // ecx
  unsigned __int64 v28; // r8
  unsigned __int64 v29; // rdx
  __m128i *v30; // rcx
  const __m128i *v31; // rax
  __m128i v32; // xmm3
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __int64 v35; // rcx
  unsigned __int16 *v36; // rax
  __int64 v37; // rax
  __int64 v38; // r14
  unsigned int v40; // edx
  unsigned __int64 v41; // r8
  unsigned __int64 v42; // rdx
  __m128i *v43; // rcx
  const __m128i *v44; // rax
  __m128i v45; // xmm6
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdi
  unsigned __int64 v50; // r15
  _QWORD *v51; // rax
  unsigned int v52; // [rsp+0h] [rbp-148h]
  __int64 v53; // [rsp+0h] [rbp-148h]
  unsigned __int64 v54; // [rsp+0h] [rbp-148h]
  unsigned __int64 v55; // [rsp+0h] [rbp-148h]
  _BYTE *v56; // [rsp+0h] [rbp-148h]
  unsigned __int64 v57; // [rsp+0h] [rbp-148h]
  _BYTE *v58; // [rsp+0h] [rbp-148h]
  unsigned __int64 v59; // [rsp+0h] [rbp-148h]
  unsigned __int64 v60; // [rsp+0h] [rbp-148h]
  _BYTE *v61; // [rsp+0h] [rbp-148h]
  unsigned __int64 v62; // [rsp+0h] [rbp-148h]
  unsigned int v63; // [rsp+8h] [rbp-140h]
  unsigned __int64 v64; // [rsp+8h] [rbp-140h]
  unsigned __int64 v65; // [rsp+8h] [rbp-140h]
  unsigned __int64 v66; // [rsp+8h] [rbp-140h]
  unsigned __int64 v67; // [rsp+8h] [rbp-140h]
  unsigned __int64 v68; // [rsp+8h] [rbp-140h]
  __int64 v69; // [rsp+20h] [rbp-128h]
  unsigned __int64 v70; // [rsp+28h] [rbp-120h]
  __m128i si128; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v72; // [rsp+40h] [rbp-108h]
  void *ptr[2]; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD v74[4]; // [rsp+60h] [rbp-E8h] BYREF
  __m128 v75; // [rsp+80h] [rbp-C8h] BYREF
  unsigned __int64 v76; // [rsp+90h] [rbp-B8h]
  int v77; // [rsp+98h] [rbp-B0h]
  int v78; // [rsp+9Ch] [rbp-ACh]
  int v79; // [rsp+A0h] [rbp-A8h]
  void *v80; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v81; // [rsp+B8h] [rbp-90h]
  _BYTE v82[136]; // [rsp+C0h] [rbp-88h] BYREF

  v80 = v82;
  v81 = 0x200000000LL;
  sub_EE9E50(&v75, a2);
  v74[0] = v76;
  *(__m128i *)ptr = _mm_load_si128((const __m128i *)&v75);
  if ( ((__int64)ptr[1] & 3) != 0 )
    v4 = (unsigned __int16 **)sub_EF2B30((__int64)ptr);
  else
    v4 = (unsigned __int16 **)ptr[0];
  v69 = sub_175B800(a1, *v4);
  if ( v69 == 1 )
  {
    v38 = 1;
  }
  else
  {
    v5 = *(_QWORD *)(a2 + 24);
    ptr[0] = v74;
    ptr[1] = (void *)0x400000000LL;
    v6 = v5 + 24LL * (*(_WORD *)(a2 + 20) >> 1);
    if ( v5 != v6 )
    {
      v7 = v5;
      v8 = 0;
      while ( 1 )
      {
        if ( *(_DWORD *)v7 )
        {
          if ( *(_DWORD *)v7 == 1 )
          {
            v36 = (unsigned __int16 *)sub_C033F0(a2, v7);
            v37 = sub_175B800(a1, v36);
            if ( v37 == 1 )
              goto LABEL_31;
            v40 = *(_DWORD *)(v7 + 12);
            v75.m128_i32[0] = 1;
            v41 = v37 & 0xFFFFFFFFFFFFFFFELL;
            v75.m128_u64[1] = v37 & 0xFFFFFFFFFFFFFFFELL;
            v76 = v40;
            v42 = (unsigned int)v81 + 1LL;
            v43 = (__m128i *)((char *)v80 + 40 * (unsigned int)v81);
            v44 = (const __m128i *)&v75;
            if ( v42 > HIDWORD(v81) )
            {
              v61 = v80;
              if ( v80 > &v75 || v43 <= (__m128i *)&v75 )
              {
                v62 = v41;
                sub_2237220(&v80, v82, v42, 40);
                v41 = v62;
                v43 = (__m128i *)((char *)v80 + 40 * (unsigned int)v81);
                v44 = (const __m128i *)&v75;
              }
              else
              {
                v68 = v41;
                sub_2237220(&v80, v82, v42, 40);
                v41 = v68;
                v44 = (const __m128i *)((char *)v80 + (char *)&v75 - v61);
                v43 = (__m128i *)((char *)v80 + 40 * (unsigned int)v81);
              }
            }
            *v43 = _mm_loadu_si128(v44);
            v45 = _mm_loadu_si128(v44 + 1);
            LODWORD(v81) = v81 + 1;
            v43[1] = v45;
            v43[2].m128i_i64[0] = v44[2].m128i_i64[0];
            if ( !v8 )
            {
              v55 = v41;
              v48 = sub_C033F0(a2, v7);
              v41 = v55;
              v8 = v48 != v55;
            }
            sub_14B7B40((__int64)ptr, v41);
          }
          else
          {
            v22 = (unsigned __int16 *)sub_C03400(a2, v7);
            v53 = sub_175B800(a1, v22);
            if ( v53 == 1 || (v23 = (unsigned __int16 *)sub_C03410(a2, v7), v24 = sub_175B800(a1, v23), v24 == 1) )
            {
LABEL_31:
              v38 = 1;
              goto LABEL_32;
            }
            v25 = *(_DWORD *)(v7 + 16);
            v75.m128_i32[0] = 2;
            v26 = v24 & 0xFFFFFFFFFFFFFFFELL;
            v76 = v24 & 0xFFFFFFFFFFFFFFFELL;
            v27 = *(_DWORD *)(v7 + 12);
            v28 = v53 & 0xFFFFFFFFFFFFFFFELL;
            v78 = v25;
            v29 = (unsigned int)v81 + 1LL;
            v75.m128_u64[1] = v53 & 0xFFFFFFFFFFFFFFFELL;
            v77 = v27;
            v30 = (__m128i *)((char *)v80 + 40 * (unsigned int)v81);
            v31 = (const __m128i *)&v75;
            v79 = 0;
            if ( v29 > HIDWORD(v81) )
            {
              v58 = v80;
              if ( v80 > &v75 || v30 <= (__m128i *)&v75 )
              {
                v66 = v26;
                v59 = v28;
                sub_2237220(&v80, v82, v29, 40);
                v26 = v66;
                v28 = v59;
                v30 = (__m128i *)((char *)v80 + 40 * (unsigned int)v81);
                v31 = (const __m128i *)&v75;
              }
              else
              {
                v70 = v26;
                v65 = v28;
                sub_2237220(&v80, v82, v29, 40);
                v28 = v65;
                v26 = v70;
                v31 = (const __m128i *)((char *)v80 + (char *)&v75 - v58);
                v30 = (__m128i *)((char *)v80 + 40 * (unsigned int)v81);
              }
            }
            *v30 = _mm_loadu_si128(v31);
            v32 = _mm_loadu_si128(v31 + 1);
            LODWORD(v81) = v81 + 1;
            v30[1] = v32;
            v30[2].m128i_i64[0] = v31[2].m128i_i64[0];
            if ( v8 || (v64 = v26, v54 = v28, v46 = sub_C03400(a2, v7), v28 = v54, v26 = v64, v46 != v54) )
            {
              v8 = 1;
            }
            else
            {
              v47 = sub_C03410(a2, v7);
              v26 = v64;
              v28 = v54;
              v8 = v47 != v64;
            }
            v33 = LODWORD(ptr[1]);
            v34 = LODWORD(ptr[1]) + 1LL;
            if ( v34 > HIDWORD(ptr[1]) )
            {
              v67 = v26;
              v60 = v28;
              sub_2237220(ptr, v74, v34, 8);
              v33 = LODWORD(ptr[1]);
              v26 = v67;
              v28 = v60;
            }
            *((_QWORD *)ptr[0] + v33) = v28;
            ++LODWORD(ptr[1]);
            v35 = LODWORD(ptr[1]);
            if ( (unsigned __int64)LODWORD(ptr[1]) + 1 > HIDWORD(ptr[1]) )
            {
              v57 = v26;
              sub_2237220(ptr, v74, LODWORD(ptr[1]) + 1LL, 8);
              v35 = LODWORD(ptr[1]);
              v26 = v57;
            }
            *((_QWORD *)ptr[0] + v35) = v26;
            ++LODWORD(ptr[1]);
          }
          goto LABEL_16;
        }
        v9 = *(_QWORD *)(v7 + 8);
        if ( (v9 & 1) != 0 || !v9 )
        {
          v8 = 1;
LABEL_13:
          v63 = *(_DWORD *)(v7 + 20);
          v52 = *(_DWORD *)(v7 + 16);
          v15 = sub_C00930(v7);
          v75.m128_i32[0] = 0;
          v75.m128_u64[1] = v15;
          v16 = (unsigned int)v81;
          v76 = __PAIR64__(v63, v52);
          v17 = (unsigned int)v81 + 1LL;
          if ( v17 > HIDWORD(v81) )
          {
            if ( v80 > &v75 || &v75 >= (__m128 *)((char *)v80 + 40 * (unsigned int)v81) )
            {
              sub_2237220(&v80, v82, v17, 40);
              v18 = (char *)v80;
              v16 = (unsigned int)v81;
              v19 = (const __m128i *)&v75;
            }
            else
            {
              v56 = v80;
              sub_2237220(&v80, v82, v17, 40);
              v18 = (char *)v80;
              v16 = (unsigned int)v81;
              v19 = (const __m128i *)((char *)v80 + (char *)&v75 - v56);
            }
          }
          else
          {
            v18 = (char *)v80;
            v19 = (const __m128i *)&v75;
          }
          v20 = (__m128i *)&v18[40 * v16];
          *v20 = _mm_loadu_si128(v19);
          v21 = _mm_loadu_si128(v19 + 1);
          LODWORD(v81) = v81 + 1;
          v20[1] = v21;
          v20[2].m128i_i64[0] = v19[2].m128i_i64[0];
          goto LABEL_16;
        }
        v10 = sub_17473B0((__int64)a1, v9);
        if ( v10 )
        {
          v13 = *(_QWORD *)(v7 + 8);
          if ( (v13 & 1) != 0 )
          {
            v8 = 1;
            goto LABEL_12;
          }
        }
        else
        {
          v13 = *(_QWORD *)(v7 + 8);
          if ( (v13 & 1) != 0 )
            goto LABEL_12;
        }
        v14 = v10 == v13;
        v13 = 1;
        if ( !v14 )
          v8 = 1;
LABEL_12:
        if ( !(unsigned __int8)sub_B78060(v10, v9, v13, v11, v12) )
          goto LABEL_13;
LABEL_16:
        v7 += 24;
        if ( v6 == v7 )
          goto LABEL_57;
      }
    }
    v8 = 0;
LABEL_57:
    v49 = *a1;
    v50 = v69 & 0xFFFFFFFFFFFFFFFELL;
    if ( !*(_DWORD *)(*a1 + 12632) )
    {
      sub_EE9E50(&v75, a2);
      v72 = v76;
      si128 = _mm_load_si128((const __m128i *)&v75);
      if ( (si128.m128i_i8[8] & 3) != 0 )
        v51 = (_QWORD *)sub_EF2B30((__int64)&si128);
      else
        v51 = (_QWORD *)si128.m128i_i64[0];
      if ( *v51 == v50 )
      {
        v38 = a2;
        if ( !v8 )
          goto LABEL_32;
      }
      v49 = *a1;
    }
    v38 = sub_1A13360(v49, &v80, *(unsigned int *)(a2 + 16), *(_BYTE *)(a2 + 20) & 1, v50);
LABEL_32:
    if ( ptr[0] != v74 )
      free(ptr[0]);
  }
  if ( v80 != v82 )
    free(v80);
  return v38;
}
