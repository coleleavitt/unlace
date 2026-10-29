unsigned __int64 __fastcall sub_1AF83F0(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  _QWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  unsigned __int64 result; // rax

  v8 = (_QWORD *)sub_168B6C0(a1);
  v11 = v8[294];
  v8[304] += 24LL;
  v12 = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( v8[295] >= v12 + 24 && v11 )
  {
    v8[294] = v12 + 24;
    result = (v11 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    result = sub_986170((__int64)(v8 + 294), 24, 24, 3, v9, v10);
  }
  *(_DWORD *)result = a3;
  *(_DWORD *)(result + 4) = a5;
  *(_DWORD *)(result + 8) = 43;
  *(_DWORD *)(result + 12) = a4;
  *(_QWORD *)(result + 16) = a2;
  return result;
}
