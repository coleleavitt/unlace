__int64 __fastcall sub_DA3A90(__int64 a1, __int64 a2)
{
  __int64 v3[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( *(char *)(sub_E0E500(a1) + 1) >= 0 )
  {
    v3[0] = sub_DFB160(*(_QWORD *)(a1 + 400), a2);
    sub_E0FFE0(a1, v3, 2480, 0);
  }
  return 1;
}

