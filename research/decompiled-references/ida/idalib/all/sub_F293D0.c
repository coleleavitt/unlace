__int64 __fastcall sub_F293D0(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  size_t v4; // r13
  void *v5; // rdi
  __int64 v6; // rbx
  size_t v7; // r13
  void *v8; // rdi
  __int64 result; // rax
  __m128i v10[3]; // [rsp+0h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 1096);
  v4 = j__strlen(" ");
  v5 = *(void **)(v3 + 32);
  if ( v4 > *(_QWORD *)(v3 + 24) - (_QWORD)v5 )
  {
    v3 = sub_227BF10(v3, " ", v4);
  }
  else if ( v4 )
  {
    memcpy(v5, " ", v4);
    *(_QWORD *)(v3 + 32) += v4;
  }
  v10[0] = _mm_loadu_si128((const __m128i *)(a2 + 40));
  sub_2257710(v3, v10);
  v6 = *(_QWORD *)(a1 + 1096);
  v7 = j__strlen(" ");
  v8 = *(void **)(v6 + 32);
  if ( v7 > *(_QWORD *)(v6 + 24) - (_QWORD)v8 )
  {
    v6 = sub_227BF10(v6, " ", v7);
  }
  else if ( v7 )
  {
    memcpy(v8, " ", v7);
    *(_QWORD *)(v6 + 32) += v7;
  }
  result = sub_227B910(v6, *(unsigned int *)(a2 + 56));
  if ( *(_BYTE *)(a2 + 60) )
    return sub_995540(*(_QWORD *)(a1 + 1096), " IsReplacedByActive");
  return result;
}
