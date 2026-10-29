__int64 __fastcall sub_E5A530(__int64 a1, __int64 a2)
{
  _QWORD savedregs[9]; // [rsp+0h] [rbp+0h] BYREF

  sub_E59830((__int64)savedregs, *(_QWORD *)(a2 + 48), *(unsigned int *)(a2 + 40));
  sub_222AB70(a1 + 1048, "tls_model", 9);
  sub_222CAC0(a1 + 1048, savedregs);
  sub_2229BF0(a1 + 1048);
  return sub_222B2A0(savedregs);
}
