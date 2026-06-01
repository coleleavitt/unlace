unsigned __int64 __fastcall sub_EB3400(_QWORD *a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  int v10; // [rsp+Ch] [rbp-1Ch]

  v8 = a1[294];
  a1[304] += 40LL;
  result = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= result + 40 && v8 )
  {
    a1[294] = result + 40;
  }
  else
  {
    v10 = a5;
    result = sub_986170((__int64)(a1 + 294), 40, 40, 3, a5, a6);
    LODWORD(a5) = v10;
  }
  *(_BYTE *)(result + 8) = 42;
  *(_DWORD *)(result + 12) = a2;
  *(_DWORD *)(result + 16) = a5;
  *(_DWORD *)(result + 20) = a3;
  *(_QWORD *)result = off_2B4BCC0;
  *(_BYTE *)(result + 24) = a4 != 0;
  *(_BYTE *)(result + 25) = 1;
  *(_DWORD *)(result + 28) = 1;
  *(_QWORD *)(result + 32) = a4;
  return result;
}
