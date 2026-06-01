__int64 *__fastcall sub_227C220(__int64 *a1, int a2, unsigned __int8 a3, unsigned __int8 a4)
{
  char *v8; // rbp
  size_t v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rax

  if ( !*((_BYTE *)a1 + 40)
    || (unsigned __int8)sub_2290CF0() && !(*(unsigned __int8 (__fastcall **)(__int64 *))(*a1 + 48))(a1) )
  {
    return a1;
  }
  if ( (unsigned __int8)sub_2290CF0() )
  {
    v10 = a1[4];
    v11 = a1[2];
    if ( v10 != v11 )
    {
      v12 = *a1;
      a1[4] = v11;
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v12 + 72))(a1, v11, v10 - v11);
    }
  }
  v8 = (char *)(a2 == 16 ? sub_2290D40(a4) : sub_2290D00((unsigned int)(char)a2, a3, a4));
  if ( !v8 )
    return a1;
  v9 = strlen(v8);
  sub_227BF10(a1, (unsigned __int8 *)v8, v9);
  return a1;
}
