unsigned __int64 __fastcall sub_B59DA0(__int64 a1, _QWORD *a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 result; // rax

  v7 = a2[294];
  a2[304] += 16LL;
  v9 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[295] >= v9 + 16 && v7 )
  {
    a2[294] = v9 + 16;
    result = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    result = sub_962430((__int64)(a2 + 294), 16, 16, 3, a5, a6);
    v9 = result & 0xFFFFFFFFFFFFFFF9LL;
  }
  *(_DWORD *)(result + 8) = 0;
  *(_QWORD *)result = a3 & 0xFFFFFFFFFFFFFFF9LL | (2LL * (unsigned int)(a4 - 1));
  *(_QWORD *)(a1 + 152) = v9 | 2;
  return result;
}

