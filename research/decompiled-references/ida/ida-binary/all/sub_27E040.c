__int64 __fastcall sub_27E040(__int64 a1, __int64 a2)
{
  char v2; // al
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  int v6; // r9d
  int v7; // edx
  __int64 result; // rax
  __int64 v9[3]; // [rsp+0h] [rbp-18h] BYREF

  v9[1] = __readfsqword(0x28u);
  v2 = sub_192350();
  v7 = sub_507F10(1019, (unsigned int)v9, v3, v4, v5, v6, v2);
  result = 1;
  if ( v7 )
    return (unsigned __int8)sub_192AA0(a2, v9[0], -1, 1u);
  return result;
}
