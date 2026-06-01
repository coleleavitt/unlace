unsigned __int64 __fastcall sub_204FC0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  int *v6; // rax
  __int64 v7; // rax
  __int64 (__fastcall ***(__fastcall *v8)(__int64, __int64, __int64))(_QWORD, __int64, _QWORD); // rax
  void (__fastcall ***v9)(_QWORD, const char **, _QWORD); // rdi
  int *v10; // rax
  QT::QLabel *v11; // r13
  unsigned __int64 v12; // rdx
  size_t v13; // rax
  const char *v14; // r14
  double v15; // xmm0_8
  int *v16; // rax
  __int64 (__fastcall *v17)(__int64, __int64); // rax
  __int64 v18; // rdi
  __int64 fileregion_offset; // rax
  __int64 v20; // r8
  __int64 v21; // r9
  int *v22; // rax
  QT::QLabel *v23; // rbx
  size_t v24; // rax
  const char *v25; // [rsp+0h] [rbp-88h] BYREF
  __int128 v26; // [rsp+8h] [rbp-80h]
  void *ptr[4]; // [rsp+20h] [rbp-68h] BYREF
  char s[24]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v29; // [rsp+58h] [rbp-30h]

  v29 = __readfsqword(0x28u);
  if ( (unsigned __int8)netnode_is_available() )
  {
    v6 = (int *)a1[122];
    if ( !v6 || *v6 > 1 )
      sub_178660((__int64)(a1 + 122), 0, 0, 0, v3, v4);
    if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a1[123] + 32LL) + 32LL) + 9LL) < 0 )
    {
      v7 = *a1;
      v25 = nullptr;
      v26 = 0;
      v8 = *(__int64 (__fastcall ***(__fastcall **)(__int64, __int64, __int64))(_QWORD, __int64, _QWORD))(v7 + 968);
      if ( v8 == sub_1E6720 )
      {
        v9 = *(void (__fastcall ****)(_QWORD, const char **, _QWORD))(a2 + 40);
        if ( v9 )
          (**v9)(v9, &v25, a1[91]);
      }
      else
      {
        v8((__int64)a1, (__int64)&v25, a2);
      }
      v10 = (int *)a1[122];
      if ( !v10 || *v10 > 1 )
        sub_178660((__int64)(a1 + 122), 0, 0, 0, v3, v4);
      v11 = *(QT::QLabel **)(a1[123] + 32LL);
      if ( (_QWORD)v26 )
      {
        v13 = v26 - 1;
        v14 = v25;
        v12 = (unsigned __int64)(v26 - 1) >> 63;
      }
      else
      {
        LOBYTE(v12) = 0;
        v13 = 0;
        v14 = &s1;
      }
      if ( !v14 || (_BYTE)v12 )
      {
        v13 = 0;
        if ( v14 )
          v13 = strlen(v14);
      }
      v15 = QT::QString::fromUtf8(ptr, v13, v14);
      QT::QLabel::setText(v11, (const QT::QString *)ptr);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree(v25, (const char *)ptr, v15);
      }
    }
    v16 = (int *)a1[122];
    if ( !v16 || *v16 > 1 )
      sub_178660((__int64)(a1 + 122), 0, 0, 0, v3, v4);
    if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a1[123] + 24LL) + 32LL) + 9LL) < 0 )
    {
      v17 = *(__int64 (__fastcall **)(__int64, __int64))(*a1 + 712LL);
      if ( v17 == sub_1E6950 )
      {
        if ( !(unsigned __int8)sub_331080(a1) )
          return v29 - __readfsqword(0x28u);
        v18 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 40) + 128LL))(*(_QWORD *)(a2 + 40));
      }
      else
      {
        v18 = v17((__int64)a1, a2);
      }
      if ( v18 != -1 )
      {
        s[0] = 0;
        fileregion_offset = get_fileregion_offset(v18);
        if ( fileregion_offset == -1 )
          qstrncpy(s, "UNKNOWN", 20);
        else
          qsnprintf(s, 20, "%08llX", fileregion_offset);
        v22 = (int *)a1[122];
        if ( !v22 || *v22 > 1 )
          sub_178660((__int64)(a1 + 122), 0, 0, 0, v20, v21);
        v23 = *(QT::QLabel **)(a1[123] + 24LL);
        v24 = strlen(s);
        QT::QString::fromUtf8(ptr, v24, s);
        QT::QLabel::setText(v23, (const QT::QString *)ptr);
        if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
          free(ptr[0]);
      }
    }
  }
  return v29 - __readfsqword(0x28u);
}
