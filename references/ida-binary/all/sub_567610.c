__int64 __fastcall sub_567610(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        unsigned __int8 *a9)
{
  __int64 result; // rax

  result = a9[1];
  if ( (*(_QWORD *)a9 & 1) == 0 )
    return *(unsigned __int16 *)(*(_QWORD *)a9 + 40LL);
  return result;
}
