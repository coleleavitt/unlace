_QWORD *__fastcall sub_1E5EB90(_QWORD *a1, __int64 a2)
{
  __int64 v3; // [rsp+8h] [rbp-10h] BYREF

  v3 = a2;
  if ( a2 )
  {
    sub_B86A00((__int64)a1, &v3);
  }
  else
  {
    *a1 = a1 + 2;
    sub_1E5E4B0(a1, (_BYTE *)"type name", (__int64)"");
  }
  return a1;
}
