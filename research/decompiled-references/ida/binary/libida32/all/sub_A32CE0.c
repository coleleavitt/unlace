__int64 __fastcall sub_A32CE0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebp
  void *v6[2]; // [rsp+0h] [rbp-148h] BYREF
  _BYTE v7[128]; // [rsp+10h] [rbp-138h] BYREF
  void *ptr[2]; // [rsp+90h] [rbp-B8h] BYREF
  _BYTE v9[168]; // [rsp+A0h] [rbp-A8h] BYREF

  ptr[0] = v9;
  v6[0] = v7;
  v6[1] = (void *)0x2000000000LL;
  ptr[1] = (void *)0x2000000000LL;
  sub_EF6750(a2, v6, a1, 1, 0);
  sub_EF6750(a3, ptr, a1, 1, 0);
  v4 = sub_21FF190(v6, ptr);
  if ( ptr[0] != v9 )
    free(ptr[0]);
  if ( v6[0] != v7 )
    free(v6[0]);
  return v4;
}

