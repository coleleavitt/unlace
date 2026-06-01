unsigned __int64 __fastcall sub_F33EF0(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rbx
  size_t v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7[4]; // [rsp+0h] [rbp-20h] BYREF

  result = *a2;
  if ( (((unsigned __int8)*a2 | (unsigned __int8)((__int64)*a2 >> 1)) & 1) == 0 )
  {
    v3 = result & 0xFFFFFFFFFFFFFFFELL;
    result &= 0xFFFFFFFFFFFFFFFCLL;
    if ( !result )
    {
      v7[0] = v3;
      result = sub_B7BB70(v7);
    }
    v4 = result;
    if ( result )
    {
      v5 = j__strlen(" prev ");
      v6 = sub_9954E0(a1, " prev ", v5);
      return sub_227B9B0(v6, v4);
    }
  }
  return result;
}
