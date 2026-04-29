__int64 __fastcall sub_AEC00(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rsi

  v4 = j__qalloc_or_throw(80);
  *(_QWORD *)(v4 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v4 + 40) = 0;
  *(_QWORD *)(v4 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v4 + 56) = 0;
  *(_QWORD *)(v4 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v4 + 72) = 0;
  sub_329320(v4, a2);
  *(_DWORD *)(v4 + 40) = a3;
  v5 = *(_QWORD *)(v4 + 24);
  *(_DWORD *)v4 = 55;
  *(_BYTE *)(v4 + 32) = 7;
  sub_329730(a1, v5, 0);
  return sub_AEAD0(a1, v4);
}
