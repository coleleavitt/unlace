__int64 __fastcall sub_525030(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  result = a2;
  if ( a2 > 0x8113E1FF && a2 < (unsigned __int64)(*(_QWORD *)(a1 + 16) + 2165563904LL) )
    return *(unsigned int *)(*(_QWORD *)(a1 + 8) + 4 * (a2 - 2165563904LL));
  return result;
}
