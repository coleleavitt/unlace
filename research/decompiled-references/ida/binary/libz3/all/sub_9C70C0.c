__int64 __fastcall sub_9C70C0(__int64 *a1, __int64 a2)
{
  unsigned int v2; // r13d
  void *v3; // rbx
  char v5; // [rsp+Fh] [rbp-59h] BYREF
  _QWORD v6[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v7[9]; // [rsp+20h] [rbp-48h] BYREF

  v6[0] = 1;
  v6[1] = 0;
  v7[0] = 1;
  v7[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v7);
  BYTE4(v7[0]) &= ~1u;
  LODWORD(v7[0]) = 1;
  v2 = sub_9A0D90((__int64)a1, (unsigned int *)a2);
  if ( !(unsigned __int8)sub_1666AE0(a1 + 59, *(_QWORD *)(a2 + 40), v6, &v5) || !LODWORD(v6[0]) )
    sub_9C6B80(a1, a2);
  if ( !(unsigned int)sub_8E7030(a1[2]) )
    sub_9A1230(a1, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40));
  v3 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v6);
  sub_182CBA0(v3, v7);
  return v2;
}

