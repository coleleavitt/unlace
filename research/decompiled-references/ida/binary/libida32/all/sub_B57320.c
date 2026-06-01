__int64 __fastcall sub_B57320(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 v8; // rbx

  v8 = sub_B6C590(56, a1, a2, 4);
  sub_B4E870(v8, 0x53u, a2, a3);
  *(_QWORD *)(v8 + 40) = a4;
  *(_QWORD *)(v8 + 48) = 0;
  *(_DWORD *)(v8 + 56) = a5;
  *(_QWORD *)v8 = &off_2B212A8;
  *(_BYTE *)(v8 + 29) |= 2u;
  return v8;
}

