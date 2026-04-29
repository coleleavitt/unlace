__int64 __fastcall sub_1C8A70(__int64 *a1)
{
  __int64 v1; // rsi
  __int128 *v2; // rax
  unsigned int v3; // ebx
  __int64 v4; // rdi
  __int128 *v6; // rdx
  __m128i v7; // [rsp+0h] [rbp-58h]
  __int64 v8; // [rsp+10h] [rbp-48h] BYREF
  int v9; // [rsp+18h] [rbp-40h]
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-20h]

  v1 = *a1;
  v11 = __readfsqword(0x28u);
  v9 = -1;
  v8 = 0;
  v7 = 0;
  v10 = 0;
  if ( !v1 )
  {
    v2 = (__int128 *)a1[1];
    v6 = &v2[a1[2]];
    v7 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v2, (__m128i)(unsigned __int64)v6);
    if ( v2 == v6 )
      return 1;
    goto LABEL_4;
  }
  if ( (unsigned __int8)func_tail_iterator_set(&v8, v1, -1) )
  {
    v2 = nullptr;
LABEL_4:
    if ( v2 )
      goto LABEL_9;
    v2 = (__int128 *)v8;
    if ( !v8 )
    {
      v2 = &v10;
      goto LABEL_9;
    }
    while ( 2 )
    {
      if ( v9 >= 0 && v9 < *((_DWORD *)v2 + 32) )
        v2 = (__int128 *)(*((_QWORD *)v2 + 17) + 16LL * v9);
      while ( 1 )
      {
LABEL_9:
        if ( auto_wait_range(*(_QWORD *)v2, *((_QWORD *)v2 + 1)) == -1 )
        {
          v3 = 0;
          goto LABEL_22;
        }
        if ( !v7.m128i_i64[0] )
          break;
        v2 = (__int128 *)(v7.m128i_i64[0] + 16);
        v7.m128i_i64[0] = (__int64)v2;
        if ( v2 == (__int128 *)v7.m128i_i64[1] )
          goto LABEL_12;
      }
      v2 = (__int128 *)v8;
      v4 = v8;
      if ( !v8 )
        return 1;
      v3 = 1;
      if ( v9 + 1 < *(_DWORD *)(v8 + 128) )
      {
        ++v9;
        continue;
      }
      goto LABEL_15;
    }
  }
LABEL_12:
  v3 = 1;
LABEL_22:
  v4 = v8;
  if ( v8 )
LABEL_15:
    lock_func_range(v4, 0);
  return v3;
}
