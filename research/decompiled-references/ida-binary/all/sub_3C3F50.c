__int64 __fastcall sub_3C3F50(__int64 *a1)
{
  __int64 v2; // rax
  __m128i si128; // xmm0
  int v4; // r9d
  const char *v5; // rsi
  double v6; // xmm0_8
  unsigned int v7; // ebp
  int v8; // eax
  const char *v10; // rax
  const char *v11; // rbp
  size_t v12; // rax
  size_t v13; // r13
  void *v14; // rdi
  size_t v15; // r14
  __int64 v16; // rax
  __int64 v17; // [rsp+0h] [rbp-8h] BYREF
  __int128 vars0; // [rsp+8h] [rbp+0h]
  _QWORD vars18[32]; // [rsp+20h] [rbp+18h] BYREF
  __int64 vars118; // [rsp+120h] [rbp+118h]
  __int64 vars120; // [rsp+128h] [rbp+120h]
  __int64 vars128; // [rsp+130h] [rbp+128h]
  __int64 vars138; // [rsp+140h] [rbp+138h]
  unsigned __int64 vars140; // [rsp+148h] [rbp+140h]
  __int64 vars150; // [rsp+158h] [rbp+150h]
  __int64 vars158; // [rsp+160h] [rbp+158h]
  __int64 vars168; // [rsp+170h] [rbp+168h]
  __int64 vars170; // [rsp+178h] [rbp+170h]
  unsigned __int64 vars180; // [rsp+188h] [rbp+180h]

  vars180 = __readfsqword(0x28u);
  v17 = 0;
  vars0 = 0;
  v2 = qvector_reserve(&v17, 0, 25, 1);
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DD6F0);
  v17 = v2;
  *(_QWORD *)&vars0 = 25;
  *(_QWORD *)(v2 + 16) = 0x7365697261726269LL;
  *(__m128i *)v2 = si128;
  *(_BYTE *)(v17 + 24) = 0;
  sub_3C38E0(vars18, (const char *)&v17);
  if ( v17 )
  {
    *(_QWORD *)&vars0 = 0;
    qfree(v17, (const char *)&v17);
  }
  v5 = nullptr;
  v6 = callui(203, 0, (unsigned int)vars18, (unsigned int)&v17, (unsigned int)&callui, v4, 0, 0, 0);
  v7 = 0;
  if ( v8 == 1 && vars140 > 1 )
  {
    v10 = (const char *)qstrdup(vars138);
    v11 = v10;
    if ( v10 && (v12 = strlen(v10), (v13 = v12) != 0) )
    {
      v14 = (void *)*a1;
      v15 = v12 + 1;
      if ( a1[2] < v12 + 1 )
      {
        v16 = qvector_reserve(a1, *a1, v12 + 1, 1);
        *a1 = v16;
        v14 = (void *)v16;
      }
      a1[1] = v15;
      v5 = v11;
      memmove(v14, v11, v13);
      *(_BYTE *)(*a1 + v13) = 0;
    }
    else
    {
      a1[1] = 0;
    }
    v7 = 1;
  }
  if ( v17 )
  {
    *(_QWORD *)&vars0 = 0;
    v6 = qfree(v17, v5, v6);
  }
  vars18[0] = &tos_dialog_t___vtable;
  if ( vars118 )
    (*(void (__fastcall **)(__int64, double))(*(_QWORD *)vars118 + 8LL))(vars118, v6);
  if ( vars168 )
  {
    vars170 = 0;
    v6 = qfree(vars168, v5, v6);
  }
  if ( vars150 )
  {
    vars158 = 0;
    v6 = qfree(vars150, v5, v6);
  }
  if ( vars138 )
  {
    vars140 = 0;
    v6 = qfree(vars138, v5, v6);
  }
  if ( vars120 )
  {
    vars128 = 0;
    qfree(vars120, v5, v6);
  }
  forms::dialog_desc_t__::vfunc_0(vars18, v5);
  return v7;
}
