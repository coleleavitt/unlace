unsigned __int64 __fastcall sub_7E4000(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 *v3; // r12
  __int64 v4; // rax
  _BYTE v6[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v7[4]; // [rsp+18h] [rbp-20h] BYREF

  v3 = *(__int64 **)(a1 + 8);
  v7[0] = __readfsqword(0x28u);
  v4 = pack_dq(v6, v7, a3);
  sub_7E3F90(v3, a2, v6, v4 - (_QWORD)v6);
  return v7[0] - __readfsqword(0x28u);
}
