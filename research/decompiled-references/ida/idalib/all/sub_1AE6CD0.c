__int64 __fastcall sub_1AE6CD0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rax
  unsigned int v5; // ebp
  void *ptr[2]; // [rsp+0h] [rbp+0h] BYREF
  _BYTE vars10[128]; // [rsp+10h] [rbp+10h] BYREF
  void *vars90[2]; // [rsp+90h] [rbp+90h] BYREF
  _BYTE _A0[184]; // [rsp+A0h] [rbp+A0h] BYREF

  vars90[1] = (void *)0x2000000000LL;
  vars90[0] = _A0;
  v3 = sub_BFBAE0(a3);
  sub_F1A490(v3, (__int64)vars90, a1, 1, 0);
  ptr[0] = vars10;
  ptr[1] = (void *)0x2000000000LL;
  v4 = sub_BFBAE0(a2);
  sub_F1A490(v4, (__int64)ptr, a1, 1, 0);
  v5 = sub_2222ED0(ptr, vars90);
  if ( ptr[0] != vars10 )
    free(ptr[0]);
  if ( vars90[0] != _A0 )
    free(vars90[0]);
  return v5;
}
