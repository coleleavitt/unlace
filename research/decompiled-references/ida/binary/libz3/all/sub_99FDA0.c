__int64 __fastcall sub_99FDA0(__int64 a1, int a2, __int64 a3, char a4, char a5)
{
  void *v8; // r14
  int v9; // eax
  __int64 result; // rax

  *(_QWORD *)a1 = &off_1C56290;
  *(_DWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  v8 = qword_1C7F2C0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 1;
  *(_QWORD *)(a1 + 40) = 0;
  if ( (*(_BYTE *)(a3 + 4) & 1) != 0 )
  {
    sub_182C690(v8, a1 + 16, a3);
    if ( (*(_BYTE *)(a3 + 20) & 1) == 0 )
      goto LABEL_3;
LABEL_6:
    sub_182C690(v8, a1 + 32, a3 + 16);
    goto LABEL_4;
  }
  *(_DWORD *)(a1 + 16) = *(_DWORD *)a3;
  if ( (*(_BYTE *)(a3 + 20) & 1) != 0 )
    goto LABEL_6;
LABEL_3:
  v9 = *(_DWORD *)(a3 + 16);
  *(_BYTE *)(a1 + 36) &= ~1u;
  *(_DWORD *)(a1 + 32) = v9;
LABEL_4:
  result = *(_BYTE *)(a1 + 48) & 0xFC;
  *(_BYTE *)(a1 + 48) = *(_BYTE *)(a1 + 48) & 0xFC | a4 & 1 | (2 * a5) & 3;
  return result;
}

