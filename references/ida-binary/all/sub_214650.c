__int64 __fastcall sub_214650(
        _QWORD *a1,
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
  const char *v15; // rax
  const char *v16; // rbx
  size_t v17; // rax
  size_t v18; // rbp
  __int64 v19; // rdx
  double v20; // xmm4_8
  double v21; // xmm5_8
  double v22; // xmm0_8
  const char *v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // ebp
  __int64 v27; // r8
  __int64 v28; // r9
  __m128 v29; // xmm4
  __m128 v30; // xmm5
  const char *v31; // rsi
  const char *v32; // rsi
  size_t v33; // r15
  void *v34; // rdi
  const char *v36; // [rsp+0h] [rbp-78h] BYREF
  __int128 v37; // [rsp+8h] [rbp-70h]
  const char *v38; // [rsp+20h] [rbp-58h] BYREF
  __int128 v39; // [rsp+28h] [rbp-50h]
  unsigned __int64 v40; // [rsp+38h] [rbp-40h]

  v40 = __readfsqword(0x28u);
  do
  {
    v15 = (const char *)sub_17CD60(
                          1u,
                          (int)qword_8CB660,
                          (int)"FILTER Trace files|*.trc\nSave trace file",
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
                          (char)v36);
    v16 = v15;
    if ( !v15 )
      return 0;
    v17 = strlen(v15);
    v18 = v17;
    if ( v17 )
    {
      v33 = v17 + 1;
      v34 = qword_8CB660;
      if ( *((_QWORD *)&xmmword_8CB668 + 1) < v17 + 1 )
      {
        v34 = (void *)qvector_reserve(&qword_8CB660, qword_8CB660, v33, 1);
        qword_8CB660 = v34;
      }
      *(_QWORD *)&xmmword_8CB668 = v33;
      memmove(v34, v16, v18);
      *((_BYTE *)qword_8CB660 + v18) = 0;
    }
    else
    {
      *(_QWORD *)&xmmword_8CB668 = 0;
    }
  }
  while ( (unsigned __int8)qfileexist(v16)
       && (unsigned int)sub_1698A0(0, (int)"HIDECANCEL\nFile %s already exists, overwrite?", v16) != 1 );
  v37 = 0;
  if ( !(unsigned int)sub_1697D0(
                        (int)"Trace description\n<Enter ~d~escription (or leave empty):q:128:30:::>\n",
                        (__int64)&v36,
                        v19,
                        a12,
                        a13,
                        a14,
                        (__m128)0LL,
                        a3,
                        a4,
                        a5,
                        a6,
                        a7,
                        a8,
                        a9,
                        0)
    && v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36, (const char *)&v36);
    v36 = nullptr;
    *((_QWORD *)&v37 + 1) = 0;
  }
  v22 = 0.0;
  v38 = nullptr;
  v23 = &s1;
  v39 = 0;
  if ( (_QWORD)v37 )
    v23 = v36;
  v26 = sub_214320(a1, (__int64)v16, (__int64)v23, 0, (__int64 *)&v38, 0.0, a3, a4, a5, v20, v21, a8, a9);
  if ( (_BYTE)v26 )
  {
    v31 = &s1;
    if ( (_QWORD)v37 )
      v31 = v36;
    sub_20B400((__int64 *)(a1[1] + 304LL), v31);
    v32 = v16;
    sub_20B400((__int64 *)(a1[1] + 328LL), v16);
  }
  else
  {
    v32 = &s1;
    if ( (_QWORD)v39 )
    {
      v32 = v38;
      sub_169630((int)"%s", (__int64)v38, v24, v25, v27, v28, (__m128)0LL, a3, a4, a5, v29, v30, a8, a9, (char)v36);
    }
    else
    {
      sub_169630((int)"%s", (__int64)&s1, v24, v25, v27, v28, (__m128)0LL, a3, a4, a5, v29, v30, a8, a9, (char)v36);
    }
  }
  if ( v38 )
  {
    *(_QWORD *)&v39 = 0;
    v22 = qfree(v38, v32);
  }
  if ( v36 )
  {
    *(_QWORD *)&v37 = 0;
    qfree(v36, v32, v22);
  }
  return v26;
}
