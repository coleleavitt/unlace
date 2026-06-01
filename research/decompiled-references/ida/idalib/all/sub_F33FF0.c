__int64 __fastcall sub_F33FF0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v7; // rbp
  size_t v8; // rax
  __int64 v9; // rax

  result = *a2 | (*a2 >> 1);
  if ( (result & 1) == 0 )
  {
    result = (__int64)sub_7052B0(a2, (__int64)(a2 - 12), *a2, a4, a5, a6);
    v7 = result;
    if ( result )
    {
      v8 = j__strlen(" prev ");
      v9 = sub_9954E0(a1, " prev ", v8);
      return sub_227B9B0(v9, v7);
    }
  }
  return result;
}
