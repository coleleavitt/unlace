unsigned __int64 __fastcall sub_6887B0(_QWORD *a1, int a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v8; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-30h]

  v2 = a2;
  v3 = *a1;
  v9 = __readfsqword(0x28u);
  v4 = (int)(sub_7BE710(a1 + 344, v3, -1, 65) - 1);
  v5 = sub_7BE710(a1 + 344, *a1, v4, 65);
  v6 = *a1;
  v8 = v5 + v2;
  sub_7BE7C0(a1 + 344, v6, v4, &v8, 8, 65);
  return v9 - __readfsqword(0x28u);
}
