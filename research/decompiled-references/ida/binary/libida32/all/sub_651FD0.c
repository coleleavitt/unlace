__int64 __fastcall sub_651FD0(__int64 a1, const __m128i ***a2, unsigned int a3, unsigned int a4, int a5, int a6)
{
  const __m128i **v7; // rdx
  const __m128i **v8; // rax
  const __m128i **v9; // r13
  const __m128i **v11; // r15
  _QWORD *v12; // r12
  __int64 v13; // r13
  unsigned int v14; // ebx
  int v16; // [rsp-8h] [rbp-98h]
  __m128i v17; // [rsp+0h] [rbp-90h] BYREF
  int v18[2]; // [rsp+10h] [rbp-80h]
  int v19; // [rsp+18h] [rbp-78h]
  int v20[2]; // [rsp+20h] [rbp-70h] BYREF
  void *ptr; // [rsp+28h] [rbp-68h] BYREF
  __int128 v22; // [rsp+30h] [rbp-60h]
  __int64 v23; // [rsp+40h] [rbp-50h]
  int v24; // [rsp+48h] [rbp-48h]
  unsigned __int64 v25; // [rsp+50h] [rbp-40h]

  v7 = *a2;
  v8 = a2[1];
  v17.m128i_i64[1] = a1;
  *(_QWORD *)v18 = a2;
  v9 = &v7[(_QWORD)v8];
  v25 = __readfsqword(0x28u);
  v24 = -1;
  ptr = nullptr;
  v23 = 0;
  v22 = 0;
  if ( v7 != v9 )
  {
    v11 = v7;
    v17.m128i_i64[0] = _mm_shuffle_epi32(_mm_cvtsi32_si128(a3), 224).m128i_u64[0];
    do
      rangeset_t_add(
        (int)&ptr,
        (int)v20,
        (int)v7,
        a4,
        a5,
        a6,
        v16,
        (void *)v17.m128i_i64[0],
        v17.m128i_i64[1],
        v18[0],
        v19,
        _mm_add_epi32(_mm_loadl_epi64(*v11++), _mm_loadl_epi64(&v17)).m128i_i32[0],
        (__int64)ptr);
    while ( v9 != v11 );
  }
  if ( !(unsigned __int8)sub_651D80(v17.m128i_i64[1], &ptr) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(v17.m128i_i64[1] + 16) + 10LL) & 8) == 0 )
    {
      v12 = **(_QWORD ***)v18;
      v13 = **(_QWORD **)v18 + 8LL * *(_QWORD *)(*(_QWORD *)v18 + 8LL);
      if ( v13 == **(_QWORD **)v18 )
      {
LABEL_11:
        v14 = 0;
        goto LABEL_12;
      }
      while ( sub_375980(0x1Au, *v12, a3 + *(_DWORD *)*v12, a4) >= 0 )
      {
        if ( (_QWORD *)v13 == ++v12 )
          goto LABEL_11;
      }
    }
    v14 = -3;
    goto LABEL_12;
  }
  v14 = -7;
LABEL_12:
  if ( ptr )
  {
    *(_QWORD *)&v22 = 0;
    qfree(ptr);
  }
  return v14;
}

