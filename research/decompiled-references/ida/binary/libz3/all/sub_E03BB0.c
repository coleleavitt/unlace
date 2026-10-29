__int64 __fastcall sub_E03BB0(__int64 a1, _QWORD *a2, int a3, int a4, int a5, int a6)
{
  __int64 (__fastcall *v10)(); // rax
  __int64 v11; // rsi
  _DWORD v13[22]; // [rsp+0h] [rbp-58h] BYREF

  v10 = *(__int64 (__fastcall **)())(*a2 + 32LL);
  if ( v10 == sub_E0F550 )
  {
    sub_DFBCB0(a2);
    v11 = a2[37];
  }
  else
  {
    v11 = ((__int64 (__fastcall *)(_QWORD *))v10)(a2);
  }
  sub_162A710(v13, v11);
  sub_16302C0(a1, v13[4], a3, a4, a5, a6, 0);
  return a1;
}

