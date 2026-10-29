__int64 __fastcall clang_FullComment_getAsXML(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // r12
  __int64 v9; // [rsp+0h] [rbp-458h]
  void *ptr; // [rsp+10h] [rbp-448h] BYREF
  size_t n[2]; // [rsp+18h] [rbp-440h]
  _BYTE v12[1072]; // [rsp+28h] [rbp-430h] BYREF

  if ( !a1 )
    return clang_CompileCommand_getMappedSourcePath_0(0, a2, a3, a4);
  if ( *(_BYTE *)(a1 + 12) != 6 )
    return clang_CompileCommand_getMappedSourcePath_0(a1, a2, a3, a4);
  v5 = *(_QWORD *)(a2 + 40);
  if ( !v5 )
  {
    v9 = operator new(1u);
    nullsub_213(v9);
    v5 = v9;
    *(_QWORD *)(a2 + 40) = v9;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 80LL);
  *(__m128i *)n = _mm_load_si128((const __m128i *)&xmmword_3C7E250);
  ptr = v12;
  sub_1112BD0(v5, a1, &ptr, v6);
  v7 = sub_6905C0(ptr, n[0]);
  if ( ptr != v12 )
    free(ptr);
  return v7;
}

