__int64 __fastcall sub_B52C0(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  __int64 v5; // rbx
  __int64 v6; // rsi

  v4 = a3;
  v5 = j__qalloc_or_throw(80, a2, a3, a4);
  *(_QWORD *)(v5 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v5 + 56) = 0;
  *(_QWORD *)(v5 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v5 + 72) = 0;
  sub_330970(v5, a2);
  *(_DWORD *)(v5 + 40) = v4;
  v6 = *(_QWORD *)(v5 + 24);
  *(_DWORD *)v5 = 55;
  *(_BYTE *)(v5 + 32) = 7;
  sub_330D80(a1, v6, 0);
  return sub_B5190(a1, v5);
}
