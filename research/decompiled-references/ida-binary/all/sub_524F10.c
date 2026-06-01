__int64 __fastcall sub_524F10(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax

  result = 0;
  if ( a2 > 0x8113E1FF && a2 < *(_QWORD *)(a1 + 16) + 2165563904LL )
    return *(_QWORD *)(*(_QWORD *)(a1 + 32) + 24 * (a2 - 2165563904u));
  return result;
}
