__int64 __fastcall sub_7FB2D0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  void *v3; // rbp
  unsigned int v4; // eax
  unsigned int v6; // eax
  _QWORD v7[2]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD v8[7]; // [rsp+10h] [rbp-38h] BYREF

  v2 = a1;
  v7[0] = a2;
  v7[1] = 0;
  v8[0] = 1;
  v8[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v8);
  BYTE4(v8[0]) &= ~1u;
  v3 = qword_1C7F2C0;
  LODWORD(v8[0]) = 1;
  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 && *(_DWORD *)(a1 + 16) == 1 )
  {
    if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
    {
      v6 = sub_182C7B0(qword_1C7F2C0, v7, a1);
      v3 = qword_1C7F2C0;
      v2 = v6 >> 31;
    }
    else
    {
      LOBYTE(v2) = SLODWORD(v7[0]) < *(_DWORD *)a1;
    }
  }
  else
  {
    v4 = sub_1848D40(qword_1C7F2C0, v7, a1);
    v3 = qword_1C7F2C0;
    v2 = v4;
  }
  sub_182CBA0(v3, v7);
  sub_182CBA0(v3, v8);
  return v2;
}

