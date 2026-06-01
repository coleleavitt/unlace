__int64 sub_DC1A0()
{
  unsigned int v0; // ebp
  char v1; // al
  char v3; // bl
  __int64 first_seg; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int16 v7; // [rsp+Eh] [rbp-5Ah] BYREF
  __int64 v8; // [rsp+10h] [rbp-58h]
  __int128 v9; // [rsp+18h] [rbp-50h]
  __int64 v10; // [rsp+30h] [rbp-38h] BYREF
  __int128 v11; // [rsp+38h] [rbp-30h]
  unsigned __int64 v12; // [rsp+48h] [rbp-20h]

  v0 = 0;
  v12 = __readfsqword(0x28u);
  v1 = is_debugger_on();
  if ( v1 )
  {
    v3 = v1;
    first_seg = get_first_seg();
    if ( first_seg )
    {
      while ( (*(_BYTE *)(first_seg + 24) & 0x10) == 0 )
      {
        first_seg = get_next_seg();
        if ( !first_seg )
          goto LABEL_16;
      }
    }
    else
    {
LABEL_16:
      v3 = 0;
    }
    v9 = 0;
    v5 = qvector_reserve();
    v8 = v5;
    *(_QWORD *)&v9 = 23;
    *(__m128i *)v5 = _mm_load_si128((const __m128i *)&xmmword_1D2220);
    v6 = v8;
    *(_QWORD *)(v5 + 14) = 0xA3E523A73746E65LL;
    v10 = 0;
    *(_BYTE *)(v6 + 22) = 0;
    v11 = 0;
    sub_94360(&v10);
    v7 = 1;
    if ( (unsigned int)sub_8F730(v10, &v7) == 1 )
    {
      if ( v7 && !v3 )
        ++v7;
      v0 = (unsigned __int8)take_memory_snapshot();
    }
    else
    {
      v0 = -1;
    }
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree();
    }
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree();
    }
  }
  return v0;
}

