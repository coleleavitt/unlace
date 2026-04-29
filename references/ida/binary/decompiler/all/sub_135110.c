__int64 __fastcall sub_135110(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v10; // rdx
  __int64 result; // rax

  v10 = *(_QWORD *)(a1 + 96);
  result = *(unsigned int *)(v10 + 1400);
  if ( (result & 2) != 0 )
  {
    *(_DWORD *)(v10 + 1400) = result & 0xFFFFFFFD;
    return callui(24, 10, 0, &callui, callui, a6, a7, a8, a9, a10);
  }
  return result;
}
