__int64 __fastcall sub_67DAD0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax

  v4 = pack_dq(a1, a2, *(_QWORD *)a3);
  v5 = pack_dq(v4, a2, *(_QWORD *)(a3 + 8) - *(_QWORD *)a3);
  v6 = pack_dq(v5, a2, *(_QWORD *)(a3 + 16) + 1LL) + 1;
  *(_BYTE *)(v6 - 1) = *(_BYTE *)(a3 + 24);
  return v6 - a1;
}
