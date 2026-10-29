__int64 __fastcall sub_441000(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rdi
  double v4; // xmm0_8
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi
  _QWORD *v8; // r13
  _QWORD *v9; // r12
  __int64 v10; // rbp
  _QWORD *v12; // rax
  __m128i v13; // xmm0
  double v14; // xmm0_8
  __int64 v15; // rdx
  __int64 *v16; // rdi
  size_t v17; // r15
  const char *v18; // rdx
  const char *v19; // rax
  __int64 result; // rax
  void *v21; // rax
  const void *v22; // rsi
  bool v23; // zf
  struct _Unwind_Exception *v24; // rbp

  v8 = (_QWORD *)(a1 + 80);
  v9 = (_QWORD *)(a1 + 176);
  v10 = a2;
  *(_QWORD *)(a1 + 8) = 0x2008045000004LL;
  *(_OWORD *)(a1 + 16) = -1;
  v12 = (_QWORD *)(a1 + 80);
  v13 = _mm_loadl_epi64((const __m128i *)&off_86B540);
  *(_QWORD *)a1 = &stru_86F6A0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 48) = 8;
  *(_DWORD *)(a1 + 72) = -1;
  *(__m128i *)(a1 + 56) = _mm_unpacklo_epi64(v13, (__m128i)(unsigned __int64)&off_86B500);
  v14 = 0.0;
  do
  {
    *v12 = 0;
    v12 += 3;
    *((_OWORD *)v12 - 1) = 0;
  }
  while ( v9 != v12 );
  *(_DWORD *)(a1 + 176) = 0;
  v15 = *(unsigned int *)(a1 + 12);
  if ( ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) != 0 )
  {
    if ( *(_BYTE *)(a1 + 11) != 0xFF )
    {
      if ( !under_debugger )
      {
        v24 = (struct _Unwind_Exception *)interr(3449, a2, v15, ((*(_DWORD *)(a1 + 12) >> 19) & 0x3Fu) - 1, 0.0);
        v2 = *(_QWORD *)(a1 + 288);
        if ( v2 )
        {
          *(_QWORD *)(a1 + 296) = 0;
          v14 = qfree(v2, (const char *)a2);
        }
        v3 = *(_QWORD *)(a1 + 256);
        if ( v3 )
        {
          a2 = 0;
          *(_QWORD *)(a1 + 264) = 0;
          qfree(v3, nullptr, v14);
        }
        v4 = sub_43E330((__int64 *)(a1 + 232), (const char *)a2);
        v5 = *(_QWORD *)(a1 + 208);
        if ( v5 )
        {
          *(_QWORD *)(a1 + 216) = 0;
          v4 = qfree(v5, (const char *)a2, v4);
        }
        v6 = *(_QWORD *)(a1 + 184);
        if ( v6 )
        {
          *(_QWORD *)(a1 + 192) = 0;
          v4 = qfree(v6, (const char *)a2, v4);
        }
        *(_QWORD *)a1 = &stru_86F6A0;
        while ( 1 )
        {
          v7 = *(v9 - 3);
          v9 -= 3;
          if ( v7 )
          {
            v9[1] = 0;
            v4 = qfree(v7, (const char *)a2, v4);
          }
          if ( v8 == v9 )
            _Unwind_Resume(v24);
        }
      }
      BUG();
    }
    *(_BYTE *)(a1 + 11) = ((*(_DWORD *)(a1 + 12) >> 19) & 0x3F) - 1;
    *(_DWORD *)(a1 + 12) = v15 & 0xFE07FFFF;
  }
  *(_QWORD *)(a1 + 184) = 0;
  v16 = (__int64 *)(a1 + 184);
  *(_QWORD *)(a1 + 208) = 0;
  *(_QWORD *)(a1 + 232) = 0;
  *(_QWORD *)(a1 + 256) = 0;
  *(_QWORD *)(a1 + 288) = 0;
  *(_OWORD *)(a1 + 192) = 0;
  *(_OWORD *)(a1 + 216) = 0;
  *(_OWORD *)(a1 + 240) = 0;
  *(_OWORD *)(a1 + 264) = 0;
  *(_OWORD *)(a1 + 296) = 0;
  v17 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)a1 = file_history_chooser_t___vtable;
  *(_DWORD *)(a1 + 280) = 0;
  *(_BYTE *)(a1 + 284) = 0;
  if ( !v17
    || (v21 = (void *)qalloc_or_throw(v17),
        *(_QWORD *)(a1 + 288) = v21,
        v22 = *(const void **)a2,
        *(_QWORD *)(a1 + 304) = v17,
        memcpy(v21, v22, v17),
        v23 = *(_QWORD *)(v10 + 8) == 0,
        *(_QWORD *)(a1 + 296) = v17,
        v16 = (__int64 *)(a1 + 184),
        v23) )
  {
    v18 = &s1;
  }
  else
  {
    v18 = *(const char **)v10;
  }
  sub_169A50(v16, (__int64)"History of %s", v18);
  v19 = &s1;
  if ( *(_QWORD *)(a1 + 192) )
    v19 = *(const char **)(a1 + 184);
  *(_QWORD *)(a1 + 40) = v19;
  result = sub_47A0E0(QT::QCoreApplication::self, "file_history_widget", "resources/icons/widgets");
  *(_DWORD *)(a1 + 72) = result;
  return result;
}
