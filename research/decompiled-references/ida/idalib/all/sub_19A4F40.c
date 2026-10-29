unsigned __int64 __fastcall sub_19A4F40(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  unsigned __int64 result; // rax

  v6 = *(_QWORD **)(a1 + 248);
  v7 = v6[294];
  v6[304] += 24LL;
  result = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v6[295] >= result + 24 && v7 )
    v6[294] = result + 24;
  else
    result = sub_986170((__int64)(v6 + 294), 24, 24, 3, a5, a6);
  *(_DWORD *)result = 0;
  *(_BYTE *)(result + 4) &= 0xF8u;
  *(_QWORD *)(result + 8) = a2 & 0xFFFFFFFFFFFFFFFBLL;
  *(_DWORD *)(result + 16) = 1;
  return result;
}
