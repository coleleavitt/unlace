unsigned __int64 __fastcall sub_4E1C10(__int64 a1, unsigned __int8 *a2, __int64 a3)
{
  __int64 v3; // rbx
  int v4; // eax
  __m128i v5; // xmm0
  unsigned __int8 *v6; // rcx
  unsigned __int64 v7; // rsi
  unsigned int v8; // eax
  __int16 v9; // dx
  __m128i si128; // xmm0
  unsigned __int8 *v12; // rsi
  __int64 v13; // rdx
  char v14; // al
  char v15; // al
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rdx
  bool v19; // zf
  unsigned __int8 *v20; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int8 *v21; // [rsp+8h] [rbp-20h]
  unsigned __int64 v22; // [rsp+18h] [rbp-10h]

  v3 = a1;
  v22 = __readfsqword(0x28u);
  v4 = 0;
  v21 = &a2[a3];
  if ( a2 < &a2[a3] )
  {
    v4 = *a2;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
    v12 = a2 + 1;
    *(_QWORD *)(a1 + 16) = 0;
    v20 = v12;
    *(_DWORD *)(a1 + 24) = v4;
    v13 = v4 & 0x10;
    *(__m128i *)a1 = si128;
    if ( (v4 & 0x10) != 0 )
    {
      v14 = is_cvt64(a1, v12, v13);
      v12 = v21;
      if ( v14 )
      {
        a1 = (unsigned int)unpack_dd(&v20);
        if ( a1 == 0xFFFFFFFFLL )
          a1 = -1;
      }
      else
      {
        a1 = unpack_dq(&v20);
      }
      *(_QWORD *)v3 = node2ea(a1);
      v4 = *(_DWORD *)(v3 + 24);
    }
    if ( (v4 & 0x20) != 0 )
    {
      v15 = is_cvt64(a1, v12, v13);
      v12 = v21;
      if ( v15 )
      {
        a1 = (unsigned int)unpack_dd(&v20);
        if ( a1 == 0xFFFFFFFFLL )
          a1 = -1;
      }
      else
      {
        a1 = unpack_dq(&v20);
      }
      *(_QWORD *)(v3 + 8) = node2ea(a1);
      v4 = *(_DWORD *)(v3 + 24);
    }
    if ( (v4 & 0x40) != 0 )
    {
      if ( (unsigned __int8)is_cvt64(a1, v12, v4 & 0x40) )
      {
        v17 = unpack_dd(&v20);
        v18 = v17;
        v19 = v17 == -1;
        v16 = -1;
        if ( !v19 )
          v16 = v18;
      }
      else
      {
        v16 = unpack_dq(&v20);
      }
      *(_QWORD *)(v3 + 16) = v16;
      v4 = *(_DWORD *)(v3 + 24);
    }
  }
  else
  {
    v5 = _mm_load_si128((const __m128i *)&xmmword_23A7890);
    v20 = a2;
    *(_QWORD *)(a1 + 16) = 0;
    *(__m128i *)a1 = v5;
  }
  v6 = v20;
  v7 = (unsigned __int64)v21;
  v8 = v4 & 0xFFFFFF8F;
  *(_DWORD *)(v3 + 24) = v8;
  if ( (unsigned __int64)v6 < v7 )
  {
    v9 = *v6;
    v20 = v6 + 1;
    if ( (unsigned __int64)(v6 + 1) < v7 )
      v9 |= v6[1] << 8;
    *(_DWORD *)(v3 + 24) = v8 | (16 * v9) & 0x3F70;
  }
  return v22 - __readfsqword(0x28u);
}
