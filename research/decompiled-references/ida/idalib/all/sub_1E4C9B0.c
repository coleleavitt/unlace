unsigned __int64 __fastcall sub_1E4C9B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 result; // rax
  __int64 (__fastcall **v5)(); // [rsp+0h] [rbp-28h] BYREF
  int v6; // [rsp+8h] [rbp-20h]
  __int64 v7; // [rsp+10h] [rbp-18h]
  char v8; // [rsp+18h] [rbp-10h]
  int v9; // [rsp+1Ch] [rbp-Ch]

  v5 = off_2C6ECE0;
  v7 = a4;
  v8 = 0;
  v9 = -1;
  v6 = 16842752;
  result = a2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    result = *(_QWORD *)result;
    if ( (*(_BYTE *)(result + 17) & 1) != 0 )
      return sub_BC8430((__int64)&v5, a2);
  }
  return result;
}
