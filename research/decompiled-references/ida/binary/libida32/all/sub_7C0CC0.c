unsigned __int64 __fastcall sub_7C0CC0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r12
  __int64 v6; // rax
  _BYTE v8[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v9[4]; // [rsp+18h] [rbp-20h] BYREF

  v5 = *(__int64 **)(a1 + 8);
  v9[0] = __readfsqword(0x28u);
  v6 = pack_dq(v8, v9, a3, a4, a5);
  sub_7C0C50(v5, a2, v8, v6 - (_QWORD)v8);
  return v9[0] - __readfsqword(0x28u);
}

