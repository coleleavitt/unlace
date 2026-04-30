bool __fastcall sub_47C810(void **a1)
{
  void *v2; // rbp
  const void *v3; // r13
  void *v4; // rdi
  void *v5; // rbp
  void *v6; // rbp
  double v8; // xmm0_8
  const void *v9; // r13
  void *v10; // rdi
  const void *v11; // r13
  void *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  void *v16[4]; // [rsp+0h] [rbp-68h] BYREF
  void *ptr[9]; // [rsp+20h] [rbp-48h] BYREF

  ptr[3] = (void *)__readfsqword(0x28u);
  if ( dword_8C2ED4 < 0 )
  {
    if ( QT::QCoreApplication::self )
    {
      QT::QGuiApplication::platformName((QT::QGuiApplication *)v16);
      v8 = QT::QString::fromUtf8(ptr, 7, "wayland");
      dword_8C2ED4 = (unsigned __int8)QT::QString::startsWith(v16, ptr, 1, v8);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( v16[0] && !_InterlockedSub((volatile signed __int32 *)v16[0], 1u) )
        free(v16[0]);
    }
    else
    {
      dword_8C2ED4 = 0;
    }
    qgetenv("XDG_SESSION_DESKTOP", &qword_8D1760);
    qgetenv("XDG_SESSION_TYPE", &qword_8D1778);
    qgetenv("XDG_CURRENT_DESKTOP", &qword_8D1790);
  }
  if ( a1 && a1 != &qword_8D1760 )
  {
    v2 = (void *)xmmword_8D1768;
    if ( (unsigned __int64)xmmword_8D1768 < 2 )
    {
      a1[1] = nullptr;
    }
    else
    {
      v3 = qword_8D1760;
      v4 = *a1;
      if ( (unsigned __int64)a1[2] < (unsigned __int64)xmmword_8D1768 )
      {
        v13 = qvector_reserve(a1, *a1, xmmword_8D1768, 1);
        *a1 = (void *)v13;
        v4 = (void *)v13;
      }
      a1[1] = v2;
      memmove(v4, v3, (size_t)v2 - 1);
      *((_BYTE *)v2 + (_QWORD)*a1 - 1) = 0;
    }
    v5 = (void *)xmmword_8D1780;
    if ( (unsigned __int64)xmmword_8D1780 > 1 )
    {
      v11 = qword_8D1778;
      v12 = a1[3];
      if ( (unsigned __int64)a1[5] < (unsigned __int64)xmmword_8D1780 )
      {
        v14 = qvector_reserve(a1 + 3, a1[3], xmmword_8D1780, 1);
        a1[3] = (void *)v14;
        v12 = (void *)v14;
      }
      a1[4] = v5;
      memmove(v12, v11, (size_t)v5 - 1);
      *((_BYTE *)v5 + (_QWORD)a1[3] - 1) = 0;
    }
    else
    {
      a1[4] = nullptr;
    }
    v6 = (void *)xmmword_8D1798;
    if ( (unsigned __int64)xmmword_8D1798 > 1 )
    {
      v9 = qword_8D1790;
      v10 = a1[6];
      if ( (unsigned __int64)a1[8] < (unsigned __int64)xmmword_8D1798 )
      {
        v15 = qvector_reserve(a1 + 6, a1[6], xmmword_8D1798, 1);
        a1[6] = (void *)v15;
        v10 = (void *)v15;
      }
      a1[7] = v6;
      memmove(v10, v9, (size_t)v6 - 1);
      *((_BYTE *)v6 + (_QWORD)a1[6] - 1) = 0;
    }
    else
    {
      a1[7] = nullptr;
    }
  }
  return dword_8C2ED4 != 0;
}
