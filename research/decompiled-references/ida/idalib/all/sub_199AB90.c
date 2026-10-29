__int64 __fastcall sub_199AB90(__int64 *a1, const __m128i *a2, __m128 a3, __m128 a4)
{
  unsigned int *v5; // rax
  __m128i **v6; // r15
  unsigned __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // r9d
  __int64 v16; // rbx
  __int64 v18; // rbp
  __int64 v19; // r8
  __int64 v20; // r9
  unsigned __int64 v21; // rax
  unsigned int *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int32 v25; // esi
  int v26; // ecx
  __m128i v27; // xmm1
  __int64 v28; // rdi
  __int32 v29; // r8d
  __int32 v30; // r10d
  unsigned int *v31; // rdx
  __int64 v32; // rdx
  unsigned __int64 v33; // r15
  __m128 v34; // xmm0
  unsigned __int64 v35; // [rsp+0h] [rbp-138h]
  __int64 v36; // [rsp+0h] [rbp-138h]
  __m128i v37; // [rsp+10h] [rbp-128h] BYREF
  __int64 v38; // [rsp+20h] [rbp-118h]
  __m128i v39; // [rsp+30h] [rbp-108h] BYREF
  __int64 v40; // [rsp+40h] [rbp-F8h]
  __m128 v41; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v42; // [rsp+60h] [rbp-D8h]
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v44; // [rsp+78h] [rbp-C0h]
  _BYTE v45[184]; // [rsp+80h] [rbp-B8h] BYREF

  v44 = 0x1000000000LL;
  v5 = (unsigned int *)a2[1].m128i_i64[1];
  ptr = v45;
  if ( !v5 )
  {
    v14 = 0;
    v15 = v44;
    goto LABEL_30;
  }
  v6 = (__m128i **)(v5 + 4);
  v7 = *v5;
  v35 = v7;
  v8 = (__int64)&v5[2 * v7 + 4];
  if ( v7 <= 0x10 )
  {
    if ( v6 == (__m128i **)v8 )
      goto LABEL_15;
    do
    {
LABEL_10:
      while ( !*v6 )
      {
        v12 = (unsigned int)v44;
        v13 = (unsigned int)v44 + 1LL;
        if ( v13 > HIDWORD(v44) )
        {
          sub_2237220(&ptr, v45, v13, 8);
          v12 = (unsigned int)v44;
        }
        ++v6;
        *((_QWORD *)ptr + v12) = 0;
        LODWORD(v44) = v44 + 1;
        if ( v6 == (__m128i **)v8 )
          goto LABEL_14;
      }
      sub_1AF3B20(*(_QWORD *)(*a1 + 760), (*v6)->m128i_u32[2]);
      v9 = sub_19978D0(a1, *v6, *(double *)a3.m128_u64, a4);
      sub_1AF3B30(*(_QWORD *)(*a1 + 760));
      if ( v9 )
      {
        v10 = (unsigned int)v44;
        v11 = (unsigned int)v44 + 1LL;
        if ( v11 > HIDWORD(v44) )
        {
          sub_2237220(&ptr, v45, v11, 8);
          v10 = (unsigned int)v44;
        }
        *((_QWORD *)ptr + v10) = v9;
        LODWORD(v44) = v44 + 1;
      }
      ++v6;
    }
    while ( v6 != (__m128i **)v8 );
  }
  else
  {
    sub_2237220(&ptr, v45, v7, 8);
    if ( v6 != (__m128i **)v8 )
      goto LABEL_10;
  }
LABEL_14:
  v5 = (unsigned int *)a2[1].m128i_i64[1];
  if ( !v5 )
  {
LABEL_16:
    v14 = 0;
    goto LABEL_17;
  }
LABEL_15:
  if ( !*((_BYTE *)v5 + 8) || !*(_QWORD *)&v5[2 * *v5 + 4 + 2 * (unsigned __int64)v5[1]] )
    goto LABEL_16;
  sub_1AF3B60(*(_QWORD *)(*a1 + 760), a2->m128i_u32[2], 0);
  v18 = *a1;
  sub_1C36400(*a1, 0);
  v21 = (unsigned int)(a2->m128i_i32[2] - 4);
  if ( (unsigned int)v21 <= 0x3D )
  {
    v31 = (unsigned int *)a2[1].m128i_i64[1];
    v23 = v31[1] + (unsigned __int64)*v31;
    v24 = *(_QWORD *)&v31[2 * v23 + 4];
    v32 = 0x2000004000000081LL;
    if ( _bittest64(&v32, v21) )
      goto LABEL_36;
  }
  else
  {
    v22 = (unsigned int *)a2[1].m128i_i64[1];
    v23 = *v22;
    v24 = *(_QWORD *)&v22[2 * v23 + 4 + 2 * v22[1]];
  }
  while ( (*(_WORD *)v24 & 0x1FF) == 0xFA )
    v24 = *(_QWORD *)(v24 + 8LL * *(unsigned int *)(v24 + 8) + 32);
LABEL_36:
  v33 = sub_1998500(a1, (unsigned __int16 *)v24, 0, a3, a4, v23, v19, v20);
  if ( v33 >= 2 && def_FFDDA1() && (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 68LL) & 0x20) != 0 )
    v33 = sub_1B87850(*(_QWORD *)(*a1 + 760), v33 & 0xFFFFFFFFFFFFFFFELL);
  sub_1C36470(v18);
  v14 = sub_1B14300(*(_QWORD *)(*a1 + 760), v33, ptr, (unsigned int)v44);
  if ( v14 == 1 )
    goto LABEL_18;
LABEL_17:
  v15 = v44;
  if ( (unsigned int)v44 != v35 )
  {
LABEL_18:
    v16 = 1;
    goto LABEL_19;
  }
LABEL_30:
  v25 = a2->m128i_i32[2];
  v39.m128i_i32[2] = 0;
  v39.m128i_i64[0] = 0;
  v40 = 0;
  if ( v25 == 11 )
  {
    v36 = v14;
    v34 = (__m128)_mm_loadu_si128(a2 + 2);
    v42 = a2[3].m128i_i64[0];
    v41 = v34;
    v39 = (__m128i)v34;
    v40 = v42;
    sub_1989150(&v37, a1, &v39, v34, a4);
    v25 = a2->m128i_i32[2];
    v15 = v44;
    v39 = _mm_loadu_si128(&v37);
    v14 = v36;
    v40 = v38;
  }
  v26 = 103;
  if ( (unsigned int)(v25 - 9) <= 1 )
    v26 = a2[2].m128i_i32[0];
  v27 = _mm_load_si128(&v39);
  v28 = *a1;
  v29 = a2->m128i_i32[3];
  v30 = a2[1].m128i_i32[0];
  v42 = v40;
  v41 = (__m128)v27;
  v16 = sub_1B69230(
          *(_QWORD *)(v28 + 760),
          v25,
          (unsigned int)&v41,
          v26,
          (_DWORD)ptr,
          v15,
          v14 & 0xFFFFFFFFFFFFFFFELL,
          v29,
          v30);
LABEL_19:
  if ( ptr != v45 )
    free(ptr);
  return v16;
}
