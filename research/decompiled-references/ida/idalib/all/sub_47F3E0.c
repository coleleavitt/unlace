__m128i *__fastcall sub_47F3E0(__m128i *a1, __int64 a2)
{
  __m128i *v2; // rbx
  __int64 v3; // rax

  v2 = a1 + 3;
  v3 = switch_dbctx(a1->m128i_i32[2]);
  if ( (unsigned int)sub_3BD970(*(__int64 **)(v3 + 1672), a1 + 3, a2) == -1 )
    return nullptr;
  return v2;
}
