__int64 __fastcall sub_1B6ED40(_QWORD *a1, const __m128i *a2, __m128 a3, __m128 a4)
{
  unsigned int *v6; // rax
  unsigned __int64 v7; // rdi
  unsigned int *v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 *v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // r9d
  __int64 v18; // rbx
  __int64 v20; // rbx
  unsigned __int64 v21; // rax
  __int64 v22; // rsi
  __int32 v23; // esi
  int v24; // ecx
  __m128i v25; // xmm1
  __int32 v26; // r11d
  __int32 v27; // r10d
  __int64 v28; // rdi
  __int64 v29; // rdx
  unsigned __int64 v30; // rbp
  __m128i v31; // xmm0
  __int64 v32; // [rsp+0h] [rbp-138h]
  __m128i v33; // [rsp+10h] [rbp-128h] BYREF
  __int64 v34; // [rsp+20h] [rbp-118h]
  __m128i v35; // [rsp+30h] [rbp-108h] BYREF
  __int64 v36; // [rsp+40h] [rbp-F8h]
  __m128i v37; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v38; // [rsp+60h] [rbp-D8h]
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v40; // [rsp+78h] [rbp-C0h]
  _BYTE v41[184]; // [rsp+80h] [rbp-B8h] BYREF

  v40 = 0x1000000000LL;
  v6 = (unsigned int *)a2[1].m128i_i64[1];
  ptr = v41;
  if ( !v6 )
  {
    v16 = 0;
    v17 = v40;
    goto LABEL_30;
  }
  v7 = *v6;
  v8 = v6 + 4;
  v9 = (__int64)&v6[2 * v7 + 4];
  if ( v7 <= 0x10 )
  {
    if ( v8 == (unsigned int *)v9 )
      goto LABEL_15;
    do
    {
LABEL_10:
      while ( !*(_QWORD *)v8 )
      {
        v14 = (unsigned int)v40;
        v15 = (unsigned int)v40 + 1LL;
        if ( v15 > HIDWORD(v40) )
        {
          sub_2237220(&ptr, v41, v15, 8);
          v14 = (unsigned int)v40;
        }
        v8 += 2;
        *((_QWORD *)ptr + v14) = 0;
        LODWORD(v40) = v40 + 1;
        if ( v8 == (unsigned int *)v9 )
          goto LABEL_14;
      }
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 760LL) + 8LL) + 27456LL) = *(_DWORD *)(*(_QWORD *)v8 + 8LL);
      v10 = sub_1BC2C80(a1);
      v11 = *(__int64 **)(*a1 + 760LL);
      *(_DWORD *)(v11[1] + 27456) = 106;
      sub_1906AD0(*v11);
      if ( v10 )
      {
        v12 = (unsigned int)v40;
        v13 = (unsigned int)v40 + 1LL;
        if ( v13 > HIDWORD(v40) )
        {
          sub_2237220(&ptr, v41, v13, 8);
          v12 = (unsigned int)v40;
        }
        *((_QWORD *)ptr + v12) = v10;
        LODWORD(v40) = v40 + 1;
      }
      v8 += 2;
    }
    while ( v8 != (unsigned int *)v9 );
  }
  else
  {
    sub_2237220(&ptr, v41, v7, 8);
    if ( v8 != (unsigned int *)v9 )
      goto LABEL_10;
  }
LABEL_14:
  v6 = (unsigned int *)a2[1].m128i_i64[1];
  if ( !v6 )
  {
LABEL_16:
    v16 = 0;
    goto LABEL_17;
  }
LABEL_15:
  if ( !*((_BYTE *)v6 + 8) || !*(_QWORD *)&v6[2 * *v6 + 4 + 2 * (unsigned __int64)v6[1]] )
    goto LABEL_16;
  sub_1AF3B60(*(__int64 **)(*a1 + 760LL), a2->m128i_u32[2], 0);
  v20 = *a1;
  sub_1C36400(*a1, 0);
  v21 = (unsigned int)(a2->m128i_i32[2] - 4);
  if ( (unsigned int)v21 <= 0x3D )
  {
    v22 = *(_QWORD *)(a2[1].m128i_i64[1]
                    + 8
                    * (*(unsigned int *)(a2[1].m128i_i64[1] + 4) + (unsigned __int64)*(unsigned int *)a2[1].m128i_i64[1])
                    + 16);
    v29 = 0x2000004000000081LL;
    if ( _bittest64(&v29, v21) )
      goto LABEL_36;
  }
  else
  {
    v22 = *(_QWORD *)(a2[1].m128i_i64[1]
                    + 8
                    * (*(unsigned int *)a2[1].m128i_i64[1] + (unsigned __int64)*(unsigned int *)(a2[1].m128i_i64[1] + 4))
                    + 16);
  }
  while ( (*(_WORD *)v22 & 0x1FF) == 0xFA )
    v22 = *(_QWORD *)(v22 + 8LL * *(unsigned int *)(v22 + 8) + 32);
LABEL_36:
  v30 = sub_1B71AD0(a1, v22, 0);
  if ( v30 >= 2 && def_FFDDA1() && (*(_BYTE *)(*(_QWORD *)(*a1 + 232LL) + 68LL) & 0x20) != 0 )
    v30 = sub_1B87850(*(_QWORD *)(*a1 + 760LL), v30 & 0xFFFFFFFFFFFFFFFELL);
  sub_1C36470(v20);
  v16 = sub_1B14300(*(__int64 **)(*a1 + 760LL), v30, (__int64 *)ptr, (unsigned int)v40, a3, a4);
  if ( v16 == 1 )
    goto LABEL_18;
LABEL_17:
  v17 = v40;
  if ( (unsigned int)v40 != v7 )
  {
LABEL_18:
    v18 = 1;
    goto LABEL_19;
  }
LABEL_30:
  v23 = a2->m128i_i32[2];
  v35.m128i_i32[2] = 0;
  v35.m128i_i64[0] = 0;
  v36 = 0;
  if ( v23 == 11 )
  {
    v32 = v16;
    v31 = _mm_loadu_si128(a2 + 2);
    v38 = a2[3].m128i_i64[0];
    v37 = v31;
    v35 = v31;
    v36 = v38;
    sub_1BB3800(&v33, a1, &v35);
    v23 = a2->m128i_i32[2];
    v17 = v40;
    v35 = _mm_loadu_si128(&v33);
    v16 = v32;
    v36 = v34;
  }
  v24 = 103;
  if ( (unsigned int)(v23 - 9) <= 1 )
    v24 = a2[2].m128i_i32[0];
  v25 = _mm_load_si128(&v35);
  v26 = a2[1].m128i_i32[0];
  v27 = a2->m128i_i32[3];
  v28 = *a1;
  v38 = v36;
  v37 = v25;
  v18 = sub_1B69230(
          *(_QWORD *)(v28 + 760),
          v23,
          (unsigned int)&v37,
          v24,
          (_DWORD)ptr,
          v17,
          v16 & 0xFFFFFFFFFFFFFFFELL,
          v27,
          v26);
LABEL_19:
  if ( ptr != v41 )
    free(ptr);
  return v18;
}
