unsigned __int64 __fastcall sub_EB2AF0(_QWORD *a1, char a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdx
  unsigned __int64 result; // rax
  int v10; // [rsp+Ch] [rbp-1Ch]

  v8 = a1[294];
  a1[304] += 32LL;
  result = (v8 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[295] >= result + 32 && v8 )
  {
    a1[294] = result + 32;
  }
  else
  {
    v10 = a5;
    result = sub_986170((__int64)(a1 + 294), 32, 32, 3, a5, a6);
    LODWORD(a5) = v10;
  }
  *(_BYTE *)(result + 8) = 17;
  *(_DWORD *)(result + 12) = a3;
  *(_DWORD *)(result + 16) = a5;
  *(_DWORD *)(result + 20) = a4;
  *(_QWORD *)result = off_2B4BC80;
  *(_BYTE *)(result + 24) = a2;
  return result;
}
