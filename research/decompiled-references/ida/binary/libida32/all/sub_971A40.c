__int64 __fastcall sub_971A40(__int64 a1)
{
  __int64 v1; // r12
  void *v3[2]; // [rsp+0h] [rbp-138h] BYREF
  _BYTE v4[64]; // [rsp+10h] [rbp-128h] BYREF
  void *ptr; // [rsp+50h] [rbp-E8h]
  __int64 v6; // [rsp+58h] [rbp-E0h]
  _BYTE v7[216]; // [rsp+60h] [rbp-D8h] BYREF

  v3[0] = v4;
  v3[1] = (void *)0x800000000LL;
  ptr = v7;
  v6 = 0x800000000LL;
  v1 = sub_BD34A0(a1, v3);
  if ( ptr != v7 )
    free(ptr);
  if ( v3[0] != v4 )
    free(v3[0]);
  return v1;
}

