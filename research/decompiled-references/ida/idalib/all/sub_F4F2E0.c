void __fastcall sub_F4F2E0(__int64 a1, const __m128i *a2)
{
  __int64 v3; // rbp
  size_t v4; // r12
  void *v5; // rdi
  __int64 v6[6]; // [rsp+8h] [rbp-30h] BYREF

  v3 = *(_QWORD *)(a1 + 1096);
  v4 = j__strlen(" template expansion");
  v5 = *(void **)(v3 + 32);
  if ( v4 > *(_QWORD *)(v3 + 24) - (_QWORD)v5 )
  {
    sub_227BF10(v3, " template expansion", v4);
  }
  else if ( v4 )
  {
    memcpy(v5, " template expansion", v4);
    *(_QWORD *)(v3 + 32) += v4;
  }
  sub_F2AF30(a1, a2);
  sub_F22A90(v6, a2->m128i_i64[1]);
  sub_F4D6F0(a1, v6[0]);
}
