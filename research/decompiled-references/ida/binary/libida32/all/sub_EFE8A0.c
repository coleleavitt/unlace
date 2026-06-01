__int64 __fastcall sub_EFE8A0(char *a1, __int64 a2, __int16 a3, __int64 a4, __int16 a5, unsigned __int8 a6)
{
  char v6; // al
  __int64 result; // rax
  int v8; // r8d

  v6 = *a1;
  *((_QWORD *)a1 + 1) = 0;
  *((_QWORD *)a1 + 2) = a2;
  *((_QWORD *)a1 + 3) = (4LL * a6) | a4 & 0xFFFFFFFFFFFFFFFBLL;
  *a1 = v6 & 0xF8 | 4;
  result = 8 * (a5 & 0x3FFFu);
  v8 = result | *(_DWORD *)a1 & 0xFFFE0007;
  *(_DWORD *)a1 = v8;
  *((_WORD *)a1 + 1) = (2 * a3) | BYTE2(v8) & 1;
  return result;
}

