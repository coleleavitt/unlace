__int64 __fastcall clang_getFunctionTypeCallingConv(
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
    && ((v8 = *(_QWORD *)(a8 & 0xFFFFFFFFFFFFFFF0LL), (unsigned int)*(unsigned __int8 *)(v8 + 16) - 25 <= 1)
     || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1
     && (v8 = sub_B0D320(v8)) != 0)
    && ((*(_WORD *)(v8 + 18) >> 3) & 0x1Fu) <= 0x17 )
  {
    return *((unsigned int *)qword_3C8C1E0 + ((*(_WORD *)(v8 + 18) >> 3) & 0x1F));
  }
  else
  {
    return 100;
  }
}

