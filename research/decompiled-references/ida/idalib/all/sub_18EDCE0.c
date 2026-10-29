__int64 __fastcall sub_18EDCE0(__int64 a1, char a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v8; // r9
  __int64 result; // rax
  unsigned __int64 *v10; // [rsp+8h] [rbp-40h] BYREF

  sub_1E5F010(a4, &v10);
  result = 1;
  if ( v10 )
    return sub_18ED660(a1, *v10, a5, a6, 3, v8, a2);
  return result;
}
