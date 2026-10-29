__int64 __fastcall sub_9CFDC0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r12
  unsigned __int16 v3; // r13
  __int64 v4; // r12
  unsigned __int16 v5; // r13
  unsigned __int16 v7; // [rsp+Ch] [rbp-2Ch] BYREF
  unsigned __int16 v8[21]; // [rsp+Eh] [rbp-2Ah] BYREF

  v2 = a1[23];
  v3 = *(_WORD *)sub_A1A5A0(v2, 8);
  sub_A1A5E0(v2, 8);
  v4 = a1[23];
  v7 = v3;
  v5 = *(_WORD *)sub_A1A5A0(v4, 8);
  sub_A1A5E0(v4, 8);
  v8[0] = v5;
  return sub_929A50(a1, a2, 0x11u, v8, &v7);
}

