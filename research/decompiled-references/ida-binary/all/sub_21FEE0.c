__int64 __fastcall sub_21FEE0(
        __int64 *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        double a11,
        double a12,
        __m128 a13,
        __m128 a14)
{
  unsigned int v15; // ebp
  char *v17; // r13
  size_t v18; // rax
  size_t v19; // r12
  void *v20; // rdi
  size_t v21; // r14
  __int64 v22; // rax

  if ( qword_8CB7C0 != qword_8CB7A0 )
  {
    sub_20FD20((__int64)qword_8CBAA0, (__int64)xmmword_8CB760, a3, a4, a5, a6);
    sub_20F9A0(xmmword_8CB760);
  }
  v15 = sub_21FB60((const __m128i *)qword_8CBAA0, a2, a7, a8, a9, a10, a11, a12, a13, a14) & 1;
  if ( !a1 || !(_BYTE)v15 )
    return v15;
  if ( !qword_8CBBD8 || (v17 = src) == nullptr || (v18 = strlen(src), (v19 = v18) == 0) )
  {
    a1[1] = 0;
    return v15;
  }
  v20 = (void *)*a1;
  v21 = v18 + 1;
  if ( a1[2] < v18 + 1 )
  {
    v22 = qvector_reserve(a1, *a1, v18 + 1, 1);
    *a1 = v22;
    v20 = (void *)v22;
  }
  a1[1] = v21;
  memmove(v20, v17, v19);
  *(_BYTE *)(*a1 + v19) = 0;
  return v15;
}
