__int64 __fastcall sub_6A6710(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        const char *a4,
        __int64 a5,
        char a6,
        double a7,
        double a8)
{
  int v12; // edx
  __int64 result; // rax
  char *v14; // [rsp+8h] [rbp-50h] BYREF
  char *v15[9]; // [rsp+10h] [rbp-48h] BYREF

  v15[1] = (char *)__readfsqword(0x28u);
  v12 = sub_632230((__int64)a1, a2, a4, 3, (const char **)&v14, (unsigned __int64)v15, 0, 0, 0, nullptr);
  result = 0;
  if ( v12 == 1 )
    return sub_6A6250(a1, a2, a3, a4, v14, v15[0], a7, a8, a5, a6);
  return result;
}

