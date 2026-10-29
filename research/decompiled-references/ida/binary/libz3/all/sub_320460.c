__int64 __fastcall sub_320460(__int64 *a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax

  v4 = sub_186B270(0xE8u);
  sub_300750(v4, a1, a2, a3);
  *(_DWORD *)(v4 + 160) = 0;
  *(_QWORD *)v4 = &off_1C64408;
  v5 = *(_QWORD *)(v4 + 8);
  *(_QWORD *)(v4 + 168) = v4;
  *(_QWORD *)(v4 + 192) = v5;
  *(_QWORD *)(v4 + 208) = v5;
  *(_QWORD *)(v4 + 180) = 0;
  *(_DWORD *)(v4 + 188) = 0;
  *(_QWORD *)(v4 + 200) = 0;
  *(_QWORD *)(v4 + 216) = 0;
  *(_QWORD *)(v4 + 224) = 0;
  return v4;
}

