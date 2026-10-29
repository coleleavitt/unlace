__int64 __fastcall clang_CompilationDatabase_getAllCompileCommands(__int64 a1)
{
  __int64 result; // rax
  __m128i si128; // xmm0
  void *v3[2]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v4; // [rsp+10h] [rbp-18h]

  if ( !a1 )
    return 0;
  (*(void (__fastcall **)(void **))(*(_QWORD *)a1 + 32LL))(v3);
  if ( v3[1] == v3[0] )
  {
    if ( v3[0] )
      operator delete(v3[0], v4 - (unsigned __int64)v3[0]);
    return 0;
  }
  else
  {
    result = operator new(0x18u);
    si128 = _mm_load_si128((const __m128i *)v3);
    *(_QWORD *)(result + 16) = v4;
    *(__m128i *)result = si128;
  }
  return result;
}

