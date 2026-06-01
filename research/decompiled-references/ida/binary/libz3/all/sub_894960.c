__int64 __fastcall sub_894960(__int64 a1, __int64 a2)
{
  void *v2; // r13
  int v3; // eax
  void *v4; // rbp
  __int64 result; // rax

  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 16) = 1;
  v2 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 24) = 0;
  if ( (*(_BYTE *)(a2 + 4) & 1) != 0 )
  {
    sub_182C690(v2, a1, a2);
    if ( (*(_BYTE *)(a2 + 20) & 1) == 0 )
      goto LABEL_3;
LABEL_6:
    sub_182C690(v2, a1 + 16, a2 + 16);
    goto LABEL_4;
  }
  *(_DWORD *)a1 = *(_DWORD *)a2;
  if ( (*(_BYTE *)(a2 + 20) & 1) != 0 )
    goto LABEL_6;
LABEL_3:
  v3 = *(_DWORD *)(a2 + 16);
  *(_BYTE *)(a1 + 20) &= ~1u;
  *(_DWORD *)(a1 + 16) = v3;
LABEL_4:
  v4 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 1;
  *(_QWORD *)(a1 + 56) = 0;
  sub_182CEF0(v4, a1 + 32);
  result = sub_182CBA0(v4, a1 + 48);
  *(_BYTE *)(a1 + 52) &= ~1u;
  *(_DWORD *)(a1 + 48) = 1;
  return result;
}

