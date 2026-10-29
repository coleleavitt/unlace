__int64 __fastcall sub_24AE60(double a1, __m128 a2, __m128 a3, __m128 a4, double a5, double a6, __m128 a7, __m128 a8)
{
  unsigned int v8; // ebp
  char v9; // al
  char v11; // bl
  __int64 first_seg; // rax
  __int64 v13; // rax
  const char *v14; // rdx
  double v15; // xmm0_8
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  unsigned __int16 v21; // di
  char v22; // [rsp+0h] [rbp-68h]
  __int16 v23; // [rsp+Eh] [rbp-5Ah] BYREF
  const char *v24; // [rsp+10h] [rbp-58h] BYREF
  __int128 v25; // [rsp+18h] [rbp-50h]
  __int64 v26; // [rsp+30h] [rbp-38h] BYREF
  __int128 v27; // [rsp+38h] [rbp-30h]
  unsigned __int64 v28; // [rsp+48h] [rbp-20h]

  v8 = 0;
  v28 = __readfsqword(0x28u);
  v9 = is_debugger_on();
  if ( v9 )
  {
    v11 = v9;
    first_seg = get_first_seg();
    if ( first_seg )
    {
      while ( (*(_BYTE *)(first_seg + 44) & 0x10) == 0 )
      {
        first_seg = get_next_seg(*(_QWORD *)first_seg);
        if ( !first_seg )
          goto LABEL_18;
      }
    }
    else
    {
LABEL_18:
      v11 = 0;
    }
    v25 = 0;
    v24 = nullptr;
    v13 = qvector_reserve(&v24, 0, 23, 1);
    v24 = (const char *)v13;
    *(_QWORD *)&v25 = 23;
    *(__m128i *)v13 = _mm_load_si128((const __m128i *)&xmmword_5DC980);
    v14 = v24;
    v15 = 0.0;
    *(_QWORD *)(v13 + 14) = 0xA3E523A73746E65LL;
    v26 = 0;
    *((_BYTE *)v14 + 22) = 0;
    v27 = 0;
    if ( v11 )
    {
      if ( !(_QWORD)v25 )
        v14 = &s1;
    }
    else
    {
      v14 = (const char *)&unk_5C2F25;
    }
    sub_169A50(
      &v26,
      (__int64)"BUTTON YES OK\n"
               "BUTTON CANCEL Cancel\n"
               "@0:1470[]\n"
               "Take snapshot\n"
               "\n"
               "IDA is going to copy data from the\n"
               "debugged process to the database.\n"
               "\n"
               "What segments do you want to save?\n"
               "<~A~ll segments:R>\n"
               "%s<C~u~rrent segment:R>>",
      v14);
    v23 = 1;
    if ( (unsigned int)sub_1697D0(v26, (__int64)&v23, v16, 1, v17, v18, (__m128)0LL, a2, a3, a4, v19, v20, a7, a8, v22) == 1 )
    {
      v21 = v23;
      if ( v23 && !v11 )
        v21 = ++v23;
      v8 = (unsigned __int8)take_memory_snapshot(v21);
    }
    else
    {
      v8 = -1;
    }
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      v15 = qfree(v26, (const char *)&v23);
    }
    if ( v24 )
    {
      *(_QWORD *)&v25 = 0;
      qfree(v24, (const char *)&v23, v15);
    }
  }
  return v8;
}
