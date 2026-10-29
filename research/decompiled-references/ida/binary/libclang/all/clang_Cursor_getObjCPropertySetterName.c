__int64 __fastcall clang_Cursor_getObjCPropertySetterName(int a1, int a2, int a3, int a4, int a5, int a6, __int128 a7)
{
  __int64 result; // rax
  __m128i v8; // [rsp+0h] [rbp-68h]
  __int64 v9; // [rsp+20h] [rbp-48h]
  __int64 v10; // [rsp+38h] [rbp-30h] BYREF
  void *src[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h] BYREF

  if ( (_DWORD)a7 != 14 )
    return clang_CompileCommand_getMappedSourcePath_0();
  v8 = _mm_loadu_si128((const __m128i *)&a7);
  v10 = *(_QWORD *)(sub_63A250(a1, a2, a3, a4, a5, a6, v8.m128i_i32[0], v8.m128i_i64[1]) + 88);
  if ( !v10 )
    return clang_CompileCommand_getMappedSourcePath_0();
  sub_C87500(src, &v10);
  result = sub_6905C0(src[0], (size_t)src[1]);
  if ( src[0] != &v12 )
  {
    v9 = result;
    operator delete(src[0], v12 + 1);
    return v9;
  }
  return result;
}

