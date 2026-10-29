void __fastcall sub_ECA4C0(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)a1 = (2LL * a3) | a4 & 0xFFFFFFFFFFFFFFF9LL;
}

