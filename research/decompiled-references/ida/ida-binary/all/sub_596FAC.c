__int64 __fastcall sub_596FAC(__int64 a1)
{
  int v2; // [rsp+1Ch] [rbp-4h]

  v2 = sub_597198(a1, 0xFFFFFFFFLL);
  if ( v2 == 2 )
    return sub_597078(a1, "Microdump skipped (uninteresting)");
  sub_597078(a1, "-----BEGIN BREAKPAD MICRODUMP-----");
  sub_597392(a1);
  sub_59751A(a1);
  sub_5973FA(a1);
  sub_597462(a1);
  sub_597702(a1);
  if ( !v2 )
    sub_59776A(a1);
  sub_597914(a1);
  sub_597E46(a1);
  return sub_597078(a1, "-----END BREAKPAD MICRODUMP-----");
}
