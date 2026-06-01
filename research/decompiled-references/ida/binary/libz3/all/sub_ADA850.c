__int64 __fastcall sub_ADA850(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // rbx

  v2 = sub_186B270(0x40u);
  v3 = *(_QWORD *)(a1 + 56);
  v4 = v2;
  sub_966710(v2, a2, *(_DWORD *)(a1 + 8));
  *(_BYTE *)(v4 + 53) = 0;
  *(_QWORD *)v4 = off_1C71650;
  *(_QWORD *)(v4 + 56) = v3;
  return v4;
}

