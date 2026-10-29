__int64 __fastcall sub_14C4D40(const __m128i *a1, __m128i a2)
{
  __int64 v2; // rbp
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  unsigned int v6; // edx
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx

  v2 = a1[6].m128i_i64[0];
  sub_18C74E0(v2, 4, 0, 4);
  *(_BYTE *)(*(_QWORD *)(a1[6].m128i_i64[0] + 4616) + 640LL * *(unsigned int *)(a1[6].m128i_i64[0] + 4624) - 40) = 1;
  v3 = a1[6].m128i_i64[0];
  v4 = *(_QWORD *)(v3 + 4616);
  v5 = v4 + 640LL * *(unsigned int *)(v3 + 4624) - 640;
  if ( v5 != v4 )
  {
    v6 = *(_DWORD *)(v5 - 640);
    if ( v6 <= 1 || v6 == 3 )
    {
      v7 = v5 - 640;
      do
      {
        *(_BYTE *)(v7 + 600) = 1;
        if ( *(_QWORD *)(a1[6].m128i_i64[0] + 4616) == v7 )
          break;
        v8 = *(_DWORD *)(v7 - 640);
        v7 -= 640;
      }
      while ( v8 <= 1 || v8 == 3 );
    }
  }
  v9 = sub_14BDA20((__int64)a1, 0, 0, 0, 0, nullptr, a2);
  v10 = sub_14BE680(a1, v9, 3, a2);
  v11 = sub_19146D0(a1[6].m128i_i64[0], v10);
  sub_190D5E0(v2);
  return v11;
}
