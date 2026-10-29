__int64 __fastcall sub_16BE060(__int64 *a1, void *a2)
{
  __int64 result; // rax
  unsigned int v3; // [rsp+Ch] [rbp-1Ch]
  void *v4; // [rsp+10h] [rbp-18h] BYREF
  unsigned int v5; // [rsp+18h] [rbp-10h]
  char v6; // [rsp+1Ch] [rbp-Ch]

  v4 = a2;
  v5 = 64;
  v6 = 0;
  result = (unsigned int)sub_98E2D0(a1, (__int64 *)&v4) >> 31;
  if ( v5 > 0x40 )
  {
    if ( v4 )
    {
      v3 = result;
      operator delete[](v4);
      return v3;
    }
  }
  return result;
}
