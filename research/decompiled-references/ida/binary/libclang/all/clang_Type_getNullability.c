__int64 __fastcall clang_Type_getNullability(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  unsigned __int16 v8; // ax

  if ( (a8 & 0xFFFFFFFFFFFFFFF8LL) > 0xF
    && (v8 = sub_B16670(*(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL)), HIBYTE(v8))
    && (unsigned __int8)v8 <= 3u )
  {
    return *((unsigned int *)qword_3C8C240 + (unsigned __int8)v8);
  }
  else
  {
    return 3;
  }
}

