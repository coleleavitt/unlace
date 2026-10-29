__int64 __fastcall sub_1AF3CF0(unsigned int a1)
{
  unsigned int v1; // ebp
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int64 v4; // [rsp+8h] [rbp-30h]
  _BYTE v5[40]; // [rsp+10h] [rbp-28h] BYREF

  v4 = 0x400000000LL;
  ptr = v5;
  sub_FFF220((__int64)&ptr, a1);
  v1 = v4;
  if ( ptr != v5 )
    free(ptr);
  return v1;
}
