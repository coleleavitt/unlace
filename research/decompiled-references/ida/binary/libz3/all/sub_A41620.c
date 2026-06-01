__int64 __fastcall sub_A41620(__int64 a1, unsigned int **a2, __m128 a3)
{
  __int64 v4; // rdi
  char v5; // al
  __int64 v6; // rbx
  __int64 *v7; // rbx
  __int64 *v8; // r15
  __int64 v9; // rdx
  int v10; // r8d
  int v11; // r9d
  int v12; // r14d
  __int64 v13; // r14
  unsigned int v14; // ebp
  __int64 v16; // rax
  __int64 *v17; // rbx
  unsigned __int64 v18; // rcx
  __int64 *v19; // r15
  char v20; // [rsp+Fh] [rbp-139h]
  int v21; // [rsp+14h] [rbp-134h] BYREF
  __int64 *v22; // [rsp+18h] [rbp-130h] BYREF
  int v23[74]; // [rsp+20h] [rbp-128h] BYREF

  v20 = *(_BYTE *)(a1 + 1448);
  if ( v20 )
    return 2;
  sub_158F340(v23, *(_QWORD *)(a1 + 24), a1 + 776);
  sub_9E57B0((_QWORD *)a1, a2, (__int64)v23);
  v21 = 8;
  v22 = nullptr;
  while ( 1 )
  {
    sub_1591740(v23);
    while ( v23[56] < *(_DWORD *)(*(_QWORD *)(a1 + 400) + 124LL) && !(unsigned __int8)sub_8E6FA0(*(_QWORD *)(a1 + 16)) )
    {
      if ( (unsigned __int8)sub_1598CB0((int)v23) )
        goto LABEL_10;
    }
    if ( !v20 )
      sub_9C6300(a1, (__int64)a2, *(double *)a3.m128_u64);
    v20 = 1;
LABEL_10:
    v4 = *(_QWORD *)(a1 + 16);
    a3 = (__m128)_mm_add_epi32(
                   _mm_unpacklo_epi64(
                     _mm_unpacklo_epi32(_mm_cvtsi32_si128(v23[0]), _mm_cvtsi32_si128(v23[2])),
                     _mm_unpacklo_epi32(_mm_cvtsi32_si128(1u), _mm_cvtsi32_si128(v23[6]))),
                   _mm_loadu_si128((const __m128i *)(a1 + 348)));
    *(__m128 *)(a1 + 348) = a3;
    v5 = sub_8E6FA0(v4);
    v6 = (__int64)v22;
    if ( v5 )
      goto LABEL_29;
    if ( v22 )
      *((_DWORD *)v22 - 1) = 0;
    sub_1592360(v23, &v22);
    v7 = v22;
    if ( v22 )
    {
      v8 = &v22[*((unsigned int *)v22 - 1)];
      if ( v22 != v8 )
      {
        do
        {
          v13 = *v7;
          if ( (unsigned __int8)sub_A38720(a1, *v7) || (v12 = sub_A40460(a1, v13), (_BYTE)v12) )
          {
            v6 = (__int64)v22;
            v14 = 0;
            goto LABEL_20;
          }
          ++v7;
        }
        while ( v8 != v7 );
        v16 = *(_QWORD *)(a1 + 400);
        if ( !*(_BYTE *)(v16 + 128) )
          goto LABEL_26;
        v17 = v22;
        if ( !v22 )
          goto LABEL_26;
        v18 = *((unsigned int *)v22 - 1);
        v19 = &v22[v18];
        if ( v22 == v19 )
          goto LABEL_26;
        do
        {
          if ( *(char *)(*v17 + 7) >= 0 )
            v12 |= sub_A39D00(a1, *v17, v9, (_QWORD *)v18, v10, v11);
          ++v17;
        }
        while ( v19 != v17 );
        if ( (_BYTE)v12 )
          break;
      }
    }
    v16 = *(_QWORD *)(a1 + 400);
LABEL_26:
    if ( *(_BYTE *)(v16 + 129) )
    {
      if ( !*(_BYTE *)(a1 + 1448) )
      {
        a2 = (unsigned int **)&v22;
        if ( (unsigned __int8)sub_997100(a1, (__int64 *)&v22, (__int64)v23, &v21) )
          continue;
      }
    }
    v6 = (__int64)v22;
LABEL_29:
    v14 = 2;
    goto LABEL_20;
  }
  v6 = (__int64)v22;
  v14 = 1;
LABEL_20:
  if ( v6 )
    sub_186B220((void *)(v6 - 8));
  sub_1591A60(v23);
  return v14;
}

