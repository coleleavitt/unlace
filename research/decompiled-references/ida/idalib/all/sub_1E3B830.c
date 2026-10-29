unsigned __int64 __fastcall sub_1E3B830(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int *a4,
        __int64 *a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128i a9,
        unsigned int a10)
{
  unsigned __int64 v10; // rbp
  __int64 v11; // r15
  char v14; // al
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbp
  unsigned __int64 v19; // rdx
  char *v20; // rdx
  const __m128i *v21; // rax
  __m128 *v22; // rdx
  __int64 v23; // rax
  _QWORD *v24; // rax
  int v25; // edx
  __int64 v26; // r9
  _BYTE *v27; // rdi
  __int64 *v29; // rax
  const __m128i *v30; // rdx
  __int64 v31; // r14
  __int64 v32; // rbp
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  unsigned __int64 v35; // rdx
  __m128 *v36; // rcx
  const __m128i *v37; // rax
  __int64 v38; // rax
  const __m128i *v40; // [rsp+20h] [rbp-158h]
  _BYTE *v41; // [rsp+20h] [rbp-158h]
  _BYTE *v42; // [rsp+20h] [rbp-158h]
  __int64 v43; // [rsp+28h] [rbp-150h]
  _BYTE v44[16]; // [rsp+30h] [rbp-148h] BYREF
  void *v45; // [rsp+40h] [rbp-138h] BYREF
  __int64 v46; // [rsp+48h] [rbp-130h]
  _BYTE v47[96]; // [rsp+50h] [rbp-128h] BYREF
  int v48; // [rsp+B0h] [rbp-C8h]
  char v49; // [rsp+B4h] [rbp-C4h]
  unsigned __int64 v50; // [rsp+C0h] [rbp-B8h] BYREF
  unsigned int *v51; // [rsp+C8h] [rbp-B0h]
  __int64 v52; // [rsp+D0h] [rbp-A8h]
  _QWORD *v53; // [rsp+D8h] [rbp-A0h]
  void **v54; // [rsp+E0h] [rbp-98h]
  __int64 v55; // [rsp+E8h] [rbp-90h]
  __int64 v56; // [rsp+F0h] [rbp-88h]
  char v57; // [rsp+F8h] [rbp-80h]
  void *v58; // [rsp+100h] [rbp-78h]
  __int64 v59; // [rsp+108h] [rbp-70h]
  _BYTE v60[16]; // [rsp+110h] [rbp-68h] BYREF
  void *ptr; // [rsp+120h] [rbp-58h]
  __int64 v62; // [rsp+128h] [rbp-50h]
  _BYTE v63[72]; // [rsp+130h] [rbp-48h] BYREF

  v10 = 0;
  if ( *(char *)(a3 + 28) >= 0 )
  {
    v11 = a3;
    sub_1DC3A50((__int64)v44, a1, a10, a3, 0);
    if ( !v44[8] )
    {
      v48 = 0;
      v46 = 0x400000000LL;
      v14 = *(_BYTE *)(v11 + 28);
      v45 = v47;
      v49 = 0;
      if ( (v14 & 0x7F) == 0x2A )
      {
        v15 = *(_QWORD *)(*(_QWORD *)(v11 + 80) + 152LL);
        v43 = *a4;
        v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 32LL))(v11);
        v17 = (unsigned int)v46;
        v18 = (v15 >> 2) & 1;
        v51 = a4 + 2;
        v50 = v16 & 0xFFFFFFFFFFFFFFFBLL;
        v52 = v43;
        v19 = (unsigned int)v46 + 1LL;
        if ( v19 > HIDWORD(v46) )
        {
          if ( v45 > &v50 || &v50 >= (unsigned __int64 *)((char *)v45 + 24 * (unsigned int)v46) )
          {
            sub_2237220(&v45, v47, v19, 24);
            v20 = (char *)v45;
            v17 = (unsigned int)v46;
            v21 = (const __m128i *)&v50;
          }
          else
          {
            v41 = v45;
            sub_2237220(&v45, v47, v19, 24);
            v20 = (char *)v45;
            v17 = (unsigned int)v46;
            v21 = (const __m128i *)((char *)v45 + (char *)&v50 - v41);
          }
        }
        else
        {
          v20 = (char *)v45;
          v21 = (const __m128i *)&v50;
        }
        a7 = (__m128)_mm_loadu_si128(v21);
        v22 = (__m128 *)&v20[24 * v17];
        *v22 = a7;
        v23 = v21[1].m128i_i64[0];
        LODWORD(v46) = v46 + 1;
        v22[1].m128_u64[0] = v23;
      }
      else
      {
        v29 = (__int64 *)sub_BC3640(a2);
        v30 = *(const __m128i **)a6;
        v31 = *(unsigned int *)(a6 + 8);
        v32 = *v29;
        v33 = 0;
        v18 = (v32 >> 2) & 1;
        if ( a2 )
        {
          v40 = *(const __m128i **)a6;
          v34 = (*(__int64 (__fastcall **)(_QWORD *))(*a2 + 32LL))(a2);
          v30 = v40;
          v33 = v34 & 0xFFFFFFFFFFFFFFFBLL;
        }
        v50 = v33;
        v51 = (unsigned int *)v30;
        v52 = v31;
        v35 = (unsigned int)v46 + 1LL;
        v36 = (__m128 *)((char *)v45 + 24 * (unsigned int)v46);
        v37 = (const __m128i *)&v50;
        if ( v35 > HIDWORD(v46) )
        {
          v42 = v45;
          if ( v45 > &v50 || v36 <= (__m128 *)&v50 )
          {
            sub_2237220(&v45, v47, v35, 24);
            v36 = (__m128 *)((char *)v45 + 24 * (unsigned int)v46);
            v37 = (const __m128i *)&v50;
          }
          else
          {
            sub_2237220(&v45, v47, v35, 24);
            v37 = (const __m128i *)((char *)v45 + (char *)&v50 - v42);
            v36 = (__m128 *)((char *)v45 + 24 * (unsigned int)v46);
          }
        }
        a8 = (__m128)_mm_loadu_si128(v37);
        *v36 = a8;
        v38 = v37[1].m128i_i64[0];
        LODWORD(v46) = v46 + 1;
        v36[1].m128_u64[0] = v38;
      }
      if ( !(_BYTE)v18 )
        v11 = *(_QWORD *)(v11 + 80);
      v24 = (_QWORD *)(*(_QWORD *)(v11 + 16) & 0xFFFFFFFFFFFFFFF8LL);
      if ( (*(_QWORD *)(v11 + 16) & 4) != 0 )
        v24 = (_QWORD *)*v24;
      v25 = *(_DWORD *)(a1 + 12632);
      v53 = v24;
      LODWORD(v52) = v25;
      v26 = *(unsigned int *)(a6 + 8);
      v54 = &v45;
      v58 = v60;
      v50 = a1;
      v51 = (unsigned int *)a1;
      v55 = 0;
      v56 = 0;
      v57 = 1;
      v59 = 0x100000000LL;
      ptr = v63;
      v62 = 0x100000000LL;
      v10 = sub_1E3B4C0((__int64 *)&v50, a2, v11, a5, *(const __m128i **)a6, v26, a7, a8, a9, 0);
      if ( ptr != v63 )
        free(ptr);
      if ( v58 != v60 )
        free(v58);
      v27 = v45;
      v51[3158] = v52;
      if ( v27 != v47 )
        free(v27);
    }
    sub_1DBADA0(v44);
  }
  return v10;
}
