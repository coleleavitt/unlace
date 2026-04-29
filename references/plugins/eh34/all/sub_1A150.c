__int64 __fastcall sub_1A150(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 (__fastcall *hexdsp)(__int64, _QWORD *); // rax

  *a1 = off_8BE90;
  qfree(a1[13]);
  v3 = a1[8];
  *a1 = &off_8BE50;
  if ( v3 )
  {
    a1[9] = 0;
    qfree(v3);
  }
  v4 = a1[5];
  *a1 = off_8BD90;
  if ( v4 )
  {
    a1[6] = 0;
    qfree(v4);
  }
  v5 = a1[2];
  if ( v5 )
  {
    a1[3] = 0;
    qfree(v5);
  }
  hexdsp = (__int64 (__fastcall *)(__int64, _QWORD *))get_hexdsp(v5, a2);
  return hexdsp(130, a1);
}
