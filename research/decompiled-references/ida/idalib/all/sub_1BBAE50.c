unsigned __int64 __fastcall sub_1BBAE50(
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
  unsigned __int32 v25; // r13d
  unsigned __int8 v26; // bp
  _QWORD *v27; // rax
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // r12
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // rbp
  __m128i *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rdx
  const __m128i *v40; // rax
  int v41; // ecx
  __int64 v42; // rsi
  __int64 v43; // rax
  unsigned __int64 v44; // rax
  int v45; // [rsp+8h] [rbp-1F0h]
  char *v46; // [rsp+8h] [rbp-1F0h]
  char *v47; // [rsp+10h] [rbp-1E8h]
  __int64 v49; // [rsp+38h] [rbp-1C0h] BYREF
  unsigned __int64 v50; // [rsp+40h] [rbp-1B8h] BYREF
  const __m128i *v51; // [rsp+48h] [rbp-1B0h]
  __m128i v52; // [rsp+50h] [rbp-1A8h] BYREF
  __int64 v53; // [rsp+60h] [rbp-198h]
  __int64 v54; // [rsp+68h] [rbp-190h]
  __int128 v55; // [rsp+70h] [rbp-188h] BYREF
  void *v56[2]; // [rsp+80h] [rbp-178h]
  __int128 v57; // [rsp+90h] [rbp-168h]
  void *ptr; // [rsp+A0h] [rbp-158h] BYREF
  __int64 v59; // [rsp+A8h] [rbp-150h]
  _QWORD v60[41]; // [rsp+B0h] [rbp-148h] BYREF

  v8 = 0;
  v9 = (void *)a4->m128i_i64[1];
  if ( v9 )
  {
    if ( (*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v9 = (void *)sub_1BB75E0(a1, *(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF8LL, v9, 0, 0);
      if ( !v9 )
        return 0;
    }
    else
    {
      v9 = nullptr;
    }
  }
  v55 = 0;
  *(_OWORD *)v56 = 0;
  v57 = 0;
  sub_15AB8B0((__int64)&v55, (__int64)v9, v8);
  v10 = *(_DWORD *)(a3 + 20);
  v51 = a4;
  ptr = v60;
  v59 = 0x800000000LL;
  v11 = a4[1].m128i_i64[1];
  v12 = 0;
  v50 = a3;
  v60[32] = v11;
  v45 = v10;
  v16 = sub_1BB90D0(a1, &v50, 0.0, a6, 0, &v50, v10, (__int64)&ptr);
  if ( !v16 )
  {
    v18 = (char *)ptr;
    v47 = (char *)ptr + 32 * (unsigned int)v59;
    if ( v45 )
    {
      if ( ptr != (char *)ptr + 32 * (unsigned int)v59 )
      {
        v19 = 32;
        v46 = (char *)ptr + 32 * (unsigned int)(v45 - 1) + 32;
        do
        {
          v20 = v51->m128i_i64[(unsigned __int64)v19 / 8];
          v21 = 3 * v19 - 48;
          v52 = _mm_loadu_si128((const __m128i *)(v50 + v21));
          v22 = *(_QWORD *)(v50 + v21 + 16);
          v54 = v20;
          v53 = v22;
          if ( !sub_F1DBF0((__int64)&v52, (__int64)v18) )
            break;
          v18 += 32;
          if ( v18 == v46 )
            goto LABEL_19;
          v19 += 8;
        }
        while ( v47 != v18 );
      }
    }
    else
    {
      v46 = (char *)ptr;
LABEL_19:
      v16 = v47 == v46;
    }
    v23 = *a1;
    if ( !*(_DWORD *)(*a1 + 12632) && *((_QWORD *)&v55 + 1) == (*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF8LL) && v16 )
    {
      v29 = v50;
      v12 = v50;
      v28 = v50 & 0xFFFFFFFFFFFFFFF0LL;
    }
    else
    {
      v49 = sub_1AEA0F0(a1, (__int64)&v55, v51[1].m128i_u32[1], *(_QWORD *)(a3 + 40), v51[1].m128i_i32[0], 0, 0, 0);
      if ( sub_F22B30(&v49) )
        goto LABEL_24;
      v24 = *((_QWORD *)&v55 + 1);
      v25 = v51[1].m128i_u32[0];
      v26 = *(_WORD *)(a3 + 18) >> 3;
      v52.m128i_i64[0] = v49;
      v27 = (_QWORD *)sub_F22F70(&v52);
      if ( v27 )
      {
        v12 = sub_AB7A80(*(_QWORD **)(*a1 + 248), v26, v27, (const __m128i *)ptr, v59);
      }
      else
      {
        v44 = sub_1CDD580(*a1, v52.m128i_i64[0], v25, &ptr);
        if ( (v44 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
          goto LABEL_24;
        v12 = sub_A76250(*(_QWORD *)(*a1 + 248), v26, v24, v44, 0);
      }
      v28 = v12 & 0xFFFFFFFFFFFFFFF0LL;
      if ( (v12 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
      {
LABEL_24:
        v12 = 0;
        goto LABEL_5;
      }
      v23 = *a1;
      v29 = v12;
    }
    v30 = sub_15AB9E0((__int64)&v55, *(_QWORD **)(v23 + 248), v23, v13, v14, v15);
    v32 = v31;
    if ( *(_BYTE *)(*(_QWORD *)v28 + 16LL) == 24 )
    {
      sub_1EA6140(
        a2,
        *(_QWORD *)(*(_QWORD *)v28 + 40LL),
        (unsigned int)(8 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v28 + 40LL) + 20LL) + 16),
        8);
      v34 = 0;
      *v33 = _mm_loadu_si128(v51 + 1);
      v35 = (unsigned int)(v59 - 1);
      if ( (_DWORD)v59 )
      {
        while ( 1 )
        {
          v33[1].m128i_i64[v34] = *((_QWORD *)ptr + 4 * v34 + 3);
          if ( v35 == v34 )
            break;
          ++v34;
        }
      }
      v36 = 16;
      if ( (unsigned __int8)(*(_WORD *)(v29 + 18) >> 3) == 6 )
        v36 = 16LL * (*(_QWORD *)(v29 + 32) != 0);
      v37 = sub_1EA6140(a2, v12, v36, 8);
      if ( (unsigned __int8)(*(_WORD *)(v37 + 18) >> 3) != 6 || *(_QWORD *)(v37 + 32) )
      {
        *(_DWORD *)v38 = v51->m128i_i32[0];
        if ( (unsigned __int8)(*(_WORD *)(v37 + 18) >> 3) != 6 || *(_QWORD *)(v37 + 32) )
          *(_QWORD *)(v38 + 8) = v32;
      }
    }
    else
    {
      sub_1EA6140(a2, v12, (unsigned int)(8 * *(_DWORD *)(v29 + 20) + 32), 8);
      v40 = v51;
      *(_DWORD *)v39 = v51->m128i_i32[0];
      if ( !v30 )
        v32 = 0;
      *(_QWORD *)(v39 + 8) = v32;
      *(_DWORD *)(v39 + 20) = v40[1].m128i_i32[1];
      *(_DWORD *)(v39 + 16) = v40[1].m128i_i32[0];
      *(_DWORD *)(v39 + 24) = v40[1].m128i_i32[2];
      v41 = v59;
      v42 = (unsigned int)(v59 - 1);
      *(_DWORD *)(v39 + 28) = v40[1].m128i_i32[3];
      v43 = 0;
      if ( v41 )
      {
        while ( 1 )
        {
          *(_QWORD *)(v39 + 8 * v43 + 32) = *((_QWORD *)ptr + 4 * v43 + 3);
          if ( v42 == v43 )
            break;
          ++v43;
        }
      }
    }
  }
LABEL_5:
  if ( ptr != v60 )
    free(ptr);
  if ( HIDWORD(v56[1]) )
    free(v56[0]);
  return v12;
}
