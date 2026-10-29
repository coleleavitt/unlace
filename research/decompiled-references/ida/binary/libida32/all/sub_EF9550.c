__int64 __fastcall sub_EF9550(int *a1, __int64 a2, __int64 a3, char a4)
{
  int v4; // eax
  __int64 result; // rax

  v4 = *a1;
  *((_QWORD *)a1 + 1) = a3;
  *((_QWORD *)a1 + 2) = a2;
  result = v4 & 0x80000000 | 2;
  *a1 = result;
  *((_BYTE *)a1 + 3) = a4 << 7;
  return result;
}

