unsigned __int64 __fastcall sub_B767B0(_QWORD *a1, __int64 a2, int a3, int a4, int a5, _QWORD *a6)
{
  __int64 v9; // r14
  unsigned __int64 v10; // rbx

  v9 = *(_QWORD *)(sub_F3F480(*(_QWORD *)(*a6 & 0xFFFFFFFFFFFFFFF0LL), a2) + 40);
  v10 = sub_B6C590(72, a1, a2, 0);
  sub_B4E870(v10, 0x50u, a2, a5);
  *(_QWORD *)(v10 + 40) = v9;
  *(_QWORD *)(v10 + 48) = 0;
  *(_DWORD *)(v10 + 56) = a3;
  *(_QWORD *)v10 = &off_2BD92D0;
  *(_DWORD *)(v10 + 60) = a4;
  *(_QWORD *)(v10 + 64) = a6;
  return v10;
}

