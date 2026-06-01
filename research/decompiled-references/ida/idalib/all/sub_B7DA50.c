unsigned __int64 __fastcall sub_B7DA50(__int64 a1, _QWORD *a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdx
  unsigned __int64 result; // rax

  v8 = a2[294];
  a2[304] += 16LL;
  result = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[295] >= result + 16 && v8 )
    a2[294] = result + 16;
  else
    result = sub_986170((__int64)(a2 + 294), 16, 16, 3, a5, a6);
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)result = a3 & 0xFFFFFFFFFFFFFFF9LL | (2LL * (unsigned int)(a4 - 1));
  *(_QWORD *)(a1 + 144) = result;
  return result;
}
