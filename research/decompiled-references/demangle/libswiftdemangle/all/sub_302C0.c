__int64 __fastcall sub_302C0(std::string *a1, __int64 a2, int a3, char a4, char *a5, size_t a6)
{
  __int16 v6; // ax

  v6 = *(_WORD *)(a2 + 16);
  if ( v6 == 209 )
    return sub_2F810(a1, a2, a3, a4, 1, 0, a5, a6, -1, "subscript", 9u);
  if ( v6 != 243 )
    sub_23620("Not an abstract storage node");
  return sub_2F810(a1, a2, a3, a4, 1, 1, a5, a6, -1, "", 0);
}
