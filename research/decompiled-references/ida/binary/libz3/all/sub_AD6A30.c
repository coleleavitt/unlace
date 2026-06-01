__int64 __fastcall sub_AD6A30(_QWORD *a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v5; // rdi
  void *v6; // rbx
  void *v7; // rbx
  int v9; // eax
  unsigned int v10; // eax
  _QWORD v11[2]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v12[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v13[2]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v14[7]; // [rsp+30h] [rbp-38h] BYREF

  v5 = *a1;
  v11[0] = 0;
  v11[1] = 0;
  v12[0] = 1;
  v12[1] = 0;
  v13[0] = 0;
  v13[1] = 0;
  v14[0] = 1;
  v14[1] = 0;
  if ( (unsigned __int8)sub_1673C40(v5, a2, v11) && (unsigned __int8)sub_1673C40(*a1, a3, v13) )
  {
    v6 = qword_1C7F2C0;
    if ( (v12[0] & 0x100000000LL) != 0 || LODWORD(v12[0]) != 1 || (v14[0] & 0x100000000LL) != 0 || LODWORD(v14[0]) != 1 )
    {
      v9 = sub_1848D40(qword_1C7F2C0, v11, v13);
      v6 = qword_1C7F2C0;
      LODWORD(a3) = v9;
    }
    else if ( (v11[0] & 0x100000000LL) != 0 || (v13[0] & 0x100000000LL) != 0 )
    {
      v10 = sub_182C7B0(qword_1C7F2C0, v11, v13);
      v6 = qword_1C7F2C0;
      LODWORD(a3) = v10 >> 31;
    }
    else
    {
      LOBYTE(a3) = SLODWORD(v11[0]) < SLODWORD(v13[0]);
    }
  }
  else
  {
    v6 = qword_1C7F2C0;
    LOBYTE(a3) = *a2 < *a3;
  }
  sub_182CBA0(v6, v13);
  sub_182CBA0(v6, v14);
  v7 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v11);
  sub_182CBA0(v7, v12);
  return (unsigned int)a3;
}

