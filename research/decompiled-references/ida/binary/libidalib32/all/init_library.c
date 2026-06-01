__int64 __fastcall init_library(int a1, __int64 a2)
{
  int v3; // [rsp+Ch] [rbp-1Ch] BYREF
  __int64 v4[3]; // [rsp+10h] [rbp-18h] BYREF

  v4[1] = __readfsqword(0x28u);
  v4[0] = 0;
  return sub_1726F0(a1, a2, &v3, v4);
}

