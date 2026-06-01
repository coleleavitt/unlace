unsigned __int64 __fastcall sub_1E4C960(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 (__fastcall **v4)(); // [rsp+0h] [rbp-28h] BYREF
  int v5; // [rsp+8h] [rbp-20h]
  __int64 v6; // [rsp+10h] [rbp-18h]
  char v7; // [rsp+18h] [rbp-10h]
  int v8; // [rsp+1Ch] [rbp-Ch]

  v4 = off_2C6ECE0;
  v6 = a3;
  v7 = 0;
  v8 = -1;
  v5 = 16842752;
  result = a2 & 0xFFFFFFFFFFFFFFF0LL;
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
  {
    result = *(_QWORD *)result;
    if ( (*(_BYTE *)(result + 17) & 1) != 0 )
      return sub_BC7D30((__int64)&v4, a2);
  }
  return result;
}
