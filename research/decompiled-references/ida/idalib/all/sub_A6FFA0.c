char *__fastcall sub_A6FFA0(void ***a1, const __m128i *a2, char *a3, char *a4)
{
  signed __int64 v4; // rbx

  v4 = (char *)a2 - (char *)*a1;
  sub_A6F970(a1, a2, a3, a4);
  return (char *)*a1 + v4;
}
