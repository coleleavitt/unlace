__int64 __fastcall sub_1B91CF0(__int64 *a1, const __m128i *a2, __m128 a3, __m128 a4)
{
  unsigned int *v6; // rax
  unsigned __int64 v7; // rdi
  int **v8; // rbx
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 *v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  int *v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // r9d
  __int64 v19; // rbx
  __int64 v21; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rax
  unsigned int *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int32 v28; // esi
  int v29; // ecx
  __m128i v30; // xmm1
  __int32 v31; // r11d
  __int32 v32; // r10d
  __int64 v33; // rdi
  unsigned int *v34; // rdx
  __int64 v35; // rdx
  unsigned __int64 v36; // rbp
  __m128 v37; // xmm0
  __int64 v38; // [rsp+0h] [rbp-138h]
  __m128i v39; // [rsp+10h] [rbp-128h] BYREF
  __int64 v40; // [rsp+20h] [rbp-118h]
  __m128i v41; // [rsp+30h] [rbp-108h] BYREF
  __int64 v42; // [rsp+40h] [rbp-F8h]
  __m128 v43; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v44; // [rsp+60h] [rbp-D8h]
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+78h] [rbp-C0h]
  _BYTE v47[184]; // [rsp+80h] [rbp-B8h] BYREF

  v46 = 0x1000000000LL;
  v6 = (unsigned int *)a2[1].m128i_i64[1];
  ptr = v47;
  if ( !v6 )
  {
    v17 = 0;
    v18 = v46;
    goto LABEL_30;
  }
  v7 = *v6;
  v8 = (int **)(v6 + 4);
  v9 = (__int64)&v6[2 * v7 + 4];
  if ( v7 <= 0x10 )
  {
    if ( v8 == (int **)v9 )
      goto LABEL_15;
    do
    {
LABEL_10:
      while ( 1 )
      {
        v14 = *v8;
        if ( *v8 )
          break;
        v15 = (unsigned int)v46;
        v16 = (unsigned int)v46 + 1LL;
        if ( v16 > HIDWORD(v46) )
        {
          sub_2237220(&ptr, v47, v16, 8);
          v15 = (unsigned int)v46;
        }
        ++v8;
        *((_QWORD *)ptr + v15) = 0;
        LODWORD(v46) = v46 + 1;
        if ( v8 == (int **)v9 )
          goto LABEL_14;
      }
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*a1 + 760) + 8LL) + 27456LL) = v14[2];
      v10 = sub_1B7A300((__int64)a1, v14);
      v11 = *(__int64 **)(*a1 + 760);
      *(_DWORD *)(v11[1] + 27456) = 106;
      sub_1906AD0(*v11);
      if ( v10 )
      {
        v12 = (unsigned int)v46;
        v13 = (unsigned int)v46 + 1LL;
        if ( v13 > HIDWORD(v46) )
        {
          sub_2237220(&ptr, v47, v13, 8);
          v12 = (unsigned int)v46;
        }
        *((_QWORD *)ptr + v12) = v10;
        LODWORD(v46) = v46 + 1;
      }
      ++v8;
    }
    while ( v8 != (int **)v9 );
  }
  else
  {
    sub_2237220(&ptr, v47, v7, 8);
    if ( v8 != (int **)v9 )
      goto LABEL_10;
  }
LABEL_14:
  v6 = (unsigned int *)a2[1].m128i_i64[1];
  if ( !v6 )
  {
LABEL_16:
    v17 = 0;
    goto LABEL_17;
  }
LABEL_15:
  if ( !*((_BYTE *)v6 + 8) || !*(_QWORD *)&v6[2 * *v6 + 4 + 2 * (unsigned __int64)v6[1]] )
    goto LABEL_16;
  sub_1AF3B60(*(__int64 **)(*a1 + 760), a2->m128i_u32[2], 0);
  v21 = *a1;
  sub_1C36400(*a1, 0);
  v24 = (unsigned int)(a2->m128i_i32[2] - 4);
  if ( (unsigned int)v24 <= 0x3D )
  {
    v34 = (unsigned int *)a2[1].m128i_i64[1];
    v26 = v34[1] + (unsigned __int64)*v34;
    v27 = *(_QWORD *)&v34[2 * v26 + 4];
    v35 = 0x2000004000000081LL;
    if ( _bittest64(&v35, v24) )
      goto LABEL_36;
  }
  else
  {
    v25 = (unsigned int *)a2[1].m128i_i64[1];
    v26 = *v25;
    v27 = *(_QWORD *)&v25[2 * v26 + 4 + 2 * v25[1]];
  }
  while ( (*(_WORD *)v27 & 0x1FF) == 0xFA )
    v27 = *(_QWORD *)(v27 + 8LL * *(unsigned int *)(v27 + 8) + 32);
LABEL_36:
  v36 = sub_1B7AA40(a1, (_WORD *)v27, 0, a3, a4, v26, v22, v23);
  if ( v36 >= 2 && def_FFDDA1() && (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 68LL) & 0x20) != 0 )
    v36 = sub_1B87850(*(_QWORD *)(*a1 + 760), v36 & 0xFFFFFFFFFFFFFFFELL, a3, a4);
  sub_1C36470(v21);
  v17 = sub_1B14300(*(__int64 **)(*a1 + 760), v36, (__int64 *)ptr, (unsigned int)v46, a3, a4);
  if ( v17 == 1 )
    goto LABEL_18;
LABEL_17:
  v18 = v46;
  if ( (unsigned int)v46 != v7 )
  {
LABEL_18:
    v19 = 1;
    goto LABEL_19;
  }
LABEL_30:
  v28 = a2->m128i_i32[2];
  v41.m128i_i32[2] = 0;
  v41.m128i_i64[0] = 0;
  v42 = 0;
  if ( v28 == 11 )
  {
    v38 = v17;
    v37 = (__m128)_mm_loadu_si128(a2 + 2);
    v44 = a2[3].m128i_i64[0];
    v43 = v37;
    v41 = (__m128i)v37;
    v42 = v44;
    sub_1B91AC0(&v39, a1, &v41, v37, a4);
    v28 = a2->m128i_i32[2];
    v18 = v46;
    v41 = _mm_loadu_si128(&v39);
    v17 = v38;
    v42 = v40;
  }
  v29 = 103;
  if ( (unsigned int)(v28 - 9) <= 1 )
    v29 = a2[2].m128i_i32[0];
  v30 = _mm_load_si128(&v41);
  v31 = a2[1].m128i_i32[0];
  v32 = a2->m128i_i32[3];
  v33 = *a1;
  v44 = v42;
  v43 = (__m128)v30;
  v19 = sub_1B69230(
          *(_QWORD *)(v33 + 760),
          v28,
          (unsigned int)&v43,
          v29,
          (_DWORD)ptr,
          v18,
          v17 & 0xFFFFFFFFFFFFFFFELL,
          v32,
          v31);
LABEL_19:
  if ( ptr != v47 )
    free(ptr);
  return v19;
}
