void __fastcall sub_145D580(_QWORD *a1)
{
  __int64 v2; // rsi
  __m128i *v3; // rbp
  __int64 v4; // r12
  _QWORD *v5; // rax
  __int64 v6; // rdi

  if ( !a1[362] )
  {
    v2 = a1[11];
    v3 = (__m128i *)operator new(0xF0u);
    sub_14595F0(v3, v2);
    v4 = a1[149];
    a1[362] = v3;
    if ( v4 )
    {
      a1[149] = 0;
      v5 = (_QWORD *)operator new(0x18u);
      v6 = a1[149];
      v5[1] = v3;
      v5[2] = v4;
      *v5 = &off_2BB2860;
      a1[149] = v5;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    }
    else
    {
      a1[149] = v3;
    }
  }
}
