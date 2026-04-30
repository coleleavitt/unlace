__int64 __fastcall sub_303A10(
        __int64 a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  const char *v9; // rbx
  size_t v10; // rax
  size_t v11; // r13
  size_t v12; // rbp
  double v13; // xmm0_8
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  __m128 v19; // xmm4
  __m128 v20; // xmm5
  const char *v21; // rsi
  const char *v23; // [rsp+0h] [rbp-B8h] BYREF
  __int128 v24; // [rsp+8h] [rbp-B0h]
  void *v25; // [rsp+20h] [rbp-98h] BYREF
  __int128 v26; // [rsp+28h] [rbp-90h]
  __int64 v27; // [rsp+38h] [rbp-80h]
  __int128 v28; // [rsp+40h] [rbp-78h]
  __int64 v29; // [rsp+50h] [rbp-68h]
  __int128 v30; // [rsp+58h] [rbp-60h]
  __int64 v31; // [rsp+68h] [rbp-50h]
  __int128 v32; // [rsp+70h] [rbp-48h]
  unsigned __int64 v33; // [rsp+88h] [rbp-30h]

  v9 = &s1;
  v33 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 8) )
    v9 = *(const char **)a1;
  v25 = nullptr;
  v26 = 0;
  if ( v9 )
  {
    v10 = strlen(v9);
    v11 = v10 + 1;
    v12 = v10;
    v25 = (void *)qvector_reserve(&v25, 0, v10 + 1, 1);
    *(_QWORD *)&v26 = v11;
    memmove(v25, v9, v12);
    *((_BYTE *)v25 + v12) = 0;
  }
  v13 = 0.0;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  v23 = nullptr;
  v28 = 0;
  v30 = 0;
  v32 = 0;
  v24 = 0;
  v16 = sub_52EA50(&v25, &v23);
  if ( (_BYTE)v16 )
  {
    sub_52B340(&qword_8CAE60, &v25);
    v21 = (const char *)&qword_8CAE60;
    (*(void (__fastcall **)(_QWORD *, void **))(*QT::QCoreApplication::self + 232LL))(
      QT::QCoreApplication::self,
      &qword_8CAE60);
  }
  else
  {
    v21 = &s1;
    if ( (_QWORD)v24 )
      v21 = v23;
    sub_169700(
      (int)"NOTE: Couldn't load theme: %s\n",
      (__int64)v21,
      v14,
      v15,
      v17,
      v18,
      (__m128)0LL,
      a3,
      a4,
      a5,
      v19,
      v20,
      a8,
      a9,
      (char)v23);
  }
  if ( v23 )
  {
    *(_QWORD *)&v24 = 0;
    v13 = qfree(v23, v21);
  }
  if ( v31 )
  {
    *(_QWORD *)&v32 = 0;
    v13 = qfree(v31, v21, v13);
  }
  if ( v29 )
  {
    *(_QWORD *)&v30 = 0;
    v13 = qfree(v29, v21, v13);
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    v13 = qfree(v27, v21, v13);
  }
  if ( v25 )
  {
    *(_QWORD *)&v26 = 0;
    qfree(v25, v21, v13);
  }
  return v16;
}
