__int64 __fastcall sub_B79EA0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx

  v4 = sub_B902D0(88, a1, a2, 8LL * a3);
  sub_B725B0(v4, 3u, a2, 0);
  sub_B8E080(v4 + 40, 3);
  *(_DWORD *)(v4 + 72) = a3;
  *(_QWORD *)(v4 + 80) = 0;
  *(_QWORD *)v4 = &off_2B4ADF8;
  return v4;
}
