__int64 __fastcall sub_E02ED0(_QWORD *a1)
{
  __int64 (*v1)(void); // rax
  __int64 v2; // rsi
  _QWORD v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *(__int64 (**)(void))(*a1 + 32LL);
  if ( v1 == sub_E0F550 )
  {
    sub_DFBCB0(a1);
    v2 = a1[37];
  }
  else
  {
    v2 = v1();
  }
  sub_162A710(v4, v2);
  return v4[2];
}

