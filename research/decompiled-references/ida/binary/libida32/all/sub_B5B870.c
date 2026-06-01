unsigned __int64 __fastcall sub_B5B870(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 72);
  result = 0;
  if ( (((unsigned __int8)v1 | (unsigned __int8)(v1 >> 1)) & 1) == 0 )
    return v1 & 0xFFFFFFFFFFFFFFFCLL;
  return result;
}

