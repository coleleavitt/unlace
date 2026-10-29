__int64 __fastcall sub_1441A70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  _BYTE v5[8]; // [rsp+8h] [rbp-B0h] BYREF
  void *ptr[2]; // [rsp+10h] [rbp-A8h] BYREF
  _QWORD v7[19]; // [rsp+20h] [rbp-98h] BYREF

  ptr[1] = (void *)0x2000000004LL;
  v7[0] = a2;
  v7[1] = a3;
  ptr[0] = v7;
  v3 = sub_2223360(a1 + 1792, ptr, v5, off_2BB2BB0);
  if ( ptr[0] != v7 )
    free(ptr[0]);
  return v3;
}
