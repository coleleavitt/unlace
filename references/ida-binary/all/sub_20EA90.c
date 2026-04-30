__int64 __fastcall sub_20EA90(
        __int64 *a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  const char *v15; // rbx
  __int64 result; // rax
  size_t v17; // rax
  size_t v18; // rbp
  size_t v19; // rax
  size_t v20; // rbp
  size_t v21; // r12
  void *v22; // rdi
  void *v23; // rdi
  size_t v24; // r13
  __int64 v25; // rax
  char v26; // [rsp+0h] [rbp-28h]

  v15 = (const char *)sub_17CD60(
                        0,
                        (int)qword_8CB660,
                        (int)"FILTER Trace files|*.trc\nPlease select a trace",
                        a12,
                        a13,
                        a14,
                        a2,
                        a3,
                        a4,
                        a5,
                        a6,
                        a7,
                        a8,
                        a9,
                        v26);
  result = 0;
  if ( v15 )
  {
    v17 = strlen(v15);
    v18 = v17;
    if ( v17 )
    {
      v23 = (void *)*a1;
      v24 = v17 + 1;
      if ( a1[2] < v17 + 1 )
      {
        v25 = qvector_reserve(a1, *a1, v17 + 1, 1);
        *a1 = v25;
        v23 = (void *)v25;
      }
      a1[1] = v24;
      memmove(v23, v15, v18);
      *(_BYTE *)(*a1 + v18) = 0;
    }
    else
    {
      a1[1] = 0;
    }
    v19 = strlen(v15);
    v20 = v19;
    if ( v19 )
    {
      v21 = v19 + 1;
      v22 = qword_8CB660;
      if ( *((_QWORD *)&xmmword_8CB668 + 1) < v19 + 1 )
      {
        qword_8CB660 = (void *)qvector_reserve(&qword_8CB660, qword_8CB660, v19 + 1, 1);
        v22 = qword_8CB660;
      }
      *(_QWORD *)&xmmword_8CB668 = v21;
      memmove(v22, v15, v20);
      *((_BYTE *)qword_8CB660 + v20) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_8CB668 = 0;
    }
    return 1;
  }
  return result;
}
