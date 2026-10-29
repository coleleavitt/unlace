__int64 __fastcall Z3_mk_transitive_closure(__int64 a1, const __m128i *a2)
{
  char v3; // r12
  __m128i v4; // xmm0
  __int64 v5; // rdi
  int v6; // esi
  __int64 v7; // r15
  const __m128i *v9; // [rsp+10h] [rbp-50h] BYREF
  char v10; // [rsp+18h] [rbp-48h]
  __m128i v11[4]; // [rsp+20h] [rbp-40h] BYREF

  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_298AF0();
  v4 = _mm_loadu_si128(a2 + 3);
  v9 = a2;
  v10 = 1;
  v5 = *(_QWORD *)(a1 + 232);
  v6 = *(_DWORD *)(a1 + 1472);
  v11[0] = v4;
  *(_DWORD *)(a1 + 1520) = 0;
  v7 = sub_15D2D10(v5, v6, 4, 1, (unsigned int)&v9, 2, (__int64)v11, 0);
  sub_251FD0(a1, v7);
  if ( v3 )
  {
    sub_2BB620(v7);
    sub_15D0DF0(&v9);
    byte_1C7EBA0 = 1;
  }
  else
  {
    sub_15D0DF0(&v9);
  }
  return v7;
}

