__int64 __fastcall clang_getAddressSpace(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  unsigned int v8; // edx
  __int64 v9; // rax
  unsigned __int64 v10; // rax

  v8 = 0;
  v9 = *(_QWORD *)&byte_8[a8 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v9 & 8) != 0 )
  {
    v10 = (*(__int64 *)((char *)&qword_18 + (v9 & 0xFFFFFFFFFFFFFFF0LL))
         | (unsigned __int64)(((unsigned __int8)a8 | (unsigned __int8)v9) & 7)) >> 9;
    v8 = v10;
    if ( (unsigned int)v10 > 0x15 )
      return (unsigned int)(v10 - 22);
  }
  return v8;
}

