__int64 __fastcall sub_6A7340(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  void *v6[2]; // [rsp+0h] [rbp-158h] BYREF
  _BYTE v7[128]; // [rsp+10h] [rbp-148h] BYREF
  void *ptr[2]; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE v9[184]; // [rsp+A0h] [rbp-B8h] BYREF

  v6[1] = (void *)0x2000000000LL;
  ptr[1] = (void *)0x2000000000LL;
  v6[0] = v7;
  ptr[0] = v9;
  sub_AFCA50(a2, v6, a1, 1, 0);
  sub_AFCA50(a3, ptr, a1, 1, 0);
  v4 = sub_25ABE00(v6, ptr);
  if ( ptr[0] != v9 )
    free(ptr[0]);
  if ( v6[0] != v7 )
    free(v6[0]);
  return v4;
}

