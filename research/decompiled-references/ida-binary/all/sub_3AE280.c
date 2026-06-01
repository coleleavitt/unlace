__int64 __fastcall sub_3AE280(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // edx
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  _OWORD v9[2]; // [rsp+0h] [rbp-58h] BYREF
  __m128i v10; // [rsp+20h] [rbp-38h]
  __int64 v11; // [rsp+30h] [rbp-28h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 208);
  v12 = __readfsqword(0x28u);
  v2 = 0;
  if ( (*(_BYTE *)(v1 + 31) & 0xEF) == 0xD )
  {
    if ( *(_QWORD *)(v1 + 32) != -1 )
    {
      v9[0] = _mm_loadu_si128((const __m128i *)(v1 + 120));
      v9[1] = _mm_loadu_si128((const __m128i *)(v1 + 136));
      v7 = *(_QWORD *)&v9[0];
      v10 = _mm_loadu_si128((const __m128i *)(v1 + 152));
      v11 = *(_QWORD *)(v1 + 168);
      v8 = *(_QWORD *)&v9[0];
      BYTE1(v8) = BYTE1(v9[0]) & 0xF7;
      if ( (BYTE1(v9[0]) & 8) == 0 )
      {
        BYTE1(v7) = BYTE1(v9[0]) | 8;
        v8 = v7;
      }
      *(_QWORD *)&v9[0] = v8;
      return (unsigned int)set_tinfo_property4(v1 + 8, 14, *(_QWORD *)(v1 + 32), v9, 0, 0) == 0;
    }
  }
  else if ( *(_BYTE *)(v1 + 31) == 45 )
  {
    *(_QWORD *)&v9[0] = 0;
    v10.m128i_i64[1] = 1;
    LODWORD(v11) = -1;
    get_tinfo_property4(*(_QWORD *)(v1 + 8), 305, v9, 0, 0, 0);
    v4 = v1 + 8;
    v5 = *(_QWORD *)&v9[0];
    v6 = *(_QWORD *)&v9[0];
    BYTE1(v6) = BYTE1(v9[0]) & 0xF7;
    if ( (BYTE1(v9[0]) & 8) == 0 )
    {
      BYTE1(v5) = BYTE1(v9[0]) | 8;
      v6 = v5;
    }
    *(_QWORD *)&v9[0] = v6;
    return (unsigned int)set_tinfo_property4(v4, 19, v9, 0, 0, 0) == 0;
  }
  return v2;
}
