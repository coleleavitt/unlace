unsigned __int64 __fastcall sub_5AA90(__int64 a1, __int64 a2, const char *a3)
{
  size_t v3; // rax
  int v4; // r9d
  char v6[4104]; // [rsp+0h] [rbp-1028h] BYREF
  unsigned __int64 v7; // [rsp+1008h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = a3;
  v3 = strlen(a3);
  *(_BYTE *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 16) = v3;
  *(_QWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 72) = a1 + 56;
  *(_QWORD *)(a1 + 80) = a1 + 56;
  *(_QWORD *)(a1 + 88) = 0;
  *(_QWORD *)(a1 + 96) = v3;
  *(_OWORD *)(a1 + 32) = 0;
  sub_901D0(v6, 0x1000u);
  sub_94D70(v6);
  sub_94CC0((unsigned int)v6, 4096, (unsigned int)v6, (unsigned int)"hvignore", 0, v4, v6[0]);
  sub_5A830(a1, (__int64 *)(a1 + 24), (__int64)v6);
  return v7 - __readfsqword(0x28u);
}

