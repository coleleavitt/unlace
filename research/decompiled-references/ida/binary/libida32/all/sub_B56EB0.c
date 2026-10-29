__int64 __fastcall sub_B56EB0(__int64 a1, __int64 a2, char a3, int a4, __int64 a5, int a6, int a7)
{
  __int64 v11; // rbx

  v11 = sub_B6C590(120, a1, a2, 0);
  sub_B4E870(v11, 0x19u, a2, a6);
  *(_QWORD *)(v11 + 40) = a5;
  *(_QWORD *)v11 = &off_2B206B0;
  sub_B6A340(v11 + 48, 25);
  *(_DWORD *)(v11 + 84) = 0;
  *(_DWORD *)(v11 + 88) = a4;
  *(_BYTE *)(v11 + 92) = a3;
  *(_QWORD *)v11 = &off_2B20598;
  *(_BYTE *)(v11 + 93) = 0;
  *(_DWORD *)(v11 + 80) = a7;
  *(_OWORD *)(v11 + 96) = 0;
  *(_QWORD *)(v11 + 112) = 0;
  return v11;
}

