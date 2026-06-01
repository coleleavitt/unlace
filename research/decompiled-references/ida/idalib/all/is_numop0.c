__int64 __fastcall is_numop0(int a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax
  __int64 v5; // rdx

  v5 = a1 & 0xF00000;
  LOBYTE(v4) = (a1 & 0xB00000) == (_QWORD)&stru_200000;
  LOBYTE(a4) = v5 == 7340032;
  LOBYTE(v5) = v5 == 0x100000;
  return (unsigned int)v5 | a4 | v4;
}
