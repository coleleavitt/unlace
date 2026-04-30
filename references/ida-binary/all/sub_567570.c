__int64 __fastcall sub_567570(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        unsigned __int8 *a9,
        __int64 a10)
{
  __int64 result; // rax
  __int64 v11; // rcx

  result = HIDWORD(a8);
  v11 = *(_QWORD *)(a10 + 8);
  if ( !WORD2(a8) )
  {
    if ( (*(_QWORD *)a9 & 1) != 0 )
      return *(unsigned __int16 *)(*(_QWORD *)(v11 + 112) + 2LL * a9[1]);
    result = *(unsigned __int16 *)(*(_QWORD *)a9 + 40LL);
  }
  if ( (_WORD)result != 0xFFFF )
    return *(unsigned __int16 *)(*(_QWORD *)(v11 + 112) + 2LL * (unsigned __int16)result);
  return result;
}
