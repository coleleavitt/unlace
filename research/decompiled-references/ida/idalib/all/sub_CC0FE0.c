__int64 __fastcall sub_CC0FE0(__int64 a1, __int64 a2)
{
  unsigned int v2; // eax
  __int64 v4[4]; // [rsp+10h] [rbp-20h] BYREF

  v4[0] = *(_QWORD *)(a2 + 24) & 0xFFFFFFFFFFFFFFFDLL;
  v2 = sub_CBEFF0(a1, v4, 13, 1u, 0, 1, 0);
  v4[0] = a2 | 4;
  return sub_CA48C0(a1, 13, v2, v4);
}
