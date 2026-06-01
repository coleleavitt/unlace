__int64 __fastcall sub_897B10(_QWORD *a1, __int64 a2, _BYTE *a3, __int64 a4, int a5)
{
  bool v5; // zf
  unsigned int v7; // eax
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // r14
  const __m128i *v12; // rbp
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r12
  __m128i v15; // xmm0
  __int64 v16; // rax
  unsigned int v17; // ebp
  const char *v18; // rsi
  __int64 v19[9]; // [rsp+0h] [rbp-48h] BYREF

  v5 = *a3 == 86;
  v19[3] = __readfsqword(0x28u);
  if ( !v5 || a3[1] != 97 || a3[3] )
    return set_qerrno(13, a2);
  v7 = 1 << (a3[2] - 41);
  if ( v7 <= 0x7F || (v7 & (v7 - 1)) != 0 )
    sub_375320((__int64)"!!!VARRAY CORRUPTED: bad page size in the header\n", a2, a4);
  v8 = v7;
  if ( (unsigned int)sub_894F70((__int64)a1, a2, a4, v7, a5) )
  {
    return (unsigned int)-1;
  }
  else
  {
    v9 = sub_898D20(*a1, 0, 1);
    v10 = *(unsigned __int16 *)(v9 + 4);
    v11 = v9;
    v12 = (const __m128i *)(v9 + 8);
    v13 = (4 * v8 - 8) / 0xCuLL;
    if ( v13 < v10 )
      sub_375320((__int64)"!!!VARRAY CORRUPTED: bad number of chunks in the header\n");
    v14 = 0;
    if ( (_WORD)v10 )
    {
      do
      {
        v15 = _mm_loadl_epi64(v12);
        v13 = (unsigned int)_mm_cvtsi128_si32(v15);
        if ( (unsigned int)v13 >= _mm_cvtsi128_si32(_mm_shuffle_epi32(v15, 229)) )
        {
          if ( v12->m128i_i64[0] )
            return 1299;
        }
        else
        {
          v16 = v12->m128i_u32[2];
          v19[0] = v15.m128i_i64[0];
          v19[1] = v16;
          sub_895360(a1, v19);
        }
        ++v14;
        v12 = (const __m128i *)((char *)v12 + 12);
      }
      while ( v14 < *(unsigned __int16 *)(v11 + 4) );
    }
    *((_DWORD *)a1 + 10) = *(unsigned __int16 *)(v11 + 6);
    v17 = sub_896540((__int64)a1, 0, v13);
    if ( v17 )
    {
      return 4;
    }
    else
    {
      v18 = sub_897950(a1);
      if ( v18 )
        sub_375320((__int64)"!!!VARRAY CORRUPTED: %s\n", v18);
    }
  }
  return v17;
}

