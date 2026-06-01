unsigned __int64 __fastcall sub_B9DD30(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rdx
  unsigned __int64 result; // rax

  v6 = a1[294];
  a1[304] += 16LL;
  result = (v6 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] < result + 16 || !v6 )
    return sub_962430((__int64)(a1 + 294), 16, 16, 3, a5, a6);
  a1[294] = result + 16;
  return result;
}

