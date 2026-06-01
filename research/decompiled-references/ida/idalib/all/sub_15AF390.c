__int64 __fastcall sub_15AF390(int *a1, int a2, __int64 a3)
{
  int v3; // eax
  __int64 result; // rax

  v3 = *a1;
  *((_QWORD *)a1 + 2) = a3;
  a1[51] = a2;
  result = v3 & 0xFFF80FFF | 0x37000;
  *a1 = result;
  return result;
}
