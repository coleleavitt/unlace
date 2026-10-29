__int64 __fastcall Z3_mk_tree_order(__int64 a1, unsigned __int64 a2, int a3)
{
  __m128i v3; // xmm1
  char v6; // r12
  __int64 v7; // rdi
  int v8; // esi
  __int64 v9; // r15
  __m128i v11; // [rsp-60h] [rbp-68h] BYREF
  int v12; // [rsp-50h] [rbp-58h] BYREF
  char v13; // [rsp-48h] [rbp-50h]
  __m128i v14; // [rsp-40h] [rbp-48h] BYREF

  v3 = _mm_unpacklo_epi64((__m128i)a2, (__m128i)a2);
  v6 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v6 )
  {
    v11 = v3;
    sub_298AB0(a1, a2);
    v3 = _mm_load_si128(&v11);
  }
  v7 = *(_QWORD *)(a1 + 232);
  v12 = a3;
  v13 = 0;
  v8 = *(_DWORD *)(a1 + 1472);
  v14 = v3;
  v9 = sub_15D2D10(v7, v8, 3, 1, (unsigned int)&v12, 2, (__int64)&v14, *(_QWORD *)(v7 + 840));
  sub_251FD0(a1, v9);
  if ( v6 )
  {
    sub_2BB620(v9);
    sub_15D0DF0(&v12);
    byte_1C7EBA0 = 1;
  }
  else
  {
    sub_15D0DF0(&v12);
  }
  return v9;
}

