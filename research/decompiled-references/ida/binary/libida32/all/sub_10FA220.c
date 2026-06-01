__int64 __fastcall sub_10FA220(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  void *v6[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v7; // [rsp+10h] [rbp-38h] BYREF

  sub_222F820(v6, a4);
  sub_21FC890(a1, v6, a2, a3);
  if ( v6[0] != &v7 )
    operator delete(v6[0]);
  return a1;
}

