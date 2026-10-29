__int64 __fastcall sub_9AAF50(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // eax
  __int64 v5; // rbx
  unsigned int v6; // r12d
  void *v7; // rbp
  void *v8; // rbx
  int *v10; // rax
  _QWORD v11[2]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v12[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v14[7]; // [rsp+30h] [rbp-38h] BYREF

  v4 = sub_B39350(a2, *(unsigned int *)(a1 + 8));
  v11[0] = 0;
  v11[1] = 0;
  v5 = v4;
  v12[0] = 1;
  v12[1] = 0;
  v13[0] = 0;
  v13[1] = 0;
  v14[0] = 1;
  v14[1] = 0;
  if ( v4 == -1
    || (v10 = sub_9AA900(a1, v4),
        sub_98B520((__int64)v11, v10),
        (*(_BYTE *)(*(_QWORD *)(a1 + 656) + 4 * v5 + 3) & 0x40) != 0)
    && ((v12[0] & 0x100000000LL) != 0 || LODWORD(v12[0]) != 1 || LODWORD(v13[0])) )
  {
    v6 = 0;
  }
  else
  {
    v6 = sub_9A5FC0(a1, (int *)v11, (*(_BYTE *)(*(_QWORD *)(a1 + 656) + 4 * v5 + 3) & 0x40) != 0, a3);
  }
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v13);
  sub_182CBA0(v7, v14);
  v8 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v11);
  sub_182CBA0(v8, v12);
  return v6;
}

