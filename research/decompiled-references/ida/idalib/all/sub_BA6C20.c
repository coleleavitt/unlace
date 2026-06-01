void __fastcall sub_BA6C20(__m128i *a1, char *a2)
{
  __int64 v2; // rcx
  const __m128i *v3; // r13
  __int64 v4; // rbx

  if ( a2 - (char *)a1 <= 224 )
  {
    sub_BA6730(a1->m128i_i8, a2);
  }
  else
  {
    v2 = (a2 - (char *)a1) >> 5;
    v3 = &a1[v2];
    v4 = (16 * v2) >> 4;
    sub_BA6C20(a1, v3);
    sub_BA6C20(v3, a2);
    sub_BA6A00(a1, v3, (__int64)a2, v4, (a2 - (char *)v3) >> 4);
  }
}
