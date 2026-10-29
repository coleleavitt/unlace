unsigned __int64 __fastcall sub_5B93D0(__m128i *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 *v4; // rax
  unsigned __int64 v5; // rdx

  v4 = sub_5B9070(a1, a2, a3);
  v5 = 0;
  if ( v4 && *v4 == a3 && (v5 = v4[1], *(unsigned __int64 **)(a2 + 72) != v4) )
    return v5 - *(v4 - 1);
  else
    return v5;
}
