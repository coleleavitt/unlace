unsigned __int64 __fastcall sub_2B7BB0(__int64 a1, __int64 *a2)
{
  __int64 v3; // [rsp+0h] [rbp-38h] BYREF
  __int64 v4; // [rsp+8h] [rbp-30h]
  unsigned __int64 v5; // [rsp+18h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  sub_7D4C0((__int64)&v3, "Address");
  sub_2B7A80(a2, (unsigned __int64)&v3);
  if ( v3 )
  {
    v4 = 0;
    qfree(v3);
  }
  sub_7D4C0((__int64)&v3, "Op");
  sub_2B7A80(a2, (unsigned __int64)&v3);
  if ( v3 )
  {
    v4 = 0;
    qfree(v3);
  }
  sub_7D4C0((__int64)&v3, "Collapsed");
  sub_2B7A80(a2, (unsigned __int64)&v3);
  if ( v3 )
  {
    v4 = 0;
    qfree(v3);
  }
  return v5 - __readfsqword(0x28u);
}
