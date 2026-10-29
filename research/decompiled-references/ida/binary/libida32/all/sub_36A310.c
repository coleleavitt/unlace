__int64 __fastcall sub_36A310(int *a1, __int64 a2)
{
  int v3; // eax
  __int64 v5; // rsi
  int v6; // eax
  __int64 v7; // rdi
  _DWORD v9[6]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v3 = a1[26];
  v10 = __readfsqword(0x28u);
  v5 = (unsigned int)a1[10];
  v9[0] = v3;
  v9[1] = a1[34];
  v9[2] = a1[42];
  v6 = a1[18];
  v7 = (unsigned int)a1[2];
  v9[3] = v6;
  clr_op_type(v7, v5);
  *(_DWORD *)(a2 + 8) = (unsigned __int8)op_offset_ex(a1[2], a1[10], (int)v9);
  return 0;
}

