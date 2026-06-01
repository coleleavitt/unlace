__int64 __fastcall sub_1685C00(__int64 a1, __int64 a2, __m128i a3)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  char v8; // dl
  unsigned int v9; // ecx
  __int64 v11; // [rsp+8h] [rbp-30h] BYREF
  __m128i v12[2]; // [rsp+10h] [rbp-28h] BYREF

  v5 = (unsigned int)sub_BF7FE0(a2);
  if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
  {
    v6 = *(_QWORD *)(a2 + 32);
    if ( v6 )
    {
      v11 = *(_QWORD *)(a2 + 40);
      a3 = (__m128i)_mm_loadh_ps((const double *)&v11);
      v12[0] = a3;
      v7 = *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v7 )
      {
        v12[0].m128i_i64[0] = *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v8 = 0;
        while ( (*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        {
          v8 = 1;
          v7 = *(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        }
        if ( v8 )
          v12[0].m128i_i64[0] = v7;
      }
      v9 = sub_E90530(v12[0].m128i_i64);
    }
    else
    {
      v9 = 0;
    }
  }
  else
  {
    v9 = *(_DWORD *)(a2 + 4);
  }
  sub_16841F0(a1, *(_QWORD **)(a2 + 16), (v5 << 32) | v9, 0, v3, v4, a3);
  return 1;
}
