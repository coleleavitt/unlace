__int64 __fastcall sub_B5DE30(__int64 a1)
{
  __int64 *v1; // rax
  unsigned int v2; // ebx
  __int64 v4; // [rsp+0h] [rbp-98h] BYREF
  __int64 v5; // [rsp+8h] [rbp-90h] BYREF
  __int64 v6; // [rsp+88h] [rbp-10h] BYREF

  v4 = 1;
  v1 = &v5;
  do
  {
    *v1 = -1;
    v1 += 2;
  }
  while ( v1 != &v6 );
  v2 = sub_B5D9A0((__int64)&v4, a1, 7u) & 7;
  if ( (v4 & 1) == 0 )
    operator delete();
  return v2;
}

