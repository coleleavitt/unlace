__int64 __fastcall sub_B562E0(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rbx

  v4 = sub_B6C590(88, a1, a2, 8LL * a3);
  sub_B4E870(v4, 7u, a2, 0);
  sub_B6A340(v4 + 40, 7);
  *(_DWORD *)(v4 + 72) = a3;
  *(_DWORD *)(v4 + 76) = 0;
  *(_QWORD *)(v4 + 80) = 0;
  *(_QWORD *)v4 = &off_2B20EB8;
  return v4;
}

