__int64 __fastcall sub_9CD9F0(__int64 *a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v3; // r12
  void *v4; // rbx
  char v6; // [rsp+Fh] [rbp-49h] BYREF
  _QWORD v7[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v8[7]; // [rsp+20h] [rbp-38h] BYREF

  v7[0] = 0;
  v7[1] = 0;
  v8[0] = 1;
  v8[1] = 0;
  v2 = sub_99A730((__int64)a1, (unsigned int *)a2);
  if ( !(unsigned __int8)sub_1666AE0(a1 + 43, *(_QWORD *)(a2 + 40), v7, &v6) || !LODWORD(v7[0]) )
    sub_9CD5D0(a1, a2);
  v3 = sub_15E1B70(a1[43]);
  sub_B6F780(a1[2]);
  if ( (unsigned int)sub_8E7030(a1[2]) )
    sub_918C20(*(__int64 **)(a1[2] + 7488), (_DWORD *)a2, v3);
  v4 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v7);
  sub_182CBA0(v4, v8);
  return v2;
}

