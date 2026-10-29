__int64 __fastcall sub_DD24A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int16 v3; // r13
  __int64 v4; // rbp
  unsigned int v5; // r13d
  __int16 v7; // [rsp+6h] [rbp-32h] BYREF
  unsigned int v8; // [rsp+8h] [rbp-30h] BYREF
  _DWORD v9[11]; // [rsp+Ch] [rbp-2Ch] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v3 = *(_WORD *)sub_DFDA20(v2, 8);
  sub_DFDA50(v2, 8);
  v4 = *(_QWORD *)(a1 + 176);
  v7 = v3;
  v5 = *(_DWORD *)sub_DFDA20(v4, 8);
  sub_DFDA50(v4, 8);
  v8 = v5;
  v9[0] = 0;
  return sub_D47080(a1, a2, &v8, &v7, (__int64)v9);
}

