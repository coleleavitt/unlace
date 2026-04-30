void __fastcall sub_57F8E0(void *a1)
{
  volatile signed __int32 *v1; // rsi
  _QWORD v2[7]; // [rsp+0h] [rbp-38h] BYREF

  if ( a1 )
  {
    v1 = *(volatile signed __int32 **)a1;
    memset(v2, 0, 32);
    sub_56C9A0((__int64)v2, v1);
    sub_56B570((__int64)v2);
    sub_57C770(*((_QWORD *)a1 + 1));
    off_8C52A0(*((void **)a1 + 2));
    off_8C52A0(a1);
  }
}
