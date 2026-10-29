__int64 __fastcall sub_137CF0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11,
        __m128 a12,
        __m128 a13,
        __m128 a14)
{
  const char *v14; // r13
  __int64 v15; // r12
  __int64 i; // rbx
  char v18; // [rsp+0h] [rbp-28h]

  v14 = *(const char **)(a1 + 184);
  if ( v14 || (v14 = (const char *)qword_251660) != nullptr )
  {
    v15 = *(_QWORD *)(a1 + 216);
    if ( v15 )
    {
      for ( i = 0; i != v15; ++i )
        qfree();
    }
    if ( *(_QWORD *)(a1 + 208) )
    {
      *(_QWORD *)(a1 + 216) = 0;
      qfree();
      *(_QWORD *)(a1 + 208) = 0;
      *(_QWORD *)(a1 + 224) = 0;
    }
    sub_10DDF0((__int64)"Searching", a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, v18);
    sub_136EA0(
      v14,
      (_BYTE *)&dword_0 + 1,
      *(_DWORD *)(a1 + 192),
      (__int64 (__fastcall *)(__int64 (***)(), const char *, __int64 (***)(), __int64))sub_134870,
      (__int64 (***)())a1);
    sub_10D850();
  }
  else
  {
    sub_8F660((__int64)"No view to search\n");
  }
  return 1;
}

