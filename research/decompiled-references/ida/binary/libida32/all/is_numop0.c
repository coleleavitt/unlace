__int64 __fastcall is_numop0(int a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax
  Elf64_Rela *v5; // rdx

  v5 = (Elf64_Rela *)(a1 & 0xF00000);
  LOBYTE(v4) = (a1 & 0xB00000) == 0x200000;
  LOBYTE(a4) = v5 == (Elf64_Rela *)&loc_700000;
  LOBYTE(v5) = v5 == &stru_100000;
  return (unsigned int)v5 | a4 | v4;
}

