bool __fastcall sub_8DA430(__int64 a1)
{
  char v2[4104]; // [rsp+0h] [rbp-1018h] BYREF
  unsigned __int64 v3; // [rsp+1008h] [rbp-10h]

  v3 = __readfsqword(0x28u);
  qstrncpy(v2, a1, 4096);
  strrpl();
  return (unsigned int)sub_8D96A0(v2) == 0;
}

