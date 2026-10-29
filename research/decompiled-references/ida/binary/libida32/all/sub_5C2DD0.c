__int64 __fastcall sub_5C2DD0(__int64 a1, int a2)
{
  int vars0; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]
  __int128 vars10; // [rsp+10h] [rbp+10h]
  __int64 vars20; // [rsp+20h] [rbp+20h]
  __int128 vars28; // [rsp+28h] [rbp+28h]
  int vars38; // [rsp+38h] [rbp+38h]
  __int16 vars3C; // [rsp+3Ch] [rbp+3Ch]
  unsigned __int64 vars48; // [rsp+48h] [rbp+48h]

  vars48 = __readfsqword(0x28u);
  vars0 = a2;
  vars8 = 0;
  vars20 = 0;
  vars38 = 0;
  vars3C = 0;
  vars10 = 0;
  vars28 = 0;
  sub_5C2AF0((char **)(a1 + 48), &vars0);
  return (unsigned int)*(_QWORD *)(a1 + 56) - 1;
}

