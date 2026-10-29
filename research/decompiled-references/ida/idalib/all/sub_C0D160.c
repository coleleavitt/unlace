__int64 __fastcall sub_C0D160(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdx

  result = *(_QWORD *)(a1 + 40);
  if ( !result )
  {
    v7 = a2[294];
    a2[304] += 56LL;
    v8 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
    if ( a2[295] >= (unsigned __int64)(v8 + 56) && v7 )
      a2[294] = v8 + 56;
    else
      v8 = sub_986170((__int64)(a2 + 294), 56, 56, 3, a5, a6);
    *(_BYTE *)(v8 + 4) &= ~1u;
    *(_DWORD *)v8 = 0;
    *(_QWORD *)(a1 + 40) = v8;
    sub_A5F590((__int64)a2, (__int64)sub_B70CC0, v8);
    return *(_QWORD *)(a1 + 40);
  }
  return result;
}
