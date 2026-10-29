bool __fastcall sub_8FE170(__int64 a1)
{
  char v2[4104]; // [rsp+0h] [rbp-1018h] BYREF
  unsigned __int64 v3; // [rsp+1008h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  qstrncpy(v2, a1, 4096);
  strrpl(v2, 92, 47);
  return (unsigned int)sub_8FD3E0(v2) == 0;
}
