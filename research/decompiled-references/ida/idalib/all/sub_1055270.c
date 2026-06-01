__int64 *__fastcall sub_1055270(__int64 *a1, const __m128i *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdx

  v2 = operator new(0x258u);
  sub_1054F20(v2, a2, v3);
  *(_QWORD *)v2 = &off_2C15ED0;
  *(_QWORD *)(v2 + 328) = "__mcount";
  if ( (unsigned int)(a2[2].m128i_i32[0] - 37) <= 1 )
    *(_BYTE *)(v2 + 278) = 1;
  *a1 = v2;
  return a1;
}
