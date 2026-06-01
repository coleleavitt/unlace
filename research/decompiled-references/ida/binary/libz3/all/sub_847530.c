__int64 __fastcall sub_847530(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  void *v4; // rbx
  void *v5; // rbx
  int v7; // eax
  unsigned int v8; // eax
  _QWORD v9[2]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v10[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v11[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v12[7]; // [rsp+30h] [rbp-38h] BYREF

  v9[0] = 0;
  v9[1] = 0;
  v10[0] = 1;
  v10[1] = 0;
  v11[0] = 0;
  v11[1] = 0;
  v12[0] = 1;
  v12[1] = 0;
  if ( (unsigned __int8)sub_1673C40(a1 + 16, a2, v9) && (unsigned __int8)sub_1673C40(a1 + 16, a3, v11) )
  {
    v4 = qword_1C7F2C0;
    if ( (v10[0] & 0x100000000LL) != 0 || LODWORD(v10[0]) != 1 || (v12[0] & 0x100000000LL) != 0 || LODWORD(v12[0]) != 1 )
    {
      v7 = sub_1848D40(qword_1C7F2C0, v9, v11);
      v4 = qword_1C7F2C0;
      LODWORD(a3) = v7;
    }
    else if ( (v9[0] & 0x100000000LL) != 0 || (v11[0] & 0x100000000LL) != 0 )
    {
      v8 = sub_182C7B0(qword_1C7F2C0, v9, v11);
      v4 = qword_1C7F2C0;
      LODWORD(a3) = v8 >> 31;
    }
    else
    {
      LOBYTE(a3) = SLODWORD(v9[0]) < SLODWORD(v11[0]);
    }
  }
  else
  {
    v4 = qword_1C7F2C0;
    LOBYTE(a3) = *a2 < *a3;
  }
  sub_182CBA0(v4, v11);
  sub_182CBA0(v4, v12);
  v5 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v9);
  sub_182CBA0(v5, v10);
  return (unsigned int)a3;
}

