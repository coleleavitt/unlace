__int64 __fastcall sub_74DEA0(__int64 a1, char *a2)
{
  unsigned int v3; // [rsp+8h] [rbp-80h] BYREF
  int v4; // [rsp+Ch] [rbp-7Ch] BYREF
  char *v5; // [rsp+10h] [rbp-78h] BYREF
  int v6; // [rsp+18h] [rbp-70h]
  char v7; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 v8; // [rsp+78h] [rbp-10h]

  v8 = __readfsqword(0x28u);
  v6 = (int)&stru_A0000;
  v5 = &v7;
  v3 = 0;
  qword_2CAA5D0 = &v5;
  if ( *(qword_2CAA5C0 - 2) == 84 )
  {
    sub_74EA60(&v3);
    a2 = (_BYTE *)(elf_gnu_hash_chain + 1454);
    sub_750270(&v3, 8250);
    dword_2CAA5C8 |= 0x8000000u;
  }
  dword_2CA2EC0 = -1;
  v4 = sub_74D6F0(1, a2);
  sub_7506B0(&v3, &v4);
  return v3;
}

