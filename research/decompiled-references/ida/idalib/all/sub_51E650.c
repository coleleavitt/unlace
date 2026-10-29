unsigned __int64 __fastcall sub_51E650(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v6; // rbx
  unsigned __int64 result; // rax

  v6 = *(__int64 **)(a1 + 1768);
  result = sub_51E300(v6 + 2);
  v6[10] = a2;
  v6[11] = a3;
  v6[12] = a4;
  return result;
}
