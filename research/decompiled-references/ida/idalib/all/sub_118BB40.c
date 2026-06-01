__int64 __fastcall sub_118BB40(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v9; // rbx
  const char *v10; // rsi
  void *v11; // [rsp+0h] [rbp-A8h] BYREF
  signed __int64 v12; // [rsp+8h] [rbp-A0h]
  __int64 v13; // [rsp+10h] [rbp-98h] BYREF
  unsigned __int8 *v14[17]; // [rsp+20h] [rbp-88h] BYREF

  result = sub_10DE660(a3, 0x7D5u, 0x7D4u);
  if ( result )
  {
    v9 = result;
    if ( !(unsigned __int8)sub_21B9810(result, 2005) )
      return sub_21B5A40(v9, a3, a4);
    if ( a5 <= 2 )
    {
      sub_FC70B0((__int64)v14, *a1, 0, 324);
      sub_21B5FF0(&v11, v9, a3);
      sub_AEC220(v14, v11, v12);
      v10 = "DWARFv3 or greater";
    }
    else if ( (unsigned __int8)sub_22B7EA0(a2) )
    {
      if ( *(_DWORD *)(a2 + 52) == 3 )
        return sub_21B5A40(v9, a3, a4);
      sub_FC70B0((__int64)v14, *a1, 0, 324);
      sub_21B5FF0(&v11, v9, a3);
      sub_AEC220(v14, v11, v12);
      v10 = "ELF platforms";
    }
    else
    {
      sub_FC70B0((__int64)v14, *a1, 0, 324);
      sub_21B5FF0(&v11, v9, a3);
      sub_AEC220(v14, v11, v12);
      v10 = "64 bit architecture";
    }
    sub_1188FA0(v14, (__int64)v10);
    if ( v11 != &v13 )
      operator delete(v11);
    sub_AEA040((__int64)v14);
    return sub_21B5A40(v9, a3, a4);
  }
  return result;
}
