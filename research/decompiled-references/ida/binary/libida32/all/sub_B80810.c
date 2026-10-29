unsigned __int64 __fastcall sub_B80810(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // [rsp+0h] [rbp-10h] BYREF

  v1 = *(_QWORD *)(a1 + 48);
  result = 0;
  if ( (((unsigned __int8)v1 | (unsigned __int8)(v1 >> 1)) & 1) == 0 )
  {
    v3 = v1 & 0xFFFFFFFFFFFFFFFELL;
    v4 = v1 & 0xFFFFFFFFFFFFFFFCLL;
    if ( v4 )
    {
      return v4;
    }
    else
    {
      v5 = v3;
      return sub_B57E30(&v5);
    }
  }
  return result;
}

