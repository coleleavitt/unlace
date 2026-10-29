__int64 __fastcall clang_getCursorExceptionSpecificationType(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int128 a7,
        __int128 a8)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]

  if ( (unsigned int)clang_isDeclaration((unsigned int)a7)
    && (clang_getCursorType(
          (__int64)&v14,
          a2,
          v8,
          v9,
          v10,
          v11,
          (__int128)_mm_loadu_si128((const __m128i *)&a7),
          (__int128)_mm_loadu_si128((const __m128i *)&a8)),
        (v15 & 0xFFFFFFFFFFFFFFF8LL) > 0xF)
    && ((v12 = *(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v12 + 16) == 26)
     || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26
     && (v12 = sub_B0D320(v12)) != 0) )
  {
    return *((unsigned int *)qword_3C8C460 + ((*(_WORD *)(v12 + 22) >> 6) & 0xF));
  }
  else
  {
    return 0xFFFFFFFFLL;
  }
}

