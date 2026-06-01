__int64 __fastcall sub_C1A8F0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned __int8 v5; // [rsp+Fh] [rbp-19h]
  void *v6; // [rsp+10h] [rbp-18h] BYREF
  unsigned int v7; // [rsp+18h] [rbp-10h]
  char v8; // [rsp+1Ch] [rbp-Ch]

  v7 = 64;
  v6 = &dword_0 + 1;
  v8 = 0;
  result = sub_C1A330(a1, a2, a3, a4, (__int64)&v6);
  if ( v7 > 0x40 )
  {
    if ( v6 )
    {
      v5 = result;
      operator delete[](v6);
      return v5;
    }
  }
  return result;
}
