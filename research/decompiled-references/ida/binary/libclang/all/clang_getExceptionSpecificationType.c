__int64 __fastcall clang_getExceptionSpecificationType(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // rdi

  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) > 0xF
    && ((v8 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v8 + 16) == 26)
     || *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 26 && (v8 = sub_B0D320(v8)) != 0) )
  {
    return *((unsigned int *)qword_3C8C460 + ((*(_WORD *)(v8 + 22) >> 6) & 0xF));
  }
  else
  {
    return 0xFFFFFFFFLL;
  }
}

