char __fastcall sub_48C990(__int64 a1, __m128i *a2, const __m128i *a3)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  char result; // al
  __int64 v7; // rsi
  int v8; // r12d
  __int64 (*v9)(); // rax
  int v10; // eax
  unsigned int v11; // eax
  char v12; // cl
  __int64 v13; // rdx
  int v14; // eax
  __m128i v15; // [rsp+0h] [rbp-68h] BYREF
  __int64 v16; // [rsp+10h] [rbp-58h]
  __m128i v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+30h] [rbp-38h]
  unsigned __int64 v19; // [rsp+38h] [rbp-30h]

  v3 = a3[1].m128i_i64[0];
  v19 = __readfsqword(0x28u);
  v15 = _mm_loadu_si128(a3);
  v4 = (unsigned int)_mm_cvtsi128_si32(v15);
  result = 0;
  v16 = v3;
  if ( (int)(v15.m128i_i32[1] | v4) >= 0 )
  {
    v7 = v3;
    if ( v3 )
    {
      v8 = 0;
      v9 = *(__int64 (**)())(*(_QWORD *)a1 + 472LL);
      if ( v9 != sub_486610 )
      {
        v14 = ((__int64 (__fastcall *)(__int64, __int64))v9)(a1, v3);
        v4 = v15.m128i_u32[0];
        v7 = v16;
        v8 = v14;
      }
      while ( 1 )
      {
        if ( !v7 )
          return 0;
        if ( v8 == v15.m128i_i32[1] )
        {
          v17 = _mm_load_si128(&v15);
          v18 = v16;
        }
        else
        {
          (*(void (__fastcall **)(__m128i *, __int64, __int64, _QWORD, __m128i *))(*(_QWORD *)v7 + 112LL))(
            &v17,
            v7,
            v4,
            (unsigned int)v8,
            &v15);
        }
        if ( (v17.m128i_i32[1] | v17.m128i_i32[0]) < 0 || !v18 )
          return 0;
        v10 = (*(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)a1 + 312LL))(a1, &v17) & 0x40000000;
        if ( v8 <= 0 || !v10 )
          break;
        v4 = v15.m128i_u32[0];
        v7 = v16;
        v8 = 0;
      }
      v11 = (*(unsigned int (__fastcall **)(__int64, __m128i *))(*(_QWORD *)a1 + 312LL))(a1, &v17) >> 1;
      v12 = v11 & 1;
      result = v11 & (a2 != nullptr);
      if ( result )
      {
        v13 = v18;
        *a2 = _mm_load_si128(&v17);
        a2[1].m128i_i64[0] = v13;
      }
      else
      {
        return v12;
      }
    }
  }
  return result;
}
