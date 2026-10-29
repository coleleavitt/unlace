__int64 __fastcall sub_409DB0(__int64 a1, __int64 *a2, unsigned int a3, int a4)
{
  int v4; // r8d
  unsigned int v5; // ebp
  unsigned int v8; // r13d
  unsigned int v9; // eax
  __int64 v10; // rsi
  unsigned int fixup; // eax
  __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  int v17; // eax
  int v18; // esi
  int v19; // eax
  int v20; // eax
  __int64 v22; // rax
  int v23; // [rsp+8h] [rbp-60h]
  unsigned __int8 v24; // [rsp+Fh] [rbp-59h]
  __m128i v25; // [rsp+10h] [rbp-58h] BYREF
  __int64 v26; // [rsp+20h] [rbp-48h]
  unsigned __int64 v27; // [rsp+28h] [rbp-40h]

  v4 = 7;
  v5 = a3 + a4;
  v27 = __readfsqword(0x28u);
  if ( a3 >= 7 )
    v4 = a3;
  v8 = v4 - 7;
  while ( 1 )
  {
    v9 = sub_4087C0(a1, v8);
    v8 = v9;
    if ( v9 >= v5 )
      break;
    v10 = v9;
    v25.m128i_i64[1] = 0xFFFFFFFF00000000LL;
    v25.m128i_i64[0] = 0;
    v26 = 0;
    fixup = get_fixup(&v25, v9);
    v13 = fixup;
    if ( (_BYTE)fixup && (v25.m128i_i8[4] & 4) == 0 )
    {
      if ( v8 >= a3 )
      {
        if ( !a2 )
          return v13;
        goto LABEL_9;
      }
      v24 = fixup;
      v23 = calc_fixup_size(v25.m128i_u16[0], v10, v12, fixup);
      v17 = nbits(v8);
      v18 = v17 + 14;
      v19 = v17 + 7;
      if ( v19 >= 0 )
        v18 = v19;
      v20 = v23 / (v18 >> 3);
      if ( v20 > 1 )
      {
        v13 = v24;
        if ( a3 < v8 + v20 )
        {
          if ( !a2 )
            return v13;
LABEL_9:
          v14 = a2[1];
          v15 = *a2;
          if ( a2[2] < (unsigned __int64)(v14 + 1) )
          {
            v22 = qvector_reserve(a2, v15, v14 + 1, 28);
            v14 = a2[1];
            *a2 = v22;
            v15 = v22;
          }
          v16 = v15 + 28 * v14;
          *(__m128i *)(v16 + 8) = _mm_load_si128((const __m128i *)&xmmword_23836A0);
          *(_DWORD *)(v16 + 4) = 0;
          *(_DWORD *)(v16 + 24) = 0;
          ++a2[1];
          *(_DWORD *)v16 = v8;
          *(__m128i *)(v16 + 4) = _mm_load_si128(&v25);
          *(_QWORD *)(v16 + 20) = v26;
        }
      }
    }
  }
  v13 = 0;
  if ( a2 )
    LOBYTE(v13) = a2[1] != 0;
  return v13;
}

