__int64 __fastcall clang_getRangeEnd(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int64 result; // rax

  result = a1;
  if ( (a7 & 1) != 0 )
  {
    *(_QWORD *)a1 = a8;
    *(_OWORD *)(a1 + 8) = 0;
  }
  else
  {
    *(_QWORD *)(a1 + 8) = a8;
    *(_DWORD *)(a1 + 16) = HIDWORD(a9);
    *(_QWORD *)a1 = a7;
  }
  return result;
}

