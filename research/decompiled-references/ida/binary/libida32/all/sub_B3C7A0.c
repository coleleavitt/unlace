void __fastcall sub_B3C7A0(__m128 *a1, _BYTE *a2, _BYTE *a3, __int64 a4, char a5)
{
  _BYTE *v5; // rsi
  _BYTE *v6; // rax
  double v7[2]; // [rsp+0h] [rbp-10h] BYREF

  *(_QWORD *)&v7[0] = a3;
  *a1 = _mm_loadh_ps(v7);
  if ( !a5 && a2 != a3 && *a2 >= 0xFEu )
  {
    v5 = a2 + 128;
    do
    {
      v6 = v5;
      a1->m128_u64[0] = (unsigned __int64)v5;
      if ( a3 == v5 )
        break;
      v5 += 128;
    }
    while ( *v6 >= 0xFEu );
  }
}

