unsigned __int64 __fastcall sub_1DA63D0(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        const __m128i *a4,
        double a5,
        __m128 a6)
{
  __int64 v8; // rdx
  void *v9; // rax
  int v10; // r8d
  __int64 v11; // rax
  unsigned __int64 v12; // r13
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // r15
  char *v18; // r14
  __int64 v19; // r13
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r15
  unsigned int v25; // r13d
  unsigned __int8 v26; // bp
  _QWORD *v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int64 v30; // r15
  unsigned __int64 v31; // r12
  __int64 v32; // r14
  __int64 v33; // rdx
  __int64 v34; // rbp
  __m128i *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rsi
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rdx
  const __m128i *v42; // rax
  int v43; // ecx
  __int64 v44; // rsi
  __int64 v45; // rax
  unsigned __int64 v46; // rax
  int v47; // [rsp+8h] [rbp-1F0h]
  char *v48; // [rsp+8h] [rbp-1F0h]
  char *v49; // [rsp+10h] [rbp-1E8h]
  __int64 v51; // [rsp+38h] [rbp-1C0h] BYREF
  unsigned __int64 v52; // [rsp+40h] [rbp-1B8h] BYREF
  const __m128i *v53; // [rsp+48h] [rbp-1B0h]
  __m128 v54; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v55; // [rsp+60h] [rbp-198h]
  __int64 v56; // [rsp+68h] [rbp-190h]
  __m128i v57; // [rsp+70h] [rbp-188h] BYREF
  void *v58[2]; // [rsp+80h] [rbp-178h]
  __int128 v59; // [rsp+90h] [rbp-168h]
  void *ptr; // [rsp+A0h] [rbp-158h] BYREF
  __int64 v61; // [rsp+A8h] [rbp-150h]
  _QWORD v62[41]; // [rsp+B0h] [rbp-148h] BYREF

  v8 = 0;
  v9 = (void *)a4->m128i_i64[1];
  if ( v9 )
  {
    if ( (*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v9 = (void *)sub_1D9F590((__int64)a1, *(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF8LL, v9, 0, 0);
      if ( !v9 )
        return 0;
    }
    else
    {
      v9 = nullptr;
    }
  }
  v57 = 0;
  *(_OWORD *)v58 = 0;
  v59 = 0;
  sub_15AB8B0((__int64)&v57, (__int64)v9, v8);
  v10 = *(_DWORD *)(a3 + 20);
  v53 = a4;
  ptr = v62;
  v61 = 0x800000000LL;
  v11 = a4[1].m128i_i64[1];
  v12 = 0;
  v52 = a3;
  v62[32] = v11;
  v47 = v10;
  v16 = sub_1DA1BA0(a1, &v52, 0.0, a6, 0, &v52, v10, (__int64)&ptr);
  if ( !v16 )
  {
    v18 = (char *)ptr;
    v49 = (char *)ptr + 32 * (unsigned int)v61;
    if ( v47 )
    {
      if ( ptr != (char *)ptr + 32 * (unsigned int)v61 )
      {
        v19 = 32;
        v48 = (char *)ptr + 32 * (unsigned int)(v47 - 1) + 32;
        do
        {
          v20 = v53->m128i_i64[(unsigned __int64)v19 / 8];
          v21 = 3 * v19 - 48;
          a6 = (__m128)_mm_loadu_si128((const __m128i *)(v52 + v21));
          v54 = a6;
          v22 = *(_QWORD *)(v52 + v21 + 16);
          v56 = v20;
          v55 = v22;
          if ( !sub_F1DBF0((__int64)&v54, (__int64)v18) )
            break;
          v18 += 32;
          if ( v18 == v48 )
            goto LABEL_19;
          v19 += 8;
        }
        while ( v49 != v18 );
      }
    }
    else
    {
      v48 = (char *)ptr;
LABEL_19:
      v16 = v49 == v48;
    }
    v23 = *a1;
    if ( !*(_DWORD *)(*a1 + 12632) && v57.m128i_i64[1] == (*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF8LL) && v16 )
    {
      v31 = v52;
      v12 = v52;
      v30 = v52 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v51 = sub_1D82500(
              (__int64 **)a1,
              &v57,
              v53[1].m128i_u32[1],
              *(_QWORD *)(a3 + 40),
              v53[1].m128i_i32[0],
              0,
              0.0,
              *(double *)a6.m128_u64,
              0,
              0);
      if ( sub_F22B30(&v51) )
        goto LABEL_24;
      v24 = v57.m128i_i64[1];
      v25 = v53[1].m128i_u32[0];
      v26 = *(_WORD *)(a3 + 18) >> 3;
      v54.m128_u64[0] = v51;
      v27 = (_QWORD *)sub_F22F70(&v54);
      if ( v27 )
      {
        v12 = sub_AB7A80(*(_QWORD **)(*a1 + 248), v26, v27, (const __m128i *)ptr, v61);
      }
      else
      {
        v46 = sub_1D82630(a1, v54.m128_i64[0], v25, (__int64)&ptr, v28, v29, (__m128)0LL, a6);
        if ( (v46 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_24;
        v12 = sub_A76250(*(_QWORD *)(*a1 + 248), v26, v24, v46, 0);
      }
      v30 = v12 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
LABEL_24:
        v12 = 0;
        goto LABEL_5;
      }
      v23 = *a1;
      v31 = v12;
    }
    v32 = sub_15AB9E0((__int64)&v57, *(_QWORD **)(v23 + 248), v23, v13, v14, v15);
    v34 = v33;
    if ( *(_BYTE *)(*(_QWORD *)v30 + 16LL) == 24 )
    {
      sub_1EA6140(
        a2,
        *(_QWORD *)(*(_QWORD *)v30 + 40LL),
        (unsigned int)(8 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v30 + 40LL) + 20LL) + 16),
        8);
      v36 = 0;
      *v35 = _mm_loadu_si128(v53 + 1);
      v37 = (unsigned int)(v61 - 1);
      if ( (_DWORD)v61 )
      {
        while ( 1 )
        {
          v35[1].m128i_i64[v36] = *((_QWORD *)ptr + 4 * v36 + 3);
          if ( v37 == v36 )
            break;
          ++v36;
        }
      }
      v38 = 16;
      if ( (unsigned __int8)(*(_WORD *)(v31 + 18) >> 3) == 6 )
        v38 = 16LL * (*(_QWORD *)(v31 + 32) != 0);
      v39 = sub_1EA6140(a2, v12, v38, 8);
      if ( (unsigned __int8)(*(_WORD *)(v39 + 18) >> 3) != 6 || *(_QWORD *)(v39 + 32) )
      {
        *(_DWORD *)v40 = v53->m128i_i32[0];
        if ( (unsigned __int8)(*(_WORD *)(v39 + 18) >> 3) != 6 || *(_QWORD *)(v39 + 32) )
          *(_QWORD *)(v40 + 8) = v34;
      }
    }
    else
    {
      sub_1EA6140(a2, v12, (unsigned int)(8 * *(_DWORD *)(v31 + 20) + 32), 8);
      v42 = v53;
      *(_DWORD *)v41 = v53->m128i_i32[0];
      if ( !v32 )
        v34 = 0;
      *(_QWORD *)(v41 + 8) = v34;
      *(_DWORD *)(v41 + 20) = v42[1].m128i_i32[1];
      *(_DWORD *)(v41 + 16) = v42[1].m128i_i32[0];
      *(_DWORD *)(v41 + 24) = v42[1].m128i_i32[2];
      v43 = v61;
      v44 = (unsigned int)(v61 - 1);
      *(_DWORD *)(v41 + 28) = v42[1].m128i_i32[3];
      v45 = 0;
      if ( v43 )
      {
        while ( 1 )
        {
          *(_QWORD *)(v41 + 8 * v45 + 32) = *((_QWORD *)ptr + 4 * v45 + 3);
          if ( v44 == v45 )
            break;
          ++v45;
        }
      }
    }
  }
LABEL_5:
  if ( ptr != v62 )
    free(ptr);
  if ( HIDWORD(v58[1]) )
    free(v58[0]);
  return v12;
}
