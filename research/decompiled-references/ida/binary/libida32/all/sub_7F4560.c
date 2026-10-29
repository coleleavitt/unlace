_QWORD *__fastcall sub_7F4560(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  bool v6; // zf

  v1 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 128))(*(_QWORD *)(a1 + 144), 1, 120);
  if ( v1 )
  {
    v2 = (_QWORD *)v1;
    *(__m128i *)(v1 + 40) = _mm_load_si128((const __m128i *)&xmmword_2384750);
    v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 128))(*(_QWORD *)(a1 + 144), 511, 56);
    if ( !v3 )
      *(_QWORD *)(a1 + 64) = "out of memory";
    v2[12] = v3;
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(a1 + 128))(*(_QWORD *)(a1 + 144), v2[6], 8);
    if ( !v4 )
      *(_QWORD *)(a1 + 64) = "out of memory";
    v2[8] = v4;
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 128))(*(_QWORD *)(a1 + 144), 256, 4);
    if ( v5 )
    {
      v6 = v2[12] == 0;
      v2[7] = v5;
      if ( !v6 && v2[8] )
      {
        *v2 = 256;
        return v2;
      }
    }
    else
    {
      *(_QWORD *)(a1 + 64) = "out of memory";
      v2[7] = 0;
    }
    sub_7F44E0(a1, v2);
  }
  else
  {
    *(_QWORD *)(a1 + 64) = "out of memory";
  }
  return nullptr;
}

