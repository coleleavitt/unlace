__int64 __fastcall sub_C1A8A0(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, void *a5)
{
  __int64 result; // rax
  unsigned __int8 v6; // [rsp+Fh] [rbp-19h]
  void *v7; // [rsp+10h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+18h] [rbp-10h]
  char v9; // [rsp+1Ch] [rbp-Ch]

  v7 = a5;
  v8 = 64;
  v9 = 0;
  result = sub_C1A330(a1, a2, a3, a4, (__int64)&v7);
  if ( v8 > 0x40 )
  {
    if ( v7 )
    {
      v6 = result;
      operator delete[](v7);
      return v6;
    }
  }
  return result;
}
