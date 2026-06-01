__int64 __fastcall sub_897610(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v4; // ebp
  void *v5; // rbx
  _DWORD *v7; // rax
  char v8; // [rsp+Fh] [rbp-49h] BYREF
  _QWORD v9[2]; // [rsp+10h] [rbp-48h] BYREF
  _QWORD v10[7]; // [rsp+20h] [rbp-38h] BYREF

  v9[0] = 0;
  v9[1] = 0;
  v10[0] = 1;
  v10[1] = 0;
  if ( !(unsigned __int8)sub_1666AE0(a1 + 112, a2, v9, &v8) )
  {
    if ( *(_WORD *)(a2 + 4) )
      goto LABEL_3;
    v7 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
    if ( !v7
      || *v7 != 5
      || v7[1] != 8
      || *(_DWORD *)(a2 + 24) != 1
      || !(unsigned __int8)sub_897610(a1, *(_QWORD *)(a2 + 32), a3) )
    {
      goto LABEL_3;
    }
    *a3 ^= 1u;
    goto LABEL_20;
  }
  if ( (v9[0] & 0x100000000LL) == 0 )
  {
    if ( LODWORD(v9[0]) == 1 )
    {
      if ( (v10[0] & 0x100000000LL) != 0 || LODWORD(v10[0]) != 1 )
        goto LABEL_3;
      *a3 = 1;
    }
    else
    {
      if ( LODWORD(v9[0]) != -1 || (v10[0] & 0x100000000LL) != 0 || LODWORD(v10[0]) != 1 )
        goto LABEL_3;
      *a3 = 0;
    }
LABEL_20:
    v4 = 1;
    goto LABEL_4;
  }
LABEL_3:
  v4 = 0;
LABEL_4:
  v5 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v9);
  sub_182CBA0(v5, v10);
  return v4;
}

