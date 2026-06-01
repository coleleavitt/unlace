unsigned __int64 __fastcall sub_22B7A20(__int64 a1)
{
  char *v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rax
  unsigned __int8 v4; // di
  unsigned int v5; // ecx
  __int128 v7; // [rsp+0h] [rbp-18h] BYREF

  v1 = (char *)sub_22B7890(a1);
  v7 = 0;
  sub_22578D0((__int64)&v7, v1, v2);
  if ( v7 < 0 )
  {
    v5 = v7;
    v4 = 1;
    v3 = DWORD1(v7) & 0x7FFFFFFF;
  }
  else
  {
    v3 = DWORD1(v7) & 0x7FFFFFFF;
    v4 = BYTE7(v7) >> 7;
    v5 = v7;
  }
  return ((unsigned __int64)v4 << 63) | (v3 << 32) | v5;
}
