__int64 __fastcall sub_B55870(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v8; // rbx

  v8 = sub_B6C590(80, a1, a2, 0);
  sub_B4E870(v8, 0x4Eu, a2, a3);
  *(_QWORD *)(v8 + 40) = a4;
  *(_OWORD *)(v8 + 48) = 0;
  *(_QWORD *)(v8 + 64) = 0;
  *(_QWORD *)v8 = &off_2B20CF0;
  *(_BYTE *)(v8 + 72) = 0;
  *(_DWORD *)(v8 + 76) = a5;
  return v8;
}

