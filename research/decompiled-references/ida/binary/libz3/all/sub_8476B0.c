__int64 __fastcall sub_8476B0(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  void *v4; // rbx
  void *v5; // rbx
  int v7; // eax
  unsigned int v8; // eax
  char v9; // [rsp+Eh] [rbp-6Ah] BYREF
  char v10; // [rsp+Fh] [rbp-69h] BYREF
  _QWORD v11[2]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v12[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v14[7]; // [rsp+40h] [rbp-38h] BYREF

  v11[0] = 0;
  v11[1] = 0;
  v12[0] = 1;
  v12[1] = 0;
  v13[0] = 0;
  v13[1] = 0;
  v14[0] = 1;
  v14[1] = 0;
  if ( (unsigned __int8)sub_1666AE0(a1 + 16, a2, v11, &v10) && (unsigned __int8)sub_1666AE0(a1 + 16, a3, v13, &v9) )
  {
    v4 = qword_1C7F2C0;
    if ( (v12[0] & 0x100000000LL) != 0 || LODWORD(v12[0]) != 1 || (v14[0] & 0x100000000LL) != 0 || LODWORD(v14[0]) != 1 )
    {
      v7 = sub_1848D40(qword_1C7F2C0, v11, v13);
      v4 = qword_1C7F2C0;
      LODWORD(a3) = v7;
    }
    else if ( (v11[0] & 0x100000000LL) != 0 || (v13[0] & 0x100000000LL) != 0 )
    {
      v8 = sub_182C7B0(qword_1C7F2C0, v11, v13);
      v4 = qword_1C7F2C0;
      LODWORD(a3) = v8 >> 31;
    }
    else
    {
      LOBYTE(a3) = SLODWORD(v11[0]) < SLODWORD(v13[0]);
    }
  }
  else
  {
    v4 = qword_1C7F2C0;
    LOBYTE(a3) = *a2 < *a3;
  }
  sub_182CBA0(v4, v13);
  sub_182CBA0(v4, v14);
  v5 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v11);
  sub_182CBA0(v5, v12);
  return (unsigned int)a3;
}

