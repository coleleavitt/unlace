__int64 __fastcall sub_4401E0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __int64 v4; // rbx

  v2 = sub_496740(a1, a2);
  *(_DWORD *)v2 = 0;
  *(_DWORD *)(v2 + 16) = 0;
  *(_QWORD *)(v2 + 24) = 0;
  *(_QWORD *)(v2 + 8) = 0;
  v3 = v2;
  v4 = sub_40FB00(120);
  sub_457B10(v4, 0xFFFFFFFFLL, &qword_655500);
  *(_QWORD *)(v4 + 96) = 0;
  *(_QWORD *)(v4 + 88) = 0;
  *(_DWORD *)(v4 + 104) = 0;
  *(_QWORD *)(v4 + 112) = 0;
  *(_DWORD *)(v4 + 108) = 1;
  *(_QWORD *)(v3 + 24) = &off_6554A0;
  *(_QWORD *)(v3 + 32) = v4;
  return v3;
}

