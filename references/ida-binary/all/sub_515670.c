__int64 __fastcall sub_515670(__int64 a1, __m128d a2)
{
  __m128i *v2; // rbx
  __int64 result; // rax
  int v4; // eax

  v2 = *(__m128i **)(a1 + 256);
  result = 0;
  if ( v2 )
  {
    v4 = -(int)sub_513A70(*(_QWORD *)(a1 + 256), a2);
    if ( v4 )
      sub_5153D0(v2, v4);
    return 1;
  }
  return result;
}
