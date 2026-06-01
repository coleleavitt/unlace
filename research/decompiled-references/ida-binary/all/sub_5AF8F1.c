_BOOL8 __fastcall sub_5AF8F1(char *a1, unsigned __int64 a2)
{
  int v3; // [rsp+1Ch] [rbp-4h]

  v3 = byte_75C540[(unsigned __int8)*a1] + 1;
  return a2 >= (unsigned __int64)&a1[v3] && sub_5AF75F(a1, v3);
}
