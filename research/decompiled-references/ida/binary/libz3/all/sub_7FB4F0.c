__int64 __fastcall sub_7FB4F0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // r15
  void *v5; // rdi
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned __int8 v8; // [rsp+Fh] [rbp-59h]
  _QWORD v9[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v10[9]; // [rsp+20h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a2 + 12) )
    return 0;
  v4 = a2 + 24;
  v9[0] = 0;
  v9[1] = 0;
  v10[0] = 1;
  v10[1] = 0;
  sub_182CBA0(qword_1C7F2C0, v10);
  BYTE4(v10[0]) &= ~1u;
  v5 = qword_1C7F2C0;
  LODWORD(v10[0]) = 1;
  if ( (*(_BYTE *)(a2 + 44) & 1) != 0 || *(_DWORD *)(a2 + 40) != 1 )
  {
    LOBYTE(v6) = sub_1848D40(qword_1C7F2C0, v9, v4);
    v5 = qword_1C7F2C0;
  }
  else if ( (*(_BYTE *)(a2 + 28) & 1) != 0 )
  {
    v7 = sub_182C7B0(qword_1C7F2C0, v9, v4);
    v5 = qword_1C7F2C0;
    v6 = v7 >> 31;
  }
  else
  {
    LOBYTE(v6) = SLODWORD(v9[0]) < *(_DWORD *)(a2 + 24);
  }
  v8 = v6;
  sub_182CBA0(v5, v9);
  sub_182CBA0(v5, v10);
  result = v8;
  if ( !v8 )
  {
    if ( !*(_DWORD *)(a2 + 12) && *(_BYTE *)(a1 + 40) )
      return sub_753DF0(v4, 0);
    else
      return 0;
  }
  return result;
}

