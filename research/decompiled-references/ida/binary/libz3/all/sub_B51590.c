__int64 __fastcall sub_B51590(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  _QWORD *v4; // rbx

  v2 = sub_186B270(0x58u);
  v3 = *(_QWORD *)(a1 + 24);
  v4 = (_QWORD *)v2;
  sub_13716C0(v2, v3, *(unsigned int *)(a1 + 8));
  *v4 = off_1C57420;
  sub_15C5470(v4 + 3, v3);
  *(_QWORD *)(a1 + 1376) = v4;
  return sub_A6F1C0(a2, (__int64)v4);
}

