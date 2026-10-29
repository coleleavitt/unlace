__int64 __fastcall sub_AD65D0(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v5; // rdi
  void *v6; // rbx
  void *v7; // rbx
  int v9; // eax
  unsigned int v10; // eax
  char v11; // [rsp+Eh] [rbp-6Ah] BYREF
  char v12; // [rsp+Fh] [rbp-69h] BYREF
  _QWORD v13[2]; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v14[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v16[7]; // [rsp+40h] [rbp-38h] BYREF

  v5 = *a1;
  v13[0] = 0;
  v13[1] = 0;
  v14[0] = 1;
  v14[1] = 0;
  v15[0] = 0;
  v15[1] = 0;
  v16[0] = 1;
  v16[1] = 0;
  if ( (unsigned __int8)sub_1666AE0(v5, a2, v13, &v11) && (unsigned __int8)sub_1666AE0(*a1, a3, v15, &v12) )
  {
    v6 = qword_1C7F2C0;
    if ( (v14[0] & 0x100000000LL) != 0 || LODWORD(v14[0]) != 1 || (v16[0] & 0x100000000LL) != 0 || LODWORD(v16[0]) != 1 )
    {
      v9 = sub_1848D40(qword_1C7F2C0, v13, v15);
      v6 = qword_1C7F2C0;
      LODWORD(a3) = v9;
    }
    else if ( (v13[0] & 0x100000000LL) != 0 || (v15[0] & 0x100000000LL) != 0 )
    {
      v10 = sub_182C7B0(qword_1C7F2C0, v13, v15);
      v6 = qword_1C7F2C0;
      LODWORD(a3) = v10 >> 31;
    }
    else
    {
      LOBYTE(a3) = SLODWORD(v13[0]) < SLODWORD(v15[0]);
    }
  }
  else
  {
    v6 = qword_1C7F2C0;
    LOBYTE(a3) = *a2 < *a3;
  }
  sub_182CBA0(v6, v15);
  sub_182CBA0(v6, v16);
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v13);
  sub_182CBA0(v7, v14);
  return (unsigned int)a3;
}

