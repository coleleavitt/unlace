__int64 __fastcall sub_1455F40(__int64 a1, _BYTE *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  __int64 v8; // rax
  __m128i si128; // xmm0
  __int64 v10; // rdi

  v5 = *(_QWORD *)(a1 + 696);
  if ( a3 )
  {
    v8 = sub_1452D80(*(_QWORD *)(a1 + 696), (__int64)a2, a3, 1);
    if ( v8 )
    {
      v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 24LL))(v8);
    }
    else
    {
      v5 = operator new(0x40u);
      *(_QWORD *)v5 = &unk_2C446A0;
      *(_QWORD *)(v5 + 8) = v5 + 24;
      sub_144EF90((_QWORD *)(v5 + 8), a2, (__int64)&a2[a3]);
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D60);
      *(_QWORD *)(v5 + 40) = 0;
      v10 = *(_QWORD *)(a1 + 696);
      *(__m128i *)(v5 + 48) = si128;
      *(_QWORD *)v5 = &off_2BB2C80;
      sub_1455E10(v10, v5);
    }
  }
  return sub_1455E10(v5, a4);
}
