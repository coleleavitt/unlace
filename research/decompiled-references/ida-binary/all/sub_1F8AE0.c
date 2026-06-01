__int64 __fastcall sub_1F8AE0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  void (__fastcall *v3)(const char **, __int64, _QWORD); // rax
  __int64 v4; // rax
  const char *v5; // rbp
  size_t v6; // rdx
  size_t v7; // rax
  const char *v8; // rsi
  double v9; // xmm0_8
  __int64 (__fastcall *v11)(__int64, _QWORD); // rax
  int v12; // eax
  __int64 (*v13)(); // rcx
  const char *v14; // [rsp+0h] [rbp-38h] BYREF
  __int128 v15; // [rsp+8h] [rbp-30h]
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v2 = *(int *)(a2 + 264);
  v16 = __readfsqword(0x28u);
  v14 = nullptr;
  v15 = 0;
  if ( v2 > 0x68 && (v3 = *(void (__fastcall **)(const char **, __int64, _QWORD))(a2 + 368)) != nullptr )
  {
    v3(&v14, a2, *(_QWORD *)(a2 + 376));
    v4 = v15;
    if ( !(_QWORD)v15 )
      goto LABEL_4;
  }
  else
  {
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD))(a2 + 328);
    if ( !v11 )
      goto LABEL_4;
    v12 = v11(a2, *(_QWORD *)(a2 + 376));
    if ( v12 >= 0 )
    {
      v13 = *(__int64 (**)())(QT::QCoreApplication::self[2] + 144LL);
      if ( v13 != sub_1E6670 )
        ((void (__fastcall *)(_QWORD *, const char **, _QWORD))v13)(
          QT::QCoreApplication::self + 2,
          &v14,
          (unsigned int)v12);
    }
    v4 = v15;
    if ( !(_QWORD)v15 )
    {
LABEL_4:
      v5 = &s1;
      LOBYTE(v6) = 0;
      v7 = 0;
      if ( &s1 )
        goto LABEL_5;
      goto LABEL_15;
    }
  }
  v7 = v4 - 1;
  v5 = v14;
  v6 = v7 >> 63;
  if ( v14 )
  {
LABEL_5:
    if ( !(_BYTE)v6 )
      goto LABEL_6;
  }
LABEL_15:
  v7 = 0;
  if ( v5 )
    v7 = strlen(v5);
LABEL_6:
  v8 = (const char *)v7;
  v9 = QT::QString::fromUtf8(a1, v7, v5);
  if ( v14 )
  {
    *(_QWORD *)&v15 = 0;
    qfree(v14, v8, v9);
  }
  return a1;
}
