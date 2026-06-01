__int64 __fastcall sub_1983EB0(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  unsigned __int16 **v5; // rax
  __int64 v6; // r8
  __int64 v7; // r15
  __int64 v8; // r13
  bool v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  bool v15; // zf
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rdx
  char *v19; // rcx
  const __m128i *v20; // rdx
  __m128 *v21; // rax
  unsigned __int16 *v22; // rax
  unsigned __int16 *v23; // rax
  unsigned __int64 v24; // rax
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
  unsigned __int64 v37; // rax
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
  unsigned __int64 v49; // r15
  _QWORD *v50; // rax
  unsigned int v51; // [rsp+0h] [rbp-148h]
  unsigned __int64 v52; // [rsp+0h] [rbp-148h]
  unsigned __int64 v53; // [rsp+0h] [rbp-148h]
  unsigned __int64 v54; // [rsp+0h] [rbp-148h]
  _BYTE *v55; // [rsp+0h] [rbp-148h]
  unsigned __int64 v56; // [rsp+0h] [rbp-148h]
  _BYTE *v57; // [rsp+0h] [rbp-148h]
  unsigned __int64 v58; // [rsp+0h] [rbp-148h]
  unsigned __int64 v59; // [rsp+0h] [rbp-148h]
  _BYTE *v60; // [rsp+0h] [rbp-148h]
  unsigned __int64 v61; // [rsp+0h] [rbp-148h]
  unsigned int v62; // [rsp+8h] [rbp-140h]
  unsigned __int64 v63; // [rsp+8h] [rbp-140h]
  unsigned __int64 v64; // [rsp+8h] [rbp-140h]
  unsigned __int64 v65; // [rsp+8h] [rbp-140h]
  unsigned __int64 v66; // [rsp+8h] [rbp-140h]
  unsigned __int64 v67; // [rsp+8h] [rbp-140h]
  unsigned __int64 v68; // [rsp+20h] [rbp-128h]
  unsigned __int64 v69; // [rsp+28h] [rbp-120h]
  __m128i si128; // [rsp+30h] [rbp-118h] BYREF
  unsigned __int64 v71; // [rsp+40h] [rbp-108h]
  void *ptr[2]; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD v73[4]; // [rsp+60h] [rbp-E8h] BYREF
  __m128 v74; // [rsp+80h] [rbp-C8h] BYREF
  unsigned __int64 v75; // [rsp+90h] [rbp-B8h]
  int v76; // [rsp+98h] [rbp-B0h]
  int v77; // [rsp+9Ch] [rbp-ACh]
  int v78; // [rsp+A0h] [rbp-A8h]
  void *v79; // [rsp+B0h] [rbp-98h] BYREF
  __int64 v80; // [rsp+B8h] [rbp-90h]
  _BYTE v81[136]; // [rsp+C0h] [rbp-88h] BYREF

  v79 = v81;
  v80 = 0x200000000LL;
  sub_EE9E50(&v74, a2);
  v73[0] = v75;
  *(__m128i *)ptr = _mm_load_si128((const __m128i *)&v74);
  if ( ((__int64)ptr[1] & 3) != 0 )
    v5 = (unsigned __int16 **)sub_EF2B30((__int64)ptr);
  else
    v5 = (unsigned __int16 **)ptr[0];
  v68 = sub_190CCA0(a1, *v5, *(double *)a3.m128_u64, a4);
  if ( v68 == 1 )
  {
    v38 = 1;
  }
  else
  {
    v6 = *(_QWORD *)(a2 + 24);
    ptr[0] = v73;
    ptr[1] = (void *)0x400000000LL;
    v7 = v6 + 24LL * (*(_WORD *)(a2 + 20) >> 1);
    if ( v6 != v7 )
    {
      v8 = v6;
      v9 = 0;
      while ( 1 )
      {
        if ( *(_DWORD *)v8 )
        {
          if ( *(_DWORD *)v8 == 1 )
          {
            v36 = (unsigned __int16 *)sub_C033F0(a2, v8);
            v37 = sub_190CCA0(a1, v36, *(double *)a3.m128_u64, a4);
            if ( v37 == 1 )
              goto LABEL_31;
            v40 = *(_DWORD *)(v8 + 12);
            v74.m128_i32[0] = 1;
            v41 = v37 & 0xFFFFFFFFFFFFFFFELL;
            v74.m128_u64[1] = v37 & 0xFFFFFFFFFFFFFFFELL;
            v75 = v40;
            v42 = (unsigned int)v80 + 1LL;
            v43 = (__m128i *)((char *)v79 + 40 * (unsigned int)v80);
            v44 = (const __m128i *)&v74;
            if ( v42 > HIDWORD(v80) )
            {
              v60 = v79;
              if ( v79 > &v74 || v43 <= (__m128i *)&v74 )
              {
                v61 = v41;
                sub_2237220(&v79, v81, v42, 40);
                v41 = v61;
                v43 = (__m128i *)((char *)v79 + 40 * (unsigned int)v80);
                v44 = (const __m128i *)&v74;
              }
              else
              {
                v67 = v41;
                sub_2237220(&v79, v81, v42, 40);
                v41 = v67;
                v44 = (const __m128i *)((char *)v79 + (char *)&v74 - v60);
                v43 = (__m128i *)((char *)v79 + 40 * (unsigned int)v80);
              }
            }
            *v43 = _mm_loadu_si128(v44);
            v45 = _mm_loadu_si128(v44 + 1);
            LODWORD(v80) = v80 + 1;
            v43[1] = v45;
            v43[2].m128i_i64[0] = v44[2].m128i_i64[0];
            if ( !v9 )
            {
              v54 = v41;
              v48 = sub_C033F0(a2, v8);
              v41 = v54;
              v9 = v48 != v54;
            }
            sub_14B7B40((__int64)ptr, v41);
          }
          else
          {
            v22 = (unsigned __int16 *)sub_C03400(a2, v8);
            v52 = sub_190CCA0(a1, v22, *(double *)a3.m128_u64, a4);
            if ( v52 == 1
              || (v23 = (unsigned __int16 *)sub_C03410(a2, v8),
                  v24 = sub_190CCA0(a1, v23, *(double *)a3.m128_u64, a4),
                  v24 == 1) )
            {
LABEL_31:
              v38 = 1;
              goto LABEL_32;
            }
            v25 = *(_DWORD *)(v8 + 16);
            v74.m128_i32[0] = 2;
            v26 = v24 & 0xFFFFFFFFFFFFFFFELL;
            v75 = v24 & 0xFFFFFFFFFFFFFFFELL;
            v27 = *(_DWORD *)(v8 + 12);
            v28 = v52 & 0xFFFFFFFFFFFFFFFELL;
            v77 = v25;
            v29 = (unsigned int)v80 + 1LL;
            v74.m128_u64[1] = v52 & 0xFFFFFFFFFFFFFFFELL;
            v76 = v27;
            v30 = (__m128i *)((char *)v79 + 40 * (unsigned int)v80);
            v31 = (const __m128i *)&v74;
            v78 = 0;
            if ( v29 > HIDWORD(v80) )
            {
              v57 = v79;
              if ( v79 > &v74 || v30 <= (__m128i *)&v74 )
              {
                v65 = v26;
                v58 = v28;
                sub_2237220(&v79, v81, v29, 40);
                v26 = v65;
                v28 = v58;
                v30 = (__m128i *)((char *)v79 + 40 * (unsigned int)v80);
                v31 = (const __m128i *)&v74;
              }
              else
              {
                v69 = v26;
                v64 = v28;
                sub_2237220(&v79, v81, v29, 40);
                v28 = v64;
                v26 = v69;
                v31 = (const __m128i *)((char *)v79 + (char *)&v74 - v57);
                v30 = (__m128i *)((char *)v79 + 40 * (unsigned int)v80);
              }
            }
            *v30 = _mm_loadu_si128(v31);
            v32 = _mm_loadu_si128(v31 + 1);
            LODWORD(v80) = v80 + 1;
            v30[1] = v32;
            v30[2].m128i_i64[0] = v31[2].m128i_i64[0];
            if ( v9 || (v63 = v26, v53 = v28, v46 = sub_C03400(a2, v8), v28 = v53, v26 = v63, v46 != v53) )
            {
              v9 = 1;
            }
            else
            {
              v47 = sub_C03410(a2, v8);
              v26 = v63;
              v28 = v53;
              v9 = v47 != v63;
            }
            v33 = LODWORD(ptr[1]);
            v34 = LODWORD(ptr[1]) + 1LL;
            if ( v34 > HIDWORD(ptr[1]) )
            {
              v66 = v26;
              v59 = v28;
              sub_2237220(ptr, v73, v34, 8);
              v33 = LODWORD(ptr[1]);
              v26 = v66;
              v28 = v59;
            }
            *((_QWORD *)ptr[0] + v33) = v28;
            ++LODWORD(ptr[1]);
            v35 = LODWORD(ptr[1]);
            if ( (unsigned __int64)LODWORD(ptr[1]) + 1 > HIDWORD(ptr[1]) )
            {
              v56 = v26;
              sub_2237220(ptr, v73, LODWORD(ptr[1]) + 1LL, 8);
              v35 = LODWORD(ptr[1]);
              v26 = v56;
            }
            *((_QWORD *)ptr[0] + v35) = v26;
            ++LODWORD(ptr[1]);
          }
          goto LABEL_16;
        }
        v10 = *(_QWORD *)(v8 + 8);
        if ( (v10 & 1) != 0 || !v10 )
        {
          v9 = 1;
LABEL_13:
          v62 = *(_DWORD *)(v8 + 20);
          v51 = *(_DWORD *)(v8 + 16);
          v16 = sub_C00930(v8);
          v74.m128_i32[0] = 0;
          v74.m128_u64[1] = v16;
          v17 = (unsigned int)v80;
          v75 = __PAIR64__(v62, v51);
          v18 = (unsigned int)v80 + 1LL;
          if ( v18 > HIDWORD(v80) )
          {
            if ( v79 > &v74 || &v74 >= (__m128 *)((char *)v79 + 40 * (unsigned int)v80) )
            {
              sub_2237220(&v79, v81, v18, 40);
              v19 = (char *)v79;
              v17 = (unsigned int)v80;
              v20 = (const __m128i *)&v74;
            }
            else
            {
              v55 = v79;
              sub_2237220(&v79, v81, v18, 40);
              v19 = (char *)v79;
              v17 = (unsigned int)v80;
              v20 = (const __m128i *)((char *)v79 + (char *)&v74 - v55);
            }
          }
          else
          {
            v19 = (char *)v79;
            v20 = (const __m128i *)&v74;
          }
          a3 = (__m128)_mm_loadu_si128(v20);
          v21 = (__m128 *)&v19[40 * v17];
          *v21 = a3;
          a4 = (__m128)_mm_loadu_si128(v20 + 1);
          LODWORD(v80) = v80 + 1;
          v21[1] = a4;
          v21[2].m128_u64[0] = v20[2].m128i_u64[0];
          goto LABEL_16;
        }
        v11 = sub_18CBE40((__int64)a1, v10);
        if ( v11 )
        {
          v14 = *(_QWORD *)(v8 + 8);
          if ( (v14 & 1) != 0 )
          {
            v9 = 1;
            goto LABEL_12;
          }
        }
        else
        {
          v14 = *(_QWORD *)(v8 + 8);
          if ( (v14 & 1) != 0 )
            goto LABEL_12;
        }
        v15 = v11 == v14;
        v14 = 1;
        if ( !v15 )
          v9 = 1;
LABEL_12:
        if ( !(unsigned __int8)sub_B78060(v11, v10, v14, v12, v13) )
          goto LABEL_13;
LABEL_16:
        v8 += 24;
        if ( v7 == v8 )
          goto LABEL_57;
      }
    }
    v9 = 0;
LABEL_57:
    sub_EE9E50(&v74, a2);
    v49 = v68 & 0xFFFFFFFFFFFFFFFELL;
    si128 = _mm_load_si128((const __m128i *)&v74);
    v71 = v75;
    if ( (si128.m128i_i8[8] & 3) != 0 )
      v50 = (_QWORD *)sub_EF2B30((__int64)&si128);
    else
      v50 = (_QWORD *)si128.m128i_i64[0];
    if ( *v50 != v49 || (v38 = a2, v9) )
      v38 = sub_1A13360(*a1, &v79, *(unsigned int *)(a2 + 16), *(_BYTE *)(a2 + 20) & 1, v49);
LABEL_32:
    if ( ptr[0] != v73 )
      free(ptr[0]);
  }
  if ( v79 != v81 )
    free(v79);
  return v38;
}
