__int64 __fastcall sub_3E6EF0(
        __int64 a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v11; // r12
  double v12; // xmm0_8
  __int64 v13; // rbx
  size_t v14; // rax
  size_t v15; // r15
  size_t v16; // r14
  bool v17; // zf
  char *v18; // r14
  size_t v19; // rax
  size_t v20; // r13
  void *v21; // rdi
  size_t v22; // r15
  const char *v23; // rsi
  __int64 v24; // rax
  const char *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128 v30; // xmm4
  __m128 v31; // xmm5
  _DWORD *v32; // rsi
  __int64 v34; // rax
  char *s; // [rsp+0h] [rbp-58h] BYREF
  __int128 v36; // [rsp+8h] [rbp-50h]
  unsigned __int64 v37; // [rsp+18h] [rbp-40h]

  v37 = __readfsqword(0x28u);
  v11 = QT::QAbstractItemView::model((QT::QAbstractItemView *)a1);
  v12 = 0.0;
  s = nullptr;
  v13 = operator new(0x180u);
  v36 = 0;
  if ( a2 )
  {
    v14 = strlen(a2);
    v15 = v14 + 1;
    v16 = v14;
    s = (char *)qvector_reserve(&s, 0, v14 + 1, 1);
    *(_QWORD *)&v36 = v15;
    memmove(s, a2, v16);
    s[v16] = 0;
  }
  sub_3DE430(v13, v11, 2);
  v17 = (_QWORD)v36 == 0;
  *(_BYTE *)(v13 + 372) = 0;
  *(_QWORD *)v13 = &expr_node_t___vtable;
  *(_DWORD *)(v13 + 376) = -1;
  if ( !v17 && (v18 = s) != nullptr && (v19 = strlen(s), (v20 = v19) != 0) )
  {
    v21 = *(void **)(v13 + 80);
    v22 = v19 + 1;
    if ( *(_QWORD *)(v13 + 96) < v19 + 1 )
    {
      v34 = qvector_reserve(v13 + 80, *(_QWORD *)(v13 + 80), v22, 1);
      *(_QWORD *)(v13 + 80) = v34;
      v21 = (void *)v34;
    }
    *(_QWORD *)(v13 + 88) = v22;
    memmove(v21, v18, v20);
    *(_BYTE *)(*(_QWORD *)(v13 + 80) + v20) = 0;
  }
  else
  {
    *(_QWORD *)(v13 + 88) = 0;
  }
  *(_DWORD *)(v13 + 376) = -1;
  clear_tinfo_t(v13 + 72);
  v23 = &s1;
  if ( *(_QWORD *)(v13 + 88) )
    v23 = *(const char **)(v13 + 80);
  v24 = sub_3DEE10(v13, (__int64)v23);
  if ( v24 )
  {
    v25 = &s1;
    if ( *(_QWORD *)(v13 + 88) )
      v25 = *(const char **)(v13 + 80);
    *(_DWORD *)(v13 + 376) = v24 - (_DWORD)v25;
  }
  if ( s )
  {
    *(_QWORD *)&v36 = 0;
    v12 = qfree(s, v23);
  }
  sub_3E2C20(*(__int64 **)(v11 + 32), v13, *(_DWORD *)(*(_QWORD *)(v11 + 32) + 24LL));
  v32 = nullptr;
  if ( *(_QWORD *)(a1 + 1128) > 1u )
    v32 = (_DWORD *)sub_233670(*(char **)(a1 + 1120));
  return sub_3E5E80(v13, v32, v12, a4, a5, a6, v30, v31, a9, a10, v26, v27, v28, v29);
}
