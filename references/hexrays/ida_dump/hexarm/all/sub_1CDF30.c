__int64 __fastcall sub_1CDF30(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rsi
  __int128 *v6; // rbp
  unsigned __int64 v7; // r14
  __int64 fchunk; // r13
  __int64 result; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r15
  unsigned __int64 *next_fchunk; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  char *v16; // rdi
  unsigned __int64 *v17; // rax
  __int64 v18; // r9
  __int64 v19; // r10
  unsigned __int64 *v20; // rbx
  unsigned __int64 *v21; // r11
  __int128 *v22; // rax
  signed __int64 v23; // r13
  _QWORD *func; // rax
  __int64 v25; // rax
  __int64 v26; // r9
  unsigned __int8 v28; // [rsp+1h] [rbp-C1h]
  unsigned __int8 v29; // [rsp+1h] [rbp-C1h]
  _QWORD v32[2]; // [rsp+1Ah] [rbp-A8h] BYREF
  __int64 v33; // [rsp+2Ah] [rbp-98h] BYREF
  __int128 v34; // [rsp+32h] [rbp-90h]
  __m128i v35; // [rsp+4Ah] [rbp-78h]
  __int64 v36; // [rsp+5Ah] [rbp-68h] BYREF
  int v37; // [rsp+62h] [rbp-60h]
  __int128 v38; // [rsp+6Ah] [rbp-58h] BYREF
  unsigned __int64 v39; // [rsp+82h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 8);
  v39 = __readfsqword(0x28u);
  v37 = -1;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 1200) = 0;
  v33 = 0;
  v36 = 0;
  v34 = 0;
  v35 = 0;
  v38 = 0;
  if ( v5 )
  {
    v6 = (__int128 *)v35.m128i_i64[0];
    if ( !(unsigned __int8)func_tail_iterator_set(&v36, v5, -1) )
      goto LABEL_24;
  }
  else
  {
    v6 = *(__int128 **)(a1 + 16);
    v22 = &v6[*(_QWORD *)(a1 + 24)];
    v35 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)(unsigned __int64)v22);
    if ( v6 == v22 )
      goto LABEL_24;
  }
  if ( !v6 )
  {
    v6 = (__int128 *)v36;
    if ( v36 )
    {
LABEL_5:
      if ( v37 >= 0 && v37 < *((_DWORD *)v6 + 32) )
        v6 = (__int128 *)(*((_QWORD *)v6 + 17) + 16LL * v37);
    }
    else
    {
      v6 = &v38;
    }
  }
  while ( 2 )
  {
    v7 = *(_QWORD *)v6;
    while ( 1 )
    {
      v11 = *((_QWORD *)v6 + 1);
      if ( v7 >= v11 )
        break;
      if ( !a4 )
        goto LABEL_9;
      fchunk = get_fchunk(v7);
      v11 = v7;
      if ( fchunk )
        goto LABEL_12;
      next_fchunk = (unsigned __int64 *)get_next_fchunk(v7);
      v11 = *((_QWORD *)v6 + 1);
      fchunk = (__int64)next_fchunk;
      if ( next_fchunk )
      {
        v13 = *next_fchunk;
        if ( v11 > v13 )
          v11 = v13;
      }
      else
      {
LABEL_9:
        fchunk = 0;
      }
      v32[0] = v7;
      v32[1] = v11 - v7;
      sub_316F70(&v33, v32);
      result = sub_1CD680((_QWORD *)a1, v7, v11);
      if ( !(_BYTE)result )
        goto LABEL_35;
      if ( !fchunk )
        break;
LABEL_12:
      v10 = *((_QWORD *)v6 + 1);
      if ( *(_QWORD *)(fchunk + 8) <= v10 )
        v10 = *(_QWORD *)(fchunk + 8);
      v7 = v10;
      sub_1CD960((_QWORD *)a1, fchunk, v11, v10);
    }
    if ( v35.m128i_i64[0] )
    {
      v6 = (__int128 *)(v35.m128i_i64[0] + 16);
      v35.m128i_i64[0] = (__int64)v6;
      if ( v6 == (__int128 *)v35.m128i_i64[1] )
        goto LABEL_24;
      continue;
    }
    break;
  }
  v6 = (__int128 *)v36;
  if ( v36 && v37 + 1 < *(_DWORD *)(v36 + 128) )
  {
    ++v37;
    goto LABEL_5;
  }
LABEL_24:
  nullsub_115();
  if ( (unsigned __int64)v34 | a3 )
  {
    v14 = 0;
    if ( *(_QWORD *)(a1 + 8) )
      v14 = a3;
    sub_1CDEA0((_QWORD *)a1, a2, (__int64)&v33, v14);
    nullsub_115();
  }
  if ( *(_QWORD *)(a1 + 8) )
  {
    v15 = *(_QWORD *)(a1 + 40);
LABEL_30:
    v16 = *(char **)(a1 + 1192);
    v17 = sub_1CCA10(v16, (__int64)&v16[16 * *(_QWORD *)(a1 + 1200)], v15);
    v20 = v17;
    if ( v21 == v17 || v15 < *v17 )
    {
      if ( v16 != (char *)v17 && *(v17 - 1) )
      {
        v23 = (char *)v17 - v16;
        if ( *(_QWORD *)(a1 + 1208) < (unsigned __int64)(v19 + 1) )
        {
          v25 = qvector_reserve(a1 + 1192, v16, v19 + 1, 16);
          v26 = *(_QWORD *)(a1 + 1200);
          *(_QWORD *)(a1 + 1192) = v25;
          v20 = (unsigned __int64 *)(v23 + v25);
          v18 = 16 * v26;
        }
        memmove(v20 + 2, v20, v18 - v23);
        *v20 = v15;
        v20[1] = 0;
        ++*(_QWORD *)(a1 + 1200);
      }
    }
    else if ( v17[1] )
    {
      v17[1] = 0;
    }
  }
  else if ( (*(_BYTE *)(a1 + 5) & 0x40) == 0 )
  {
    func = (_QWORD *)get_func(*(_QWORD *)(a1 + 40));
    if ( func )
    {
      v15 = *(_QWORD *)(a1 + 40);
      if ( *func == v15 )
        goto LABEL_30;
    }
  }
  result = 1;
LABEL_35:
  if ( v36 )
  {
    v28 = result;
    lock_func_range(v36, 0);
    result = v28;
  }
  if ( v33 )
  {
    v29 = result;
    *(_QWORD *)&v34 = 0;
    qfree(v33);
    return v29;
  }
  return result;
}
