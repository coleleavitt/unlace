unsigned __int64 __fastcall sub_4310A0(__int64 a1, __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  __m128i *v5; // rbx
  unsigned __int64 v6; // r14
  unsigned __int64 v8; // r15
  __int64 v9; // rax
  __m128 v10; // xmm1
  __m128i v11; // xmm0
  __int64 v12; // r9
  __int64 *v13; // rbp
  unsigned __int64 v14; // r14
  unsigned __int64 *v15; // r15
  unsigned __int64 *v16; // r13
  char *v17; // r15
  __int64 v18; // r13
  __int64 j; // r14
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 *v22; // rax
  void *v23; // rdi
  unsigned __int64 i; // [rsp+0h] [rbp-98h]
  char *v26; // [rsp+8h] [rbp-90h]
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  int v28[4]; // [rsp+18h] [rbp-80h]
  int v29; // [rsp+28h] [rbp-70h]
  int v30[4]; // [rsp+30h] [rbp-68h] BYREF
  int v31[4]; // [rsp+40h] [rbp-58h]
  int v32; // [rsp+50h] [rbp-48h]
  int v33[2]; // [rsp+58h] [rbp-40h]
  int v34; // [rsp+60h] [rbp-38h]
  int v35; // [rsp+68h] [rbp-30h]
  __int64 v36; // [rsp+70h] [rbp-28h]

  v5 = *(__m128i **)(a2 + 1672);
  v6 = *a3;
  *(_QWORD *)v33 = __readfsqword(0x28u);
  v8 = a3[1];
  *(_OWORD *)v28 = 0;
  ptr = nullptr;
  sub_4309A0(v5->m128i_i64, v5 + 112, a3, a4);
  *(_OWORD *)v30 = 0;
  v9 = operator new(0x20u);
  *(_QWORD *)(v9 + 24) = a4;
  v10 = (__m128)v8;
  *(_QWORD *)v30 = v9;
  *(_QWORD *)v9 = &ptr;
  *(__m128i *)(v9 + 8) = _mm_unpacklo_epi64((__m128i)v6, (__m128i)v8);
  v11 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B28630), (__m128i)(unsigned __int64)sub_42DEC0);
  *(__m128i *)v31 = v11;
  sub_42C840(a2, a3, (const __m128i *)v30);
  if ( *(_QWORD *)v31 )
    (*(void (__fastcall **)(int *, int *, __int64))v31)(v30, v30, 3);
  v13 = (__int64 *)ptr;
  v26 = (char *)ptr + 32 * *(_QWORD *)v28;
  if ( v26 != ptr )
  {
    do
    {
      v14 = *v13;
      v15 = (unsigned __int64 *)v13[1];
      v16 = &v15[2 * v13[2]];
      for ( i = *v13 - a4; v16 != v15; v15 += 2 )
      {
        sub_411DE0((__int64)v5, v14, *v15, 1);
        sub_411DE0((__int64)v5, i, a4 + *v15, 1);
      }
      v13 += 4;
    }
    while ( v26 != (char *)v13 );
    v13 = (__int64 *)ptr;
    v17 = (char *)ptr + 32 * *(_QWORD *)v28;
    if ( v17 != ptr )
    {
      do
      {
        v18 = v13[1];
        for ( j = v18 + 16 * v13[2]; j != v18; v18 += 16 )
          sub_4111A0(
            v5->m128i_i64,
            *v13,
            (void *)(a4 + *(_QWORD *)v18),
            1,
            *(_BYTE *)(v18 + 8),
            *(double *)v11.m128i_i64,
            v10,
            v12,
            i,
            v26,
            (__int64)ptr,
            v28[0],
            v28[2],
            v29,
            v30[0],
            v30[2],
            v31[0],
            v31[2],
            v32,
            v33[0],
            v34,
            v35,
            v36);
        v13 += 4;
      }
      while ( v17 != (char *)v13 );
      v13 = (__int64 *)ptr;
    }
  }
  if ( v13 )
  {
    v20 = *(_QWORD *)v28;
    if ( *(_QWORD *)v28 )
    {
      v21 = 0;
      do
      {
        v22 = &v13[4 * v21];
        v23 = (void *)v22[1];
        if ( v23 )
        {
          v22[2] = 0;
          qfree(v23);
          v13 = (__int64 *)ptr;
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)v28 = 0;
    qfree(v13);
  }
  return *(_QWORD *)v33 - __readfsqword(0x28u);
}
