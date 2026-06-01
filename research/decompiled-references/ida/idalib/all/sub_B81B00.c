__int64 __fastcall sub_B81B00(__int64 a1)
{
  __int64 *v1; // rax
  __int64 result; // rax
  unsigned __int8 v3; // [rsp+Fh] [rbp-99h]
  __int64 v4; // [rsp+10h] [rbp-98h] BYREF
  __int64 v5; // [rsp+18h] [rbp-90h] BYREF
  unsigned int v6; // [rsp+20h] [rbp-88h]
  __int64 v7; // [rsp+98h] [rbp-10h] BYREF

  v4 = 1;
  v1 = &v5;
  do
  {
    *v1 = -1;
    v1 += 2;
  }
  while ( v1 != &v7 );
  result = sub_B81AA0((__int64)&v4, a1);
  if ( (v4 & 1) == 0 )
  {
    v3 = result;
    operator delete(v5, 16LL * v6, 8);
    return v3;
  }
  return result;
}
