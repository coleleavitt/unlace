__int64 __fastcall sub_9DC8A0(__int64 a1, __int64 a2)
{
  __int64 v3[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( *(char *)(sub_A2CB40(a1) + 1) >= 0 )
  {
    v3[0] = sub_A16CE0(*(_QWORD *)(a1 + 200), a2);
    sub_A2E1B0(a1, v3, 2243, 0);
  }
  return 1;
}

