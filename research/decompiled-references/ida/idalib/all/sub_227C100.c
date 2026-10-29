__int64 *__fastcall sub_227C100(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rsi
  __int64 v4; // rax
  const char *v5; // rax
  unsigned __int8 *v6; // rbp
  size_t v7; // rax

  if ( !*((_BYTE *)a1 + 40)
    || (unsigned __int8)sub_2290CF0() && !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 48))(a1) )
  {
    return a1;
  }
  if ( (unsigned __int8)sub_2290CF0() )
  {
    v2 = a1[4];
    v3 = a1[2];
    if ( v2 != v3 )
    {
      v4 = *a1;
      a1[4] = v3;
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v4 + 72))(a1, v3, v2 - v3);
    }
  }
  v5 = (const char *)sub_2290D50();
  v6 = (unsigned __int8 *)v5;
  if ( !v5 )
    return a1;
  v7 = strlen(v5);
  sub_227BF10(a1, v6, v7);
  return a1;
}
