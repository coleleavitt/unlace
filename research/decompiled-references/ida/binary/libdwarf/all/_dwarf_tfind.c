const __m128i *__fastcall dwarf_tfind(__int64 a1, const __m128i **a2, unsigned int (__fastcall *a3)(__int64, _QWORD))
{
  const __m128i *result; // rax
  int v4; // [rsp+Ch] [rbp-1Ch] BYREF
  _QWORD v5[3]; // [rsp+10h] [rbp-18h] BYREF

  v5[1] = __readfsqword(0x28u);
  result = *a2;
  if ( *a2 )
    return (const __m128i *)sub_59C60(a1, *a2, a3, 1, &v4, v5);
  return result;
}

