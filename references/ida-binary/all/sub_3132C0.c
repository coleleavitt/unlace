unsigned __int64 __fastcall sub_3132C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rax
  double v8; // xmm0_8
  __int64 v9; // rax
  size_t v10; // rdx
  size_t v11; // rax
  const char *v12; // r12
  double v13; // xmm0_8
  void *v15[4]; // [rsp+0h] [rbp-88h] BYREF
  void *v16[4]; // [rsp+20h] [rbp-68h] BYREF
  void *ptr[3]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  if ( dword_8BA594 >= 0 && dword_8BA594 < (unsigned __int64)xmmword_8CC398 )
  {
    v2 = qword_8CC390 + 56LL * dword_8BA594;
    if ( v2 )
    {
      if ( (unsigned __int8)is_debugger_on() )
      {
        v3 = *(_QWORD *)(a2 + 16);
        v4 = *(_QWORD *)(a2 + 8);
        if ( (-v3 < 0 || v3 == 0) && v3 > 0 )
        {
          v5 = 2 * v3;
          v6 = v4 + v5;
          v7 = QT::QtPrivate::qustrchr(v5 >> 1, *(_QWORD *)(a2 + 8), 44);
          if ( v6 != v7 && v7 - v4 != -2 )
          {
            v8 = QT::QString::fromUtf8(v16, 11, "IDA View-%1");
            v9 = *(_QWORD *)(v2 + 8);
            if ( v9 )
            {
              v11 = v9 - 1;
              v12 = *(const char **)v2;
              v10 = v11 >> 63;
            }
            else
            {
              LOBYTE(v10) = 0;
              v11 = 0;
              v12 = &s1;
            }
            if ( !v12 || (_BYTE)v10 )
            {
              v11 = 0;
              if ( v12 )
                v11 = strlen(v12);
            }
            v13 = QT::QString::fromUtf8(ptr, v11, v12, v8);
            QT::QString::arg(v15, v16, ptr, 0, 32, v13);
            if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
              free(ptr[0]);
            if ( v16[0] && !_InterlockedSub((volatile signed __int32 *)v16[0], 1u) )
              free(v16[0]);
            if ( QT::QString::indexOf(a2, v15, 0, 1, v13) != -1 )
              QT::QString::assign(a2, "Debug View", 10);
            if ( v15[0] && !_InterlockedSub((volatile signed __int32 *)v15[0], 1u) )
              free(v15[0]);
          }
        }
      }
    }
  }
  return v18 - __readfsqword(0x28u);
}
