__int64 __fastcall sub_14A9F50(const __m128i *a1, __int64 a2, __m128i a3, __m128 a4)
{
  __int16 v6; // ax
  __int8 v7; // dl
  __int64 *p_ptr; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int16 v13; // ax
  __int64 *v14; // rbp
  unsigned int *v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // r12d
  __int64 *v18; // rdi
  const __m128i *v19; // r13
  int v20; // eax
  __int64 v21; // r13
  __int16 v22; // ax
  int v23; // edx
  int v24; // eax
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // edx
  __int64 v34; // rax
  __int64 v35; // r10
  __int64 v36; // rdx
  __int64 v37; // r11
  unsigned __int64 v38; // rdi
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rax
  __m128i *v43; // rcx
  __m128i *v44; // r9
  __int64 v45; // rdi
  unsigned int v46; // eax
  __int64 v47; // rsi
  __int64 v48; // rax
  __int64 v49; // rsi
  char *v50; // r13
  __int64 v51; // rsi
  __int64 v52; // rax
  int v53; // [rsp+0h] [rbp-138h]
  int v54; // [rsp+4h] [rbp-134h]
  int *m128i_i32; // [rsp+8h] [rbp-130h]
  const __m128i *v56; // [rsp+20h] [rbp-118h]
  __int64 v57; // [rsp+28h] [rbp-110h]
  __int64 v58; // [rsp+28h] [rbp-110h]
  __m128i *v59; // [rsp+28h] [rbp-110h]
  char v60; // [rsp+33h] [rbp-105h]
  unsigned __int32 v61; // [rsp+34h] [rbp-104h]
  __int64 v62; // [rsp+38h] [rbp-100h]
  __int64 v63; // [rsp+38h] [rbp-100h]
  unsigned __int32 v64; // [rsp+4Ch] [rbp-ECh] BYREF
  __m128i *v65; // [rsp+50h] [rbp-E8h] BYREF
  __int8 v66; // [rsp+58h] [rbp-E0h]
  const __m128i *v67; // [rsp+60h] [rbp-D8h]
  int v68; // [rsp+68h] [rbp-D0h]
  __int16 v69; // [rsp+6Ch] [rbp-CCh]
  __int64 (__fastcall *v70)(__int64); // [rsp+70h] [rbp-C8h]
  __int64 v71; // [rsp+78h] [rbp-C0h]
  __int64 v72; // [rsp+80h] [rbp-B8h]
  void *ptr; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v74; // [rsp+98h] [rbp-A0h]
  _BYTE v75[152]; // [rsp+A0h] [rbp-98h] BYREF

  v61 = a1[1].m128i_u32[0];
  v64 = v61;
  v56 = a1 + 122;
  v6 = a1[2].m128i_i16[0];
  do
  {
    v7 = a1[122].m128i_i8[0];
    a1[122].m128i_i8[0] = 1;
    v65 = (__m128i *)v56;
    v66 = v7;
    v67 = a1;
    v68 = 1376276;
    v69 = 63;
    v70 = sub_14789E0;
    v71 = 0;
    v72 = 0;
    if ( v6 == 20 )
    {
      if ( (unsigned int)a1[5].m128i_u16[5] >= *(_DWORD *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 144LL) )
        sub_1568800(&v65);
      else
        LODWORD(v72) = sub_14789E0((__int64)a1);
    }
    m128i_i32 = a1[1].m128i_i32;
    while ( 1 )
    {
      p_ptr = (__int64 *)&ptr;
      LODWORD(ptr) = 327701;
      sub_15680D0(a1, &ptr, 2, 7);
      v13 = a1[2].m128i_i16[0];
      if ( v13 == 3 )
        break;
      if ( v13 != 5 )
        goto LABEL_29;
      v14 = (__int64 *)a1[1].m128i_i64[1];
      v15 = (unsigned int *)v14[2];
      v16 = *v15;
      if ( v16 == 4 )
      {
        if ( v15[4] != 1684632949 )
          goto LABEL_13;
        sub_14A3AC0((__int64)a1, a2);
      }
      else if ( v16 == 13
             && *((_QWORD *)v15 + 2) == 0x6E676953746F6F52LL
             && v15[6] == 1920300129
             && *((_BYTE *)v15 + 28) == 101 )
      {
        sub_14A42B0((__int64)a1, a2);
      }
      else
      {
LABEL_13:
        v17 = a1[1].m128i_u32[0];
        v18 = (__int64 *)a1->m128i_i64[1];
        a1[2].m128i_i32[2] = v17;
        v19 = a1 + 1;
        sub_14634E0(v18, m128i_i32);
        v20 = sub_F963B0(v14, 0, 5);
        if ( (*(_BYTE *)(*(_QWORD *)(a1->m128i_i64[1] + 56) + 89LL) & 1) != 0 || v20 != 420 )
        {
          if ( a1[2].m128i_i16[0] != 22 )
            goto LABEL_16;
          ptr = v75;
          v74 = 0x400000000LL;
          v60 = sub_14A98F0(a1, v14, v17, a2, (__int32 *)&v64, 0, a3, a4, 0, (__int64)&ptr);
          if ( (_DWORD)v74 )
          {
            if ( *(_DWORD *)(a1->m128i_i64[1] + 1012) )
            {
              v57 = a1->m128i_i64[1];
              v34 = operator new[](0x18u);
              a3 = _mm_loadu_si128(a1 + 1);
              *(_DWORD *)(v34 + 16) = a1[2].m128i_i32[0];
              *(__m128i *)v34 = a3;
              sub_14368B0(v57, (char *)v34, 1, 1u, 1u, 1u);
            }
            else
            {
              v58 = a1->m128i_i64[1];
              sub_1417F90((_QWORD *)v58);
              v35 = v58;
              v36 = *(unsigned int *)(v58 + 2912);
              v37 = v58 + 2904;
              v38 = *(_QWORD *)(v58 + 2904);
              v39 = 3 * v36;
              v40 = v36 + 1;
              v41 = 24LL * *(_QWORD *)(v58 + 2944);
              v42 = 8 * v39;
              v43 = (__m128i *)(v38 + v41);
              v44 = (__m128i *)(v38 + v42);
              if ( v38 + v41 == v38 + v42 )
              {
                if ( v40 > *(unsigned int *)(v58 + 2916) )
                {
                  v51 = v58 + 2920;
                  if ( v38 > (unsigned __int64)m128i_i32 || v44 <= (__m128i *)m128i_i32 )
                  {
                    sub_2237220(v37, v51, v40, 24);
                    v35 = v58;
                    v44 = (__m128i *)(*(_QWORD *)(v58 + 2904) + 24LL * *(unsigned int *)(v58 + 2912));
                  }
                  else
                  {
                    sub_2237220(v37, v51, v40, 24);
                    v35 = v58;
                    v52 = *(_QWORD *)(v58 + 2904);
                    v19 = (const __m128i *)((char *)m128i_i32 + v52 - v38);
                    v44 = (__m128i *)(v52 + 24LL * *(unsigned int *)(v58 + 2912));
                  }
                }
                *v44 = _mm_loadu_si128(v19);
                v44[1].m128i_i64[0] = v19[1].m128i_i64[0];
                ++*(_DWORD *)(v35 + 2912);
              }
              else
              {
                if ( v40 > *(unsigned int *)(v58 + 2916) )
                {
                  v49 = v58 + 2920;
                  v63 = 24LL * *(_QWORD *)(v58 + 2944);
                  if ( v38 <= (unsigned __int64)m128i_i32 && v44 > (__m128i *)m128i_i32 )
                  {
                    v50 = (char *)m128i_i32 - v38;
                    sub_2237220(v37, v49, v40, 24);
                    v35 = v58;
                    v38 = *(_QWORD *)(v58 + 2904);
                    v19 = (const __m128i *)&v50[v38];
                  }
                  else
                  {
                    sub_2237220(v37, v49, v40, 24);
                    v35 = v58;
                    v38 = *(_QWORD *)(v58 + 2904);
                  }
                  v43 = (__m128i *)(v38 + v63);
                  v42 = 24LL * *(unsigned int *)(v35 + 2912);
                  v44 = (__m128i *)(v38 + v42);
                }
                a4 = (__m128)_mm_loadu_si128((const __m128i *)(v38 + v42 - 24));
                *v44 = (__m128i)a4;
                v44[1].m128i_i64[0] = *(_QWORD *)(v38 + v42 - 8);
                v45 = *(_QWORD *)(v35 + 2904);
                v46 = *(_DWORD *)(v35 + 2912);
                v47 = 24LL * v46;
                if ( (__m128i *)(v45 + v47 - 24) != v43 )
                {
                  v62 = v35;
                  v59 = v43;
                  memmove(&v43[1].m128i_u64[1], v43, v45 + v47 - 24 - (_QWORD)v43);
                  v35 = v62;
                  v43 = v59;
                  v46 = *(_DWORD *)(v62 + 2912);
                  v45 = *(_QWORD *)(v62 + 2904);
                }
                v48 = v46 + 1;
                *(_DWORD *)(v35 + 2912) = v48;
                if ( v43 <= v19 && (unsigned __int64)v19 < v45 + 24 * v48 )
                  v19 = (const __m128i *)((char *)v19 + 24);
                *v43 = _mm_loadu_si128(v19);
                v43[1].m128i_i32[0] = v19[1].m128i_i32[0];
              }
            }
            sub_14368B0(a1->m128i_i64[1], (char *)ptr, (unsigned int)v74, 1u, 0, 1u);
            sub_149F520((__int64)a1, 1);
          }
          if ( ptr != v75 )
            free(ptr);
          if ( !v60 )
          {
LABEL_16:
            v21 = sub_15D92D0(*(_QWORD *)(a2 + 40), 80);
            v22 = sub_F963B0(v14, 0, 5);
            v23 = v54;
            *(_QWORD *)v21 = v14;
            *(_WORD *)(v21 + 32) = v22;
            v24 = v53;
            BYTE1(v23) = BYTE1(v54) & 0xFC;
            *(_QWORD *)(v21 + 56) &= 0x7F800000uLL;
            BYTE1(v24) = BYTE1(v53) & 0xFC;
            *(_QWORD *)(v21 + 8) = 0;
            v53 = v24;
            LOBYTE(v24) = *(_BYTE *)(v21 + 35);
            v54 = v23;
            *(_QWORD *)(v21 + 16) = 0;
            *(_DWORD *)(v21 + 24) = v17;
            *(_DWORD *)(v21 + 28) = v17;
            *(_BYTE *)(v21 + 34) = -11;
            *(_BYTE *)(v21 + 35) = (2 * ((v23 & 0x200) != 0)) | BYTE1(v24) & 1 | v24 & 0xFC;
            *(_QWORD *)(v21 + 40) = 0;
            *(_QWORD *)(v21 + 48) = 0;
            v25 = sub_15D7D80(v21);
            v26 = *(unsigned int *)(a2 + 60);
            *(_QWORD *)(v21 + 72) = v25;
            v27 = *(unsigned int *)(a2 + 56);
            if ( v27 + 1 > v26 )
            {
              sub_2237220(a2 + 48, a2 + 64, v27 + 1, 8);
              v27 = *(unsigned int *)(a2 + 56);
            }
            *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8 * v27) = v21;
            v28 = *(unsigned int *)(a2 + 16);
            v29 = *(unsigned int *)(a2 + 20);
            ++*(_DWORD *)(a2 + 56);
            if ( v28 + 1 > v29 )
            {
              sub_2237220(a2 + 8, a2 + 24, v28 + 1, 8);
              v28 = *(unsigned int *)(a2 + 16);
            }
            *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v28) = v21;
            ++*(_DWORD *)(a2 + 16);
          }
        }
      }
    }
    v30 = a1->m128i_i64[1];
    if ( *(_QWORD *)(v30 + 760) )
    {
      *(_BYTE *)(v30 + 968) = 1;
      *(_BYTE *)(*(_QWORD *)(v30 + 48) + 6LL) = 1;
    }
    v31 = a1[6].m128i_i64[0];
    a1[2].m128i_i16[0] = 1;
    p_ptr = (_QWORD *)&byte_5;
    sub_1736F00(*(_QWORD *)(v31 + 656), 5, 0, 0);
LABEL_29:
    sub_14808E0((__int64)&v65, p_ptr, v9, v10, v11, v12);
    v32 = HIDWORD(v72);
    v64 = HIDWORD(v72);
    v65->m128i_i8[0] = v66;
    v6 = a1[2].m128i_i16[0];
  }
  while ( v6 == 20 );
  *(_DWORD *)(a2 + 4) = v32;
  *(_DWORD *)a2 = v61;
  return v61;
}
