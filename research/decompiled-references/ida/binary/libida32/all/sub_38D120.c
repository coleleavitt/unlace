__int64 __fastcall sub_38D120(__int64 a1, __int64 a2, __int64 a3)
{
  char refinfo; // dl
  __int64 result; // rax
  int v5[2]; // [rsp+0h] [rbp-80h] BYREF
  void *ptr[4]; // [rsp+10h] [rbp-70h] BYREF
  void *v7[10]; // [rsp+30h] [rbp-50h] BYREF

  v7[3] = (void *)__readfsqword(0x28u);
  refinfo = get_refinfo(v5, a2, a3);
  result = 0;
  if ( refinfo )
  {
    sub_38CFF0((__int64)v7, v5[1], "BADADDR");
    sub_38CFF0((__int64)ptr, v5[0], "BADADDR");
    sub_38C9E0();
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
    }
    if ( v7[0] )
    {
      v7[1] = nullptr;
      qfree(v7[0]);
    }
    return 29;
  }
  return result;
}

