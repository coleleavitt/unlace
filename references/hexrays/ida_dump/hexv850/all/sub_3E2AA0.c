__int64 __fastcall sub_3E2AA0(__m128i *a1, __int64 a2, int a3, int a4, __m128 a5)
{
  __int64 v7; // rax
  __int64 v8; // rbp

  sub_3E0560(a1);
  if ( a1[67].m128i_i16[2] != 40 )
    goto LABEL_8;
  sub_3E0560(a1);
  v7 = sub_3E0640((__int64)a1, a3);
  *(_BYTE *)a2 = 4;
  *(_QWORD *)(a2 + 8) = v7;
  v8 = v7;
  if ( a3 > 62 )
    *(_DWORD *)(v7 + 4) |= 0x10u;
  sub_3E1DD0(a1, v7 + 32, 1, a5);
  if ( !a4 )
    a4 = *(_DWORD *)(v8 + 36);
  *(_DWORD *)(v8 + 68) = a4;
  *(_DWORD *)(a2 + 4) = a4;
  if ( a1[67].m128i_i16[2] != 41 )
LABEL_8:
    sub_5AD18(*(double *)a5.m128_u64);
  return sub_3E0560(a1);
}
