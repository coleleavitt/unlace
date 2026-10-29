__int64 __fastcall sub_CB46C0(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+8h] [rbp-10h] BYREF

  v3 = a2 | 4;
  return sub_D00850(a1, *(_BYTE *)(*(_QWORD *)(a2 + 32) + 8LL) & 1, &v3);
}
