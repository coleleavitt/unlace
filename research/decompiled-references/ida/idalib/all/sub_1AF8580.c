_DWORD *__fastcall sub_1AF8580(__int64 a1, int a2, int a3)
{
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  _DWORD *result; // rax

  v4 = (_QWORD *)sub_168B6C0(a1);
  v7 = v4[294];
  v4[304] += 12LL;
  v8 = (v7 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v4[295] >= v8 + 12 && v7 )
  {
    v4[294] = v8 + 12;
    result = (_DWORD *)((v7 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  }
  else
  {
    result = (_DWORD *)sub_986170((__int64)(v4 + 294), 12, 12, 3, v5, v6);
  }
  *result = a2;
  result[1] = a3;
  result[2] = 74;
  return result;
}
