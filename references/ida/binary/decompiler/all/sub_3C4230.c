unsigned __int64 __fastcall sub_3C4230(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v5; // [rsp+8h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 40);
  v5 = __readfsqword(0x28u);
  v4 = a2;
  switch_dbctx();
  if ( !(unsigned __int8)sub_2B3050(a2) )
    sub_3C3470(a2);
  sub_1774C0(v2 + 152, &v4);
  return v5 - __readfsqword(0x28u);
}
