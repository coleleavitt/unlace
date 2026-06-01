unsigned __int64 __fastcall sub_B53BA0(__int64 **a1, int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v8; // rdi
  __int64 v9; // rdx
  unsigned __int64 result; // rax
  __int16 v11; // dx
  __int64 v12; // [rsp+8h] [rbp-20h]

  v8 = *a1;
  v9 = *v8;
  v8[10] += 32;
  result = (v9 + 15) & 0xFFFFFFFFFFFFFFF0LL;
  if ( v8[1] >= result + 32 && v9 )
  {
    *v8 = result + 32;
  }
  else
  {
    v12 = a5;
    result = sub_986170((__int64)v8, 32, 32, 4, a5, a6);
    a5 = v12;
  }
  v11 = *(_WORD *)(result + 12);
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 8) = a3;
  *(_QWORD *)(result + 16) = a4;
  *(_QWORD *)(result + 24) = a5;
  *(_WORD *)(result + 12) = v11 & 0xFC00 | 2;
  return result;
}
