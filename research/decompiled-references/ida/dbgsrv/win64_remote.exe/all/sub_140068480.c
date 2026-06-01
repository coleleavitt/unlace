/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140068480
// Address: 0x0000000140068480

//----- (0000000140068480) ----------------------------------------------------
__int8 *__fastcall sub_140068480(_BYTE *a1)
{
  __m128i *v1; // rax
  __m128i *v2; // rdx
  __int8 *result; // rax

  if ( !a1 )
    return nullptr;
  v1 = (__m128i *)sub_14005D9D0(a1);
  v2 = sub_14006CA94(v1, 0x2Eu);
  result = nullptr;
  if ( v2 )
    return &v2->m128i_i8[1];
  return result;
}
