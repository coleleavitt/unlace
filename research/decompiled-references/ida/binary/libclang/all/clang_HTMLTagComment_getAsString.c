__int64 __fastcall clang_HTMLTagComment_getAsString(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v9; // [rsp+0h] [rbp-D8h]
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-C0h]
  _BYTE v12[176]; // [rsp+28h] [rbp-B0h] BYREF

  if ( !a1 )
    return clang_CompileCommand_getMappedSourcePath_0(0, a2, a3, a4);
  if ( (unsigned int)*(unsigned __int8 *)(a1 + 12) - 4 > 1 )
    return clang_CompileCommand_getMappedSourcePath_0(a1, a2, a3, a4);
  v6 = *(_QWORD *)(a2 + 40);
  if ( !v6 )
  {
    v9 = operator new(1u);
    nullsub_213(v9);
    v6 = v9;
    *(_QWORD *)(a2 + 40) = v9;
  }
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 80LL);
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_3C7E280);
  ptr = v12;
  sub_110E980(v6, a1, &ptr, v7);
  v8 = sub_6905C0(ptr, n[0]);
  if ( ptr != v12 )
    free(ptr);
  return v8;
}

