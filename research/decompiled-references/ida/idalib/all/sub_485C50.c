__int64 __fastcall sub_485C50(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // r12
  int v6; // ebx
  unsigned int v7; // r14d
  __int64 v8; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  unsigned __int64 *v13; // rbx
  unsigned __int64 *v14; // r13
  __m128i si128; // xmm1
  __int64 v16; // rdi
  int v18[4]; // [rsp+0h] [rbp-98h] BYREF
  void *ptr; // [rsp+10h] [rbp-88h] BYREF
  int v20[4]; // [rsp+18h] [rbp-80h]
  void *v21; // [rsp+28h] [rbp-70h]
  __int64 v22; // [rsp+30h] [rbp-68h]
  int v23[2]; // [rsp+40h] [rbp-58h] BYREF
  int v24[2]; // [rsp+48h] [rbp-50h]
  void (__fastcall *v25[3])(int *, int *, __int64); // [rsp+50h] [rbp-48h]
  int v26[2]; // [rsp+68h] [rbp-30h]

  v1 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)v26 = __readfsqword(0x28u);
  if ( !*(_BYTE *)(*(_QWORD *)(v1 + 8) + 1064LL) )
    sub_368890();
  qtime64();
  v3 = *(_QWORD *)(a1 + 8);
  v21 = nullptr;
  LODWORD(v22) = -1;
  *(_OWORD *)v20 = 0;
  v4 = *(int *)(v3 + 16);
  ptr = nullptr;
  v5 = *(_QWORD *)(switch_dbctx(v4) + 1672) + 1624LL;
  v6 = sub_503DD0(v5);
  v7 = 0;
  if ( v6 > 0 )
  {
    do
    {
      v8 = sub_505DE0(v5, v7);
      if ( v8 )
        rangeset_t_add(
          (int)&ptr,
          v8,
          v9,
          v10,
          v11,
          v12,
          v18[0],
          *(void **)&v18[2],
          (__int64)ptr,
          v20[0],
          v20[2],
          (int)v21,
          v22);
      ++v7;
    }
    while ( v6 != v7 );
  }
  v13 = (unsigned __int64 *)ptr;
  v14 = (unsigned __int64 *)((char *)ptr + 16 * *(_QWORD *)v20);
  *(__m128i *)v18 = _mm_unpacklo_epi64(
                      _mm_loadl_epi64((const __m128i *)&off_2B2C3E8),
                      (__m128i)(unsigned __int64)sub_4824A0);
  if ( ptr != v14 )
  {
    do
    {
      si128 = _mm_load_si128((const __m128i *)v18);
      v16 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)v23 = a1;
      *(_QWORD *)v24 = 0;
      *(__m128i *)v25 = si128;
      sub_46D960(v16, v13, 0, 1, (__int64)v23);
      if ( v25[0] )
        v25[0](v23, v23, 3);
      v13 += 2;
    }
    while ( v14 != v13 );
    v14 = (unsigned __int64 *)ptr;
  }
  if ( v14 )
  {
    *(_QWORD *)v20 = 0;
    qfree(v14);
  }
  return merge_handler_perform_diff(a1);
}
