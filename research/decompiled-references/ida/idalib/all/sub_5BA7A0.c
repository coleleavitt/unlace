__int64 __fastcall sub_5BA7A0(__m128i *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 *v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // r13
  unsigned __int64 *v10; // rax
  unsigned __int64 v11; // rdx

  if ( !a2 )
    return 0;
  if ( (get_aflags(a3) & 2) != 0 )
    return 0;
  v7 = sub_5B9070(a1, a2, a3);
  v8 = 0;
  if ( v7 )
    v8 = v7[1];
  if ( a4 == v8 )
    return 0;
  v9 = a4 - v8;
  v10 = sub_5B9070(a1, a2, a3);
  if ( v10 && a3 == *v10 )
  {
    v11 = v10[1];
    if ( v10 == *(unsigned __int64 **)(a2 + 72) )
      v9 += v11;
    else
      v9 = v9 + v11 - *(v10 - 1);
  }
  return sub_5BA260(a1, a2, a3, v9);
}
