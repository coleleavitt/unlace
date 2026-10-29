__int64 (__fastcall **__fastcall sub_3D7350(__int64 a1))()
{
  __m128i v1; // xmm0
  __int64 v3; // rdx
  __int64 v4; // r12
  __int64 i; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 (__fastcall **result)(); // rax

  v1 = _mm_loadl_epi64((const __m128i *)off_4E8988);
  v3 = *(_QWORD *)(a1 + 248);
  *(_QWORD *)a1 = &unk_4EBA00;
  *(_QWORD *)(a1 + 32) = &unk_4EBA38;
  *(__m128i *)(a1 + 216) = _mm_unpacklo_epi64(v1, (__m128i)(unsigned __int64)&off_4EBB10);
  *(__m128i *)(a1 + 232) = _mm_unpacklo_epi64(
                             _mm_loadl_epi64((const __m128i *)&off_4E8990),
                             (__m128i)(unsigned __int64)&off_4EBB40);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 256);
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = v3 + 32 * i;
        if ( *(_QWORD *)(v6 + 8) )
        {
          *(_QWORD *)(v6 + 16) = 0;
          qfree();
          v3 = *(_QWORD *)(a1 + 248);
        }
      }
    }
    *(_QWORD *)(a1 + 256) = 0;
    qfree();
  }
  v7 = a1 + 208;
  *(_QWORD *)(a1 + 32) = &unk_4EB238;
  v8 = a1 + 112;
  while ( v8 != v7 )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v7 - 24);
      v7 -= 24;
      if ( !v9 )
        break;
      *(_QWORD *)(v7 + 8) = 0;
      qfree();
      if ( v8 == v7 )
        goto LABEL_12;
    }
  }
LABEL_12:
  v10 = *(_QWORD *)(a1 + 8);
  result = &off_4E6AE8;
  *(_QWORD *)a1 = &off_4E6AE8;
  if ( v10 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    return (__int64 (__fastcall **)())qfree();
  }
  return result;
}
