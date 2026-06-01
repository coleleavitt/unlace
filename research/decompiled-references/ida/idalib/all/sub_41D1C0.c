__int64 __fastcall sub_41D1C0(__int64 a1, __int64 *a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // r12
  __int64 v6; // rbx
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rax
  unsigned int fixup; // r15d
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rsi
  int v14; // eax
  int v15; // esi
  int v16; // eax
  int v17; // eax
  __int64 v19; // rax
  int v20; // [rsp+Ch] [rbp-6Ch]
  _BYTE v21[24]; // [rsp+10h] [rbp-68h] BYREF
  __int64 v22; // [rsp+28h] [rbp-50h]
  __int64 v23; // [rsp+30h] [rbp-48h]
  unsigned __int64 v24; // [rsp+38h] [rbp-40h]

  v4 = a3 + a4;
  v6 = 7;
  v24 = __readfsqword(0x28u);
  if ( a3 >= 7 )
    v6 = a3;
  v8 = v6 - 7;
  while ( 1 )
  {
    v9 = sub_41BA40(a1, v8);
    v8 = v9;
    if ( v9 >= v4 )
      break;
    *(_QWORD *)v21 = 0;
    v22 = 0;
    v23 = 0;
    *(__m128i *)&v21[8] = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
    fixup = get_fixup(v21, v9);
    if ( (_BYTE)fixup && (v21[4] & 4) == 0 )
    {
      if ( v8 >= a3 )
      {
        if ( !a2 )
          return fixup;
        goto LABEL_9;
      }
      v20 = calc_fixup_size(*(__int16 *)v21);
      v14 = nbits(v8);
      v15 = v14 + 14;
      v16 = v14 + 7;
      if ( v16 >= 0 )
        v15 = v16;
      v17 = v20 / (v15 >> 3);
      if ( v17 > 1 && a3 < v8 + v17 )
      {
        if ( !a2 )
          return fixup;
LABEL_9:
        v11 = a2[1];
        v12 = *a2;
        if ( a2[2] < (unsigned __int64)(v11 + 1) )
        {
          v19 = qvector_reserve(a2, v12, v11 + 1, 48);
          *a2 = v19;
          v12 = v19;
          v11 = a2[1];
        }
        v13 = 48 * v11 + v12;
        *(__m128i *)(v13 + 16) = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
        *(_QWORD *)(v13 + 8) = 0;
        *(_QWORD *)(v13 + 32) = 0;
        *(_QWORD *)(v13 + 40) = 0;
        ++a2[1];
        *(_QWORD *)v13 = v8;
        *(__m128i *)(v13 + 8) = _mm_load_si128((const __m128i *)v21);
        *(__m128i *)(v13 + 24) = _mm_load_si128((const __m128i *)&v21[16]);
        *(_QWORD *)(v13 + 40) = v23;
      }
    }
  }
  fixup = 0;
  if ( a2 )
    LOBYTE(fixup) = a2[1] != 0;
  return fixup;
}
