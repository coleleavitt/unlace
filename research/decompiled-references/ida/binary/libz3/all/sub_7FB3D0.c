__int64 __fastcall sub_7FB3D0(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  void *v3; // r15
  _QWORD v5[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v6[9]; // [rsp+10h] [rbp-48h] BYREF

  v5[0] = a2;
  v5[1] = 0;
  v6[0] = 1;
  v6[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v6);
  BYTE4(v6[0]) &= ~1u;
  v3 = qword_1C7F2C0;
  LODWORD(v6[0]) = 1;
  if ( (*(_BYTE *)(a1 + 4) & 1) != 0 )
  {
    if ( (unsigned int)sub_182C7B0(qword_1C7F2C0, a1, v5) )
    {
      v3 = qword_1C7F2C0;
      v2 = 1;
      goto LABEL_5;
    }
  }
  else
  {
    v2 = (v5[0] & 0x100000000LL) == 0;
    if ( *(_DWORD *)a1 != LODWORD(v5[0]) )
      goto LABEL_5;
  }
  if ( (*(_BYTE *)(a1 + 20) & 1) != 0 || (v6[0] & 0x100000000LL) != 0 )
    LOBYTE(v2) = (unsigned int)sub_182C7B0(v3, a1 + 16, v6) == 0;
  else
    LOBYTE(v2) = *(_DWORD *)(a1 + 16) == LODWORD(v6[0]);
  v3 = qword_1C7F2C0;
  v2 ^= 1u;
LABEL_5:
  sub_182CBA0(v3, v5);
  sub_182CBA0(v3, v6);
  return v2;
}

