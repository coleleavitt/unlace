unsigned __int64 sub_1AC00(__int64 a1, ...)
{
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  int v4; // r9d
  const char *v5; // rsi
  const char *v6; // rsi
  void *ptr; // [rsp+0h] [rbp-F8h] BYREF
  __int128 v9; // [rsp+8h] [rbp-F0h]
  gcc_va_list va; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-C0h]
  __int64 v12; // [rsp+48h] [rbp-B0h]
  __int64 v13; // [rsp+50h] [rbp-A8h]
  __int64 v14; // [rsp+58h] [rbp-A0h]
  __int64 v15; // [rsp+60h] [rbp-98h]
  __int64 v16; // [rsp+68h] [rbp-90h]

  va_start(va, a1);
  v12 = va_arg(va, _QWORD);
  v13 = va_arg(va, _QWORD);
  v14 = va_arg(va, _QWORD);
  v15 = va_arg(va, _QWORD);
  v16 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a1);
  v11 = __readfsqword(0x28u);
  ptr = nullptr;
  v9 = 0;
  sub_CE70((char **)&ptr);
  v5 = s1;
  if ( (_QWORD)v9 )
    LODWORD(v5) = (_DWORD)ptr;
  sub_1D2A0((unsigned int)"%s\n", (_DWORD)v5, v1, v2, v3, v4);
  v6 = s1;
  if ( (_QWORD)v9 )
    v6 = (const char *)ptr;
  sub_1A180((const __m128i *)"%s", v6);
  if ( ptr )
  {
    *(_QWORD *)&v9 = 0;
    j__free(ptr);
  }
  return v11 - __readfsqword(0x28u);
}

