__int64 __fastcall sub_727480(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12

  v2 = sub_186B270(0x38u);
  *(_DWORD *)(v2 + 8) = 0;
  *(_QWORD *)v2 = &off_1C538A0;
  *(_QWORD *)(v2 + 16) = a2;
  sub_1858590(v2 + 24, a1 + 24);
  *(_OWORD *)(v2 + 40) = 0;
  v3 = sub_186B270(0x1E8u);
  sub_1242AA0(v3, *(_QWORD *)(v2 + 16), a1 + 24);
  *(_QWORD *)(v2 + 32) = v3;
  return v2;
}

