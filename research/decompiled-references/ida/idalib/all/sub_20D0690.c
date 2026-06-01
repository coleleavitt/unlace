__int64 __fastcall sub_20D0690(__int64 a1, const char *a2, __int64 a3)
{
  size_t v4; // r12
  __int64 result; // rax
  char v6; // cl

  v4 = strlen(a2);
  result = sub_20CF970(a1, 56);
  v6 = *(_BYTE *)(result + 10);
  *(_WORD *)(result + 8) = 16444;
  *(_QWORD *)(result + 16) = v4;
  *(_QWORD *)(result + 24) = a2;
  *(_QWORD *)(result + 32) = a3;
  *(_BYTE *)(result + 10) = v6 & 0xF0 | 5;
  *(_QWORD *)result = off_2BE7D40;
  *(_QWORD *)(result + 40) = 0;
  *(_QWORD *)(result + 48) = 0;
  return result;
}
