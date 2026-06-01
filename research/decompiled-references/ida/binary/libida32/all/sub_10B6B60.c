void __fastcall sub_10B6B60(__int64 a1, char *a2)
{
  __int64 v2; // rdx
  void *v3[2]; // [rsp+0h] [rbp-38h] BYREF
  _BYTE v4[40]; // [rsp+10h] [rbp-28h] BYREF

  v2 = -1;
  v3[0] = v4;
  if ( a2 )
    v2 = (__int64)&a2[strlen(a2)];
  sub_10B5070(v3, a2, v2);
  sub_2296190(a1, v3);
  if ( v3[0] != v4 )
    operator delete(v3[0]);
}

