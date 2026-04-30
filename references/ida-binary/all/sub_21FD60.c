__int64 __fastcall sub_21FD60(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  const char *v14; // rax
  char *v15; // rbx
  size_t v16; // rax
  double v17; // xmm4_8
  double v18; // xmm5_8
  size_t v19; // rbp
  size_t v21; // r12
  void *v22; // rdi
  char v23; // [rsp+0h] [rbp-18h]

  v14 = (const char *)sub_17CD60(
                        0,
                        (int)qword_8CB660,
                        (int)"Please select the binary trace to load",
                        a12,
                        a13,
                        a14,
                        a1,
                        a2,
                        a3,
                        a4,
                        a5,
                        a6,
                        a7,
                        a8,
                        v23);
  if ( !v14 )
    return 0;
  v15 = (char *)v14;
  v16 = strlen(v14);
  v19 = v16;
  if ( v16 )
  {
    v21 = v16 + 1;
    v22 = qword_8CB660;
    if ( *((_QWORD *)&xmmword_8CB668 + 1) < v16 + 1 )
    {
      qword_8CB660 = (void *)qvector_reserve(&qword_8CB660, qword_8CB660, v16 + 1, 1);
      v22 = qword_8CB660;
    }
    *(_QWORD *)&xmmword_8CB668 = v21;
    memmove(v22, v15, v19);
    *((_BYTE *)qword_8CB660 + v19) = 0;
  }
  else
  {
    *(_QWORD *)&xmmword_8CB668 = 0;
  }
  return sub_21FB60(xmmword_8CB900, v15, *(double *)a1.m128_u64, a2, a3, a4, v17, v18, a7, a8);
}
