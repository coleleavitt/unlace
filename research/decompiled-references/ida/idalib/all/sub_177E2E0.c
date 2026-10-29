__int64 __fastcall sub_177E2E0(__int64 *a1, const __m128i *a2, double a3)
{
  unsigned int *v4; // rax
  __m128i **v5; // r15
  unsigned __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // r14
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  int v14; // r9d
  __int64 v15; // rbx
  __int64 v17; // rbp
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned __int64 v20; // rax
  unsigned int *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rsi
  __int32 v24; // esi
  int v25; // ecx
  __m128i v26; // xmm1
  __int64 v27; // rdi
  __int32 v28; // r8d
  __int32 v29; // r10d
  unsigned int *v30; // rdx
  __int64 v31; // rdx
  unsigned __int64 v32; // r15
  __m128 v33; // xmm0
  unsigned __int64 v34; // [rsp+0h] [rbp-138h]
  __int64 v35; // [rsp+0h] [rbp-138h]
  __m128i v36; // [rsp+10h] [rbp-128h] BYREF
  __int64 v37; // [rsp+20h] [rbp-118h]
  __m128i v38; // [rsp+30h] [rbp-108h] BYREF
  __int64 v39; // [rsp+40h] [rbp-F8h]
  __m128 v40; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v41; // [rsp+60h] [rbp-D8h]
  void *ptr; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+78h] [rbp-C0h]
  _BYTE v44[184]; // [rsp+80h] [rbp-B8h] BYREF

  v43 = 0x1000000000LL;
  v4 = (unsigned int *)a2[1].m128i_i64[1];
  ptr = v44;
  if ( !v4 )
  {
    v13 = 0;
    v14 = v43;
    goto LABEL_30;
  }
  v5 = (__m128i **)(v4 + 4);
  v6 = *v4;
  v34 = v6;
  v7 = (__int64)&v4[2 * v6 + 4];
  if ( v6 <= 0x10 )
  {
    if ( v5 == (__m128i **)v7 )
      goto LABEL_15;
    do
    {
LABEL_10:
      while ( !*v5 )
      {
        v11 = (unsigned int)v43;
        v12 = (unsigned int)v43 + 1LL;
        if ( v12 > HIDWORD(v43) )
        {
          sub_2237220(&ptr, v44, v12, 8);
          v11 = (unsigned int)v43;
        }
        ++v5;
        *((_QWORD *)ptr + v11) = 0;
        LODWORD(v43) = v43 + 1;
        if ( v5 == (__m128i **)v7 )
          goto LABEL_14;
      }
      sub_1AF3B20(*(_QWORD *)(*a1 + 760), (*v5)->m128i_u32[2]);
      v8 = sub_177AD70(a1, *v5, a3);
      sub_1AF3B30(*(_QWORD *)(*a1 + 760));
      if ( v8 )
      {
        v9 = (unsigned int)v43;
        v10 = (unsigned int)v43 + 1LL;
        if ( v10 > HIDWORD(v43) )
        {
          sub_2237220(&ptr, v44, v10, 8);
          v9 = (unsigned int)v43;
        }
        *((_QWORD *)ptr + v9) = v8;
        LODWORD(v43) = v43 + 1;
      }
      ++v5;
    }
    while ( v5 != (__m128i **)v7 );
  }
  else
  {
    sub_2237220(&ptr, v44, v6, 8);
    if ( v5 != (__m128i **)v7 )
      goto LABEL_10;
  }
LABEL_14:
  v4 = (unsigned int *)a2[1].m128i_i64[1];
  if ( !v4 )
  {
LABEL_16:
    v13 = 0;
    goto LABEL_17;
  }
LABEL_15:
  if ( !*((_BYTE *)v4 + 8) || !*(_QWORD *)&v4[2 * *v4 + 4 + 2 * (unsigned __int64)v4[1]] )
    goto LABEL_16;
  sub_1AF3B60(*(_QWORD *)(*a1 + 760), a2->m128i_u32[2], 0);
  v17 = *a1;
  sub_1C36400(*a1, 0);
  v20 = (unsigned int)(a2->m128i_i32[2] - 4);
  if ( (unsigned int)v20 <= 0x3D )
  {
    v30 = (unsigned int *)a2[1].m128i_i64[1];
    v22 = v30[1] + (unsigned __int64)*v30;
    v23 = *(_QWORD *)&v30[2 * v22 + 4];
    v31 = 0x2000004000000081LL;
    if ( _bittest64(&v31, v20) )
      goto LABEL_36;
  }
  else
  {
    v21 = (unsigned int *)a2[1].m128i_i64[1];
    v22 = *v21;
    v23 = *(_QWORD *)&v21[2 * v22 + 4 + 2 * v21[1]];
  }
  while ( (*(_WORD *)v23 & 0x1FF) == 0xFA )
    v23 = *(_QWORD *)(v23 + 8LL * *(unsigned int *)(v23 + 8) + 32);
LABEL_36:
  v32 = sub_177B9C0(a1, (unsigned __int16 *)v23, 0, a3, v22, v18, v19);
  if ( v32 >= 2 && def_FFDDA1() && (*(_BYTE *)(*(_QWORD *)(*a1 + 232) + 68LL) & 0x20) != 0 )
    v32 = sub_1B87850(*(_QWORD *)(*a1 + 760), v32 & 0xFFFFFFFFFFFFFFFELL);
  sub_1C36470(v17);
  v13 = sub_1B14300(*(_QWORD *)(*a1 + 760), v32, ptr, (unsigned int)v43);
  if ( v13 == 1 )
    goto LABEL_18;
LABEL_17:
  v14 = v43;
  if ( (unsigned int)v43 != v34 )
  {
LABEL_18:
    v15 = 1;
    goto LABEL_19;
  }
LABEL_30:
  v24 = a2->m128i_i32[2];
  v38.m128i_i32[2] = 0;
  v38.m128i_i64[0] = 0;
  v39 = 0;
  if ( v24 == 11 )
  {
    v35 = v13;
    v33 = (__m128)_mm_loadu_si128(a2 + 2);
    v41 = a2[3].m128i_i64[0];
    v40 = v33;
    v38 = (__m128i)v33;
    v39 = v41;
    sub_176AF20(&v36, a1, &v38, v33);
    v24 = a2->m128i_i32[2];
    v14 = v43;
    v38 = _mm_loadu_si128(&v36);
    v13 = v35;
    v39 = v37;
  }
  v25 = 103;
  if ( (unsigned int)(v24 - 9) <= 1 )
    v25 = a2[2].m128i_i32[0];
  v26 = _mm_load_si128(&v38);
  v27 = *a1;
  v28 = a2->m128i_i32[3];
  v29 = a2[1].m128i_i32[0];
  v41 = v39;
  v40 = (__m128)v26;
  v15 = sub_1B69230(
          *(_QWORD *)(v27 + 760),
          v24,
          (unsigned int)&v40,
          v25,
          (_DWORD)ptr,
          v14,
          v13 & 0xFFFFFFFFFFFFFFFELL,
          v28,
          v29);
LABEL_19:
  if ( ptr != v44 )
    free(ptr);
  return v15;
}
