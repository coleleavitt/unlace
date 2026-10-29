__int64 __fastcall sub_B56BB0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  __int64 v8; // rbx

  v8 = sub_B6C590(56, a1, a2, 0);
  sub_B4E870(v8, 0x57u, a2, a4);
  *(_QWORD *)(v8 + 40) = a3;
  *(_DWORD *)(v8 + 48) = a5;
  *(_QWORD *)v8 = &off_2B21170;
  return v8;
}

