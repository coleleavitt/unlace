/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3FF50
// Address: 0x000000000003FF50

//----- (000000000003FF50) ----------------------------------------------------
__int64 __fastcall sub_3FF50(unsigned __int64 a1, __int64 a2, int a3, double a4, __m128 a5)
{
  __m128i v8; // xmm0
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v14; // [rsp+0h] [rbp-88h]
  void *ptr[2]; // [rsp+8h] [rbp-80h] BYREF
  _DWORD v16[5]; // [rsp+18h] [rbp-70h]
  __int128 v17; // [rsp+2Ch] [rbp-5Ch]
  __int128 v18; // [rsp+3Ch] [rbp-4Ch]
  int v19; // [rsp+4Ch] [rbp-3Ch]
  unsigned __int64 v20; // [rsp+50h] [rbp-38h]

  v20 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 1230) && !*(_BYTE *)(a1 + 1149) )
  {
    if ( !(_BYTE)under_debugger )
      interr(30059);
    BUG();
  }
  v14 = a1 + 120;
  do
  {
    while ( !*(_QWORD *)(a1 + 160) )
    {
      ptr[0] = (void *)0xFFFFFFFFLL;
      ptr[1] = (void *)-1LL;
      LOBYTE(v16[0]) = 0;
      v17 = 0;
      v18 = 0;
      *(_OWORD *)&v16[1] = 0;
      v19 = 0;
      if ( !(unsigned int)sub_3F370(a1, (__int64)ptr, a3, 0.0, a5) )
      {
        free_debug_event((__int64)ptr);
        return 0;
      }
      if ( (v16[1] & 0xFFFFFFF) != 0 )
      {
        v9 = *(_QWORD *)(a1 + 128);
        v10 = 56 * ((*(_QWORD *)(a1 + 136) - v9) >> 3) - 1;
        if ( *(_QWORD *)(a1 + 136) == v9 )
          v10 = *(_QWORD *)(a1 + 136) - v9;
        v11 = *(_QWORD *)(a1 + 152) + *(_QWORD *)(a1 + 160);
        if ( v10 == v11 )
        {
          sub_496D0(v14);
          v9 = *(_QWORD *)(a1 + 128);
          v11 = *(_QWORD *)(a1 + 160) + *(_QWORD *)(a1 + 152);
        }
        v12 = *(_QWORD *)(v9 + 8 * (v11 / 0x38)) + 72 * (v11 % 0x38);
        *(_QWORD *)v12 = 0xFFFFFFFFLL;
        *(_QWORD *)(v12 + 8) = -1;
        *(_BYTE *)(v12 + 16) = 0;
        *(_DWORD *)(v12 + 20) = 0;
        copy_debug_event(v12, (__int64)ptr);
        ++*(_QWORD *)(a1 + 160);
        *(_BYTE *)(a1 + 1228) = 0;
      }
      free_debug_event((__int64)ptr);
    }
    copy_debug_event(
      a2,
      *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8 * (*(_QWORD *)(a1 + 152) / 0x38uLL))
    + 72 * (*(_QWORD *)(a1 + 152) % 0x38uLL));
    free_debug_event(
      *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8 * (*(_QWORD *)(a1 + 152) / 0x38uLL))
    + 72 * (*(_QWORD *)(a1 + 152) % 0x38uLL));
    v8 = _mm_add_epi64(_mm_loadu_si128((const __m128i *)(a1 + 152)), (__m128i)xmmword_FE0D0);
    *(__m128i *)(a1 + 152) = v8;
    if ( v8.m128i_i64[0] >= 0x70uLL )
    {
      operator delete(**(void ***)(a1 + 128));
      *(_QWORD *)(a1 + 128) += 8LL;
      *(_QWORD *)(a1 + 152) -= 56LL;
    }
  }
  while ( (*(_DWORD *)(a2 + 20) & 0xFFFFFFF) == 0 );
  *(_BYTE *)(a1 + 1230) = 1;
  if ( !*(_QWORD *)(a1 + 360) )
    *(_BYTE *)(a1 + 1229) = 0;
  return 2 - (unsigned int)(*(_QWORD *)(a1 + 160) == 0);
}
// FE0D0: using guessed type __int128 xmmword_FE0D0;
// 158B40: using guessed type __int64 under_debugger;
