__int64 __fastcall sub_23FC00(
        const char *a1,
        int a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 *v10; // r15
  __int64 v12; // rax
  const char *v14; // rdi
  const char *v16; // rax
  size_t v17; // rdx
  size_t v18; // rax
  const char *v19; // rbp
  const char *v20; // r14
  double v21; // xmm0_8
  double v22; // xmm0_8
  void **p_ptr; // r13
  void *v24; // rdi
  unsigned __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 *v29; // rbp
  __int64 *v30; // rbx
  const char *v31; // rdi
  double v32; // xmm4_8
  double v33; // xmm5_8
  __int64 v34; // rax
  __int64 v35; // [rsp+8h] [rbp-F0h]
  __int64 v36; // [rsp+10h] [rbp-E8h]
  const char **v37; // [rsp+18h] [rbp-E0h]
  void *v38[4]; // [rsp+20h] [rbp-D8h] BYREF
  void *v39[4]; // [rsp+40h] [rbp-B8h] BYREF
  void *ptr; // [rsp+60h] [rbp-98h] BYREF
  __int128 v41; // [rsp+68h] [rbp-90h]
  __int128 v42; // [rsp+80h] [rbp-78h] BYREF
  __int128 v43; // [rsp+90h] [rbp-68h] BYREF
  __int128 v44; // [rsp+A0h] [rbp-58h]
  unsigned __int64 v45; // [rsp+B8h] [rbp-40h]

  v45 = __readfsqword(0x28u);
  if ( a2 < 0 )
    return 0;
  if ( a2 >= (unsigned __int64)xmmword_8CC398 )
    return 0;
  v12 = qword_8CC390 + 56LL * a2;
  v37 = (const char **)v12;
  if ( !v12 )
    return 0;
  v14 = &s1;
  if ( *(_QWORD *)(v12 + 8) )
    v14 = *(const char **)v12;
  v35 = sub_2E09C0(v14);
  if ( !v35 )
  {
    v16 = v37[1];
    if ( v16 )
    {
      v18 = (size_t)(v16 - 1);
      v19 = *v37;
      v17 = v18 >> 63;
    }
    else
    {
      LOBYTE(v17) = 0;
      v18 = 0;
      v19 = &s1;
    }
    if ( !v19 || (_BYTE)v17 )
    {
      v18 = 0;
      if ( v19 )
        v18 = strlen(v19);
    }
    v20 = (const char *)v39;
    v21 = QT::QString::fromUtf8(v38, v18, v19);
    v22 = QT::QString::fromUtf8(v39, 9, "IDA View-", v21);
    QT::QString::append((QT::QString *)v39, (const QT::QString *)v38);
    p_ptr = &ptr;
    QT::QString::toUtf8_helper((QT::QString *)&ptr, (const QT::QString *)v39);
    v24 = (void *)v41;
    if ( !(_QWORD)v41 )
      v24 = &QT::QByteArray::_empty;
    v25 = 0;
    v35 = sub_2E1080(v24, 0);
    if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      free(ptr);
    if ( v39[0] && !_InterlockedSub((volatile signed __int32 *)v39[0], 1u) )
      free(v39[0]);
    if ( v38[0] && !_InterlockedSub((volatile signed __int32 *)v38[0], 1u) )
      free(v38[0]);
    if ( v35 )
    {
      v26 = (unsigned int)dword_8CC5F0;
      if ( dword_8CC5F0 < 0 )
      {
        v22 = 0.0;
        v25 = (unsigned int)a2;
        LODWORD(v43) = -2;
        *((_QWORD *)&v43 + 1) = -1;
        v44 = 0;
        if ( (unsigned int)sub_22FC60(0x11u, (unsigned int)a2, &v43)
          || (v25 = (unsigned int)a2, (unsigned __int8)sub_23F680(dword_8CC428, a2, (const char *)&v43, 0.0)) )
        {
          if ( (unsigned __int8)sub_235DE0((__int64)v37) )
          {
            v25 = *((_QWORD *)&v43 + 1);
            (*(void (__fastcall **)(__int64, _QWORD, __int64, _QWORD))(*(_QWORD *)v35 + 1104LL))(
              v35,
              *((_QWORD *)&v43 + 1),
              1,
              0);
          }
        }
        if ( (int)v43 >= -1 && *((_QWORD *)&v43 + 1) )
        {
          *(_QWORD *)&v44 = 0;
          v22 = qfree(*((_QWORD *)&v43 + 1), (const char *)v25);
        }
      }
    }
    if ( a1 )
    {
      v22 = 0.0;
      v25 = (unsigned __int64)&v43;
      *(_QWORD *)&v43 = 0;
      *((_QWORD *)&v43 + 1) = v35;
      ptr = nullptr;
      v41 = 0;
      sub_201BA0((__int64 *)&ptr, (const char *)&v43);
      v28 = *((_QWORD *)a1 + 1);
      v20 = (const char *)ptr;
      if ( (int)v28 > 0 )
      {
        p_ptr = *(void ***)a1;
        v29 = (__int64 *)v41;
        a1 = &s1;
        v36 = (__int64)&p_ptr[3 * (unsigned int)(v28 - 1) + 3];
        goto LABEL_29;
      }
      goto LABEL_41;
    }
    while ( 1 )
    {
LABEL_43:
      v29 = &qword_8CB508;
      v30 = (__int64 *)qword_8CB508;
      if ( !qword_8CB508 )
      {
        v34 = operator new(0x18u);
        v22 = 0.0;
        *(_QWORD *)v34 = 0;
        v30 = (__int64 *)v34;
        qword_8CB508 = v34;
        *(_OWORD *)(v34 + 8) = 0;
      }
      if ( v37[1] )
      {
        v25 = (unsigned __int64)*v37;
        if ( **v37 )
        {
          v43 = 0;
          qstrncpy(&v43, v25, 16);
          *(_QWORD *)&v42 = 0;
          *((_QWORD *)&v42 + 1) = v35;
          sub_203F40(v30, &v42, &v43, (__m128)0LL, a4, a5, a6, v32, v33, a9, a10);
          return v35;
        }
      }
      if ( under_debugger )
        BUG();
      interr(1716, v25, v26, v27, v22);
LABEL_48:
      if ( v30 == v10 )
        break;
      if ( v20 )
      {
        *(_QWORD *)&v41 = 0;
        v22 = qfree(v20, (const char *)v25);
      }
      if ( p_ptr )
        return v35;
    }
    do
    {
LABEL_40:
      p_ptr += 3;
      if ( p_ptr == (void **)v36 )
      {
LABEL_41:
        if ( v20 )
        {
          *(_QWORD *)&v41 = 0;
          v22 = qfree(v20, (const char *)v25);
        }
        goto LABEL_43;
      }
LABEL_29:
      v10 = (__int64 *)*p_ptr;
      v30 = (__int64 *)((char *)*p_ptr + 24 * (_QWORD)p_ptr[1]);
    }
    while ( *p_ptr == v30 );
    while ( v10[1] )
    {
      v25 = *v10;
      v31 = a1;
      if ( v29 )
        goto LABEL_37;
LABEL_32:
      if ( !strcmp(v31, (const char *)v25) )
        goto LABEL_48;
      v10 += 3;
      if ( v30 == v10 )
        goto LABEL_40;
    }
    if ( !v29 )
      goto LABEL_48;
    v25 = (unsigned __int64)a1;
LABEL_37:
    v31 = v20;
    goto LABEL_32;
  }
  sub_479090(QT::QCoreApplication::self + 2, v35, 1);
  return v35;
}
