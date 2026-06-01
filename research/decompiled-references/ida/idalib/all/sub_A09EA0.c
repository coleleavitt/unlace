__int64 __fastcall sub_A09EA0(__int64 a1, unsigned int a2, __int64 a3, char *a4)
{
  __int64 v5; // rdx
  void *v8[2]; // [rsp+0h] [rbp-48h] BYREF
  _BYTE v9[56]; // [rsp+10h] [rbp-38h] BYREF

  v5 = -1;
  v8[0] = v9;
  if ( a4 )
    v5 = (__int64)&a4[strlen(a4)];
  sub_A09A40(v8, a4, v5);
  sub_22205D0(a1, v8, a2, a3);
  if ( v8[0] != v9 )
    operator delete(v8[0]);
  return a1;
}
