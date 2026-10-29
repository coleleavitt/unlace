__int64 __fastcall sub_1CE4F0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rsi
  unsigned __int64 *v8; // rbp
  unsigned __int64 v9; // r14
  __int64 fchunk; // r13
  __int64 result; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r15
  unsigned __int64 *next_fchunk; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rbp
  char *v18; // rdi
  unsigned __int64 *v19; // rax
  __int64 v20; // r9
  __int64 v21; // r10
  unsigned __int64 *v22; // rbx
  unsigned __int64 *v23; // r11
  unsigned __int64 *v24; // rax
  signed __int64 v25; // r13
  _QWORD *func; // rax
  __int64 v27; // rax
  __int64 v28; // r9
  char v29; // [rsp+1h] [rbp-C1h]
  unsigned __int8 v30; // [rsp+1h] [rbp-C1h]
  unsigned __int8 v31; // [rsp+1h] [rbp-C1h]
  _QWORD v34[2]; // [rsp+1Ah] [rbp-A8h] BYREF
  __int64 v35; // [rsp+2Ah] [rbp-98h] BYREF
  __int128 v36; // [rsp+32h] [rbp-90h]
  __m128i v37; // [rsp+4Ah] [rbp-78h]
  __int64 v38; // [rsp+5Ah] [rbp-68h]
  int v39; // [rsp+62h] [rbp-60h]
  __int128 v40; // [rsp+6Ah] [rbp-58h] BYREF
  unsigned __int64 v41; // [rsp+82h] [rbp-40h]

  v7 = *(_QWORD *)(a1 + 8);
  v29 = a4;
  v41 = __readfsqword(0x28u);
  v39 = -1;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 1200) = 0;
  v35 = 0;
  v38 = 0;
  v36 = 0;
  v37 = 0;
  v40 = 0;
  if ( v7 )
  {
    v8 = (unsigned __int64 *)v37.m128i_i64[0];
    if ( !(unsigned __int8)func_tail_iterator_set() )
      goto LABEL_24;
  }
  else
  {
    v8 = *(unsigned __int64 **)(a1 + 16);
    v24 = &v8[2 * *(_QWORD *)(a1 + 24)];
    v37 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v8, (__m128i)(unsigned __int64)v24);
    if ( v8 == v24 )
      goto LABEL_24;
  }
  if ( !v8 )
    v8 = (unsigned __int64 *)&v40;
  while ( 2 )
  {
    while ( 2 )
    {
      v9 = *v8;
      while ( 1 )
      {
        v13 = v8[1];
        if ( v9 >= v13 )
          break;
        if ( !v29 )
          goto LABEL_9;
        fchunk = get_fchunk();
        v13 = v9;
        if ( fchunk )
          goto LABEL_12;
        next_fchunk = (unsigned __int64 *)get_next_fchunk();
        v13 = v8[1];
        fchunk = (__int64)next_fchunk;
        if ( next_fchunk )
        {
          v15 = *next_fchunk;
          if ( v13 > v15 )
            v13 = v15;
        }
        else
        {
LABEL_9:
          fchunk = 0;
        }
        v34[0] = v9;
        v34[1] = v13 - v9;
        sub_316BB0(&v35, v34, a3, a4, a5, a6);
        result = sub_1CDC40(a1, v9, v13);
        if ( !(_BYTE)result )
          goto LABEL_35;
        if ( !fchunk )
          break;
LABEL_12:
        v12 = v8[1];
        if ( *(_QWORD *)(fchunk + 8) <= v12 )
          v12 = *(_QWORD *)(fchunk + 8);
        v9 = v12;
        sub_1CDF20((_QWORD *)a1, fchunk, v13, v12);
      }
      if ( v37.m128i_i64[0] )
      {
        v8 = (unsigned __int64 *)(v37.m128i_i64[0] + 16);
        v37.m128i_i64[0] = (__int64)v8;
        if ( v8 == (unsigned __int64 *)v37.m128i_i64[1] )
          goto LABEL_24;
        continue;
      }
      break;
    }
    v8 = (unsigned __int64 *)v38;
    if ( v38 && v39 + 1 < *(_DWORD *)(v38 + 128) )
    {
      if ( ++v39 >= 0 && v39 < *(_DWORD *)(v38 + 128) )
        v8 = (unsigned __int64 *)(*(_QWORD *)(v38 + 136) + 16LL * v39);
      continue;
    }
    break;
  }
LABEL_24:
  nullsub_115();
  if ( (unsigned __int64)v36 | a3 )
  {
    v16 = 0;
    if ( *(_QWORD *)(a1 + 8) )
      v16 = a3;
    sub_1CE460(a1, a2, (__int64)&v35, v16);
    nullsub_115();
  }
  if ( *(_QWORD *)(a1 + 8) )
  {
    v17 = *(_QWORD *)(a1 + 40);
LABEL_30:
    v18 = *(char **)(a1 + 1192);
    v19 = sub_1CCFD0(v18, (__int64)&v18[16 * *(_QWORD *)(a1 + 1200)], v17);
    v22 = v19;
    if ( v23 == v19 || v17 < *v19 )
    {
      if ( v18 != (char *)v19 && *(v19 - 1) )
      {
        v25 = (char *)v19 - v18;
        if ( *(_QWORD *)(a1 + 1208) < (unsigned __int64)(v21 + 1) )
        {
          v27 = qvector_reserve();
          v28 = *(_QWORD *)(a1 + 1200);
          *(_QWORD *)(a1 + 1192) = v27;
          v22 = (unsigned __int64 *)(v25 + v27);
          v20 = 16 * v28;
        }
        memmove(v22 + 2, v22, v20 - v25);
        *v22 = v17;
        v22[1] = 0;
        ++*(_QWORD *)(a1 + 1200);
      }
    }
    else if ( v19[1] )
    {
      v19[1] = 0;
    }
  }
  else if ( (*(_BYTE *)(a1 + 5) & 0x40) == 0 )
  {
    func = (_QWORD *)get_func();
    if ( func )
    {
      v17 = *(_QWORD *)(a1 + 40);
      if ( *func == v17 )
        goto LABEL_30;
    }
  }
  result = 1;
LABEL_35:
  if ( v38 )
  {
    v30 = result;
    lock_func_range();
    result = v30;
  }
  if ( v35 )
  {
    v31 = result;
    *(_QWORD *)&v36 = 0;
    qfree();
    return v31;
  }
  return result;
}
