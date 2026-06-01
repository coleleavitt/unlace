__int64 __fastcall sub_1FBF60(QT::QObject *a1, const char *a2, double a3, double a4, __m128 a5)
{
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v10; // rax
  bool v11; // zf
  unsigned __int8 (__fastcall *v12)(QT::QObject *, const __m128i **, __int64 *, char *, _QWORD); // rax
  const char *v13; // rsi
  const char *v14; // r13
  const char *v15; // rcx
  _QWORD *v16; // rbp
  __int64 v17; // rax
  void (__fastcall *v18)(_QWORD *, const char *, __int64 *); // r14
  __int64 v19; // rdi
  __int64 v20; // r14
  __int64 v21; // rbx
  __int64 *v22; // rbp
  __int64 v23; // rdi
  struct _Unwind_Exception *v24; // rbp
  const __m128i *v25; // [rsp+8h] [rbp-F0h] BYREF
  int v26[2]; // [rsp+10h] [rbp-E8h] BYREF
  int v27[4]; // [rsp+18h] [rbp-E0h]
  __int64 v28[2]; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v29; // [rsp+40h] [rbp-B8h]
  __int64 v30; // [rsp+48h] [rbp-B0h]
  __int64 v31; // [rsp+50h] [rbp-A8h]
  __int64 v32; // [rsp+58h] [rbp-A0h]
  __int64 v33; // [rsp+60h] [rbp-98h] BYREF
  __int128 v34; // [rsp+68h] [rbp-90h]
  __int64 v35; // [rsp+78h] [rbp-80h]
  __int128 v36; // [rsp+80h] [rbp-78h]
  __m128i si128; // [rsp+90h] [rbp-68h]
  void *ptr[2]; // [rsp+A0h] [rbp-58h]
  __int64 v39; // [rsp+B0h] [rbp-48h]
  int v40; // [rsp+B8h] [rbp-40h]
  unsigned __int64 v41; // [rsp+C8h] [rbp-30h]

  v41 = __readfsqword(0x28u);
  v8 = sub_1FB940(a1);
  if ( v8 )
  {
    sub_479090(QT::QCoreApplication::self + 2, v8, 1);
  }
  else
  {
    v10 = *(_QWORD *)a1;
    v11 = *((_QWORD *)a1 + 53) == 0;
    v29 = 0;
    v30 = -1;
    v31 = 0;
    v12 = *(unsigned __int8 (__fastcall **)(QT::QObject *, const __m128i **, __int64 *, char *, _QWORD))(v10 + 680);
    v32 = 0;
    *(_OWORD *)v28 = 0;
    if ( v11 )
    {
      v24 = (struct _Unwind_Exception *)sub_1E69C0(0.0, (__int64)a1, (__int64)a2, v6, v7);
      sub_1A1EA0((__int64 *)a1, a2);
      if ( v5 )
        qfree(v5, a2);
      _Unwind_Resume(v24);
    }
    v13 = (const char *)&v25;
    if ( v12(a1, &v25, v28, (char *)a1 + 384, 0) )
    {
      *(_QWORD *)v26 = 0;
      *(_OWORD *)v27 = 0;
      sub_1FB5D0(a1, (__int64)v26);
      v14 = *(const char **)v26;
      v15 = *(const char **)v26;
      if ( !*(_QWORD *)v27 )
        v15 = &s1;
      v8 = (__int64)sub_1985C0(a1, v25, *((_QWORD *)a1 + 91), (__int64)v15, 0, 0, 0.0, a4, a5);
      v34 = 0;
      v35 = 0;
      v39 = 0;
      v40 = 4194308;
      v16 = QT::QCoreApplication::self + 2;
      v36 = 0;
      si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
      *(_OWORD *)ptr = 0;
      v17 = QT::QCoreApplication::self[2];
      v33 = 0;
      v18 = *(void (__fastcall **)(_QWORD *, const char *, __int64 *))(v17 + 120);
      v13 = (const char *)sub_2DBE50(v8);
      v18(v16, v13, &v33);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      v19 = v35;
      if ( v35 )
      {
        v20 = v36;
        if ( (_QWORD)v36 )
        {
          v21 = 0;
          do
          {
            v22 = (__int64 *)(v19 + 40 * v21);
            jvalue_t_clear(v22 + 3);
            v23 = *v22;
            if ( *v22 )
            {
              v22[1] = 0;
              qfree(v23, v13);
            }
            ++v21;
            v19 = v35;
          }
          while ( v20 != v21 );
        }
        *(_QWORD *)&v36 = 0;
        qfree(v19, v13);
      }
      if ( v33 )
      {
        *(_QWORD *)&v34 = 0;
        qfree(v33, v13);
      }
      if ( v14 )
        qfree(v14, v13);
    }
    if ( v32 )
      qfree(v32, v13);
  }
  return v8;
}
