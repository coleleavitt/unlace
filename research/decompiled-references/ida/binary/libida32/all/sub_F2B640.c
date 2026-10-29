void __fastcall sub_F2B640(__int64 a1, const __m128i *a2)
{
  __int64 v3; // rbp
  size_t v4; // r12
  void *v5; // rdi
  __int64 v6[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *(_QWORD *)(a1 + 1096);
  v4 = j__strlen(" template");
  v5 = *(void **)(v3 + 32);
  if ( v4 > *(_QWORD *)(v3 + 24) - (_QWORD)v5 )
  {
    sub_22581D0(v3, " template", v4);
  }
  else if ( v4 )
  {
    memcpy(v5, " template", v4);
    *(_QWORD *)(v3 + 32) += v4;
  }
  sub_F071F0(a1, a2);
  sub_EFED50(v6, a2->m128i_i64[1]);
  sub_F299B0(a1, v6[0]);
}

