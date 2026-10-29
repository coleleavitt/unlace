__int64 __fastcall sub_1D5D6F0(__int64 *a1, const __m128i *a2, __m128 a3, __m128 a4, __m128i a5)
{
  unsigned int *v6; // rax
  unsigned __int64 *v7; // r15
  unsigned __int64 v8; // rdx
  __int64 v9; // rbp
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // r14
  __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // r9d
  __int64 v20; // rbx
  __int64 v22; // rbp
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  unsigned int *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rsi
  __int32 v29; // esi
  int v30; // ecx
  __m128i v31; // xmm1
  __int64 v32; // rdi
  __int32 v33; // r8d
  __int32 v34; // r10d
  unsigned int *v35; // rdx
  __int64 v36; // rdx
  unsigned __int64 v37; // r15
  __m128 v38; // xmm0
  unsigned __int64 v39; // [rsp+0h] [rbp-138h]
  __int64 v40; // [rsp+0h] [rbp-138h]
  __m128i v41; // [rsp+10h] [rbp-128h] BYREF
  __int64 v42; // [rsp+20h] [rbp-118h]
  __m128i v43; // [rsp+30h] [rbp-108h] BYREF
  __int64 v44; // [rsp+40h] [rbp-F8h]
  __m128 v45; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v46; // [rsp+60h] [rbp-D8h]
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+78h] [rbp-C0h]
  _BYTE v49[184]; // [rsp+80h] [rbp-B8h] BYREF

  v48 = 0x1000000000LL;
  v6 = (unsigned int *)a2[1].m128i_i64[1];
  ptr = v49;
  if ( !v6 )
  {
    v18 = 0;
    v19 = v48;
    goto LABEL_30;
  }
  v7 = (unsigned __int64 *)(v6 + 4);
  v8 = *v6;
  v39 = v8;
  v9 = (__int64)&v6[2 * v8 + 4];
  if ( v8 <= 0x10 )
  {
    if ( v7 == (unsigned __int64 *)v9 )
      goto LABEL_15;
    do
    {
LABEL_10:
      while ( !*v7 )
      {
        v16 = (unsigned int)v48;
        v17 = (unsigned int)v48 + 1LL;
        if ( v17 > HIDWORD(v48) )
        {
          sub_2237220(&ptr, v49, v17, 8);
          v16 = (unsigned int)v48;
        }
        ++v7;
        *((_QWORD *)ptr + v16) = 0;
        LODWORD(v48) = v48 + 1;
        if ( v7 == (unsigned __int64 *)v9 )
          goto LABEL_14;
      }
      sub_1AF3B20(*(_QWORD *)(*a1 + 760), *(_DWORD *)(*v7 + 8));
      v13 = sub_1D5D320(a1, *v7, v10, v11, v12, a3, a4, a5);
      sub_1AF3B30(*(__int64 **)(*a1 + 760));
      if ( v13 )
      {
        v14 = (unsigned int)v48;
        v15 = (unsigned int)v48 + 1LL;
        if ( v15 > HIDWORD(v48) )
        {
          sub_2237220(&ptr, v49, v15, 8);
          v14 = (unsigned int)v48;
        }
        *((_QWORD *)ptr + v14) = v13;
        LODWORD(v48) = v48 + 1;
      }
      ++v7;
    }
    while ( v7 != (unsigned __int64 *)v9 );
  }
  else
  {
    sub_2237220(&ptr, v49, v8, 8);
    if ( v7 != (unsigned __int64 *)v9 )
      goto LABEL_10;
  }
LABEL_14:
  v6 = (unsigned int *)a2[1].m128i_i64[1];
  if ( !v6 )
  {
LABEL_16:
    v18 = 0;
    goto LABEL_17;
  }
LABEL_15:
  if ( !*((_BYTE *)v6 + 8) || !*(_QWORD *)&v6[2 * *v6 + 4 + 2 * (unsigned __int64)v6[1]] )
    goto LABEL_16;
  sub_1AF3B60(*(__int64 **)(*a1 + 760), a2->m128i_u32[2], 0);
  v22 = *a1;
  sub_1C36400(*a1, 0);
  v25 = (unsigned int)(a2->m128i_i32[2] - 4);
  if ( (unsigned int)v25 <= 0x3D )
  {
    v35 = (unsigned int *)a2[1].m128i_i64[1];
    v27 = v35[1] + (unsigned __int64)*v35;
    v28 = *(_QWORD *)&v35[2 * v27 + 4];
    v36 = 0x2000004000000081LL;
    if ( _bittest64(&v36, v25) )
      goto LABEL_36;
  }
  else
  {
    v26 = (unsigned int *)a2[1].m128i_i64[1];
    v27 = *v26;
    v28 = *(_QWORD *)&v26[2 * v27 + 4 + 2 * v26[1]];
  }
  while ( (*(_WORD *)v28 & 0x1FF) == 0xFA )
    v28 = *(_QWORD *)(v28 + 8LL * *(unsigned int *)(v28 + 8) + 32);
LABEL_36:
  v37 = sub_1D42130(a1, (_WORD *)v28, 0, a3, a4, v27, v23, v24);
  if ( v37 >= 2 && def_FFDDA1() && (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 68LL) & 0x20) != 0 )
    v37 = sub_1B87850(*(_QWORD *)(*a1 + 760), v37 & 0xFFFFFFFFFFFFFFFELL, a3, a4);
  sub_1C36470(v22);
  v18 = sub_1B14300(*(__int64 **)(*a1 + 760), v37, (__int64 *)ptr, (unsigned int)v48, a3, a4);
  if ( v18 == 1 )
    goto LABEL_18;
LABEL_17:
  v19 = v48;
  if ( (unsigned int)v48 != v39 )
  {
LABEL_18:
    v20 = 1;
    goto LABEL_19;
  }
LABEL_30:
  v29 = a2->m128i_i32[2];
  v43.m128i_i32[2] = 0;
  v43.m128i_i64[0] = 0;
  v44 = 0;
  if ( v29 == 11 )
  {
    v40 = v18;
    v38 = (__m128)_mm_loadu_si128(a2 + 2);
    v46 = a2[3].m128i_i64[0];
    v45 = v38;
    v43 = (__m128i)v38;
    v44 = v46;
    sub_1D52310(&v41, a1, &v43, v38, a4);
    v29 = a2->m128i_i32[2];
    v19 = v48;
    v43 = _mm_loadu_si128(&v41);
    v18 = v40;
    v44 = v42;
  }
  v30 = 103;
  if ( (unsigned int)(v29 - 9) <= 1 )
    v30 = a2[2].m128i_i32[0];
  v31 = _mm_load_si128(&v43);
  v32 = *a1;
  v33 = a2->m128i_i32[3];
  v34 = a2[1].m128i_i32[0];
  v46 = v44;
  v45 = (__m128)v31;
  v20 = sub_1B69230(
          *(_QWORD *)(v32 + 760),
          v29,
          (unsigned int)&v45,
          v30,
          (_DWORD)ptr,
          v19,
          v18 & 0xFFFFFFFFFFFFFFFELL,
          v33,
          v34);
LABEL_19:
  if ( ptr != v49 )
    free(ptr);
  return v20;
}
