__int64 __fastcall sub_8BB7E0(_QWORD *a1, __int64 a2, _BYTE *a3, __int64 a4, int a5, double a6, double a7, __m128 a8)
{
  bool v8; // zf
  unsigned int v10; // eax
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  __int64 v14; // r14
  const __m128i *v15; // rbp
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r12
  __m128i v18; // xmm0
  __int64 v19; // rax
  unsigned int v20; // ebp
  const char *v21; // rsi
  __m128i v22; // [rsp+0h] [rbp-48h] BYREF
  __int64 v23; // [rsp+10h] [rbp-38h]
  unsigned __int64 v24; // [rsp+18h] [rbp-30h]

  v8 = *a3 == 86;
  v24 = __readfsqword(0x28u);
  if ( !v8 || a3[1] != 97 || a3[3] )
    return set_qerrno(13);
  v10 = 1 << (a3[2] - 41);
  if ( v10 <= 0x7F || (v10 & (v10 - 1)) != 0 )
    sub_378C70((__int64)"!!!VARRAY CORRUPTED: bad page size in the header\n", a2, a4);
  v11 = v10;
  if ( (unsigned int)sub_8B8920((__int64)a1, a2, a4, v10, a5) )
  {
    return (unsigned int)-1;
  }
  else
  {
    v12 = sub_8BCA60(*a1, 0, 1);
    v13 = *(unsigned __int16 *)(v12 + 4);
    v14 = v12;
    v15 = (const __m128i *)(v12 + 8);
    v16 = (4 * v11 - 8) / 0x18uLL;
    if ( v16 < v13 )
      sub_378C70((__int64)"!!!VARRAY CORRUPTED: bad number of chunks in the header\n");
    v17 = 0;
    if ( (_WORD)v13 )
    {
      do
      {
        v18 = _mm_loadu_si128(v15);
        a8 = _mm_movehl_ps(a8, (__m128)v18);
        v16 = v18.m128i_i64[0];
        if ( v18.m128i_i64[0] >= a8.m128_u64[0] )
        {
          if ( _mm_or_si128(v18, _mm_srli_si128(v18, 8)).m128i_u64[0] )
            return 1299;
        }
        else
        {
          v19 = v15[1].m128i_i64[0];
          v22 = v18;
          v23 = v19;
          sub_8B8CE0(a1, &v22);
        }
        ++v17;
        v15 = (const __m128i *)((char *)v15 + 24);
      }
      while ( v17 < *(unsigned __int16 *)(v14 + 4) );
    }
    *((_DWORD *)a1 + 10) = *(unsigned __int16 *)(v14 + 6);
    v20 = sub_8BA030((__int64 **)a1, 0, v16);
    if ( v20 )
    {
      return 4;
    }
    else
    {
      v21 = sub_8BB610(a1);
      if ( v21 )
        sub_378C70((__int64)"!!!VARRAY CORRUPTED: %s\n", v21);
    }
  }
  return v20;
}
