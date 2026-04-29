unsigned __int64 sub_66090(_QWORD *a1, __m128i *a2, __int64 a3, ...)
{
  const char *v3; // rcx
  int v4; // edx
  const char *v5; // rcx
  const char *v6; // rdx
  const char *v8; // [rsp+0h] [rbp-128h] BYREF
  __int128 v9; // [rsp+8h] [rbp-120h]
  const char *v10; // [rsp+20h] [rbp-108h] BYREF
  __int128 v11; // [rsp+28h] [rbp-100h]
  gcc_va_list va; // [rsp+40h] [rbp-E8h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp-D0h]
  __int64 v14; // [rsp+78h] [rbp-B0h]
  __int64 v15; // [rsp+80h] [rbp-A8h]
  __int64 v16; // [rsp+88h] [rbp-A0h]

  va_start(va, a3);
  v14 = va_arg(va, _QWORD);
  v15 = va_arg(va, _QWORD);
  v16 = va_arg(va, _QWORD);
  va_end(va);
  va_start(va, a3);
  v13 = __readfsqword(0x28u);
  v8 = nullptr;
  v9 = 0;
  sub_20090((__int64 *)&v8, a3, (const __m128i *)va, v14, v15, v16);
  v10 = nullptr;
  v3 = src;
  v11 = 0;
  if ( (_QWORD)v9 )
    v3 = v8;
  v4 = dword_CC888++;
  sub_20160((__int64 *)&v10, (__int64)"%04d_%s", v4, v3);
  v5 = src;
  if ( (_QWORD)v11 )
    v5 = v10;
  v6 = src;
  if ( (_QWORD)v9 )
    v6 = v8;
  sub_63480(a1, a2, v6, v5);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  if ( v8 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(v8);
  }
  return v13 - __readfsqword(0x28u);
}
